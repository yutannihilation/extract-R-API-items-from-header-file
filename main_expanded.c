# 1 "main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "main.c"
# 1 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stddef.h" 1 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stddef.h" 1 3 4






# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/crtdefs.h" 1 3 4
# 10 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/crtdefs.h" 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 1 3 4
# 10 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 1 3 4
# 10 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw_mac.h" 1 3 4
# 98 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw_mac.h" 3 4
             
# 107 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw_mac.h" 3 4
             
# 11 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 2 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw_secapi.h" 1 3 4
# 12 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 2 3 4
# 283 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/vadefs.h" 1 3 4
# 9 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/vadefs.h" 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 1 3 4
# 617 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3 4
# 618 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 2 3 4
# 10 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/vadefs.h" 2 3 4




#pragma pack(push,_CRT_PACKING)
# 24 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/vadefs.h" 3 4
  
# 24 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/vadefs.h" 3 4
 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 103 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/vadefs.h" 3 4
#pragma pack(pop)
# 284 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 2 3 4
# 580 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw.h" 3 4
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{

  __asm__ __volatile__("int {$}3":);







}




const char *__mingw_get_crt_info (void);
# 11 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 2 3 4




#pragma pack(push,_CRT_PACKING)
# 40 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
__extension__ typedef unsigned long long size_t;
# 50 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
__extension__ typedef long long ssize_t;






typedef size_t rsize_t;
# 67 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
__extension__ typedef long long intptr_t;
# 80 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
__extension__ typedef unsigned long long uintptr_t;
# 93 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
__extension__ typedef long long ptrdiff_t;
# 103 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;





typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;
# 143 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
typedef __time64_t time_t;
# 435 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {

  const unsigned short *_locale_pctype;
  int _locale_mb_cur_max;
  unsigned int _locale_lc_codepage;
# 487 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
} threadlocinfo;
# 506 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt.h" 3 4
#pragma pack(pop)
# 11 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/crtdefs.h" 2 3 4
# 8 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stddef.h" 2 3 4
# 18 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stddef.h" 3 4
  __attribute__ ((__dllimport__)) extern int *__attribute__((__cdecl__)) _errno(void);

  errno_t __attribute__((__cdecl__)) _set_errno(int _Value);
  errno_t __attribute__((__cdecl__)) _get_errno(int *_Value);


  __attribute__ ((__dllimport__)) extern unsigned long __attribute__((__cdecl__)) __threadid(void);

  __attribute__ ((__dllimport__)) extern uintptr_t __attribute__((__cdecl__)) __threadhandle(void);
# 424 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 2 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stddef.h" 2 3 4
# 2 "main.c" 2






# 7 "main.c"
typedef ptrdiff_t R_xlen_t_rust;







# 1 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 1
# 39 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 1 3
# 9 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/corecrt_stdio_config.h" 1 3
# 10 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 2 3

#pragma pack(push,_CRT_PACKING)

       

       

       

       
# 33 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  
# 33 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
 struct _iobuf {

    void *_Placeholder;
# 46 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  };
  typedef struct _iobuf FILE;
# 91 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw_off_t.h" 1 3




  typedef long _off_t;

  typedef long off32_t;





  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 26 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw_off_t.h" 3
typedef off32_t off_t;
# 92 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 2 3

__attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __acrt_iob_func(unsigned index);


  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __iob_func(void);
# 115 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  __extension__ typedef long long fpos_t;
# 156 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vscanf(const char * __restrict__ Format, va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);

extern
  __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
                               va_list _ArgList);
extern
  __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
