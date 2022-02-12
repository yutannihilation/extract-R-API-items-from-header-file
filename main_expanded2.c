#pragma pack(push,_CRT_PACKING)
#pragma pack(pop)
#pragma pack(push,_CRT_PACKING)
#pragma pack(pop)


# 1 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 1


# 39 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
#pragma pack(push,_CRT_PACKING)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic pop
#pragma pack(pop)


# 40 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2


# 41 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2


# 42 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Arith.h" 1


# 36 "C:\\Program Files\\R\\R-devel/include/R_ext/Arith.h"


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/libextern.h" 1


# 37 "C:\\Program Files\\R\\R-devel/include/R_ext/Arith.h" 2
#pragma pack(push,_CRT_PACKING)
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
typedef struct { double r; double i; } Rcomplex;


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
int findInterval(double *xt, int n, double x, Rboolean rightmost_closed, Rboolean all_inside, int ilo, int *mflag);
int findInterval2(double *xt, int n, double x, Rboolean rightmost_closed, Rboolean all_inside, Rboolean left_open, int ilo, int *mflag);
void find_interv_vec(double *xt, int *n, double *x, int *nx, int *rightmost_closed, int *all_inside, int *indx);
void R_max_col(double *matrix, int *nr, int *nc, int *maxes, int *ties_meth);


# 50 "C:\\Program Files\\R\\R-devel/include/Rinternals.h" 2


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Print.h" 1


# 41 "C:\\Program Files\\R\\R-devel/include/R_ext/Print.h"


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
typedef struct { const char *name; DL_FUNC fun; int numArgs; R_NativePrimitiveArgType *types; } R_CMethodDef;
typedef R_CMethodDef R_FortranMethodDef;
typedef struct { const char *name; DL_FUNC fun; int numArgs; } R_CallMethodDef;
typedef R_CallMethodDef R_ExternalMethodDef;
typedef struct _DllInfo DllInfo;


# 79 "C:\\Program Files\\R\\R-devel/include/R_ext/Rdynload.h"
int R_registerRoutines(DllInfo *info, const R_CMethodDef * const croutines, const R_CallMethodDef * const callRoutines, const R_FortranMethodDef * const fortranRoutines, const R_ExternalMethodDef * const externalRoutines);
Rboolean R_useDynamicSymbols(DllInfo *info, Rboolean value);
Rboolean R_forceSymbols(DllInfo *info, Rboolean value);
DllInfo *R_getDllInfo(const char *name);
DllInfo *R_getEmbeddingDllInfo(void);
typedef struct Rf_RegisteredNativeSymbol R_RegisteredNativeSymbol;
typedef enum {R_ANY_SYM=0, R_C_SYM, R_CALL_SYM, R_FORTRAN_SYM, R_EXTERNAL_SYM} NativeSymbolType;
DL_FUNC R_FindSymbol(char const *, char const *, R_RegisteredNativeSymbol *symbol);


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
extern SEXP R_RestartToken;
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
int R_nchar(SEXP string, nchar_type type_, Rboolean allowNA, Rboolean keepNA, const char* msg_name);
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
typedef enum { CE_NATIVE = 0, CE_UTF8 = 1, CE_LATIN1 = 2, CE_BYTES = 3, CE_SYMBOL = 5, CE_ANY =99 } cetype_t;
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
SEXP R_ExecWithCleanup(SEXP (*fun)(void *), void *data, void (*cleanfun)(void *), void *cleandata);
SEXP R_tryCatch(SEXP (*)(void *), void *, SEXP, SEXP (*)(SEXP, void *), void *, void (*)(void *), void *);
SEXP R_tryCatchError(SEXP (*)(void *), void *, SEXP (*)(SEXP, void *), void *);
SEXP R_withCallingErrorHandler(SEXP (*)(void *), void *, SEXP (*)(SEXP, void *), void *);
SEXP R_MakeUnwindCont();
void __attribute__((noreturn)) R_ContinueUnwind(SEXP cont);
SEXP R_UnwindProtect(SEXP (*fun)(void *data), void *data, void (*cleanfun)(void *data, Rboolean jump), void *cleandata, SEXP cont);
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
typedef enum { R_pstream_any_format, R_pstream_ascii_format, R_pstream_binary_format, R_pstream_xdr_format, R_pstream_asciihex_format } R_pstream_format_t;
typedef struct R_outpstream_st *R_outpstream_t;
struct R_outpstream_st { R_pstream_data_t data; R_pstream_format_t type; int version; void (*OutChar)(R_outpstream_t, int); void (*OutBytes)(R_outpstream_t, void *, int); SEXP (*OutPersistHookFunc)(SEXP, SEXP); SEXP OutPersistHookData; };
typedef struct R_inpstream_st *R_inpstream_t;
struct R_inpstream_st { R_pstream_data_t data; R_pstream_format_t type; int (*InChar)(R_inpstream_t); void (*InBytes)(R_inpstream_t, void *, int); SEXP (*InPersistHookFunc)(SEXP, SEXP); SEXP InPersistHookData; char native_encoding[63 + 1]; void *nat2nat_obj; void *nat2utf8_obj; };
void R_InitInPStream(R_inpstream_t stream, R_pstream_data_t data, R_pstream_format_t type, int (*inchar)(R_inpstream_t), void (*inbytes)(R_inpstream_t, void *, int), SEXP (*phook)(SEXP, SEXP), SEXP pdata);
void R_InitOutPStream(R_outpstream_t stream, R_pstream_data_t data, R_pstream_format_t type, int version, void (*outchar)(R_outpstream_t, int), void (*outbytes)(R_outpstream_t, void *, int), SEXP (*phook)(SEXP, SEXP), SEXP pdata);


