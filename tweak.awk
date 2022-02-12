BEGIN {
    api = 0;
    in_content = 0;
    in_struct = 0;
}

# skip empty lines
/^[ \t]*$/ {
    next;
}

!in_content && /^#/ {
    # The expanded file contains the line like
    #
    #    # 289 "/path/to/R-4.2.0/include/foo.h"
    # 
    # to indicate the source of the definition. We want to include
    # an item when it comes from R header file, not from the C
    # standard library.
    if ($2 ~ /[0-9]+/) {
        if ($0 ~ /R-([0-9]\.[0-9]\.[0-9]|devel)/) {
            api = 1;
            printf "\n\n%s\n",$0;
        } else {
            api = 0;
        }
    # print #pragma line as it is
    } else if ($1 == "#pragma") {
        print $0;
    } else {
        printf "Unknown token %s",$0 > "/dev/stderr";
        exit 1;
    }

    next;
}

api && !in_content && !/^#/ {
    in_content = 1;
    if ($0 ~ /struct.*{/) {
        in_struct = 1;
    }
}

in_content && !/^#/ {
    if (in_struct && $0 ~ /}/) {
        in_struct = 0;
    }

    # if it's end of the line, print it with a newline
    if (!in_struct && $0 ~ /;/) {
        # trim the leading whitespaces
        gsub(/^ +/, "", $0);
        in_content = 0;
        printf "%s\n",$0;
    } else {
        # trim the leading and trailing whitespaces
        gsub(/^ +| +$/, "", $0);
        # without linebreaks
        printf "%s ",$0;
    }
}