extern
  __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_asprintf(char ** __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_vasprintf(char ** __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);

extern
  __attribute__((__format__ (ms_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));


  int __attribute__((__cdecl__)) __stdio_common_vsprintf(unsigned long long options, char *str, size_t len, const char *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vfprintf(unsigned long long options, FILE *file, const char *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vsscanf(unsigned long long options, const char *input, size_t length, const char *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vfscanf(unsigned long long options, FILE *file, const char *format, _locale_t locale, va_list valist);
# 492 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"

  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) printf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;

  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) vprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;

 
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
 
  __attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) scanf(const char * __restrict__ _Format,...);
 
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);







  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int vfscanf (FILE *__stream, const char *__format, __builtin_va_list __local_argv);

  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int vsscanf (const char * __restrict__ __source, const char * __restrict__ __format, __builtin_va_list __local_argv);
  __attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int vscanf(const char *__format, __builtin_va_list __local_argv);


#pragma GCC diagnostic pop
# 603 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void __attribute__((__cdecl__)) clearerr(FILE *_File);
  int __attribute__((__cdecl__)) fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fdopen(int _FileHandle,const char *_Mode);

  int __attribute__((__cdecl__)) feof(FILE *_File);
  int __attribute__((__cdecl__)) ferror(FILE *_File);
  int __attribute__((__cdecl__)) fflush(FILE *_File);
  int __attribute__((__cdecl__)) fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fgetchar(void);
  int __attribute__((__cdecl__)) fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  int __attribute__((__cdecl__)) fgetpos64(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char *__attribute__((__cdecl__)) fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flushall(void);
  FILE *__attribute__((__cdecl__)) fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int __attribute__((__cdecl__)) fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fputchar(int _Ch);
  int __attribute__((__cdecl__)) fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __attribute__((__cdecl__)) fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__attribute__((__cdecl__)) freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int __attribute__((__cdecl__)) fsetpos(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fsetpos64(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fseek(FILE *_File,long _Offset,int _Origin);
  long __attribute__((__cdecl__)) ftell(FILE *_File);



  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _ftelli64(FILE *_File);

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int fseeko(FILE *_File, _off_t _Offset, int _Origin) {
    return fseek(_File, _Offset, _Origin);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int fseeko64(FILE *_File, _off64_t _Offset, int _Origin) {
    return _fseeki64(_File, _Offset, _Origin);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) _off_t ftello(FILE *_File) {
    return ftell(_File);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) _off64_t ftello64(FILE *_File) {
    return _ftelli64(_File);
  }
# 683 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  size_t __attribute__((__cdecl__)) fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) getc(FILE *_File);
  int __attribute__((__cdecl__)) getchar(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getmaxstdio(void);
  char *__attribute__((__cdecl__)) gets(char *_Buffer) ;
  int __attribute__((__cdecl__)) _getw(FILE *_File);


  void __attribute__((__cdecl__)) perror(const char *_ErrMsg);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _popen(const char *_Command,const char *_Mode);





  int __attribute__((__cdecl__)) putc(int _Ch,FILE *_File);
  int __attribute__((__cdecl__)) putchar(int _Ch);
  int __attribute__((__cdecl__)) puts(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putw(int _Word,FILE *_File);


  int __attribute__((__cdecl__)) remove(const char *_Filename);
  int __attribute__((__cdecl__)) rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _unlink(const char *_Filename);

  int __attribute__((__cdecl__)) unlink(const char *_Filename) ;


  void __attribute__((__cdecl__)) rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _rmtmp(void);
  void __attribute__((__cdecl__)) setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _get_output_format(void);
  int __attribute__((__cdecl__)) setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) _scprintf(const char * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vsprintf(0x0002ULL, ((void *)0), 0, _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vsscanf(0, _Src, _MaxCount, _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }




  FILE *__attribute__((__cdecl__)) tmpfile(void) ;
  char *__attribute__((__cdecl__)) tmpnam(char *_Buffer);
  int __attribute__((__cdecl__)) ungetc(int _Ch,FILE *_File);


  __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = _vsnprintf(_Dest, _Count, _Format, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
# 815 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"

  __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int vsnprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, va_list __local_argv);

  __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...);

#pragma GCC diagnostic pop
# 924 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf(const char * __restrict__ _Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _get_printf_count_output(void);




                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswscanf (const wchar_t * __restrict__ _Str,const wchar_t * __restrict__ Format,va_list argp);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wscanf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwscanf(const wchar_t * __restrict__ Format, va_list argp);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwscanf (FILE * __restrict__ fp, const wchar_t * __restrict__ Format,va_list argp);

                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                      __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wprintf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);

                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
                                                    __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_wscanf(const wchar_t * __restrict__ _Format,...);
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);

                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_wprintf(const wchar_t * __restrict__ _Format,...);
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                    __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);


  int __attribute__((__cdecl__)) __stdio_common_vswprintf(unsigned long long options, wchar_t *str, size_t len, const wchar_t *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vfwprintf(unsigned long long options, FILE *file, const wchar_t *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vswscanf(unsigned long long options, const wchar_t *input, size_t length, const wchar_t *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vfwscanf(unsigned long long options, FILE *file, const wchar_t *format, _locale_t locale, va_list valist);
# 1129 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwscanf(0x0002ULL, _File, _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswscanf(0x0002ULL, _Src, (size_t)-1, _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) wscanf(const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwscanf(0x0002ULL, (__acrt_iob_func(0)), _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (2)))
  int vfwscanf (FILE *__stream, const wchar_t *__format, va_list __local_argv)
  {
    return __stdio_common_vfwscanf(0x0002ULL, __stream, __format, ((void *)0), __local_argv);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (2)))
  int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, va_list __local_argv)
  {
    return __stdio_common_vswscanf(0x0002ULL, __source, (size_t)-1, __format, ((void *)0), __local_argv);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (1)))
  int vwscanf(const wchar_t *__format, va_list __local_argv)
  {
    return __stdio_common_vfwscanf(0x0002ULL, (__acrt_iob_func(0)), __format, ((void *)0), __local_argv);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwprintf(0x0004ULL, _File, _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) wprintf(const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwprintf(0x0004ULL, (__acrt_iob_func(1)), _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList)
  {
    return __stdio_common_vfwprintf(0x0004ULL, _File, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList)
  {
    return __stdio_common_vfwprintf(0x0004ULL, (__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
  }
# 1255 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __attribute__((__cdecl__)) fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwchar(void);
  wint_t __attribute__((__cdecl__)) fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) getwc(FILE *_File);
  wint_t __attribute__((__cdecl__)) getwchar(void);
  wint_t __attribute__((__cdecl__)) putwc(wchar_t _Ch,FILE *_File);
  wint_t __attribute__((__cdecl__)) putwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__attribute__((__cdecl__)) fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putws(const wchar_t *_Str);


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) _scwprintf(const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswprintf(0x0004ULL | 0x0002ULL, ((void *)0), 0, _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswprintf(0x0004ULL | 0x0001ULL, _Dest, _Count, _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  int __attribute__((__cdecl__)) _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, format);
    __ret = __stdio_common_vswprintf(0x0004ULL | 0x0002ULL, s, n, format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) vsnwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, va_list arg)
  {
    int __ret = __stdio_common_vswprintf(0x0004ULL, s, n, format, ((void *)0), arg);
    return __ret < 0 ? -1 : __ret;
  }


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswprintf(0x0004ULL, _Dest, (size_t)-1, _Format, ((void *)0), __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args)
  {
    return __stdio_common_vswprintf(0x0004ULL, _Dest, (size_t)-1, _Format, ((void *)0), _Args);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) _vscwprintf(const wchar_t * __restrict__ _Format, va_list _ArgList)
  {
      int _Result = __stdio_common_vswprintf(0x0002ULL, ((void *)0), 0, _Format, ((void *)0), _ArgList);
      return _Result < 0 ? -1 : _Result;
  }
# 1372 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/swprintf.inl" 1 3
# 25 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/swprintf.inl" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int vswprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return vsnwprintf( __stream, __count, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int swprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv;

  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __count, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}
# 1373 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 2 3
# 1382 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtmpnam(wchar_t *_Buffer);

  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 1427 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fgetc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fputc_nolock(int _Char, FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putc_nolock(int _Char, FILE *_File);
# 1442 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _unlock_file(FILE *_File);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ungetc_nolock(int _Ch,FILE *_File);






  char *__attribute__((__cdecl__)) tempnam(const char *_Directory,const char *_FilePrefix) ;
  int __attribute__((__cdecl__)) fcloseall(void) ;
  FILE *__attribute__((__cdecl__)) fdopen(int _FileHandle,const char *_Format) ;
  int __attribute__((__cdecl__)) fgetchar(void) ;
  int __attribute__((__cdecl__)) fileno(FILE *_File) ;
  int __attribute__((__cdecl__)) flushall(void) ;
  int __attribute__((__cdecl__)) fputchar(int _Ch) ;
  int __attribute__((__cdecl__)) getw(FILE *_File) ;
  int __attribute__((__cdecl__)) putw(int _Ch,FILE *_File) ;
  int __attribute__((__cdecl__)) rmtmp(void) ;
# 1486 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_wide_utf8 (const wchar_t * const wptr, char **mbptr, size_t * buflen);
# 1500 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_utf8_wide (const char *const mbptr, wchar_t ** wptr, size_t * buflen);
# 1509 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
void __attribute__((__cdecl__)) __mingw_str_free(void *ptr);






  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
# 1540 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);







       
       
       
       

#pragma pack(pop)

# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 1 3
# 9 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 1 3
# 10 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 2 3
# 29 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) clearerr_s(FILE *_File);

  size_t __attribute__((__cdecl__)) fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);


  int __attribute__((__cdecl__)) __stdio_common_vsprintf_s(unsigned long long _Options, char *_Str, size_t _Len, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vsprintf_p(unsigned long long _Options, char *_Str, size_t _Len, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vsnprintf_s(unsigned long long _Options, char *_Str, size_t _Len, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vfprintf_s(unsigned long long _Options, FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vfprintf_p(unsigned long long _Options, FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList);

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfscanf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfscanf(0x0001ULL, _File, _Format, _Locale, _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fscanf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) fscanf_s(FILE *_File, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfscanf_s_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scanf_s_l(const char *_Format, _locale_t _Locale ,...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) scanf_s(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfscanf_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfscanf(0, _File, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fscanf_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scanf_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsscanf_s_l(const char *_Src, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsscanf(0x0001ULL, _Src, (size_t)-1, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vsscanf_s(const char *_Src, const char *_Format, va_list _ArgList)
  {
    return _vsscanf_s_l(_Src, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sscanf_s_l(const char *_Src, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsscanf_s_l(_Src, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) sscanf_s(const char *_Src, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsscanf_s_l(_Src, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsscanf_l(const char *_Src, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsscanf(0, _Src, (size_t)-1, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sscanf_l(const char *_Src, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsscanf_l(_Src, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snscanf_s_l(const char *_Src, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = __stdio_common_vsscanf(0x0001ULL, _Src, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snscanf_s(const char *_Src, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = __stdio_common_vsscanf(0x0001ULL, _Src, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snscanf_l(const char *_Src, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = __stdio_common_vsscanf(0, _Src, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfprintf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfprintf_s(0, _File, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vfprintf_s(FILE *_File, const char *_Format, va_list _ArgList)
  {
    return _vfprintf_s_l(_File, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vprintf_s_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vprintf_s(const char *_Format, va_list _ArgList)
  {
    return _vfprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fprintf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _printf_s_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) fprintf_s(FILE *_File, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_s_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) printf_s(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_c_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf(0, _DstBuf, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_c(char *_DstBuf, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsnprintf_c_l(_DstBuf, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_c_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnprintf_c_l(_DstBuf, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_c(char *_DstBuf, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnprintf_c_l(_DstBuf, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_s_l(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsnprintf_s(0, _DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vsnprintf_s(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_s(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_s_l(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_s(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsprintf_s_l(char *_DstBuf, size_t _DstSize, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf_s(0, _DstBuf, _DstSize, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vsprintf_s(char *_DstBuf, size_t _Size, const char *_Format, va_list _ArgList)
  {
    return _vsprintf_s_l(_DstBuf, _Size, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sprintf_s_l(char *_DstBuf, size_t _DstSize, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsprintf_s_l(_DstBuf, _DstSize, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) sprintf_s(char *_DstBuf, size_t _DstSize, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsprintf_s_l(_DstBuf, _DstSize, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfprintf_p_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfprintf_p(0, _File, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfprintf_p(FILE *_File, const char *_Format, va_list _ArgList)
  {
    return _vfprintf_p_l(_File, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vprintf_p_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vprintf_p(const char *_Format, va_list _ArgList)
  {
    return _vfprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fprintf_p_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = __stdio_common_vfprintf_p(0, _File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fprintf_p(FILE *_File, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_p_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _printf_p_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _printf_p(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsprintf_p_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf_p(0, _DstBuf, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsprintf_p(char *_Dst, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsprintf_p_l(_Dst, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sprintf_p_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsprintf_p_l(_DstBuf, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sprintf_p(char *_Dst, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsprintf_p_l(_Dst, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vscprintf_p_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf_p(0x0002ULL, ((void *)0), 0, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vscprintf_p(const char *_Format, va_list _ArgList)
  {
    return _vscprintf_p_l(_Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scprintf_p_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vscprintf_p_l(_Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scprintf_p(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vscprintf_p_l(_Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfprintf_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfprintf(0, _File, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vprintf_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fprintf_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _printf_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf(0x0001ULL, _DstBuf, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnprintf_l(_DstBuf, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsprintf_l(char *_DstBuf, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vsnprintf_l(_DstBuf, (size_t)-1, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sprintf_l(char *_DstBuf, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsprintf_l(_DstBuf, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vscprintf_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf(0x0002ULL, ((void *)0), 0, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scprintf_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vscprintf_l(_Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
# 562 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
 
 
 
 
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) fopen_s(FILE **_File,const char *_Filename,const char *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) freopen_s(FILE** _File, const char *_Filename, const char *_Mode, FILE *_Stream);

  __attribute__ ((__dllimport__)) char* __attribute__((__cdecl__)) gets_s(char*,rsize_t);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) tmpnam_s(char*,rsize_t);
 




  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws_s(wchar_t *_Str,size_t _SizeInWords);
 


  int __attribute__((__cdecl__)) __stdio_common_vswprintf_s(unsigned long long _Options, wchar_t *_Str, size_t _Len, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vsnwprintf_s(unsigned long long _Options, wchar_t *_Str, size_t _Len, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vfwprintf_s(unsigned long long _Options, FILE *_File, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfwscanf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfwscanf(0x0002ULL | 0x0001ULL, _File, _Format, _Locale, _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fwscanf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwscanf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) fwscanf_s(FILE *_File, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwscanf_s_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _wscanf_s_l(const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) wscanf_s(const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vswscanf_s_l(const wchar_t *_Src, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vswscanf(0x0002ULL | 0x0001ULL, _Src, (size_t)-1, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _swscanf_s_l(const wchar_t *_Src, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vswscanf_s_l(_Src, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) swscanf_s(const wchar_t *_Src, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vswscanf_s_l(_Src, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnwscanf_s_l(const wchar_t *_Src, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vswscanf(0x0002ULL | 0x0001ULL, _Src, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snwscanf_s_l(const wchar_t *_Src, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnwscanf_s_l(_Src, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snwscanf_s(const wchar_t *_Src, size_t _MaxCount, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnwscanf_s_l(_Src, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfwprintf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfwprintf_s(0x0004ULL, _File, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vwprintf_s_l(const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vfwprintf_s(FILE *_File, const wchar_t *_Format, va_list _ArgList)
  {
    return _vfwprintf_s_l(_File, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vwprintf_s(const wchar_t *_Format, va_list _ArgList)
  {
    return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fwprintf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwprintf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _wprintf_s_l(const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) fwprintf_s(FILE *_File, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwprintf_s_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) wprintf_s(const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vswprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vswprintf_s(0x0004ULL, _DstBuf, _DstSize, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vswprintf_s(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, va_list _ArgList)
  {
    return _vswprintf_s_l(_DstBuf, _DstSize, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _swprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vswprintf_s_l(_DstBuf, _DstSize, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) swprintf_s(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vswprintf_s_l(_DstBuf, _DstSize, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnwprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsnwprintf_s(0x0004ULL, _DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnwprintf_s(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, va_list _ArgList)
  {
    return _vsnwprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snwprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnwprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snwprintf_s(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnwprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
# 818 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
 
 
 
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfreopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode,FILE *_OldFile);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wtmpnam_s(wchar_t *_DstBuf,size_t _SizeInWords);
 
# 868 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
# 1559 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdio.h" 2 3
# 40 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2
# 1 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include-fixed/limits.h" 1 3 4
# 34 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include-fixed/limits.h" 3 4
# 1 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include-fixed/syslimits.h" 1 3 4






# 1 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include-fixed/limits.h" 1 3 4
# 195 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include-fixed/limits.h" 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/limits.h" 1 3 4
# 196 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include-fixed/limits.h" 2 3 4
# 8 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include-fixed/syslimits.h" 2 3 4
# 35 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include-fixed/limits.h" 2 3 4
# 41 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2
# 1 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stddef.h" 1 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stddef.h" 1 3 4
# 2 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stddef.h" 2 3 4
# 42 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Arith.h" 1
# 36 "C:\\Program Files\\R\\R-devel/include/R_ext/Arith.h"
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/libextern.h" 1
# 37 "C:\\Program Files\\R\\R-devel/include/R_ext/Arith.h" 2




# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 1 3
# 10 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
       
# 11 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3




struct _exception;

#pragma pack(push,_CRT_PACKING)
# 119 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  typedef union __mingw_dbl_type_t {
    double x;
    unsigned long long val;
    __extension__ struct {
      unsigned int low, high;
    } lh;
  } __mingw_dbl_type_t;

  typedef union __mingw_flt_type_t {
    float x;
    unsigned int val;
  } __mingw_flt_type_t;

  typedef union __mingw_ldbl_type_t
  {
    long double x;
    __extension__ struct {
      unsigned int low, high;
      int sign_exponent : 16;
      int res1 : 16;
      int res0 : 32;
    } lh;
  } __mingw_ldbl_type_t;





  extern double const _HUGE;
# 163 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int (__attribute__((__cdecl__)) *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int (__attribute__((__cdecl__)) *)(struct _exception *));



  double __attribute__((__cdecl__)) sin(double _X);
  double __attribute__((__cdecl__)) cos(double _X);
  double __attribute__((__cdecl__)) tan(double _X);
  double __attribute__((__cdecl__)) sinh(double _X);
  double __attribute__((__cdecl__)) cosh(double _X);
  double __attribute__((__cdecl__)) tanh(double _X);
  double __attribute__((__cdecl__)) asin(double _X);
  double __attribute__((__cdecl__)) acos(double _X);
  double __attribute__((__cdecl__)) atan(double _X);
  double __attribute__((__cdecl__)) atan2(double _Y,double _X);
  double __attribute__((__cdecl__)) exp(double _X);
  double __attribute__((__cdecl__)) log(double _X);
  double __attribute__((__cdecl__)) log10(double _X);
  double __attribute__((__cdecl__)) pow(double _X,double _Y);
  double __attribute__((__cdecl__)) sqrt(double _X);
  double __attribute__((__cdecl__)) ceil(double _X);
  double __attribute__((__cdecl__)) floor(double _X);


  extern float __attribute__((__cdecl__)) fabsf (float x);
  extern long double __attribute__((__cdecl__)) fabsl (long double);
  extern double __attribute__((__cdecl__)) fabs (double _X);
# 238 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  double __attribute__((__cdecl__)) ldexp(double _X,int _Y);
  double __attribute__((__cdecl__)) frexp(double _X,int *_Y);
  double __attribute__((__cdecl__)) modf(double _X,double *_Y);
  double __attribute__((__cdecl__)) fmod(double _X,double _Y);

  void __attribute__((__cdecl__)) sincos (double __x, double *p_sin, double *p_cos);
  void __attribute__((__cdecl__)) sincosl (long double __x, long double *p_sin, long double *p_cos);
  void __attribute__((__cdecl__)) sincosf (float __x, float *p_sin, float *p_cos);



  int __attribute__((__cdecl__)) abs(int _X);
  long __attribute__((__cdecl__)) labs(long _X);



  double __attribute__((__cdecl__)) atof(const char *_String);
  double __attribute__((__cdecl__)) _atof_l(const char *_String,_locale_t _Locale);
# 265 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  struct _complex {
    double x;
    double y;
  };


  double __attribute__((__cdecl__)) _cabs(struct _complex _ComplexA);
  double __attribute__((__cdecl__)) _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _j0(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _j1(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _y0(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _y1(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _matherr (struct _exception *);
# 292 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _chgsign (double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _logb (double);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _nextafter (double, double);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _scalb (double, long);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _finite (double);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fpclass (double);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isnan (double);






__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) j0 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) j1 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) jn (int, double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) y0 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) y1 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) yn (int, double) ;

__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) chgsign (double);
# 322 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) finite (double);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) fpclass (double);
# 367 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
typedef float float_t;
typedef double double_t;
# 402 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  extern int __attribute__((__cdecl__)) __fpclassifyl (long double);
  extern int __attribute__((__cdecl__)) __fpclassifyf (float);
  extern int __attribute__((__cdecl__)) __fpclassify (double);
# 515 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  extern int __attribute__((__cdecl__)) __isnan (double);
  extern int __attribute__((__cdecl__)) __isnanf (float);
  extern int __attribute__((__cdecl__)) __isnanl (long double);
# 602 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  extern int __attribute__((__cdecl__)) __signbit (double);
  extern int __attribute__((__cdecl__)) __signbitf (float);
  extern int __attribute__((__cdecl__)) __signbitl (long double);
# 659 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  extern float __attribute__((__cdecl__)) sinf(float _X);
  extern long double __attribute__((__cdecl__)) sinl(long double);

  extern float __attribute__((__cdecl__)) cosf(float _X);
  extern long double __attribute__((__cdecl__)) cosl(long double);

  extern float __attribute__((__cdecl__)) tanf(float _X);
  extern long double __attribute__((__cdecl__)) tanl(long double);
  extern float __attribute__((__cdecl__)) asinf(float _X);
  extern long double __attribute__((__cdecl__)) asinl(long double);

  extern float __attribute__((__cdecl__)) acosf (float);
  extern long double __attribute__((__cdecl__)) acosl (long double);

  extern float __attribute__((__cdecl__)) atanf (float);
  extern long double __attribute__((__cdecl__)) atanl (long double);

  extern float __attribute__((__cdecl__)) atan2f (float, float);
  extern long double __attribute__((__cdecl__)) atan2l (long double, long double);


  extern float __attribute__((__cdecl__)) sinhf(float _X);



  extern long double __attribute__((__cdecl__)) sinhl(long double);

  extern float __attribute__((__cdecl__)) coshf(float _X);



  extern long double __attribute__((__cdecl__)) coshl(long double);

  extern float __attribute__((__cdecl__)) tanhf(float _X);



  extern long double __attribute__((__cdecl__)) tanhl(long double);



  extern double __attribute__((__cdecl__)) acosh (double);
  extern float __attribute__((__cdecl__)) acoshf (float);
  extern long double __attribute__((__cdecl__)) acoshl (long double);


  extern double __attribute__((__cdecl__)) asinh (double);
  extern float __attribute__((__cdecl__)) asinhf (float);
  extern long double __attribute__((__cdecl__)) asinhl (long double);


  extern double __attribute__((__cdecl__)) atanh (double);
  extern float __attribute__((__cdecl__)) atanhf (float);
  extern long double __attribute__((__cdecl__)) atanhl (long double);



  extern float __attribute__((__cdecl__)) expf(float _X);



  extern long double __attribute__((__cdecl__)) expl(long double);


  extern double __attribute__((__cdecl__)) exp2(double);
  extern float __attribute__((__cdecl__)) exp2f(float);
  extern long double __attribute__((__cdecl__)) exp2l(long double);



  extern double __attribute__((__cdecl__)) expm1(double);
  extern float __attribute__((__cdecl__)) expm1f(float);
  extern long double __attribute__((__cdecl__)) expm1l(long double);


  extern float frexpf(float _X,int *_Y);



  extern long double __attribute__((__cdecl__)) frexpl(long double,int *);




  extern int __attribute__((__cdecl__)) ilogb (double);
  extern int __attribute__((__cdecl__)) ilogbf (float);
  extern int __attribute__((__cdecl__)) ilogbl (long double);


  extern float __attribute__((__cdecl__)) ldexpf(float _X,int _Y);



  extern long double __attribute__((__cdecl__)) ldexpl (long double, int);


  extern float __attribute__((__cdecl__)) logf (float);
  extern long double __attribute__((__cdecl__)) logl(long double);


  extern float __attribute__((__cdecl__)) log10f (float);
  extern long double __attribute__((__cdecl__)) log10l(long double);


  extern double __attribute__((__cdecl__)) log1p(double);
  extern float __attribute__((__cdecl__)) log1pf(float);
  extern long double __attribute__((__cdecl__)) log1pl(long double);


  extern double __attribute__((__cdecl__)) log2 (double);
  extern float __attribute__((__cdecl__)) log2f (float);
  extern long double __attribute__((__cdecl__)) log2l (long double);


  extern double __attribute__((__cdecl__)) logb (double);
  extern float __attribute__((__cdecl__)) logbf (float);
  extern long double __attribute__((__cdecl__)) logbl (long double);
# 862 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  extern float __attribute__((__cdecl__)) modff (float, float*);
  extern long double __attribute__((__cdecl__)) modfl (long double, long double*);


  extern double __attribute__((__cdecl__)) scalbn (double, int);
  extern float __attribute__((__cdecl__)) scalbnf (float, int);
  extern long double __attribute__((__cdecl__)) scalbnl (long double, int);

  extern double __attribute__((__cdecl__)) scalbln (double, long);
  extern float __attribute__((__cdecl__)) scalblnf (float, long);
  extern long double __attribute__((__cdecl__)) scalblnl (long double, long);



  extern double __attribute__((__cdecl__)) cbrt (double);
  extern float __attribute__((__cdecl__)) cbrtf (float);
  extern long double __attribute__((__cdecl__)) cbrtl (long double);


  extern double __attribute__((__cdecl__)) hypot (double, double) ;
  extern float __attribute__((__cdecl__)) hypotf (float x, float y);



  extern long double __attribute__((__cdecl__)) hypotl (long double, long double);


  extern float __attribute__((__cdecl__)) powf(float _X,float _Y);



  extern long double __attribute__((__cdecl__)) powl (long double, long double);


  extern float __attribute__((__cdecl__)) sqrtf (float);
  extern long double sqrtl(long double);


  extern double __attribute__((__cdecl__)) erf (double);
  extern float __attribute__((__cdecl__)) erff (float);
  extern long double __attribute__((__cdecl__)) erfl (long double);


  extern double __attribute__((__cdecl__)) erfc (double);
  extern float __attribute__((__cdecl__)) erfcf (float);
  extern long double __attribute__((__cdecl__)) erfcl (long double);


  extern double __attribute__((__cdecl__)) lgamma (double);
  extern float __attribute__((__cdecl__)) lgammaf (float);
  extern long double __attribute__((__cdecl__)) lgammal (long double);

  extern int signgam;


  extern double __attribute__((__cdecl__)) tgamma (double);
  extern float __attribute__((__cdecl__)) tgammaf (float);
  extern long double __attribute__((__cdecl__)) tgammal (long double);


  extern float __attribute__((__cdecl__)) ceilf (float);
  extern long double __attribute__((__cdecl__)) ceill (long double);


  extern float __attribute__((__cdecl__)) floorf (float);
  extern long double __attribute__((__cdecl__)) floorl (long double);


  extern double __attribute__((__cdecl__)) nearbyint ( double);
  extern float __attribute__((__cdecl__)) nearbyintf (float);
  extern long double __attribute__((__cdecl__)) nearbyintl (long double);



extern double __attribute__((__cdecl__)) rint (double);
extern float __attribute__((__cdecl__)) rintf (float);
extern long double __attribute__((__cdecl__)) rintl (long double);


extern long __attribute__((__cdecl__)) lrint (double);
extern long __attribute__((__cdecl__)) lrintf (float);
extern long __attribute__((__cdecl__)) lrintl (long double);

__extension__ long long __attribute__((__cdecl__)) llrint (double);
__extension__ long long __attribute__((__cdecl__)) llrintf (float);
__extension__ long long __attribute__((__cdecl__)) llrintl (long double);
# 1029 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  extern double __attribute__((__cdecl__)) round (double);
  extern float __attribute__((__cdecl__)) roundf (float);
  extern long double __attribute__((__cdecl__)) roundl (long double);


  extern long __attribute__((__cdecl__)) lround (double);
  extern long __attribute__((__cdecl__)) lroundf (float);
  extern long __attribute__((__cdecl__)) lroundl (long double);
  __extension__ long long __attribute__((__cdecl__)) llround (double);
  __extension__ long long __attribute__((__cdecl__)) llroundf (float);
  __extension__ long long __attribute__((__cdecl__)) llroundl (long double);



  extern double __attribute__((__cdecl__)) trunc (double);
  extern float __attribute__((__cdecl__)) truncf (float);
  extern long double __attribute__((__cdecl__)) truncl (long double);


  extern float __attribute__((__cdecl__)) fmodf (float, float);
  extern long double __attribute__((__cdecl__)) fmodl (long double, long double);


  extern double __attribute__((__cdecl__)) remainder (double, double);
  extern float __attribute__((__cdecl__)) remainderf (float, float);
  extern long double __attribute__((__cdecl__)) remainderl (long double, long double);


  extern double __attribute__((__cdecl__)) remquo(double, double, int *);
  extern float __attribute__((__cdecl__)) remquof(float, float, int *);
  extern long double __attribute__((__cdecl__)) remquol(long double, long double, int *);


  extern double __attribute__((__cdecl__)) copysign (double, double);
  extern float __attribute__((__cdecl__)) copysignf (float, float);
  extern long double __attribute__((__cdecl__)) copysignl (long double, long double);
# 1086 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  extern double __attribute__((__cdecl__)) nan(const char *tagp);
  extern float __attribute__((__cdecl__)) nanf(const char *tagp);
  extern long double __attribute__((__cdecl__)) nanl(const char *tagp);
# 1097 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
  extern double __attribute__((__cdecl__)) nextafter (double, double);
  extern float __attribute__((__cdecl__)) nextafterf (float, float);
  extern long double __attribute__((__cdecl__)) nextafterl (long double, long double);


  extern double __attribute__((__cdecl__)) nexttoward (double, long double);
  extern float __attribute__((__cdecl__)) nexttowardf (float, long double);
  extern long double __attribute__((__cdecl__)) nexttowardl (long double, long double);



  extern double __attribute__((__cdecl__)) fdim (double x, double y);
  extern float __attribute__((__cdecl__)) fdimf (float x, float y);
  extern long double __attribute__((__cdecl__)) fdiml (long double x, long double y);







  extern double __attribute__((__cdecl__)) fmax (double, double);
  extern float __attribute__((__cdecl__)) fmaxf (float, float);
  extern long double __attribute__((__cdecl__)) fmaxl (long double, long double);


  extern double __attribute__((__cdecl__)) fmin (double, double);
  extern float __attribute__((__cdecl__)) fminf (float, float);
  extern long double __attribute__((__cdecl__)) fminl (long double, long double);



  extern double __attribute__((__cdecl__)) fma (double, double, double);
  extern float __attribute__((__cdecl__)) fmaf (float, float, float);
  extern long double __attribute__((__cdecl__)) fmal (long double, long double, long double);
# 1180 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _logbf(float _X);
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _finitef(float _X);
   __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isnanf(float _X);
   __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fpclassf(float _X);



   extern long double __attribute__((__cdecl__)) _chgsignl (long double);
# 1580 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/math.h" 3
#pragma pack(pop)
# 42 "C:\\Program Files\\R\\R-devel/include/R_ext/Arith.h" 2




# 45 "C:\\Program Files\\R\\R-devel/include/R_ext/Arith.h"
extern __attribute__((dllimport)) double R_NaN;
extern __attribute__((dllimport)) double R_PosInf;
extern __attribute__((dllimport)) double R_NegInf;
extern __attribute__((dllimport)) double R_NaReal;
extern __attribute__((dllimport)) int R_NaInt;
# 61 "C:\\Program Files\\R\\R-devel/include/R_ext/Arith.h"
int R_IsNA(double);
int R_IsNaN(double);
int R_finite(double);
# 45 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Boolean.h" 1
# 35 "C:\\Program Files\\R\\R-devel/include/R_ext/Boolean.h"
typedef enum { FALSE = 0, TRUE } Rboolean;
# 46 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Complex.h" 1
# 33 "C:\\Program Files\\R\\R-devel/include/R_ext/Complex.h"
typedef struct {
 double r;
 double i;
} Rcomplex;
# 47 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Error.h" 1
# 39 "C:\\Program Files\\R\\R-devel/include/R_ext/Error.h"
void __attribute__((noreturn)) Rf_error(const char *, ...);
void __attribute__((noreturn)) UNIMPLEMENTED(const char *);
void __attribute__((noreturn)) WrongArgCount(const char *);

void Rf_warning(const char *, ...);
void R_ShowMessage(const char *s);
# 48 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Memory.h" 1
# 36 "C:\\Program Files\\R\\R-devel/include/R_ext/Memory.h"
# 1 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stddef.h" 1 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stddef.h" 1 3 4
# 2 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stddef.h" 2 3 4
# 37 "C:\\Program Files\\R\\R-devel/include/R_ext/Memory.h" 2







void* vmaxget(void);
void vmaxset(const void *);

void R_gc(void);
int R_gc_running();

char* R_alloc(size_t, int);
long double *R_allocLD(size_t nelem);
char* S_alloc(long, int);
char* S_realloc(char *, long, long, int);

void * R_malloc_gc(size_t);
void * R_calloc_gc(size_t, size_t);
void * R_realloc_gc(void *, size_t);
# 49 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Utils.h" 1
# 39 "C:\\Program Files\\R\\R-devel/include/R_ext/Utils.h"
# 1 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stddef.h" 1 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stddef.h" 1 3 4
# 2 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stddef.h" 2 3 4
# 40 "C:\\Program Files\\R\\R-devel/include/R_ext/Utils.h" 2
# 59 "C:\\Program Files\\R\\R-devel/include/R_ext/Utils.h"
void R_isort(int*, int);
void R_rsort(double*, int);
void R_csort(Rcomplex*, int);
void rsort_with_index(double *, int *, int);
void Rf_revsort(double*, int*, int);
void Rf_iPsort(int*, int, int);
void Rf_rPsort(double*, int, int);
void Rf_cPsort(Rcomplex*, int, int);



void R_qsort (double *v, size_t i, size_t j);
void R_qsort_I (double *v, int *II, int i, int j);
void R_qsort_int (int *iv, size_t i, size_t j);
void R_qsort_int_I(int *iv, int *II, int i, int j);






const char *R_ExpandFileName(const char *);



void Rf_setIVector(int*, int, int);
void Rf_setRVector(double*, int, double);
Rboolean Rf_StringFalse(const char *);
Rboolean Rf_StringTrue(const char *);
Rboolean Rf_isBlankString(const char *);




double R_atof(const char *str);
double R_strtod(const char *c, char **end);

char *R_tmpnam(const char *prefix, const char *tempdir);
char *R_tmpnam2(const char *prefix, const char *tempdir, const char *fileext);
void R_free_tmpnam(char *name);

void R_CheckUserInterrupt(void);
void R_CheckStack(void);
void R_CheckStack2(size_t);



int findInterval(double *xt, int n, double x,
   Rboolean rightmost_closed, Rboolean all_inside, int ilo,
   int *mflag);
int findInterval2(double *xt, int n, double x,
    Rboolean rightmost_closed, Rboolean all_inside, Rboolean left_open,
    int ilo, int *mflag);





void find_interv_vec(double *xt, int *n, double *x, int *nx,
       int *rightmost_closed, int *all_inside, int *indx);


void R_max_col(double *matrix, int *nr, int *nc, int *maxes, int *ties_meth);
# 50 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Print.h" 1
# 41 "C:\\Program Files\\R\\R-devel/include/R_ext/Print.h"
# 1 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stdarg.h" 1 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdarg.h" 1 3 4
# 140 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdarg.h" 3 4
# 1 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/_mingw_stdarg.h" 1 3 4
# 141 "C:/rtools40/ucrt64/x86_64-w64-mingw32/include/stdarg.h" 2 3 4
# 2 "C:/rtools40/ucrt64/lib/gcc/x86_64-w64-mingw32/10.3.0/include/stdarg.h" 2 3 4
# 42 "C:\\Program Files\\R\\R-devel/include/R_ext/Print.h" 2



void Rprintf(const char *, ...);
void REprintf(const char *, ...);

void Rvprintf(const char *, va_list);
void REvprintf(const char *, va_list);
# 51 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Rdynload.h" 1
# 38 "C:\\Program Files\\R\\R-devel/include/R_ext/Rdynload.h"
typedef void * (*DL_FUNC)();

typedef unsigned int R_NativePrimitiveArgType;
# 51 "C:\\Program Files\\R\\R-devel/include/R_ext/Rdynload.h"
typedef struct {
    const char *name;
    DL_FUNC fun;
    int numArgs;
    R_NativePrimitiveArgType *types;
} R_CMethodDef;

typedef R_CMethodDef R_FortranMethodDef;


typedef struct {
    const char *name;
    DL_FUNC fun;
    int numArgs;
} R_CallMethodDef;

typedef R_CallMethodDef R_ExternalMethodDef;


typedef struct _DllInfo DllInfo;
# 79 "C:\\Program Files\\R\\R-devel/include/R_ext/Rdynload.h"
int R_registerRoutines(DllInfo *info, const R_CMethodDef * const croutines,
         const R_CallMethodDef * const callRoutines,
         const R_FortranMethodDef * const fortranRoutines,
         const R_ExternalMethodDef * const externalRoutines);

Rboolean R_useDynamicSymbols(DllInfo *info, Rboolean value);
Rboolean R_forceSymbols(DllInfo *info, Rboolean value);

DllInfo *R_getDllInfo(const char *name);



DllInfo *R_getEmbeddingDllInfo(void);

typedef struct Rf_RegisteredNativeSymbol R_RegisteredNativeSymbol;
typedef enum {R_ANY_SYM=0, R_C_SYM, R_CALL_SYM, R_FORTRAN_SYM, R_EXTERNAL_SYM} NativeSymbolType;


DL_FUNC R_FindSymbol(char const *, char const *,
         R_RegisteredNativeSymbol *symbol);
# 107 "C:\\Program Files\\R\\R-devel/include/R_ext/Rdynload.h"
void R_RegisterCCallable(const char *package, const char *name, DL_FUNC fptr);
DL_FUNC R_GetCCallable(const char *package, const char *name);
# 52 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2

# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/libextern.h" 1
# 54 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2

typedef unsigned char Rbyte;


typedef int R_len_t;





# 1 "C:\\Program Files\\R\\R-devel/include/Rconfig.h" 1
# 65 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2







    typedef ptrdiff_t R_xlen_t;
# 104 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
typedef unsigned int SEXPTYPE;
# 180 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
typedef struct SEXPREC *SEXP;
# 198 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
const char *(R_CHAR)(SEXP x);


Rboolean (Rf_isNull)(SEXP s);
Rboolean (Rf_isSymbol)(SEXP s);
Rboolean (Rf_isLogical)(SEXP s);
Rboolean (Rf_isReal)(SEXP s);
Rboolean (Rf_isComplex)(SEXP s);
Rboolean (Rf_isExpression)(SEXP s);
Rboolean (Rf_isEnvironment)(SEXP s);
Rboolean (Rf_isString)(SEXP s);
Rboolean (Rf_isObject)(SEXP s);
# 250 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
SEXP (ATTRIB)(SEXP x);
int (OBJECT)(SEXP x);
int (MARK)(SEXP x);
int (TYPEOF)(SEXP x);
int (NAMED)(SEXP x);
int (REFCNT)(SEXP x);
void SET_ATTRIB(SEXP x, SEXP v);
void DUPLICATE_ATTRIB(SEXP to, SEXP from);
void SHALLOW_DUPLICATE_ATTRIB(SEXP to, SEXP from);
void (MARK_NOT_MUTABLE)(SEXP x);


int (IS_S4_OBJECT)(SEXP x);


int (LENGTH)(SEXP x);
R_xlen_t (XLENGTH)(SEXP x);
R_xlen_t (TRUELENGTH)(SEXP x);
int (IS_LONG_VEC)(SEXP x);
int (LEVELS)(SEXP x);

int *(LOGICAL)(SEXP x);
int *(INTEGER)(SEXP x);
Rbyte *(RAW)(SEXP x);
double *(REAL)(SEXP x);
Rcomplex *(COMPLEX)(SEXP x);
const int *(LOGICAL_RO)(SEXP x);
const int *(INTEGER_RO)(SEXP x);
const Rbyte *(RAW_RO)(SEXP x);
const double *(REAL_RO)(SEXP x);
const Rcomplex *(COMPLEX_RO)(SEXP x);

SEXP (VECTOR_ELT)(SEXP x, R_xlen_t i);
void SET_STRING_ELT(SEXP x, R_xlen_t i, SEXP v);
SEXP SET_VECTOR_ELT(SEXP x, R_xlen_t i, SEXP v);
SEXP *(STRING_PTR)(SEXP x);
const SEXP *(STRING_PTR_RO)(SEXP x);
SEXP * __attribute__((noreturn)) (VECTOR_PTR)(SEXP x);

R_xlen_t INTEGER_GET_REGION(SEXP sx, R_xlen_t i, R_xlen_t n, int *buf);
R_xlen_t REAL_GET_REGION(SEXP sx, R_xlen_t i, R_xlen_t n, double *buf);
R_xlen_t LOGICAL_GET_REGION(SEXP sx, R_xlen_t i, R_xlen_t n, int *buf);
R_xlen_t COMPLEX_GET_REGION(SEXP sx, R_xlen_t i, R_xlen_t n, Rcomplex *buf);
R_xlen_t RAW_GET_REGION(SEXP sx, R_xlen_t i, R_xlen_t n, Rbyte *buf);


int INTEGER_IS_SORTED(SEXP x);
int INTEGER_NO_NA(SEXP x);
int REAL_IS_SORTED(SEXP x);
int REAL_NO_NA(SEXP x);
int LOGICAL_IS_SORTED(SEXP x);
int LOGICAL_NO_NA(SEXP x);
int STRING_IS_SORTED(SEXP x);
int STRING_NO_NA(SEXP x);






SEXP (TAG)(SEXP e);
SEXP (CDR)(SEXP e);
SEXP (CAAR)(SEXP e);
SEXP (CDAR)(SEXP e);
SEXP (CADR)(SEXP e);
SEXP (CDDR)(SEXP e);
SEXP (CDDDR)(SEXP e);
SEXP (CADDR)(SEXP e);
SEXP (CADDDR)(SEXP e);
SEXP (CAD4R)(SEXP e);
int (MISSING)(SEXP x);
void SET_TAG(SEXP x, SEXP y);
SEXP SETCAR(SEXP x, SEXP y);
SEXP SETCDR(SEXP x, SEXP y);
SEXP SETCADR(SEXP x, SEXP y);
SEXP SETCADDR(SEXP x, SEXP y);
SEXP SETCADDDR(SEXP x, SEXP y);
SEXP SETCAD4R(SEXP e, SEXP y);


SEXP (FORMALS)(SEXP x);
SEXP (BODY)(SEXP x);
SEXP (CLOENV)(SEXP x);
int (RDEBUG)(SEXP x);
int (RSTEP)(SEXP x);
int (RTRACE)(SEXP x);
void (SET_RDEBUG)(SEXP x, int v);
void (SET_RSTEP)(SEXP x, int v);
void (SET_RTRACE)(SEXP x, int v);
void SET_FORMALS(SEXP x, SEXP v);
void SET_BODY(SEXP x, SEXP v);
void SET_CLOENV(SEXP x, SEXP v);


SEXP (PRINTNAME)(SEXP x);
SEXP (SYMVALUE)(SEXP x);
SEXP (INTERNAL)(SEXP x);
int (DDVAL)(SEXP x);


SEXP (FRAME)(SEXP x);
SEXP (ENCLOS)(SEXP x);
SEXP (HASHTAB)(SEXP x);
int (ENVFLAGS)(SEXP x);


SEXP (PRCODE)(SEXP x);
SEXP (PRENV)(SEXP x);
SEXP (PRVALUE)(SEXP x);
int (PRSEEN)(SEXP x);


SEXP (EXTPTR_PROT)(SEXP);
SEXP (EXTPTR_TAG)(SEXP);
void *(EXTPTR_PTR)(SEXP);
# 375 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
typedef int PROTECT_INDEX;




extern __attribute__((dllimport)) SEXP R_GlobalEnv;

extern __attribute__((dllimport)) SEXP R_EmptyEnv;

extern __attribute__((dllimport)) SEXP R_BaseEnv;
extern __attribute__((dllimport)) SEXP R_BaseNamespace;
extern __attribute__((dllimport)) SEXP R_NamespaceRegistry;

extern __attribute__((dllimport)) SEXP R_Srcref;


extern __attribute__((dllimport)) SEXP R_NilValue;
extern __attribute__((dllimport)) SEXP R_UnboundValue;
extern __attribute__((dllimport)) SEXP R_MissingArg;
extern __attribute__((dllimport)) SEXP R_InBCInterpreter;

extern __attribute__((dllimport)) SEXP R_CurrentExpression;



extern

SEXP R_RestartToken;


extern __attribute__((dllimport)) SEXP R_AsCharacterSymbol;
extern __attribute__((dllimport)) SEXP R_baseSymbol;
extern __attribute__((dllimport)) SEXP R_BaseSymbol;
extern __attribute__((dllimport)) SEXP R_BraceSymbol;
extern __attribute__((dllimport)) SEXP R_Bracket2Symbol;
extern __attribute__((dllimport)) SEXP R_BracketSymbol;
extern __attribute__((dllimport)) SEXP R_ClassSymbol;
extern __attribute__((dllimport)) SEXP R_DeviceSymbol;
extern __attribute__((dllimport)) SEXP R_DimNamesSymbol;
extern __attribute__((dllimport)) SEXP R_DimSymbol;
extern __attribute__((dllimport)) SEXP R_DollarSymbol;
extern __attribute__((dllimport)) SEXP R_DotsSymbol;
extern __attribute__((dllimport)) SEXP R_DoubleColonSymbol;
extern __attribute__((dllimport)) SEXP R_DropSymbol;
extern __attribute__((dllimport)) SEXP R_EvalSymbol;
extern __attribute__((dllimport)) SEXP R_FunctionSymbol;
extern __attribute__((dllimport)) SEXP R_LastvalueSymbol;
extern __attribute__((dllimport)) SEXP R_LevelsSymbol;
extern __attribute__((dllimport)) SEXP R_ModeSymbol;
extern __attribute__((dllimport)) SEXP R_NaRmSymbol;
extern __attribute__((dllimport)) SEXP R_NameSymbol;
extern __attribute__((dllimport)) SEXP R_NamesSymbol;
extern __attribute__((dllimport)) SEXP R_NamespaceEnvSymbol;
extern __attribute__((dllimport)) SEXP R_PackageSymbol;
extern __attribute__((dllimport)) SEXP R_PreviousSymbol;
extern __attribute__((dllimport)) SEXP R_QuoteSymbol;
extern __attribute__((dllimport)) SEXP R_RowNamesSymbol;
extern __attribute__((dllimport)) SEXP R_SeedsSymbol;
extern __attribute__((dllimport)) SEXP R_SortListSymbol;
extern __attribute__((dllimport)) SEXP R_SourceSymbol;
extern __attribute__((dllimport)) SEXP R_SpecSymbol;
extern __attribute__((dllimport)) SEXP R_TripleColonSymbol;
extern __attribute__((dllimport)) SEXP R_TspSymbol;

extern __attribute__((dllimport)) SEXP R_dot_defined;
extern __attribute__((dllimport)) SEXP R_dot_Method;
extern __attribute__((dllimport)) SEXP R_dot_packageName;
extern __attribute__((dllimport)) SEXP R_dot_target;
extern __attribute__((dllimport)) SEXP R_dot_Generic;



extern __attribute__((dllimport)) SEXP R_NaString;
extern __attribute__((dllimport)) SEXP R_BlankString;
extern __attribute__((dllimport)) SEXP R_BlankScalarString;


SEXP R_GetCurrentSrcref(int);
SEXP R_GetSrcFilename(SEXP);





SEXP Rf_asChar(SEXP);
SEXP Rf_coerceVector(SEXP, SEXPTYPE);
SEXP Rf_PairToVectorList(SEXP x);
SEXP Rf_VectorToPairList(SEXP x);
SEXP Rf_asCharacterFactor(SEXP x);
int Rf_asLogical(SEXP x);
int Rf_asInteger(SEXP x);
double Rf_asReal(SEXP x);
Rcomplex Rf_asComplex(SEXP x);




typedef struct R_allocator R_allocator_t;





char * Rf_acopy_string(const char *);
SEXP Rf_alloc3DArray(SEXPTYPE, int, int, int);
SEXP Rf_allocArray(SEXPTYPE, SEXP);
SEXP Rf_allocMatrix(SEXPTYPE, int, int);
SEXP Rf_allocList(int);
SEXP Rf_allocS4Object(void);
SEXP Rf_allocSExp(SEXPTYPE);
SEXP Rf_allocVector3(SEXPTYPE, R_xlen_t, R_allocator_t*);
R_xlen_t Rf_any_duplicated(SEXP x, Rboolean from_last);
R_xlen_t Rf_any_duplicated3(SEXP x, SEXP incomp, Rboolean from_last);
SEXP Rf_applyClosure(SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rf_classgets(SEXP, SEXP);
SEXP Rf_cons(SEXP, SEXP);
void Rf_copyMatrix(SEXP, SEXP, Rboolean);
void Rf_copyListMatrix(SEXP, SEXP, Rboolean);
void Rf_copyMostAttrib(SEXP, SEXP);
void Rf_copyVector(SEXP, SEXP);
void Rf_defineVar(SEXP, SEXP, SEXP);
SEXP Rf_dimgets(SEXP, SEXP);
SEXP Rf_dimnamesgets(SEXP, SEXP);
SEXP Rf_duplicate(SEXP);
SEXP Rf_shallow_duplicate(SEXP);
SEXP R_duplicate_attr(SEXP);
SEXP R_shallow_duplicate_attr(SEXP);
SEXP Rf_lazy_duplicate(SEXP);

SEXP Rf_duplicated(SEXP, Rboolean);
SEXP Rf_eval(SEXP, SEXP);
SEXP Rf_findFun(SEXP, SEXP);
SEXP Rf_findVar(SEXP, SEXP);
SEXP Rf_findVarInFrame(SEXP, SEXP);
SEXP Rf_findVarInFrame3(SEXP, SEXP, Rboolean);
Rboolean R_existsVarInFrame(SEXP, SEXP);
void R_removeVarFromFrame(SEXP, SEXP);
SEXP Rf_getAttrib(SEXP, SEXP);
SEXP Rf_GetArrayDimnames(SEXP);
SEXP Rf_GetColNames(SEXP);
void Rf_GetMatrixDimnames(SEXP, SEXP*, SEXP*, const char**, const char**);
SEXP Rf_GetOption(SEXP, SEXP);
SEXP Rf_GetOption1(SEXP);
int Rf_GetOptionDigits(void);
int Rf_GetOptionWidth(void);
SEXP Rf_GetRowNames(SEXP);
void Rf_gsetVar(SEXP, SEXP, SEXP);
SEXP Rf_install(const char *);
SEXP Rf_installChar(SEXP);
SEXP Rf_installNoTrChar(SEXP);
SEXP Rf_installTrChar(SEXP);
Rboolean Rf_isOrdered(SEXP);
Rboolean Rf_isUnordered(SEXP);
Rboolean Rf_isUnsorted(SEXP, Rboolean);
SEXP Rf_lengthgets(SEXP, R_len_t);
SEXP Rf_xlengthgets(SEXP, R_xlen_t);
SEXP R_lsInternal(SEXP, Rboolean);
SEXP R_lsInternal3(SEXP, Rboolean, Rboolean);
SEXP Rf_match(SEXP, SEXP, int);
SEXP Rf_namesgets(SEXP, SEXP);
SEXP Rf_mkChar(const char *);
SEXP Rf_mkCharLen(const char *, int);
Rboolean Rf_NonNullStringMatch(SEXP, SEXP);
int Rf_ncols(SEXP);
int Rf_nrows(SEXP);
SEXP Rf_nthcdr(SEXP, int);


typedef enum {Bytes, Chars, Width} nchar_type;
int R_nchar(SEXP string, nchar_type type_,
     Rboolean allowNA, Rboolean keepNA, const char* msg_name);

SEXP R_ParseEvalString(const char *, SEXP);
void Rf_PrintValue(SEXP);



SEXP Rf_setAttrib(SEXP, SEXP, SEXP);
void Rf_setVar(SEXP, SEXP, SEXP);
SEXPTYPE Rf_str2type(const char *);
Rboolean Rf_StringBlank(SEXP);
SEXP Rf_substitute(SEXP,SEXP);
SEXP Rf_topenv(SEXP, SEXP);
const char * Rf_translateChar(SEXP);
const char * Rf_translateCharUTF8(SEXP);
const char * Rf_type2char(SEXPTYPE);
SEXP Rf_type2rstr(SEXPTYPE);
SEXP Rf_type2str(SEXPTYPE);
SEXP Rf_type2str_nowarn(SEXPTYPE);



void Rf_unprotect_ptr(SEXP);





SEXP R_tryEval(SEXP, SEXP, int *);
SEXP R_tryEvalSilent(SEXP, SEXP, int *);
SEXP R_GetCurrentEnv();

Rboolean Rf_isS4(SEXP);
SEXP Rf_asS4(SEXP, Rboolean, int);
SEXP Rf_S3Class(SEXP);
int Rf_isBasicClass(const char *);



typedef enum {
    CE_NATIVE = 0,
    CE_UTF8 = 1,
    CE_LATIN1 = 2,
    CE_BYTES = 3,
    CE_SYMBOL = 5,
    CE_ANY =99
} cetype_t;

cetype_t Rf_getCharCE(SEXP);
SEXP Rf_mkCharCE(const char *, cetype_t);
SEXP Rf_mkCharLenCE(const char *, int, cetype_t);
const char *Rf_reEnc(const char *x, cetype_t ce_in, cetype_t ce_out, int subst);







SEXP R_forceAndCall(SEXP e, int n, SEXP rho);


SEXP R_MakeExternalPtr(void *p, SEXP tag, SEXP prot);
void *R_ExternalPtrAddr(SEXP s);
SEXP R_ExternalPtrTag(SEXP s);
SEXP R_ExternalPtrProtected(SEXP s);
void R_ClearExternalPtr(SEXP s);
void R_SetExternalPtrAddr(SEXP s, void *p);
void R_SetExternalPtrTag(SEXP s, SEXP tag);
void R_SetExternalPtrProtected(SEXP s, SEXP p);

SEXP R_MakeExternalPtrFn(DL_FUNC p, SEXP tag, SEXP prot);
DL_FUNC R_ExternalPtrAddrFn(SEXP s);


typedef void (*R_CFinalizer_t)(SEXP);
void R_RegisterFinalizer(SEXP s, SEXP fun);
void R_RegisterCFinalizer(SEXP s, R_CFinalizer_t fun);
void R_RegisterFinalizerEx(SEXP s, SEXP fun, Rboolean onexit);
void R_RegisterCFinalizerEx(SEXP s, R_CFinalizer_t fun, Rboolean onexit);
void R_RunPendingFinalizers(void);


SEXP R_MakeWeakRef(SEXP key, SEXP val, SEXP fin, Rboolean onexit);
SEXP R_MakeWeakRefC(SEXP key, SEXP val, R_CFinalizer_t fin, Rboolean onexit);
SEXP R_WeakRefKey(SEXP w);
SEXP R_WeakRefValue(SEXP w);
void R_RunWeakRefFinalizer(SEXP w);

SEXP R_PromiseExpr(SEXP);
SEXP R_ClosureExpr(SEXP);
SEXP R_BytecodeExpr(SEXP e);


Rboolean R_ToplevelExec(void (*fun)(void *), void *data);
SEXP R_ExecWithCleanup(SEXP (*fun)(void *), void *data,
         void (*cleanfun)(void *), void *cleandata);
SEXP R_tryCatch(SEXP (*)(void *), void *,
  SEXP,
  SEXP (*)(SEXP, void *), void *,
  void (*)(void *), void *);
SEXP R_tryCatchError(SEXP (*)(void *), void *,
       SEXP (*)(SEXP, void *), void *);
SEXP R_withCallingErrorHandler(SEXP (*)(void *), void *,
          SEXP (*)(SEXP, void *), void *);
SEXP R_MakeUnwindCont();
void __attribute__((noreturn)) R_ContinueUnwind(SEXP cont);
SEXP R_UnwindProtect(SEXP (*fun)(void *data), void *data,
                     void (*cleanfun)(void *data, Rboolean jump),
                     void *cleandata, SEXP cont);


SEXP R_NewEnv(SEXP, int, int);
Rboolean R_IsPackageEnv(SEXP rho);
SEXP R_PackageEnvName(SEXP rho);
SEXP R_FindPackageEnv(SEXP info);
Rboolean R_IsNamespaceEnv(SEXP rho);
SEXP R_NamespaceEnvSpec(SEXP rho);
SEXP R_FindNamespace(SEXP info);
void R_LockEnvironment(SEXP env, Rboolean bindings);
Rboolean R_EnvironmentIsLocked(SEXP env);
void R_LockBinding(SEXP sym, SEXP env);
void R_unLockBinding(SEXP sym, SEXP env);
void R_MakeActiveBinding(SEXP sym, SEXP fun, SEXP env);
Rboolean R_BindingIsLocked(SEXP sym, SEXP env);
Rboolean R_BindingIsActive(SEXP sym, SEXP env);
SEXP R_ActiveBindingFunction(SEXP sym, SEXP env);
Rboolean R_HasFancyBindings(SEXP rho);





void Rf_errorcall(SEXP, const char *, ...) __attribute__((noreturn));



void Rf_warningcall(SEXP, const char *, ...);
void Rf_warningcall_immediate(SEXP, const char *, ...);





void R_XDREncodeDouble(double d, void *buf);
double R_XDRDecodeDouble(void *buf);
void R_XDREncodeInteger(int i, void *buf);
int R_XDRDecodeInteger(void *buf);

typedef void *R_pstream_data_t;

typedef enum {
    R_pstream_any_format,
    R_pstream_ascii_format,
    R_pstream_binary_format,
    R_pstream_xdr_format,
    R_pstream_asciihex_format
} R_pstream_format_t;

typedef struct R_outpstream_st *R_outpstream_t;
struct R_outpstream_st {
    R_pstream_data_t data;
    R_pstream_format_t type;
    int version;
    void (*OutChar)(R_outpstream_t, int);
    void (*OutBytes)(R_outpstream_t, void *, int);
    SEXP (*OutPersistHookFunc)(SEXP, SEXP);
    SEXP OutPersistHookData;
};

typedef struct R_inpstream_st *R_inpstream_t;

struct R_inpstream_st {
    R_pstream_data_t data;
    R_pstream_format_t type;
    int (*InChar)(R_inpstream_t);
    void (*InBytes)(R_inpstream_t, void *, int);
    SEXP (*InPersistHookFunc)(SEXP, SEXP);
    SEXP InPersistHookData;
    char native_encoding[63 + 1];
    void *nat2nat_obj;
    void *nat2utf8_obj;
};

void R_InitInPStream(R_inpstream_t stream, R_pstream_data_t data,
       R_pstream_format_t type,
       int (*inchar)(R_inpstream_t),
       void (*inbytes)(R_inpstream_t, void *, int),
       SEXP (*phook)(SEXP, SEXP), SEXP pdata);
void R_InitOutPStream(R_outpstream_t stream, R_pstream_data_t data,
        R_pstream_format_t type, int version,
        void (*outchar)(R_outpstream_t, int),
        void (*outbytes)(R_outpstream_t, void *, int),
        SEXP (*phook)(SEXP, SEXP), SEXP pdata);
# 748 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
void R_InitFileInPStream(R_inpstream_t stream, FILE *fp,
    R_pstream_format_t type,
    SEXP (*phook)(SEXP, SEXP), SEXP pdata);
void R_InitFileOutPStream(R_outpstream_t stream, FILE *fp,
     R_pstream_format_t type, int version,
     SEXP (*phook)(SEXP, SEXP), SEXP pdata);
# 772 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
void R_Serialize(SEXP s, R_outpstream_t ops);
SEXP R_Unserialize(R_inpstream_t ips);
SEXP R_SerializeInfo(R_inpstream_t ips);


SEXP R_do_slot(SEXP obj, SEXP name);
SEXP R_do_slot_assign(SEXP obj, SEXP name, SEXP value);
int R_has_slot(SEXP obj, SEXP name);

SEXP R_S4_extends(SEXP klass, SEXP useTable);


SEXP R_do_MAKE_CLASS(const char *what);
SEXP R_getClassDef (const char *what);
SEXP R_getClassDef_R(SEXP what);
Rboolean R_has_methods_attached(void);
Rboolean R_isVirtualClass(SEXP class_def, SEXP env);
Rboolean R_extends (SEXP class1, SEXP class2, SEXP env);
SEXP R_do_new_object(SEXP class_def);

int R_check_class_and_super(SEXP x, const char **valid, SEXP rho);
int R_check_class_etc (SEXP x, const char **valid);


void R_PreserveObject(SEXP);
void R_ReleaseObject(SEXP);

SEXP R_NewPreciousMSet(int);
void R_PreserveInMSet(SEXP x, SEXP mset);
void R_ReleaseFromMSet(SEXP x, SEXP mset);
void R_ReleaseMSet(SEXP mset, int keepSize);


void R_dot_Last(void);
void R_RunExitFinalizers(void);
# 816 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
int R_system(const char *);
# 837 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
Rboolean R_compute_identical(SEXP, SEXP, int);

SEXP R_body_no_src(SEXP x);



void R_orderVector (int *indx, int n, SEXP arglist, Rboolean nalast, Rboolean decreasing);

void R_orderVector1(int *indx, int n, SEXP x, Rboolean nalast, Rboolean decreasing);
# 1044 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
SEXP Rf_allocVector(SEXPTYPE, R_xlen_t);
Rboolean Rf_conformable(SEXP, SEXP);
SEXP Rf_elt(SEXP, int);
Rboolean Rf_inherits(SEXP, const char *);
Rboolean Rf_isArray(SEXP);
Rboolean Rf_isFactor(SEXP);
Rboolean Rf_isFrame(SEXP);
Rboolean Rf_isFunction(SEXP);
Rboolean Rf_isInteger(SEXP);
Rboolean Rf_isLanguage(SEXP);
Rboolean Rf_isList(SEXP);
Rboolean Rf_isMatrix(SEXP);
Rboolean Rf_isNewList(SEXP);
Rboolean Rf_isNumber(SEXP);
Rboolean Rf_isNumeric(SEXP);
Rboolean Rf_isPairList(SEXP);
Rboolean Rf_isPrimitive(SEXP);
Rboolean Rf_isTs(SEXP);
Rboolean Rf_isUserBinop(SEXP);
Rboolean Rf_isValidString(SEXP);
Rboolean Rf_isValidStringF(SEXP);
Rboolean Rf_isVector(SEXP);
Rboolean Rf_isVectorAtomic(SEXP);
Rboolean Rf_isVectorList(SEXP);
Rboolean Rf_isVectorizable(SEXP);
SEXP Rf_lang1(SEXP);
SEXP Rf_lang2(SEXP, SEXP);
SEXP Rf_lang3(SEXP, SEXP, SEXP);
SEXP Rf_lang4(SEXP, SEXP, SEXP, SEXP);
SEXP Rf_lang5(SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rf_lang6(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rf_lastElt(SEXP);
SEXP Rf_lcons(SEXP, SEXP);
R_len_t Rf_length(SEXP);
SEXP Rf_list1(SEXP);
SEXP Rf_list2(SEXP, SEXP);
SEXP Rf_list3(SEXP, SEXP, SEXP);
SEXP Rf_list4(SEXP, SEXP, SEXP, SEXP);
SEXP Rf_list5(SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rf_list6(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rf_listAppend(SEXP, SEXP);
SEXP Rf_mkNamed(SEXPTYPE, const char **);
SEXP Rf_mkString(const char *);
int Rf_nlevels(SEXP);
int Rf_stringPositionTr(SEXP, const char *);
SEXP Rf_ScalarComplex(Rcomplex);
SEXP Rf_ScalarInteger(int);
SEXP Rf_ScalarLogical(int);
SEXP Rf_ScalarRaw(Rbyte);
SEXP Rf_ScalarReal(double);
SEXP Rf_ScalarString(SEXP);
R_xlen_t Rf_xlength(SEXP);
R_xlen_t (XLENGTH)(SEXP x);
R_xlen_t (XTRUELENGTH)(SEXP x);
int LENGTH_EX(SEXP x, const char *file, int line);
R_xlen_t XLENGTH_EX(SEXP x);

SEXP Rf_protect(SEXP);
void Rf_unprotect(int);
void R_ProtectWithIndex(SEXP, PROTECT_INDEX *);
void R_Reprotect(SEXP, PROTECT_INDEX);

SEXP (CAR)(SEXP e);
void *(DATAPTR)(SEXP x);
const void *(DATAPTR_RO)(SEXP x);
const void *(DATAPTR_OR_NULL)(SEXP x);
const int *(LOGICAL_OR_NULL)(SEXP x);
const int *(INTEGER_OR_NULL)(SEXP x);
const double *(REAL_OR_NULL)(SEXP x);
const Rcomplex *(COMPLEX_OR_NULL)(SEXP x);
const Rbyte *(RAW_OR_NULL)(SEXP x);
int (INTEGER_ELT)(SEXP x, R_xlen_t i);
double (REAL_ELT)(SEXP x, R_xlen_t i);
int (LOGICAL_ELT)(SEXP x, R_xlen_t i);
Rcomplex (COMPLEX_ELT)(SEXP x, R_xlen_t i);
Rbyte (RAW_ELT)(SEXP x, R_xlen_t i);
SEXP (STRING_ELT)(SEXP x, R_xlen_t i);
void SET_LOGICAL_ELT(SEXP x, R_xlen_t i, int v);
void SET_INTEGER_ELT(SEXP x, R_xlen_t i, int v);
void SET_REAL_ELT(SEXP x, R_xlen_t i, double v);
void SET_COMPLEX_ELT(SEXP x, R_xlen_t i, Rcomplex v);
void SET_RAW_ELT(SEXP x, R_xlen_t i, Rbyte v);


SEXP ALTREP_CLASS(SEXP x);
SEXP R_altrep_data1(SEXP x);
SEXP R_altrep_data2(SEXP x);
void R_set_altrep_data1(SEXP x, SEXP v);
void R_set_altrep_data2(SEXP x, SEXP v);

int *LOGICAL0(SEXP x);
int *INTEGER0(SEXP x);
double *REAL0(SEXP x);
Rcomplex *COMPLEX0(SEXP x);
Rbyte *RAW0(SEXP x);


int (ALTREP)(SEXP x);


enum {SORTED_DECR_NA_1ST = -2,
      SORTED_DECR = -1,
      UNKNOWN_SORTEDNESS = 
# 1146 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 3 4
                          (-0x7fffffff - 1)
# 1146 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
                                 ,
      SORTED_INCR = 1,
      SORTED_INCR_NA_1ST = 2,
      KNOWN_UNSORTED = 0};
# 1171 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
typedef struct { SEXP cell; } R_hashtab_type;






R_hashtab_type R_asHashtable(SEXP h);
SEXP R_HashtabSEXP(R_hashtab_type h);
int R_isHashtable(SEXP h);
    R_hashtab_type R_mkhashtab(int type, int );
SEXP R_gethash(R_hashtab_type h, SEXP key, SEXP nomatch);
SEXP R_sethash(R_hashtab_type h, SEXP key, SEXP value);
int R_remhash(R_hashtab_type h, SEXP key);
int R_numhash(R_hashtab_type h);
int R_typhash(R_hashtab_type h);
SEXP R_maphash(R_hashtab_type h, SEXP FUN);
void R_maphashC(R_hashtab_type h, void (*FUN)(SEXP, SEXP, void *), void *data);
void R_clrhash(R_hashtab_type h);




void (SET_TYPEOF)(SEXP x, int v);
void (SET_OBJECT)(SEXP x, int v);
void (SET_S4_OBJECT)(SEXP x);
void (UNSET_S4_OBJECT)(SEXP x);
const char *R_curErrorBuf();
int (IS_SCALAR)(SEXP x, int type);
Rboolean Rf_psmatch(const char *, const char *, Rboolean);






void (SETLENGTH)(SEXP x, R_xlen_t v);
void (SET_TRUELENGTH)(SEXP x, R_xlen_t v);
int (SETLEVELS)(SEXP x, int v);

void (SET_ENVFLAGS)(SEXP x, int v);
void SET_FRAME(SEXP x, SEXP v);
void SET_ENCLOS(SEXP x, SEXP v);
void SET_HASHTAB(SEXP x, SEXP v);

void SET_PRENV(SEXP x, SEXP v);
void SET_PRVALUE(SEXP x, SEXP v);
void SET_PRCODE(SEXP x, SEXP v);

void *(STDVEC_DATAPTR)(SEXP x);


int (IS_GROWABLE)(SEXP x);
void (SET_GROWABLE_BIT)(SEXP x);



void (SET_NAMED)(SEXP x, int v);
# 1237 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
SEXP R_tryWrap(SEXP);
# 16 "main.c" 2





    extern uintptr_t R_CStackLimit;

# 1 "C:\\Program Files\\R\\R-devel/include/Rembedded.h" 1
# 32 "C:\\Program Files\\R\\R-devel/include/Rembedded.h"
extern int Rf_initEmbeddedR(int argc, char *argv[]);
extern void Rf_endEmbeddedR(int fatal);
# 42 "C:\\Program Files\\R\\R-devel/include/Rembedded.h"
int Rf_initialize_R(int ac, char **av);
void setup_Rmainloop(void);
extern void R_ReplDLLinit(void);
extern int R_ReplDLLdo1(void);

void R_setStartTime(void);
extern void R_RunExitFinalizers(void);
extern void CleanEd(void);
extern void Rf_KillAllDevices(void);
extern __attribute__((dllimport)) int R_DirtyImage;
extern void R_CleanTempDir(void);
extern __attribute__((dllimport)) char *R_TempDir;
extern void R_SaveGlobalEnv(void);


extern char *getDLLVersion(void), *getRUser(void), *get_R_HOME(void);
extern void setup_term_ui(void);
extern __attribute__((dllimport)) int UserBreak;
extern Rboolean AllDevicesKilled;
extern void editorcleanall(void);
extern int GA_initapp(int, char **);
extern void GA_appcleanup(void);
extern void readconsolecfg(void);
# 24 "main.c" 2

# 1 "C:\\Program Files\\R\\R-devel/include/Rversion.h" 1
# 26 "main.c" 2
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Parse.h" 1
# 33 "C:\\Program Files\\R\\R-devel/include/R_ext/Parse.h"
typedef enum {
    PARSE_NULL,
    PARSE_OK,
    PARSE_INCOMPLETE,
    PARSE_ERROR,
    PARSE_EOF
} ParseStatus;

SEXP R_ParseVector(SEXP, int, ParseStatus *, SEXP);
# 27 "main.c" 2



# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Altrep.h" 1
# 31 "C:\\Program Files\\R\\R-devel/include/R_ext/Altrep.h"
  typedef struct { SEXP ptr; } R_altrep_class_t;






SEXP
R_new_altrep(R_altrep_class_t aclass, SEXP data1, SEXP data2);

R_altrep_class_t
R_make_altstring_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t
R_make_altinteger_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t
R_make_altreal_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t
R_make_altlogical_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t
R_make_altraw_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t
R_make_altcomplex_class(const char *cname, const char *pname, DllInfo *info);

Rboolean R_altrep_inherits(SEXP x, R_altrep_class_t);

typedef SEXP (*R_altrep_UnserializeEX_method_t)(SEXP, SEXP, SEXP, int, int);
typedef SEXP (*R_altrep_Unserialize_method_t)(SEXP, SEXP);
typedef SEXP (*R_altrep_Serialized_state_method_t)(SEXP);
typedef SEXP (*R_altrep_DuplicateEX_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altrep_Duplicate_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altrep_Coerce_method_t)(SEXP, int);
typedef Rboolean (*R_altrep_Inspect_method_t)(SEXP, int, int, int,
           void (*)(SEXP, int, int, int));
typedef R_xlen_t (*R_altrep_Length_method_t)(SEXP);

typedef void *(*R_altvec_Dataptr_method_t)(SEXP, Rboolean);
typedef const void *(*R_altvec_Dataptr_or_null_method_t)(SEXP);
typedef SEXP (*R_altvec_Extract_subset_method_t)(SEXP, SEXP, SEXP);

typedef int (*R_altinteger_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t
(*R_altinteger_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, int *);
typedef int (*R_altinteger_Is_sorted_method_t)(SEXP);
typedef int (*R_altinteger_No_NA_method_t)(SEXP);
typedef SEXP (*R_altinteger_Sum_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altinteger_Min_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altinteger_Max_method_t)(SEXP, Rboolean);

typedef double (*R_altreal_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t
(*R_altreal_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, double *);
typedef int (*R_altreal_Is_sorted_method_t)(SEXP);
typedef int (*R_altreal_No_NA_method_t)(SEXP);
typedef SEXP (*R_altreal_Sum_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altreal_Min_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altreal_Max_method_t)(SEXP, Rboolean);

typedef int (*R_altlogical_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t
(*R_altlogical_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, int *);
typedef int (*R_altlogical_Is_sorted_method_t)(SEXP);
typedef int (*R_altlogical_No_NA_method_t)(SEXP);
typedef SEXP (*R_altlogical_Sum_method_t)(SEXP, Rboolean);

typedef Rbyte (*R_altraw_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t
(*R_altraw_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, Rbyte *);

typedef Rcomplex (*R_altcomplex_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t
(*R_altcomplex_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, Rcomplex *);

typedef SEXP (*R_altstring_Elt_method_t)(SEXP, R_xlen_t);
typedef void (*R_altstring_Set_elt_method_t)(SEXP, R_xlen_t, SEXP);
typedef int (*R_altstring_Is_sorted_method_t)(SEXP);
typedef int (*R_altstring_No_NA_method_t)(SEXP);






void R_set_altrep_UnserializeEX_method(R_altrep_class_t cls, R_altrep_UnserializeEX_method_t fun);
void R_set_altrep_Unserialize_method(R_altrep_class_t cls, R_altrep_Unserialize_method_t fun);
void R_set_altrep_Serialized_state_method(R_altrep_class_t cls, R_altrep_Serialized_state_method_t fun);
void R_set_altrep_DuplicateEX_method(R_altrep_class_t cls, R_altrep_DuplicateEX_method_t fun);
void R_set_altrep_Duplicate_method(R_altrep_class_t cls, R_altrep_Duplicate_method_t fun);
void R_set_altrep_Coerce_method(R_altrep_class_t cls, R_altrep_Coerce_method_t fun);
void R_set_altrep_Inspect_method(R_altrep_class_t cls, R_altrep_Inspect_method_t fun);
void R_set_altrep_Length_method(R_altrep_class_t cls, R_altrep_Length_method_t fun);

void R_set_altvec_Dataptr_method(R_altrep_class_t cls, R_altvec_Dataptr_method_t fun);
void R_set_altvec_Dataptr_or_null_method(R_altrep_class_t cls, R_altvec_Dataptr_or_null_method_t fun);
void R_set_altvec_Extract_subset_method(R_altrep_class_t cls, R_altvec_Extract_subset_method_t fun);

void R_set_altinteger_Elt_method(R_altrep_class_t cls, R_altinteger_Elt_method_t fun);
void R_set_altinteger_Get_region_method(R_altrep_class_t cls, R_altinteger_Get_region_method_t fun);
void R_set_altinteger_Is_sorted_method(R_altrep_class_t cls, R_altinteger_Is_sorted_method_t fun);
void R_set_altinteger_No_NA_method(R_altrep_class_t cls, R_altinteger_No_NA_method_t fun);
void R_set_altinteger_Sum_method(R_altrep_class_t cls, R_altinteger_Sum_method_t fun);
void R_set_altinteger_Min_method(R_altrep_class_t cls, R_altinteger_Min_method_t fun);
void R_set_altinteger_Max_method(R_altrep_class_t cls, R_altinteger_Max_method_t fun);

void R_set_altreal_Elt_method(R_altrep_class_t cls, R_altreal_Elt_method_t fun);
void R_set_altreal_Get_region_method(R_altrep_class_t cls, R_altreal_Get_region_method_t fun);
void R_set_altreal_Is_sorted_method(R_altrep_class_t cls, R_altreal_Is_sorted_method_t fun);
void R_set_altreal_No_NA_method(R_altrep_class_t cls, R_altreal_No_NA_method_t fun);
void R_set_altreal_Sum_method(R_altrep_class_t cls, R_altreal_Sum_method_t fun);
void R_set_altreal_Min_method(R_altrep_class_t cls, R_altreal_Min_method_t fun);
void R_set_altreal_Max_method(R_altrep_class_t cls, R_altreal_Max_method_t fun);

void R_set_altlogical_Elt_method(R_altrep_class_t cls, R_altlogical_Elt_method_t fun);
void R_set_altlogical_Get_region_method(R_altrep_class_t cls, R_altlogical_Get_region_method_t fun);
void R_set_altlogical_Is_sorted_method(R_altrep_class_t cls, R_altlogical_Is_sorted_method_t fun);
void R_set_altlogical_No_NA_method(R_altrep_class_t cls, R_altlogical_No_NA_method_t fun);
void R_set_altlogical_Sum_method(R_altrep_class_t cls, R_altlogical_Sum_method_t fun);

void R_set_altraw_Elt_method(R_altrep_class_t cls, R_altraw_Elt_method_t fun);
void R_set_altraw_Get_region_method(R_altrep_class_t cls, R_altraw_Get_region_method_t fun);

void R_set_altcomplex_Elt_method(R_altrep_class_t cls, R_altcomplex_Elt_method_t fun);
void R_set_altcomplex_Get_region_method(R_altrep_class_t cls, R_altcomplex_Get_region_method_t fun);

void R_set_altstring_Elt_method(R_altrep_class_t cls, R_altstring_Elt_method_t fun);
void R_set_altstring_Set_elt_method(R_altrep_class_t cls, R_altstring_Set_elt_method_t fun);
void R_set_altstring_Is_sorted_method(R_altrep_class_t cls, R_altstring_Is_sorted_method_t fun);
void R_set_altstring_No_NA_method(R_altrep_class_t cls, R_altstring_No_NA_method_t fun);
# 31 "main.c" 2
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h" 1
# 95 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
int R_GE_getVersion(void);

void R_GE_checkVersionOrDie(int version);
# 109 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
typedef enum {
 GE_DEVICE = 0,
 GE_NDC = 1,
 GE_INCHES = 2,
 GE_CM = 3
} GEUnit;



typedef enum {






    GE_InitState = 0,



    GE_FinaliseState = 1,





    GE_SaveState = 2,




    GE_RestoreState = 6,






    GE_CopyState = 3,



    GE_SaveSnapshotState = 4,


    GE_RestoreSnapshotState = 5,






    GE_CheckPlot = 7,





    GE_ScalePS = 8
} GEevent;




typedef enum {
  GE_ROUND_CAP = 1,
  GE_BUTT_CAP = 2,
  GE_SQUARE_CAP = 3
} R_GE_lineend;

typedef enum {
  GE_ROUND_JOIN = 1,
  GE_MITRE_JOIN = 2,
  GE_BEVEL_JOIN = 3
} R_GE_linejoin;
# 195 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
typedef struct {





    int col;
    int fill;
    double gamma;



    double lwd;
    int lty;
    R_GE_lineend lend;
    R_GE_linejoin ljoin;
    double lmitre;



    double cex;
    double ps;
    double lineheight;
    int fontface;
    char fontfamily[201];



    SEXP patternFill;
} R_GE_gcontext;

typedef R_GE_gcontext* pGEcontext;


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h" 1
# 84 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
typedef struct _DevDesc DevDesc;
typedef DevDesc* pDevDesc;

struct _DevDesc {



    double left;
    double right;
    double bottom;
    double top;


    double clipLeft;
    double clipRight;
    double clipBottom;
    double clipTop;



    double xCharOffset;
    double yCharOffset;
    double yLineBias;
    double ipr[2];





    double cra[2];
    double gamma;



    Rboolean canClip;
    Rboolean canChangeGamma;
    int canHAdj;







    double startps;
    int startcol;
    int startfill;
    int startlty;
    int startfont;
    double startgamma;



    void *deviceSpecific;



    Rboolean displayListOn;
# 150 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    Rboolean canGenMouseDown;
    Rboolean canGenMouseMove;
    Rboolean canGenMouseUp;
    Rboolean canGenKeybd;
    Rboolean canGenIdle;

    Rboolean gettingEvent;
# 195 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*activate)(const pDevDesc );
# 221 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*circle)(double x, double y, double r, const pGEcontext gc, pDevDesc dd);
# 240 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*clip)(double x0, double x1, double y0, double y1, pDevDesc dd);
# 256 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*close)(pDevDesc dd);
# 273 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*deactivate)(pDevDesc );
# 290 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    Rboolean (*locator)(double *x, double *y, pDevDesc dd);
# 307 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*line)(double x1, double y1, double x2, double y2,
   const pGEcontext gc, pDevDesc dd);
# 334 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*metricInfo)(int c, const pGEcontext gc,
         double* ascent, double* descent, double* width,
         pDevDesc dd);
# 353 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*mode)(int mode, pDevDesc dd);
# 372 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*newPage)(const pGEcontext gc, pDevDesc dd);
# 393 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*polygon)(int n, double *x, double *y, const pGEcontext gc, pDevDesc dd);
# 411 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*polyline)(int n, double *x, double *y, const pGEcontext gc, pDevDesc dd);
# 432 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*rect)(double x0, double y0, double x1, double y1,
   const pGEcontext gc, pDevDesc dd);
# 457 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*path)(double *x, double *y,
                 int npoly, int *nper,
                 Rboolean winding,
                 const pGEcontext gc, pDevDesc dd);
# 480 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*raster)(unsigned int *raster, int w, int h,
                   double x, double y,
                   double width, double height,
                   double rot,
                   Rboolean interpolate,
                   const pGEcontext gc, pDevDesc dd);
# 504 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    SEXP (*cap)(pDevDesc dd);
# 529 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*size)(double *left, double *right, double *bottom, double *top,
   pDevDesc dd);
# 547 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    double (*strWidth)(const char *str, const pGEcontext gc, pDevDesc dd);
# 566 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*text)(double x, double y, const char *str, double rot,
   double hadj, const pGEcontext gc, pDevDesc dd);
# 581 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*onExit)(pDevDesc dd);







    SEXP (*getEvent)(SEXP, const char *);
# 604 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    Rboolean (*newFrameConfirm)(pDevDesc dd);
# 619 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    Rboolean hasTextUTF8;

    void (*textUTF8)(double x, double y, const char *str, double rot,
       double hadj, const pGEcontext gc, pDevDesc dd);
    double (*strWidthUTF8)(const char *str, const pGEcontext gc, pDevDesc dd);




    Rboolean wantSymbolUTF8;




    Rboolean useRotatedTextInContour;





    SEXP eventEnv;
# 653 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*eventHelper)(pDevDesc dd, int code);
# 666 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    int (*holdflush)(pDevDesc dd, int level);







    int haveTransparency;
    int haveTransparentBg;
    int haveRaster;
    int haveCapture, haveLocator;


    SEXP (*setPattern)(SEXP pattern, pDevDesc dd);





    void (*releasePattern)(SEXP ref, pDevDesc dd);





    SEXP (*setClipPath)(SEXP path, SEXP ref, pDevDesc dd);





    void (*releaseClipPath)(SEXP ref, pDevDesc dd);





    SEXP (*setMask)(SEXP path, SEXP ref, pDevDesc dd);





    void (*releaseMask)(SEXP ref, pDevDesc dd);
# 721 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    int deviceVersion;




    Rboolean deviceClip;
# 744 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    SEXP (*defineGroup)(SEXP source, int op, SEXP destination, pDevDesc dd);
# 755 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*useGroup)(SEXP ref, SEXP trans, pDevDesc dd);







    void (*releaseGroup)(SEXP ref, pDevDesc dd);
# 772 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    void (*stroke)(SEXP path, const pGEcontext gc, pDevDesc dd);




    void (*fill)(SEXP path, int rule, const pGEcontext gc, pDevDesc dd);




    void (*fillStroke)(SEXP path, int rule, const pGEcontext gc, pDevDesc dd);




    SEXP (*capabilities)(SEXP cap);
# 796 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
    char reserved[64];
};
# 893 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
int Rf_ndevNumber(pDevDesc );


int Rf_NumDevices(void);


void R_CheckDeviceAvailable(void);
Rboolean R_CheckDeviceAvailableBool(void);


int Rf_curDevice(void);


int Rf_nextDevice(int);


int Rf_prevDevice(int);


int Rf_selectDevice(int);


void Rf_killDevice(int);

int Rf_NoDevices(void);

void Rf_NewFrameConfirm(pDevDesc);






typedef enum {knUNKNOWN = -1,
              knLEFT = 0, knUP, knRIGHT, knDOWN,
              knF1, knF2, knF3, knF4, knF5, knF6, knF7, knF8, knF9, knF10,
              knF11, knF12,
              knPGUP, knPGDN, knEND, knHOME, knINS, knDEL} R_KeyName;



typedef enum {meMouseDown = 0,
       meMouseUp,
       meMouseMove} R_MouseEvent;
# 947 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
void Rf_doMouseEvent(pDevDesc dd, R_MouseEvent event,
                  int buttons, double x, double y);
void Rf_doKeybd(pDevDesc dd, R_KeyName rkey,
      const char *keyname);
void Rf_doIdle(pDevDesc dd);
Rboolean Rf_doesIdle(pDevDesc dd);
# 969 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/libextern.h" 1
# 970 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h" 2
extern __attribute__((dllimport)) Rboolean R_interrupts_suspended;
extern __attribute__((dllimport)) int R_interrupts_pending;
extern void Rf_onintr(void);
extern __attribute__((dllimport)) Rboolean mbcslocale;



extern void *Rf_AdobeSymbol2utf8(char*out, const char *in, size_t nwork,
                              Rboolean usePUA);
extern int Rf_utf8toAdobeSymbol(char* out, const char *in);
const char* Rf_utf8Toutf8NoPUA(const char *in);
const char* Rf_utf8ToLatin1AdobeSymbol2utf8(const char *in, Rboolean usePUA);

extern size_t Rf_ucstoutf8(char *s, const unsigned int c);
# 230 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h" 2

typedef struct _GEDevDesc GEDevDesc;

typedef SEXP (* GEcallback)(GEevent, GEDevDesc *, SEXP);

typedef struct {





    void *systemSpecific;
# 255 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
    GEcallback callback;
} GESystemDesc;

struct _GEDevDesc {




    pDevDesc dev;




    Rboolean displayListOn;
    SEXP displayList;
    SEXP DLlastElt;

    SEXP savedSnapshot;



    Rboolean dirty;
    Rboolean recordGraphics;
# 289 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
    GESystemDesc *gesd[24];


    Rboolean ask;


    Rboolean appending;
};

typedef GEDevDesc* pGEDevDesc;





pGEDevDesc Rf_desc2GEDesc(pDevDesc dd);
int GEdeviceNumber(pGEDevDesc);
pGEDevDesc GEgetDevice(int);
void GEaddDevice(pGEDevDesc);
void GEaddDevice2(pGEDevDesc, const char *);
void GEaddDevice2f(pGEDevDesc, const char *, const char *);
void GEkillDevice(pGEDevDesc);
pGEDevDesc GEcreateDevDesc(pDevDesc dev);

void GEdestroyDevDesc(pGEDevDesc dd);
void *GEsystemState(pGEDevDesc dd, int index);
void GEregisterWithDevice(pGEDevDesc dd);
void GEregisterSystem(GEcallback callback, int *systemRegisterIndex);
void GEunregisterSystem(int registerIndex);
SEXP GEhandleEvent(GEevent event, pDevDesc dev, SEXP data);
# 329 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
double GEfromDeviceX(double value, GEUnit to, pGEDevDesc dd);
double GEtoDeviceX(double value, GEUnit from, pGEDevDesc dd);
double GEfromDeviceY(double value, GEUnit to, pGEDevDesc dd);
double GEtoDeviceY(double value, GEUnit from, pGEDevDesc dd);
double GEfromDeviceWidth(double value, GEUnit to, pGEDevDesc dd);
double GEtoDeviceWidth(double value, GEUnit from, pGEDevDesc dd);
double GEfromDeviceHeight(double value, GEUnit to, pGEDevDesc dd);
double GEtoDeviceHeight(double value, GEUnit from, pGEDevDesc dd);
# 345 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
typedef unsigned int rcolor;







rcolor Rf_RGBpar(SEXP, int);
rcolor Rf_RGBpar3(SEXP, int, rcolor);


const char *Rf_col2name(rcolor col);





rcolor R_GE_str2col(const char *s);
# 410 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
R_GE_lineend GE_LENDpar(SEXP value, int ind);
SEXP GE_LENDget(R_GE_lineend lend);
R_GE_linejoin GE_LJOINpar(SEXP value, int ind);
SEXP GE_LJOINget(R_GE_linejoin ljoin);

void GESetClip(double x1, double y1, double x2, double y2, pGEDevDesc dd);
void GENewPage(const pGEcontext gc, pGEDevDesc dd);
void GELine(double x1, double y1, double x2, double y2,
     const pGEcontext gc, pGEDevDesc dd);
void GEPolyline(int n, double *x, double *y,
  const pGEcontext gc, pGEDevDesc dd);
void GEPolygon(int n, double *x, double *y,
        const pGEcontext gc, pGEDevDesc dd);
SEXP GEXspline(int n, double *x, double *y, double *s, Rboolean open,
        Rboolean repEnds, Rboolean draw,
        const pGEcontext gc, pGEDevDesc dd);
void GECircle(double x, double y, double radius,
       const pGEcontext gc, pGEDevDesc dd);
void GERect(double x0, double y0, double x1, double y1,
     const pGEcontext gc, pGEDevDesc dd);
void GEPath(double *x, double *y,
            int npoly, int *nper,
            Rboolean winding,
            const pGEcontext gc, pGEDevDesc dd);
void GERaster(unsigned int *raster, int w, int h,
              double x, double y, double width, double height,
              double angle, Rboolean interpolate,
              const pGEcontext gc, pGEDevDesc dd);
SEXP GECap(pGEDevDesc dd);
void GEText(double x, double y, const char * const str, cetype_t enc,
     double xc, double yc, double rot,
     const pGEcontext gc, pGEDevDesc dd);
void GEMode(int mode, pGEDevDesc dd);
void GESymbol(double x, double y, int pch, double size,
       const pGEcontext gc, pGEDevDesc dd);
void GEPretty(double *lo, double *up, int *ndiv);
void GEMetricInfo(int c, const pGEcontext gc,
    double *ascent, double *descent, double *width,
    pGEDevDesc dd);
double GEStrWidth(const char *str, cetype_t enc,
    const pGEcontext gc, pGEDevDesc dd);
double GEStrHeight(const char *str, cetype_t enc,
    const pGEcontext gc, pGEDevDesc dd);
void GEStrMetric(const char *str, cetype_t enc, const pGEcontext gc,
                 double *ascent, double *descent, double *width,
                 pGEDevDesc dd);
int GEstring_to_pch(SEXP pch);






unsigned int GE_LTYpar(SEXP, int);
SEXP GE_LTYget(unsigned int);




void R_GE_rasterScale(unsigned int *sraster, int sw, int sh,
                      unsigned int *draster, int dw, int dh);
void R_GE_rasterInterpolate(unsigned int *sraster, int sw, int sh,
                            unsigned int *draster, int dw, int dh);
void R_GE_rasterRotatedSize(int w, int h, double angle,
                            int *wnew, int *hnew);
void R_GE_rasterRotatedOffset(int w, int h, double angle, int botleft,
                              double *xoff, double *yoff);
void R_GE_rasterResizeForRotation(unsigned int *sraster,
                                  int w, int h,
                                  unsigned int *newRaster,
                                  int wnew, int hnew,
                                  const pGEcontext gc);
void R_GE_rasterRotate(unsigned int *sraster, int w, int h, double angle,
                       unsigned int *draster, const pGEcontext gc,
                       Rboolean perPixelAlpha);





double GEExpressionWidth(SEXP expr,
    const pGEcontext gc, pGEDevDesc dd);
double GEExpressionHeight(SEXP expr,
     const pGEcontext gc, pGEDevDesc dd);
void GEExpressionMetric(SEXP expr, const pGEcontext gc,
                        double *ascent, double *descent, double *width,
                        pGEDevDesc dd);
void GEMathText(double x, double y, SEXP expr,
  double xc, double yc, double rot,
  const pGEcontext gc, pGEDevDesc dd);







SEXP GEcontourLines(double *x, int nx, double *y, int ny,
      double *z, double *levels, int nl);







double R_GE_VStrWidth(const char *s, cetype_t enc, const pGEcontext gc, pGEDevDesc dd);

double R_GE_VStrHeight(const char *s, cetype_t enc, const pGEcontext gc, pGEDevDesc dd);
void R_GE_VText(double x, double y, const char * const s, cetype_t enc,
  double x_justify, double y_justify, double rotation,
  const pGEcontext gc, pGEDevDesc dd);







pGEDevDesc GEcurrentDevice(void);
Rboolean GEdeviceDirty(pGEDevDesc dd);
void GEdirtyDevice(pGEDevDesc dd);
Rboolean GEcheckState(pGEDevDesc dd);
Rboolean GErecording(SEXP call, pGEDevDesc dd);
void GErecordGraphicOperation(SEXP op, SEXP args, pGEDevDesc dd);
void GEinitDisplayList(pGEDevDesc dd);
void GEplayDisplayList(pGEDevDesc dd);
void GEcopyDisplayList(int fromDevice);
SEXP GEcreateSnapshot(pGEDevDesc dd);
void GEplaySnapshot(SEXP snapshot, pGEDevDesc dd);
void GEonExit(void);
void GEnullDevice(void);




SEXP Rf_CreateAtVector(double axp[], const double usr[], int nint, Rboolean logflag);


void Rf_GAxisPars(double *min, double *max, int *n, Rboolean log, int axis);


Rboolean R_GE_isPattern(SEXP x);



int R_GE_patternType(SEXP pattern);

double R_GE_linearGradientX1(SEXP pattern);
double R_GE_linearGradientY1(SEXP pattern);
double R_GE_linearGradientX2(SEXP pattern);
double R_GE_linearGradientY2(SEXP pattern);
int R_GE_linearGradientNumStops(SEXP pattern);
double R_GE_linearGradientStop(SEXP pattern, int i);
rcolor R_GE_linearGradientColour(SEXP pattern, int i);





int R_GE_linearGradientExtend(SEXP pattern);

double R_GE_radialGradientCX1(SEXP pattern);
double R_GE_radialGradientCY1(SEXP pattern);
double R_GE_radialGradientR1(SEXP pattern);
double R_GE_radialGradientCX2(SEXP pattern);
double R_GE_radialGradientCY2(SEXP pattern);
double R_GE_radialGradientR2(SEXP pattern);
int R_GE_radialGradientNumStops(SEXP pattern);
double R_GE_radialGradientStop(SEXP pattern, int i);
rcolor R_GE_radialGradientColour(SEXP pattern, int i);
int R_GE_radialGradientExtend(SEXP pattern);

SEXP R_GE_tilingPatternFunction(SEXP pattern);
double R_GE_tilingPatternX(SEXP pattern);
double R_GE_tilingPatternY(SEXP pattern);
double R_GE_tilingPatternWidth(SEXP pattern);
double R_GE_tilingPatternHeight(SEXP pattern);
int R_GE_tilingPatternExtend(SEXP pattern);
# 626 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
int R_GE_clipPathFillRule(SEXP path);

void GEStroke(SEXP path, const pGEcontext gc, pGEDevDesc dd);
void GEFill(SEXP path, int rule, const pGEcontext gc, pGEDevDesc dd);
void GEFillStroke(SEXP path, int rule, const pGEcontext gc, pGEDevDesc dd);






int R_GE_maskType(SEXP mask);
# 32 "main.c" 2


void main() {}