# 748 "C:\\Program Files\\R\\R-devel/include/Rinternals.h"
void R_InitFileInPStream(R_inpstream_t stream, FILE *fp, R_pstream_format_t type, SEXP (*phook)(SEXP, SEXP), SEXP pdata);
void R_InitFileOutPStream(R_outpstream_t stream, FILE *fp, R_pstream_format_t type, int version, SEXP (*phook)(SEXP, SEXP), SEXP pdata);


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
enum {SORTED_DECR_NA_1ST = -2, SORTED_DECR = -1, UNKNOWN_SORTEDNESS = (-0x7fffffff - 1) , SORTED_INCR = 1, SORTED_INCR_NA_1ST = 2, KNOWN_UNSORTED = 0};


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


# 1 "C:\\Program Files\\R\\R-devel/include/Rversion.h" 1


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Parse.h" 1


# 33 "C:\\Program Files\\R\\R-devel/include/R_ext/Parse.h"
typedef enum { PARSE_NULL, PARSE_OK, PARSE_INCOMPLETE, PARSE_ERROR, PARSE_EOF } ParseStatus;
SEXP R_ParseVector(SEXP, int, ParseStatus *, SEXP);


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/Altrep.h" 1


# 31 "C:\\Program Files\\R\\R-devel/include/R_ext/Altrep.h"
typedef struct { SEXP ptr; } R_altrep_class_t;
SEXP R_new_altrep(R_altrep_class_t aclass, SEXP data1, SEXP data2);
R_altrep_class_t R_make_altstring_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t R_make_altinteger_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t R_make_altreal_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t R_make_altlogical_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t R_make_altraw_class(const char *cname, const char *pname, DllInfo *info);
R_altrep_class_t R_make_altcomplex_class(const char *cname, const char *pname, DllInfo *info);
Rboolean R_altrep_inherits(SEXP x, R_altrep_class_t);
typedef SEXP (*R_altrep_UnserializeEX_method_t)(SEXP, SEXP, SEXP, int, int);
typedef SEXP (*R_altrep_Unserialize_method_t)(SEXP, SEXP);
typedef SEXP (*R_altrep_Serialized_state_method_t)(SEXP);
typedef SEXP (*R_altrep_DuplicateEX_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altrep_Duplicate_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altrep_Coerce_method_t)(SEXP, int);
typedef Rboolean (*R_altrep_Inspect_method_t)(SEXP, int, int, int, void (*)(SEXP, int, int, int));
typedef R_xlen_t (*R_altrep_Length_method_t)(SEXP);
typedef void *(*R_altvec_Dataptr_method_t)(SEXP, Rboolean);
typedef const void *(*R_altvec_Dataptr_or_null_method_t)(SEXP);
typedef SEXP (*R_altvec_Extract_subset_method_t)(SEXP, SEXP, SEXP);
typedef int (*R_altinteger_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t (*R_altinteger_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, int *);
typedef int (*R_altinteger_Is_sorted_method_t)(SEXP);
typedef int (*R_altinteger_No_NA_method_t)(SEXP);
typedef SEXP (*R_altinteger_Sum_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altinteger_Min_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altinteger_Max_method_t)(SEXP, Rboolean);
typedef double (*R_altreal_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t (*R_altreal_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, double *);
typedef int (*R_altreal_Is_sorted_method_t)(SEXP);
typedef int (*R_altreal_No_NA_method_t)(SEXP);
typedef SEXP (*R_altreal_Sum_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altreal_Min_method_t)(SEXP, Rboolean);
typedef SEXP (*R_altreal_Max_method_t)(SEXP, Rboolean);
typedef int (*R_altlogical_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t (*R_altlogical_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, int *);
typedef int (*R_altlogical_Is_sorted_method_t)(SEXP);
typedef int (*R_altlogical_No_NA_method_t)(SEXP);
typedef SEXP (*R_altlogical_Sum_method_t)(SEXP, Rboolean);
typedef Rbyte (*R_altraw_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t (*R_altraw_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, Rbyte *);
typedef Rcomplex (*R_altcomplex_Elt_method_t)(SEXP, R_xlen_t);
typedef R_xlen_t (*R_altcomplex_Get_region_method_t)(SEXP, R_xlen_t, R_xlen_t, Rcomplex *);
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


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h" 1


# 95 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
int R_GE_getVersion(void);
void R_GE_checkVersionOrDie(int version);


# 109 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
typedef enum { GE_DEVICE = 0, GE_NDC = 1, GE_INCHES = 2, GE_CM = 3 } GEUnit;
typedef enum { GE_InitState = 0, GE_FinaliseState = 1, GE_SaveState = 2, GE_RestoreState = 6, GE_CopyState = 3, GE_SaveSnapshotState = 4, GE_RestoreSnapshotState = 5, GE_CheckPlot = 7, GE_ScalePS = 8 } GEevent;
typedef enum { GE_ROUND_CAP = 1, GE_BUTT_CAP = 2, GE_SQUARE_CAP = 3 } R_GE_lineend;
typedef enum { GE_ROUND_JOIN = 1, GE_MITRE_JOIN = 2, GE_BEVEL_JOIN = 3 } R_GE_linejoin;


# 195 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h"
typedef struct { int col; int fill; double gamma; double lwd; int lty; R_GE_lineend lend; R_GE_linejoin ljoin; double lmitre; double cex; double ps; double lineheight; int fontface; char fontfamily[201]; SEXP patternFill; } R_GE_gcontext;
typedef R_GE_gcontext* pGEcontext;


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h" 1


# 84 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
typedef struct _DevDesc DevDesc;
typedef DevDesc* pDevDesc;
struct _DevDesc { double left; double right; double bottom; double top; double clipLeft; double clipRight; double clipBottom; double clipTop; double xCharOffset; double yCharOffset; double yLineBias; double ipr[2]; double cra[2]; double gamma; Rboolean canClip; Rboolean canChangeGamma; int canHAdj; double startps; int startcol; int startfill; int startlty; int startfont; double startgamma; void *deviceSpecific; Rboolean displayListOn; Rboolean canGenMouseDown; Rboolean canGenMouseMove; Rboolean canGenMouseUp; Rboolean canGenKeybd; Rboolean canGenIdle; Rboolean gettingEvent; void (*activate)(const pDevDesc ); void (*circle)(double x, double y, double r, const pGEcontext gc, pDevDesc dd); void (*clip)(double x0, double x1, double y0, double y1, pDevDesc dd); void (*close)(pDevDesc dd); void (*deactivate)(pDevDesc ); Rboolean (*locator)(double *x, double *y, pDevDesc dd); void (*line)(double x1, double y1, double x2, double y2, const pGEcontext gc, pDevDesc dd); void (*metricInfo)(int c, const pGEcontext gc, double* ascent, double* descent, double* width, pDevDesc dd); void (*mode)(int mode, pDevDesc dd); void (*newPage)(const pGEcontext gc, pDevDesc dd); void (*polygon)(int n, double *x, double *y, const pGEcontext gc, pDevDesc dd); void (*polyline)(int n, double *x, double *y, const pGEcontext gc, pDevDesc dd); void (*rect)(double x0, double y0, double x1, double y1, const pGEcontext gc, pDevDesc dd); void (*path)(double *x, double *y, int npoly, int *nper, Rboolean winding, const pGEcontext gc, pDevDesc dd); void (*raster)(unsigned int *raster, int w, int h, double x, double y, double width, double height, double rot, Rboolean interpolate, const pGEcontext gc, pDevDesc dd); SEXP (*cap)(pDevDesc dd); void (*size)(double *left, double *right, double *bottom, double *top, pDevDesc dd); double (*strWidth)(const char *str, const pGEcontext gc, pDevDesc dd); void (*text)(double x, double y, const char *str, double rot, double hadj, const pGEcontext gc, pDevDesc dd); void (*onExit)(pDevDesc dd); SEXP (*getEvent)(SEXP, const char *); Rboolean (*newFrameConfirm)(pDevDesc dd); Rboolean hasTextUTF8; void (*textUTF8)(double x, double y, const char *str, double rot, double hadj, const pGEcontext gc, pDevDesc dd); double (*strWidthUTF8)(const char *str, const pGEcontext gc, pDevDesc dd); Rboolean wantSymbolUTF8; Rboolean useRotatedTextInContour; SEXP eventEnv; void (*eventHelper)(pDevDesc dd, int code); int (*holdflush)(pDevDesc dd, int level); int haveTransparency; int haveTransparentBg; int haveRaster; int haveCapture, haveLocator; SEXP (*setPattern)(SEXP pattern, pDevDesc dd); void (*releasePattern)(SEXP ref, pDevDesc dd); SEXP (*setClipPath)(SEXP path, SEXP ref, pDevDesc dd); void (*releaseClipPath)(SEXP ref, pDevDesc dd); SEXP (*setMask)(SEXP path, SEXP ref, pDevDesc dd); void (*releaseMask)(SEXP ref, pDevDesc dd); int deviceVersion; Rboolean deviceClip; SEXP (*defineGroup)(SEXP source, int op, SEXP destination, pDevDesc dd); void (*useGroup)(SEXP ref, SEXP trans, pDevDesc dd); void (*releaseGroup)(SEXP ref, pDevDesc dd); void (*stroke)(SEXP path, const pGEcontext gc, pDevDesc dd); void (*fill)(SEXP path, int rule, const pGEcontext gc, pDevDesc dd); void (*fillStroke)(SEXP path, int rule, const pGEcontext gc, pDevDesc dd); SEXP (*capabilities)(SEXP cap); char reserved[64]; };


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
typedef enum {knUNKNOWN = -1, knLEFT = 0, knUP, knRIGHT, knDOWN, knF1, knF2, knF3, knF4, knF5, knF6, knF7, knF8, knF9, knF10, knF11, knF12, knPGUP, knPGDN, knEND, knHOME, knINS, knDEL} R_KeyName;
typedef enum {meMouseDown = 0, meMouseUp, meMouseMove} R_MouseEvent;


# 947 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"
void Rf_doMouseEvent(pDevDesc dd, R_MouseEvent event, int buttons, double x, double y);
void Rf_doKeybd(pDevDesc dd, R_KeyName rkey, const char *keyname);
void Rf_doIdle(pDevDesc dd);
Rboolean Rf_doesIdle(pDevDesc dd);


# 969 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h"


# 1 "C:\\Program Files\\R\\R-devel/include/R_ext/libextern.h" 1


# 970 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsDevice.h" 2
extern __attribute__((dllimport)) Rboolean R_interrupts_suspended;
extern __attribute__((dllimport)) int R_interrupts_pending;
extern void Rf_onintr(void);
extern __attribute__((dllimport)) Rboolean mbcslocale;
extern void *Rf_AdobeSymbol2utf8(char*out, const char *in, size_t nwork, Rboolean usePUA);
extern int Rf_utf8toAdobeSymbol(char* out, const char *in);
const char* Rf_utf8Toutf8NoPUA(const char *in);
const char* Rf_utf8ToLatin1AdobeSymbol2utf8(const char *in, Rboolean usePUA);
extern size_t Rf_ucstoutf8(char *s, const unsigned int c);


# 230 "C:\\Program Files\\R\\R-devel/include/R_ext/GraphicsEngine.h" 2
typedef struct _GEDevDesc GEDevDesc;
typedef SEXP (* GEcallback)(GEevent, GEDevDesc *, SEXP);
typedef struct { void *systemSpecific; GEcallback callback; } GESystemDesc;
struct _GEDevDesc { pDevDesc dev; Rboolean displayListOn; SEXP displayList; SEXP DLlastElt; SEXP savedSnapshot; Rboolean dirty; Rboolean recordGraphics; GESystemDesc *gesd[24]; Rboolean ask; Rboolean appending; };
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
void GELine(double x1, double y1, double x2, double y2, const pGEcontext gc, pGEDevDesc dd);
void GEPolyline(int n, double *x, double *y, const pGEcontext gc, pGEDevDesc dd);
void GEPolygon(int n, double *x, double *y, const pGEcontext gc, pGEDevDesc dd);
SEXP GEXspline(int n, double *x, double *y, double *s, Rboolean open, Rboolean repEnds, Rboolean draw, const pGEcontext gc, pGEDevDesc dd);
void GECircle(double x, double y, double radius, const pGEcontext gc, pGEDevDesc dd);
void GERect(double x0, double y0, double x1, double y1, const pGEcontext gc, pGEDevDesc dd);
void GEPath(double *x, double *y, int npoly, int *nper, Rboolean winding, const pGEcontext gc, pGEDevDesc dd);
void GERaster(unsigned int *raster, int w, int h, double x, double y, double width, double height, double angle, Rboolean interpolate, const pGEcontext gc, pGEDevDesc dd);
SEXP GECap(pGEDevDesc dd);
void GEText(double x, double y, const char * const str, cetype_t enc, double xc, double yc, double rot, const pGEcontext gc, pGEDevDesc dd);
void GEMode(int mode, pGEDevDesc dd);
void GESymbol(double x, double y, int pch, double size, const pGEcontext gc, pGEDevDesc dd);
void GEPretty(double *lo, double *up, int *ndiv);
void GEMetricInfo(int c, const pGEcontext gc, double *ascent, double *descent, double *width, pGEDevDesc dd);
double GEStrWidth(const char *str, cetype_t enc, const pGEcontext gc, pGEDevDesc dd);
double GEStrHeight(const char *str, cetype_t enc, const pGEcontext gc, pGEDevDesc dd);
void GEStrMetric(const char *str, cetype_t enc, const pGEcontext gc, double *ascent, double *descent, double *width, pGEDevDesc dd);
int GEstring_to_pch(SEXP pch);
unsigned int GE_LTYpar(SEXP, int);
SEXP GE_LTYget(unsigned int);
void R_GE_rasterScale(unsigned int *sraster, int sw, int sh, unsigned int *draster, int dw, int dh);
void R_GE_rasterInterpolate(unsigned int *sraster, int sw, int sh, unsigned int *draster, int dw, int dh);
void R_GE_rasterRotatedSize(int w, int h, double angle, int *wnew, int *hnew);
void R_GE_rasterRotatedOffset(int w, int h, double angle, int botleft, double *xoff, double *yoff);
void R_GE_rasterResizeForRotation(unsigned int *sraster, int w, int h, unsigned int *newRaster, int wnew, int hnew, const pGEcontext gc);
void R_GE_rasterRotate(unsigned int *sraster, int w, int h, double angle, unsigned int *draster, const pGEcontext gc, Rboolean perPixelAlpha);
double GEExpressionWidth(SEXP expr, const pGEcontext gc, pGEDevDesc dd);
double GEExpressionHeight(SEXP expr, const pGEcontext gc, pGEDevDesc dd);
void GEExpressionMetric(SEXP expr, const pGEcontext gc, double *ascent, double *descent, double *width, pGEDevDesc dd);
void GEMathText(double x, double y, SEXP expr, double xc, double yc, double rot, const pGEcontext gc, pGEDevDesc dd);
SEXP GEcontourLines(double *x, int nx, double *y, int ny, double *z, double *levels, int nl);
double R_GE_VStrWidth(const char *s, cetype_t enc, const pGEcontext gc, pGEDevDesc dd);
double R_GE_VStrHeight(const char *s, cetype_t enc, const pGEcontext gc, pGEDevDesc dd);
void R_GE_VText(double x, double y, const char * const s, cetype_t enc, double x_justify, double y_justify, double rotation, const pGEcontext gc, pGEDevDesc dd);
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
