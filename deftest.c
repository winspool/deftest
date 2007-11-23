/* ####
 * ####
 *
 */


#ifdef __cplusplus
extern "C" {
#endif


#define BUFFERSIZE 2048

#define NO_GUI

/* ############ */

#ifndef NO_WINDOWS
#ifndef USE_WINDOWS
# ifdef __NT__
#  define USE_WINDOWS __NT__
# endif
#endif


#ifndef USE_WINDOWS
# ifdef __WIN32__
#  define USE_WINDOWS __WIN32__
# endif
#endif

#ifndef USE_WINDOWS
# ifdef __WIN32
#  define USE_WINDOWS __WIN32
# endif
#endif

#ifndef USE_WINDOWS
# ifdef _WIN32
#  define USE_WINDOWS _WIN32
# endif
#endif

#ifndef USE_WINDOWS
# ifdef WIN32
#  define USE_WINDOWS WIN32
# endif
#endif

#ifndef USE_WINDOWS
# ifdef __WINNT_WIN32
#  define USE_WINDOWS __WINNT_WIN32
# endif
#endif

#ifndef USE_WINDOWS
# ifdef _WIN32_WINNT
#  define USE_WINDOWS _WIN32_WINNT
# endif
#endif

#ifndef USE_WINDOWS
# ifdef WINVER
#  define USE_WINDOWS WINVER
# endif
#endif

#ifndef USE_WINDOWS
# ifdef __WINDOWS__
#  define USE_WINDOWS __WINDOWS__
# endif
#endif


#endif

/* ################################## */

#ifndef NO_WINMAIN
#ifdef NO_WINDOWS
#define NO_WINMAIN NO_WINDOWS
#endif
#endif


#ifndef NO_WINDOWS
#ifdef USE_WINDOWS
#include <windows.h>
#endif
#ifdef _WINNT_WIN32
#include <winuser.h>
#endif
#ifdef _WIN32
#include <winuser.h>
#endif
#ifdef __WIN32
#include <winuser.h>
#endif
#ifdef __NT__
#include <winuser.h>
#endif


#ifdef USE_WINSOCK
#include <winsock.h>
#endif

#ifdef USE_WINSOCK2
#include <winsock2.h>
#endif

#endif

 /* ############# */

#include <stdio.h>
#include <string.h>

#ifdef USE_SYS_TYPES
#include <sys/types.h>
#endif

#ifdef USE_TYPES
#include <types.h>
#endif


/* ########################################## */

char *get_txt(char * buffer)
{
    buffer[0] = 0;

#ifndef NO_STDIO
/* ################### */
/* DATE FILE LINE func */


#ifdef __LINE__
     sprintf(buffer+strlen(buffer), "__LINE__\t\t => %d\n", __LINE__ );
#endif

#ifdef __BASE_FILE__
     sprintf(buffer+strlen(buffer), "__BASE_FILE__\t\t => '%s'\n", __BASE_FILE__ );
#endif

#ifdef __FILE__
     sprintf(buffer+strlen(buffer), "__FILE__\t\t => '%s'\n", __FILE__ );
#endif

#ifdef __FUNCTION__
     sprintf(buffer+strlen(buffer), "__FUNCTION__\t\t => '%s'\n", __FUNCTION__ );
#endif

#ifdef __func__
     sprintf(buffer+strlen(buffer), "__func__\t\t => '%s'\n", __func__ );
#endif

#ifdef __DATE__
     sprintf(buffer+strlen(buffer), "__DATE__\t\t => '%s'\n", __DATE__ );
#endif

#ifdef __TIME__
     sprintf(buffer+strlen(buffer), "__TIME__\t\t => '%s'\n", __TIME__ );
#endif

#ifdef __TIMESTAMP__
     sprintf(buffer+strlen(buffer), "__TIMESTAMP__\t => '%s'\n", __TIMESTAMP__ );
#endif



/* ################### */
/* compiler */
#ifdef __WATCOMC__
    sprintf(buffer + strlen(buffer), "__WATCOMC__\t\t => %d (%sWatcom %d.%-1d)\n",
        __WATCOMC__, (__WATCOMC__ > 1100) ? "Open " : "",
        (__WATCOMC__ > 1100) ? (__WATCOMC__ - 1100) / 100 : (__WATCOMC__ / 100),
        (__WATCOMC__ > 1100) ? (__WATCOMC__ - 1100) % 100 : (__WATCOMC__ % 100));
#endif


#ifdef __POCC__
    sprintf(buffer + strlen(buffer), "__POCC__ \t\t => 0x%x/%04d (PellesC %d.%d)\n", 
            __POCC__, __POCC__, __POCC__ / 100, __POCC__ % 100);
#endif    


/* Digital Mars, Sybase */
#ifdef __DMC_VERSION__
    sprintf(buffer + strlen(buffer), "__DMC_VERSION__\t => '%s'\n", __DMC_VERSION__ );
#endif

#ifdef __DMC__
    sprintf(buffer + strlen(buffer), "__DMC__ \t\t => 0x%x (DMC %d.%d)\n", __DMC__,
        __DMC__ / 256, (__DMC__ & 0xf0 ) / 16 * 10 + (__DMC__ & 0x0f));
#endif

#ifdef __SC__
    sprintf(buffer + strlen(buffer), "__SC__\t\t\t => 0x%x (%s %d.%d)\n", __SC__, 
    ((__DMC__ + 0) == __SC__) ? "DMC" : "SC", __SC__ / 256, (__SC__ & 0xf0 ) / 16 * 10 + (__SC__ & 0x0f));
#endif

/* IBM C / IBM CPP */
#ifdef __IBMC__
    sprintf(buffer + strlen(buffer), "__IBMC__ \t\t => %d\n", __IBMC__, __IBMC__);
#endif
#ifdef __IBMCPP__
    sprintf(buffer + strlen(buffer), "__IBMCPP__ \t\t => %d\n", __IBMCPP__, __IBMCPP__);
#endif

#ifdef __xlc__
    sprintf(buffer + strlen(buffer), "__xlc__ \t\t => '%s'\n", #__xlc__ );
#endif
#ifdef __xlC__
    sprintf(buffer + strlen(buffer), "__xlC__ \t\t => 0x%x (%d.%d.%d)\n", __xlC__,
            __xlC__ / 1000, __xlC__ / 100 - (__xlC__ / 1000) * 10,
            __xlC__ / 10 - (__xlC__ / 100) * 10 );
#endif

/* TinyC Compiler */
#ifdef TINYC
    if ( (TINYC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "TINYC \t\t => %d\n", TINYC + 0);
    } else {
        strcat(buffer, "TINYC\n");
    }
#endif
#ifdef _TINYC
    if ( (_TINYC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TINYC \t\t => %d\n", _TINYC + 0);
    } else {
        strcat(buffer, "_TINYC\n");
    }
#endif
#ifdef _TINYC_
    if ( (_TINYC_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TINYC_ \t\t => %d\n", _TINYC_ + 0);
    } else {
        strcat(buffer, "_TINYC_\n");
    }
#endif
#ifdef __TINYC
    if ( (__TINYC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TINYC \t\t => %d\n", __TINYC + 0);
    } else {
        strcat(buffer, "__TINYC\n");
    }
#endif
#ifdef __TINYC__
    if ( (__TINYC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TINYC__ \t\t => %d\n", __TINYC__ + 0);
    } else {
        strcat(buffer, "__TINYC__\n");
    }
#endif


/* Borland C, TurboC */
#ifdef __TURBOC__
    sprintf(buffer + strlen(buffer), "__TURBOC__\t\t => 0x%x/%04d\n", __TURBOC__, __TURBOC__);
#endif



/* MS visual C */
#ifdef _MSC_VER
    sprintf(buffer + strlen(buffer), "_MSC_VER\t\t => 0x%x/%04d\n", _MSC_VER, _MSC_VER);
#endif

/* GNU C */
#ifdef __VERSION__
    sprintf(buffer + strlen(buffer), "__VERSION__\t\t => '%s'\n", __VERSION__ );
#endif


#ifdef __GNUC__
#ifdef __GNUC_PATCHLEVEL__
    sprintf(buffer + strlen(buffer), "__GNUC__ \t\t => %d (GCC %d.%d.%d)\n",
                __GNUC__ , __GNUC__ ,  __GNUC_MINOR__ + 0,  __GNUC_PATCHLEVEL__ + 0 );
#else
        sprintf(buffer + strlen(buffer), "__GNUC__ \t\t => %d (GCC %d.%d)\n",
                __GNUC__ , __GNUC__ ,  __GNUC_MINOR__ + 0 );
#endif
#endif

#ifdef __GNUC_MINOR__
    if ( (__GNUC_MINOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_MINOR__ \t\t => %d\n", __GNUC_MINOR__ + 0);
    } else {
        strcat(buffer, "__GNUC_MINOR__\n");
    }
#endif
#ifdef __GNUC_PATCHLEVEL__
    if ( (__GNUC_PATCHLEVEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_PATCHLEVEL__ \t => %d\n", __GNUC_PATCHLEVEL__ + 0);
    } else {
        strcat(buffer, "__GNUC_PATCHLEVEL__\n");
    }
#endif


/* ################### */
/* language */
/* STRICT */

#ifdef STRICT
    if ( (STRICT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "STRICT\t\t\t => %d\n", STRICT + 0);
    } else {
        strcat(buffer, "STRICT\n");
    }
#endif


#ifdef _STRICT
    if ( (_STRICT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STRICT\t\t\t => %d\n", _STRICT + 0);
    } else {
        strcat(buffer, "_STRICT\n");
    }
#endif

#ifdef _STRICT_
    if ( (_STRICT_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STRICT_ \t\t => %d\n", _STRICT_ + 0);
    } else {
        strcat(buffer, "_STRICT_\n");
    }
#endif

#ifdef __STRICT
    if ( (__STRICT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STRICT \t\t => %d\n", __STRICT + 0);
    } else {
        strcat(buffer, "__STRICT\n");
    }
#endif

#ifdef __STRICT__
    if ( (__STRICT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STRICT__ \t\t => %d\n", __STRICT__ + 0);
    } else {
        strcat(buffer, "__STRICT__\n");
    }
#endif


/* ANSI */
#ifdef ANSI
    if ( (ANSI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ANSI \t\t => %d\n", ANSI + 0);
    } else {
        strcat(buffer, "ANSI\n");
    }
#endif

#ifdef _ANSI
    if ( (_ANSI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANSI \t\t => %d\n", _ANSI + 0);
    } else {
        strcat(buffer, "_ANSI\n");
    }
#endif

#ifdef _ANSI_
    if ( (_ANSI_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANSI_ \t\t => %d\n", _ANSI_ + 0);
    } else {
        strcat(buffer, "_ANSI_\n");
    }
#endif

#ifdef __ANSI
    if ( (__ANSI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANSI \t\t => %d\n", __ANSI + 0);
    } else {
        strcat(buffer, "__ANSI\n");
    }
#endif

#ifdef __ANSI__
    if ( (__ANSI__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANSI__ \t\t => %d\n", __ANSI__ + 0);
    } else {
        strcat(buffer, "__ANSI__\n");
    }
#endif

#ifdef __STRICT_ANSI__
    if ( (__STRICT_ANSI__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STRICT_ANSI__ \t\t => %d\n", __STRICT_ANSI__ + 0);
    } else {
        strcat(buffer, "__STRICT_ANSI__\n");
    }
#endif

/* STDC */
#ifdef STDC
    if ( (STDC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "STDC \t\t => %d\n", STDC + 0);
    } else {
        strcat(buffer, "STDC\n");
    }
#endif


#ifdef _STDC
    if ( (_STDC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDC \t\t => %d\n", _STDC + 0);
    } else {
        strcat(buffer, "_STDC\n");
    }
#endif

#ifdef _STDC_
    if ( (_STDC_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDC_ \t\t => %d\n", _STDC_ + 0);
    } else {
        strcat(buffer, "_STDC_\n");
    }
#endif

#ifdef __STDC
    if ( (__STDC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC \t\t => %d\n", __STDC + 0);
    } else {
        strcat(buffer, "__STDC\n");
    }
#endif

#ifdef __STDC__
    if ( (__STDC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC__ \t\t => %d\n", __STDC__ + 0);
    } else {
        strcat(buffer, "__STDC__\n");
    }
#endif


#ifdef __STDC_HOSTED__
    if ( (__STDC_HOSTED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_HOSTED__ \t => %d\n", __STDC_HOSTED__ + 0);
    } else {
        strcat(buffer, "__STDC_HOSTED__\n");
    }
#endif

#ifdef __STDC_VERSION__
    if ( (__STDC_VERSION__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_VERSION__ \t => %d\n", __STDC_VERSION__ + 0);
    } else {
        strcat(buffer, "__STDC_VERSION__\n");
    }
#endif



/* C99 */
#ifdef __C99_BOOL
    if ( (__C99_BOOL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_BOOL \t\t => %d\n", __C99_BOOL + 0);
    } else {
        strcat(buffer, "__C99_BOOL\n");
    }
#endif

#ifdef __C99_COMPLEX
    if ( (__C99_COMPLEX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_COMPLEX \t\t => %d\n", __C99_COMPLEX + 0);
    } else {
        strcat(buffer, "__C99_COMPLEX\n");
    }
#endif

#ifdef __C99_COMPLEX_HEADERS__
    if ( (__C99_COMPLEX_HEADERS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_COMPLEX_HEADERS__ \t\t => %d\n", __C99_COMPLEX_HEADERS__ + 0);
    } else {
        strcat(buffer, "__C99_COMPLEX_HEADERS__\n");
    }
#endif

#ifdef __C99_CPLUSCMT
    if ( (__C99_CPLUSCMT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_CPLUSCMT \t\t => %d\n", __C99_CPLUSCMT + 0);
    } else {
        strcat(buffer, "__C99_CPLUSCMT\n");
    }
#endif

#ifdef __C99_COMPOUND_LITERAL
    if ( (__C99_COMPOUND_LITERAL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_COMPOUND_LITERAL \t\t => %d\n", __C99_COMPOUND_LITERAL + 0);
    } else {
        strcat(buffer, "__C99_COMPOUND_LITERAL\n");
    }
#endif


#ifdef __C99_DESIGNATED_INITIALIZER
    if ( (__C99_DESIGNATED_INITIALIZER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_DESIGNATED_INITIALIZER \t\t => %d\n", __C99_DESIGNATED_INITIALIZER + 0);
    } else {
        strcat(buffer, "__C99_DESIGNATED_INITIALIZER\n");
    }
#endif

#ifdef __C99_DUP_TYPE_QUALIFIER
    if ( (__C99_DUP_TYPE_QUALIFIER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_DUP_TYPE_QUALIFIER \t\t => %d\n", __C99_DUP_TYPE_QUALIFIER + 0);
    } else {
        strcat(buffer, "__C99_DUP_TYPE_QUALIFIER\n");
    }
#endif

#ifdef __C99_EMPTY_MACRO_ARGUMENTS
    if ( (__C99_EMPTY_MACRO_ARGUMENTS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_EMPTY_MACRO_ARGUMENTS \t\t => %d\n", __C99_EMPTY_MACRO_ARGUMENTS + 0);
    } else {
        strcat(buffer, "__C99_EMPTY_MACRO_ARGUMENTS\n");
    }
#endif

#ifdef __C99_FLEXIBLE_ARRAY_MEMBER
    if ( (__C99_FLEXIBLE_ARRAY_MEMBER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_FLEXIBLE_ARRAY_MEMBER \t\t => %d\n", __C99_FLEXIBLE_ARRAY_MEMBER + 0);
    } else {
        strcat(buffer, "__C99_FLEXIBLE_ARRAY_MEMBER\n");
    }
#endif

#ifdef __C99_FUNC
    if ( (__C99_FUNC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_FUNC \t\t => %d\n", __C99_FUNC + 0);
    } else {
        strcat(buffer, "__C99_FUNC\n");
    }
#endif

#ifdef __C99_HEX_FLOAT_CONST
    if ( (__C99_HEX_FLOAT_CONST + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_HEX_FLOAT_CONST \t\t => %d\n", __C99_HEX_FLOAT_CONST + 0);
    } else {
        strcat(buffer, "__C99_HEX_FLOAT_CONST\n");
    }
#endif

#ifdef __C99_INLINE
    if ( (__C99_INLINE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_INLINE \t\t => %d\n", __C99_INLINE + 0);
    } else {
        strcat(buffer, "__C99_INLINE\n");
    }
#endif

#ifdef __C99_LLONG
    if ( (__C99_LLONG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_LLONG \t\t => %d\n", __C99_LLONG + 0);
    } else {
        strcat(buffer, "__C99_LLONG\n");
    }
#endif

#ifdef __C99_MACRO_WITH_VA_ARGS
    if ( (__C99_MACRO_WITH_VA_ARGS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_MACRO_WITH_VA_ARGS \t\t => %d\n", __C99_MACRO_WITH_VA_ARGS + 0);
    } else {
        strcat(buffer, "__C99_MACRO_WITH_VA_ARGS\n");
    }
#endif

#ifdef __C99_MAX_LINE_NUMBER
    if ( (__C99_MAX_LINE_NUMBER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_MAX_LINE_NUMBER \t\t => %d\n", __C99_MAX_LINE_NUMBER + 0);
    } else {
        strcat(buffer, "__C99_MAX_LINE_NUMBER\n");
    }
#endif

#ifdef __C99_MIXED_DECL_AND_CODE
    if ( (__C99_MIXED_DECL_AND_CODE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_MIXED_DECL_AND_CODE \t\t => %d\n", __C99_MIXED_DECL_AND_CODE + 0);
    } else {
        strcat(buffer, "__C99_MIXED_DECL_AND_CODE\n");
    }
#endif

#ifdef __C99_MIXED_STRING_CONCAT
    if ( (__C99_MIXED_STRING_CONCAT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_MIXED_STRING_CONCAT \t\t => %d\n", __C99_MIXED_STRING_CONCAT + 0);
    } else {
        strcat(buffer, "__C99_MIXED_STRING_CONCAT\n");
    }
#endif

#ifdef __C99_NON_LVALUE_ARRAY_SUB
    if ( (__C99_NON_LVALUE_ARRAY_SUB + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_NON_LVALUE_ARRAY_SUB \t\t => %d\n", __C99_NON_LVALUE_ARRAY_SUB + 0);
    } else {
        strcat(buffer, "__C99_NON_LVALUE_ARRAY_SUB\n");
    }
#endif

#ifdef __C99_NON_CONST_AGGR_INITIALIZER
    if ( (__C99_NON_CONST_AGGR_INITIALIZER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_NON_CONST_AGGR_INITIALIZER \t\t => %d\n", __C99_NON_CONST_AGGR_INITIALIZER + 0);
    } else {
        strcat(buffer, "__C99_NON_CONST_AGGR_INITIALIZER\n");
    }
#endif

#ifdef __C99_PRAGMA_OPERATOR
    if ( (__C99_PRAGMA_OPERATOR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_PRAGMA_OPERATOR \t\t => %d\n", __C99_PRAGMA_OPERATOR + 0);
    } else {
        strcat(buffer, "__C99_PRAGMA_OPERATOR\n");
    }
#endif

#ifdef __C99_REQUIRE_FUNC_DECL
    if ( (__C99_REQUIRE_FUNC_DECL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_REQUIRE_FUNC_DECL \t\t => %d\n", __C99_REQUIRE_FUNC_DECL + 0);
    } else {
        strcat(buffer, "__C99_REQUIRE_FUNC_DECL\n");
    }
#endif

#ifdef __C99_RESTRICT
    if ( (__C99_RESTRICT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_RESTRICT \t\t => %d\n", __C99_RESTRICT + 0);
    } else {
        strcat(buffer, "__C99_RESTRICT\n");
    }
#endif

#ifdef __C99_STATIC_ARRAY_SIZE
    if ( (__C99_STATIC_ARRAY_SIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_STATIC_ARRAY_SIZE \t\t => %d\n", __C99_STATIC_ARRAY_SIZE + 0);
    } else {
        strcat(buffer, "__C99_STATIC_ARRAY_SIZE\n");
    }
#endif

#ifdef __C99_STD_PRAGMAS
    if ( (__C99_STD_PRAGMAS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_STD_PRAGMAS \t\t => %d\n", __C99_STD_PRAGMAS + 0);
    } else {
        strcat(buffer, "__C99_STD_PRAGMAS\n");
    }
#endif

#ifdef __C99_TGMATH
    if ( (__C99_TGMATH + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_TGMATH \t\t => %d\n", __C99_TGMATH + 0);
    } else {
        strcat(buffer, "__C99_TGMATH\n");
    }
#endif

#ifdef __C99_UCN
    if ( (__C99_UCN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_UCN \t\t => %d\n", __C99_UCN + 0);
    } else {
        strcat(buffer, "__C99_UCN\n");
    }
#endif

#ifdef __C99_VAR_LEN_ARRAY
    if ( (__C99_VAR_LEN_ARRAY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_VAR_LEN_ARRAY \t\t => %d\n", __C99_VAR_LEN_ARRAY + 0);
    } else {
        strcat(buffer, "__C99_VAR_LEN_ARRAY\n");
    }
#endif

#ifdef __C99_VARIABLE_LENGTH_ARRAY
    if ( (__C99_VARIABLE_LENGTH_ARRAY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_VARIABLE_LENGTH_ARRAY \t\t => %d\n", __C99_VARIABLE_LENGTH_ARRAY + 0);
    } else {
        strcat(buffer, "__C99_VARIABLE_LENGTH_ARRAY\n");
    }
#endif



/* ################### */
/* cpu */
/* x86 */
#ifdef __I86__
    if ( (__I86__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__I86__ \t\t => %d\n", __I86__ + 0);
    } else {
        strcat(buffer, "__I86__\n");
    }
#endif


#ifdef __X86__
    if ( (__X86__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__X86__ \t\t => %d\n", __X86__ + 0);
    } else {
        strcat(buffer, "__X86__\n");
    }
#endif



#ifdef __386__
    if ( (__386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__386__ \t\t => %d\n", __386__ + 0);
    } else {
        strcat(buffer, "__386__\n");
    }
#endif


#ifdef i386
    if ( (i386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "i386\t\t => %d\n", i386 + 0);
    } else {
        strcat(buffer, "i386\n");
    }
#endif
#ifdef _i386
    if ( (_i386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i386\t\t => %d\n", _i386 + 0);
    } else {
        strcat(buffer, "_i386\n");
    }
#endif
#ifdef _i386_
    if ( (_i386_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i386_\t\t => %d\n", _i386_ + 0);
    } else {
        strcat(buffer, "_i386_\n");
    }
#endif
#ifdef __i386
    if ( (__i386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i386\t\t => %d\n", __i386 + 0);
    } else {
        strcat(buffer, "__i386\n");
    }
#endif
#ifdef __i386__
    if ( (__i386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i386__\t\t => %d\n", __i386__ + 0);
    } else {
        strcat(buffer, "__i386__\n");
    }
#endif



#ifdef _M_IX86
    if ( (_M_IX86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_IX86 \t\t => %d\n", _M_IX86 + 0);
    } else {
        strcat(buffer, "_M_IX86\n");
    }
#endif


/* PowerPC */

#ifdef powerpc
    if ( (powerpc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "powerpc \t\t => %d\n", powerpc + 0);
    } else {
        strcat(buffer, "powerpc\n");
    }
#endif

#ifdef _powerpc
    if ( (_powerpc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_powerpc \t\t => %d\n", _powerpc + 0);
    } else {
        strcat(buffer, "_powerpc\n");
    }
#endif
#ifdef _powerpc_
    if ( (_powerpc_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_powerpc_ \t\t => %d\n", _powerpc_ + 0);
    } else {
        strcat(buffer, "_powerpc_\n");
    }
#endif
#ifdef __powerpc
    if ( (__powerpc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__powerpc \t\t => %d\n", __powerpc + 0);
    } else {
        strcat(buffer, "__powerpc\n");
    }
#endif
#ifdef __powerpc__
    if ( (__powerpc__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__powerpc__ \t\t => %d\n", __powerpc__ + 0);
    } else {
        strcat(buffer, "__powerpc__\n");
    }
#endif

#ifdef __powerpc64__
    if ( (__powerpc64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__powerpc64__ \t\t => %d\n", __powerpc64__ + 0);
    } else {
        strcat(buffer, "__powerpc64__\n");
    }
#endif

#ifdef POWER
    if ( (POWER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "POWER\t\t => %d\n", POWER + 0);
    } else {
        strcat(buffer, "POWER\n");
    }
#endif
#ifdef _POWER
    if ( (_POWER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POWER\t\t => %d\n", _POWER + 0);
    } else {
        strcat(buffer, "_POWER\n");
    }
#endif
#ifdef _POWER_
    if ( (_POWER_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POWER_\t\t => %d\n", _POWER_ + 0);
    } else {
        strcat(buffer, "_POWER_\n");
    }
#endif
#ifdef __POWER
    if ( (__POWER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POWER\t\t => %d\n", __POWER + 0);
    } else {
        strcat(buffer, "__POWER\n");
    }
#endif
#ifdef __POWER__
    if ( (__POWER__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POWER__\t\t => %d\n", __POWER__ + 0);
    } else {
        strcat(buffer, "__POWER__\n");
    }
#endif


#ifdef POWERPC
    if ( (POWERPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "POWERPC\t\t => %d\n", POWERPC + 0);
    } else {
        strcat(buffer, "POWERPC\n");
    }
#endif
#ifdef _POWERPC
    if ( (_POWERPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POWERPC\t\t => %d\n", _POWERPC + 0);
    } else {
        strcat(buffer, "_POWERPC\n");
    }
#endif
#ifdef _POWERPC_
    if ( (_POWERPC_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POWERPC_\t\t => %d\n", _POWERPC_ + 0);
    } else {
        strcat(buffer, "_POWERPC_\n");
    }
#endif
#ifdef __POWERPC
    if ( (__POWERPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POWERPC\t\t => %d\n", __POWERPC + 0);
    } else {
        strcat(buffer, "__POWERPC\n");
    }
#endif
#ifdef __POWERPC__
    if ( (__POWERPC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POWERPC__\t\t => %d\n", __POWERPC__ + 0);
    } else {
        strcat(buffer, "__POWERPC__\n");
    }
#endif



#ifdef PPC
    if ( (PPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "PPC \t\t => %d\n", PPC + 0);
    } else {
        strcat(buffer, "PPC\n");
    }
#endif
#ifdef _PPC
    if ( (_PPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_PPC \t\t => %d\n", _PPC + 0);
    } else {
        strcat(buffer, "_PPC\n");
    }
#endif
#ifdef _PPC_
    if ( (_PPC_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_PPC_ \t\t => %d\n", _PPC_ + 0);
    } else {
        strcat(buffer, "_PPC_\n");
    }
#endif
#ifdef __PPC
    if ( (__PPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PPC \t\t => %d\n", __PPC + 0);
    } else {
        strcat(buffer, "__PPC\n");
    }
#endif
#ifdef __PPC__
    if ( (__PPC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PPC__ \t\t => %d\n", __PPC__ + 0);
    } else {
        strcat(buffer, "__PPC__\n");
    }
#endif

#ifdef __ppc64
    if ( (__ppc64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ppc64 \t\t => %d\n", __ppc64 + 0);
    } else {
        strcat(buffer, "__ppc64\n");
    }
#endif

#ifdef __PPC64__
    if ( (__PPC64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PPC64__ \t\t => %d\n", __PPC64__ + 0);
    } else {
        strcat(buffer, "__PPC64__\n");
    }
#endif

#ifdef ARCH_PWR
    if ( (ARCH_PWR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ARCH_PWR\t\t => %d\n", ARCH_PWR + 0);
    } else {
        strcat(buffer, "ARCH_PWR\n");
    }
#endif
#ifdef _ARCH_PWR
    if ( (_ARCH_PWR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PWR\t\t => %d\n", _ARCH_PWR + 0);
    } else {
        strcat(buffer, "_ARCH_PWR\n");
    }
#endif
#ifdef _ARCH_PWR_
    if ( (_ARCH_PWR_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PWR_\t\t => %d\n", _ARCH_PWR_ + 0);
    } else {
        strcat(buffer, "_ARCH_PWR_\n");
    }
#endif
#ifdef __ARCH_PWR
    if ( (__ARCH_PWR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARCH_PWR\t\t => %d\n", __ARCH_PWR + 0);
    } else {
        strcat(buffer, "__ARCH_PWR\n");
    }
#endif
#ifdef __ARCH_PWR__
    if ( (__ARCH_PWR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARCH_PWR__\t\t => %d\n", __ARCH_PWR__ + 0);
    } else {
        strcat(buffer, "__ARCH_PWR__\n");
    }
#endif

/* ALPHA */
#ifdef ALPHA
    if ( (ALPHA + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ALPHA\t\t => %d\n", ALPHA + 0);
    } else {
        strcat(buffer, "ALPHA\n");
    }
#endif

#ifdef _ALPHA
    if ( (_ALPHA + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ALPHA\t\t => %d\n", _ALPHA + 0);
    } else {
        strcat(buffer, "_ALPHA\n");
    }
#endif

#ifdef _ALPHA_
    if ( (_ALPHA_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ALPHA_\t\t => %d\n", _ALPHA_ + 0);
    } else {
        strcat(buffer, "_ALPHA_\n");
    }
#endif

#ifdef __ALPHA
    if ( (__ALPHA + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ALPHA\t\t => %d\n", __ALPHA + 0);
    } else {
        strcat(buffer, "__ALPHA\n");
    }
#endif

#ifdef __ALPHA__
    if ( (__ALPHA__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ALPHA__\t\t => %d\n", __ALPHA__ + 0);
    } else {
        strcat(buffer, "__ALPHA__\n");
    }
#endif



/* ARM */
#ifdef ARM
    if ( (ARM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ARM \t\t => %d\n", ARM + 0);
    } else {
        strcat(buffer, "ARM\n");
    }
#endif

#ifdef _ARM
    if ( (_ARM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARM \t\t => %d\n", _ARM + 0);
    } else {
        strcat(buffer, "_ARM\n");
    }
#endif

#ifdef _ARM_
    if ( (_ARM_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARM_ \t\t => %d\n", _ARM_ + 0);
    } else {
        strcat(buffer, "_ARM_\n");
    }
#endif

#ifdef __ARM
    if ( (__ARM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM \t\t => %d\n", __ARM + 0);
    } else {
        strcat(buffer, "__ARM\n");
    }
#endif

#ifdef __ARM__
    if ( (__ARM__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM__ \t\t => %d\n", __ARM__ + 0);
    } else {
        strcat(buffer, "__ARM__\n");
    }
#endif



#ifdef arm_elf
    if ( (arm_elf + 1) > 1) {
        sprintf(buffer + strlen(buffer), "arm_elf \t\t => %d\n", arm_elf + 0);
    } else {
        strcat(buffer, "arm_elf\n");
    }
#endif

#ifdef _arm_elf
    if ( (_arm_elf + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_arm_elf \t\t => %d\n", _arm_elf + 0);
    } else {
        strcat(buffer, "_arm_elf\n");
    }
#endif

#ifdef _arm_elf_
    if ( (_arm_elf_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_arm_elf_ \t\t => %d\n", _arm_elf_ + 0);
    } else {
        strcat(buffer, "_arm_elf_\n");
    }
#endif

#ifdef __arm_elf
    if ( (__arm_elf + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__arm_elf \t\t => %d\n", __arm_elf + 0);
    } else {
        strcat(buffer, "__arm_elf\n");
    }
#endif

#ifdef __arm_elf__
    if ( (__arm_elf__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__arm_elf__ \t\t => %d\n", __arm_elf__ + 0);
    } else {
        strcat(buffer, "__arm_elf__\n");
    }
#endif


#ifdef __ARMEB__
    if ( (__ARMEB__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARMEB__ \t\t => %d\n", __ARMEB__ + 0);
    } else {
        strcat(buffer, "__ARMEB__\n");
    }
#endif


#ifdef __ARM_ARCH_4__
    if ( (__ARM_ARCH_4__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_4__ \t\t => %d\n", __ARM_ARCH_4__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_4__\n");
    }
#endif

#ifdef __APCS_32__
    if ( (__APCS_32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__APCS_32__ \t\t => %d\n", __APCS_32__ + 0);
    } else {
        strcat(buffer, "__APCS_32__\n");
    }
#endif

/* TMS320C3x, 0C4x, 0C67 */

#ifdef _TMS32C03x
    if ( (_TMS32C03x + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TMS32C03x \t\t => %d\n", _TMS32C03x + 0);
    } else {
        strcat(buffer, "_TMS32C03x\n");
    }
#endif

#ifdef _TMS32C04x
    if ( (_TMS32C04x + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TMS32C04x \t\t => %d\n", _TMS32C04x + 0);
    } else {
        strcat(buffer, "_TMS32C04x\n");
    }
#endif

#ifdef _TMS32C06x
    if ( (_TMS32C06x + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TMS32C06x \t\t => %d\n", _TMS32C06x + 0);
    } else {
        strcat(buffer, "_TMS32C06x\n");
    }
#endif

#ifdef _TMS32C067
    if ( (_TMS32C067 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TMS32C067 \t\t => %d\n", _TMS32C067 + 0);
    } else {
        strcat(buffer, "_TMS32C067\n");
    }
#endif


/* mc68000 */
#ifdef mc68000
    if ( (mc68000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "mc68000 \t\t => %d\n", mc68000 + 0);
    } else {
        strcat(buffer, "mc68000\n");
    }
#endif
#ifdef _mc68000
    if ( (_mc68000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mc68000 \t\t => %d\n", _mc68000 + 0);
    } else {
        strcat(buffer, "_mc68000\n");
    }
#endif
#ifdef _mc68000_
    if ( (_mc68000_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mc68000_ \t\t => %d\n", _mc68000_ + 0);
    } else {
        strcat(buffer, "_mc68000_\n");
    }
#endif
#ifdef __mc68000
    if ( (__mc68000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mc68000 \t\t => %d\n", __mc68000 + 0);
    } else {
        strcat(buffer, "__mc68000\n");
    }
#endif

#ifdef __mc68000__
    if ( (__mc68000__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mc68000__ \t\t => %d\n", __mc68000__ + 0);
    } else {
        strcat(buffer, "__mc68000__\n");
    }
#endif



#ifdef M68K
    if ( (M68K + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M68K \t\t => %d\n", M68K + 0);
    } else {
        strcat(buffer, "M68K\n");
    }
#endif
#ifdef _M68K
    if ( (_M68K + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68K \t\t => %d\n", _M68K + 0);
    } else {
        strcat(buffer, "_M68K\n");
    }
#endif
#ifdef _M68K_
    if ( (_M68K_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68K_ \t\t => %d\n", _M68K_ + 0);
    } else {
        strcat(buffer, "_M68K_\n");
    }
#endif
#ifdef __M68K
    if ( (__M68K + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68K \t\t => %d\n", __M68K + 0);
    } else {
        strcat(buffer, "__M68K\n");
    }
#endif
#ifdef __M68K__
    if ( (__M68K__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68K__ \t\t => %d\n", __M68K__ + 0);
    } else {
        strcat(buffer, "__M68K__\n");
    }
#endif

#ifdef m68k
    if ( (m68k + 1) > 1) {
        sprintf(buffer + strlen(buffer), "m68k \t\t => %d\n", m68k + 0);
    } else {
        strcat(buffer, "m68k\n");
    }
#endif
#ifdef _m68k
    if ( (_m68k + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_m68k \t\t => %d\n", _m68k + 0);
    } else {
        strcat(buffer, "_m68k\n");
    }
#endif
#ifdef _m68k_
    if ( (_m68k_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_m68k_ \t\t => %d\n", _m68k_ + 0);
    } else {
        strcat(buffer, "_m68k_\n");
    }
#endif
#ifdef __m68k
    if ( (__m68k + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__m68k \t\t => %d\n", __m68k + 0);
    } else {
        strcat(buffer, "__m68k\n");
    }
#endif
#ifdef __m68k__
    if ( (__m68k__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__m68k__ \t\t => %d\n", __m68k__ + 0);
    } else {
        strcat(buffer, "__m68k__\n");
    }
#endif

#ifdef __M680x0
    if ( (__M680x0 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M680x0 \t\t => %d\n", __M680x0 + 0);
    } else {
        strcat(buffer, "__M680x0\n");
    }
#endif

#ifdef M68020
    if ( (M68020 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M68020 \t\t => %d\n", M68020 + 0);
    } else {
        strcat(buffer, "M68020\n");
    }
#endif
#ifdef _M68020
    if ( (_M68020 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68020 \t\t => %d\n", _M68020 + 0);
    } else {
        strcat(buffer, "_M68020\n");
    }
#endif
#ifdef _M68020_
    if ( (_M68020_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68020_ \t\t => %d\n", _M68020_ + 0);
    } else {
        strcat(buffer, "_M68020_\n");
    }
#endif
#ifdef __M68020
    if ( (__M68020 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68020 \t\t => %d\n", __M68020 + 0);
    } else {
        strcat(buffer, "__M68020\n");
    }
#endif
#ifdef __M68020__
    if ( (__M68020__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68020__ \t\t => %d\n", __M68020__ + 0);
    } else {
        strcat(buffer, "__M68020__\n");
    }
#endif



#ifdef __M68881
    if ( (__M68881 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68881 \t\t => %d\n", __M68881 + 0);
    } else {
        strcat(buffer, "__M68881\n");
    }
#endif
#ifdef __M68882
    if ( (__M68882 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68882 \t\t => %d\n", __M68882 + 0);
    } else {
        strcat(buffer, "__M68882\n");
    }
#endif
#ifdef __COLDFIRE
    if ( (__COLDFIRE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__COLDFIRE \t\t => %d\n", __COLDFIRE + 0);
    } else {
        strcat(buffer, "__COLDFIRE\n");
    }
#endif


/* mips */
#ifdef mips
    if ( (mips + 1) > 1) {
        sprintf(buffer + strlen(buffer), "mips \t\t => %d\n", mips + 0);
    } else {
        strcat(buffer, "mips\n");
    }
#endif
#ifdef _mips
    if ( (_mips + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mips \t\t => %d\n", _mips + 0);
    } else {
        strcat(buffer, "_mips\n");
    }
#endif

#ifdef _mips_
    if ( (_mips_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mips_ \t\t => %d\n", _mips_ + 0);
    } else {
        strcat(buffer, "_mips_\n");
    }
#endif

#ifdef __mips
    if ( (__mips + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mips \t\t => %d\n", __mips + 0);
    } else {
        strcat(buffer, "__mips\n");
    }
#endif

#ifdef __mips__
    if ( (__mips__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mips__ \t\t => %d\n", __mips__ + 0);
    } else {
        strcat(buffer, "__mips__\n");
    }
#endif


/* ################### */
/* OS */
#ifdef WINVER
    sprintf(buffer + strlen(buffer), "WINVER  \t\t => 0x%x (%d.%d)\n", WINVER, 
        WINVER / 256, (WINVER & 255));
#endif


#ifdef WINDOWS
    if ( (WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WINDOWS\t\t => %d\n", WINDOWS + 0);
    } else {
        strcat(buffer, "WINDOWS\n");
    }
#endif
#ifdef _WINDOWS
    if ( (_WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINDOWS\t\t => %d\n", _WINDOWS + 0);
    } else {
        strcat(buffer, "_WINDOWS\n");
    }
#endif

#ifdef _WINDOWS_
    if ( (_WINDOWS_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINDOWS_\t\t => %d\n", _WINDOWS_ + 0);
    } else {
        strcat(buffer, "_WINDOWS_\n");
    }
#endif

#ifdef __WINDOWS
    if ( (__WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINDOWS\t\t => %d\n", __WINDOWS + 0);
    } else {
        strcat(buffer, "__WINDOWS\n");
    }
#endif


#ifdef __WINDOWS__
    if ( (__WINDOWS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINDOWS__\t\t => %d\n", __WINDOWS__ + 0);
    } else {
        strcat(buffer, "__WINDOWS__\n");
    }
#endif

/* ## win32s ## */
#ifdef __WINDOWS_386__
    if ( (__WINDOWS_386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINDOWS_386__\t\t => %d\n", __WINDOWS_386__ + 0);
    } else {
        strcat(buffer, "__WINDOWS_386__\n");
    }
#endif

#ifdef WIN386
    if ( (WIN386  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WIN386\t\t\t => %d\n", WIN386  + 0);
    } else {
        strcat(buffer, "WIN386\n");
    }
#endif

#ifdef _WIN386
    if ( (_WIN386  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN386\t\t\t => %d\n", _WIN386  + 0);
    } else {
        strcat(buffer, "_WIN386\n");
    }
#endif

#ifdef _WIN386_
    if ( (_WIN386_  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN386_\t\t\t => %d\n", _WIN386_  + 0);
    } else {
        strcat(buffer, "_WIN386_\n");
    }
#endif
#ifdef __WIN386
    if ( (__WIN386  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN386\t\t\t => %d\n", __WIN386  + 0);
    } else {
        strcat(buffer, "__WIN386\n");
    }
#endif
#ifdef __WIN386__
    if ( (__WIN386__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN386__\t\t\t => %d\n", __WIN386__  + 0);
    } else {
        strcat(buffer, "__WIN386__\n");
    }
#endif


/* win CE */
#ifdef WINCE
    if ( (WINCE  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WINCE\t\t\t => %d\n", WINCE  + 0);
    } else {
        strcat(buffer, "WINCE\n");
    }
#endif

#ifdef _WINCE
    if ( (_WINCE  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINCE\t\t\t => %d\n", _WINCE  + 0);
    } else {
        strcat(buffer, "_WINCE\n");
    }
#endif

#ifdef _WINCE_
    if ( (_WINCE_  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINCE_\t\t\t => %d\n", _WINCE_  + 0);
    } else {
        strcat(buffer, "_WINCE_\n");
    }
#endif

#ifdef __WINCE
    if ( (__WINCE  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINCE\t\t\t => %d\n", __WINCE  + 0);
    } else {
        strcat(buffer, "__WINCE\n");
    }
#endif

#ifdef __WINCE__
    if ( (__WINCE__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINCE__\t\t\t => %d\n", __WINCE__  + 0);
    } else {
        strcat(buffer, "__WINCE__\n");
    }
#endif

/* ## WIN32 and NT ## */
#ifdef WIN32
    if ( (WIN32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WIN32\t\t\t => %d\n", WIN32   + 0);
    } else {
        strcat(buffer, "WIN32\n");
    }
#endif

#ifdef _WIN32
    if ( (_WIN32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN32\t\t\t => %d\n", _WIN32   + 0);
    } else {
        strcat(buffer, "_WIN32\n");
    }
#endif

#ifdef _WIN32_
    if ( (_WIN32_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN32_ \t\t => %d\n", _WIN32_   + 0);
    } else {
        strcat(buffer, "_WIN32_\n");
    }
#endif

#ifdef __WIN32
    if ( (__WIN32  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN32\t\t\t => %d\n", __WIN32  + 0);
    } else {
        strcat(buffer, "__WIN32\n");
    }
#endif

#ifdef __WIN32__
    if ( (__WIN32__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN32__ \t\t => %d\n", __WIN32__  + 0);
    } else {
        strcat(buffer, "__WIN32__\n");
    }
#endif

#ifdef _WINNT_WIN32
    if ( (_WINNT_WIN32  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINNT_WIN32\t\t => 0x%x (%d.%02d)\n",
        _WINNT_WIN32 + 0, (_WINNT_WIN32 + 0) / 256, ((_WINNT_WIN32 + 0) & 255));
    } else {
        strcat(buffer, "_WINNT_WIN32\n");
    }
#endif

#ifdef _WIN32_WINNT
    if ( (_WIN32_WINNT  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN32_WINNT\t\t => 0x%x (%d.%02d)\n",
        _WIN32_WINNT + 0, (_WIN32_WINNT + 0) / 256, ((_WIN32_WINNT + 0) & 255));
    } else {
        strcat(buffer, "_WIN32_WINNT\n");
    }
#endif

#ifdef WINNT
    if ( (WINNT   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WINNT  \t\t => %d\n", WINNT   + 0);
    } else {
        strcat(buffer, "WINNT\n");
    }
#endif

#ifdef _WINNT
    if ( (_WINNT   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINNT  \t\t => %d\n", _WINNT   + 0);
    } else {
        strcat(buffer, "_WINNT\n");
    }
#endif

#ifdef _WINNT_
    if ( (_WINNT_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINNT_  \t\t => %d\n", _WINNT_   + 0);
    } else {
        strcat(buffer, "_WINNT_\n");
    }
#endif

#ifdef __WINNT
    if ( (__WINNT   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINNT  \t\t => %d\n", __WINNT   + 0);
    } else {
        strcat(buffer, "__WINNT\n");
    }
#endif

#ifdef __WINNT__
    if ( (__WINNT__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINNT__  \t\t => %d\n", __WINNT__   + 0);
    } else {
        strcat(buffer, "__WINNT__\n");
    }
#endif

#ifdef __NT__
    if ( (__NT__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NT__  \t\t => %d\n", __NT__   + 0);
    } else {
        strcat(buffer, "__NT__\n");
    }
#endif


/* cygwin */
#ifdef __CYGWIN32
    if ( (__CYGWIN32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CYGWIN32\t\t => %d\n", __CYGWIN32 + 0);
    } else {
        strcat(buffer, "__CYGWIN32\n");
    }
#endif
#ifdef __CYGWIN32__
    if ( (__CYGWIN32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CYGWIN32__\t\t => %d\n", __CYGWIN32__ + 0);
    } else {
        strcat(buffer, "__CYGWIN32__\n");
    }
#endif


/* mingw */
#ifdef mingw
    if ( (mingw + 1) > 1) {
        sprintf(buffer + strlen(buffer), "mingw\t\t => %d\n", mingw + 0);
    } else {
        strcat(buffer, "mingw\n");
    }
#endif
#ifdef _mingw
    if ( (_mingw + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mingw\t\t => %d\n", _mingw + 0);
    } else {
        strcat(buffer, "_mingw\n");
    }
#endif
#ifdef _mingw_
    if ( (_mingw_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mingw_\t\t => %d\n", _mingw_ + 0);
    } else {
        strcat(buffer, "_mingw_\n");
    }
#endif
#ifdef __mingw
    if ( (__mingw + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mingw\t\t => %d\n", __mingw + 0);
    } else {
        strcat(buffer, "__mingw\n");
    }
#endif
#ifdef __mingw__
    if ( (__mingw__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mingw__\t\t => %d\n", __mingw__ + 0);
    } else {
        strcat(buffer, "__mingw__\n");
    }
#endif

#ifdef MINGW
    if ( (MINGW + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MINGW\t\t => %d\n", MINGW + 0);
    } else {
        strcat(buffer, "MINGW\n");
    }
#endif
#ifdef _MINGW
    if ( (_MINGW + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MINGW\t\t => %d\n", _MINGW + 0);
    } else {
        strcat(buffer, "_MINGW\n");
    }
#endif
#ifdef _MINGW_
    if ( (_MINGW_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MINGW_\t\t => %d\n", _MINGW_ + 0);
    } else {
        strcat(buffer, "_MINGW_\n");
    }
#endif
#ifdef __MINGW
    if ( (__MINGW + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW\t\t => %d\n", __MINGW + 0);
    } else {
        strcat(buffer, "__MINGW\n");
    }
#endif
#ifdef __MINGW__
    if ( (__MINGW__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW__\t\t => %d\n", __MINGW__ + 0);
    } else {
        strcat(buffer, "__MINGW__\n");
    }
#endif

#ifdef MINGW32
    if ( (MINGW32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MINGW32  \t\t => %d\n", MINGW32   + 0);
    } else {
        strcat(buffer, "MINGW32\n");
    }
#endif

#ifdef _MINGW32
    if ( (_MINGW32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MINGW32  \t\t => %d\n", _MINGW32   + 0);
    } else {
        strcat(buffer, "_MINGW32\n");
    }
#endif

#ifdef _MINGW32_
    if ( (_MINGW32_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MINGW32_  \t\t => %d\n", _MINGW32_   + 0);
    } else {
        strcat(buffer, "_MINGW32_\n");
    }
#endif

#ifdef __MINGW32
    if ( (__MINGW32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW32  \t\t => %d\n", __MINGW32   + 0);
    } else {
        strcat(buffer, "__MINGW32\n");
    }
#endif

#ifdef __MINGW32__
    if ( (__MINGW32__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW32__  \t\t => %d\n", __MINGW32__   + 0);
    } else {
        strcat(buffer, "__MINGW32__\n");
    }
#endif


/* APPLE */
#ifdef APPLE
    if ( (APPLE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "APPLE  \t\t => %d\n", APPLE   + 0);
    } else {
        strcat(buffer, "APPLE\n");
    }
#endif
#ifdef _APPLE
    if ( (_APPLE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_APPLE  \t\t => %d\n", _APPLE   + 0);
    } else {
        strcat(buffer, "_APPLE\n");
    }
#endif
#ifdef _APPLE_
    if ( (_APPLE_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_APPLE_  \t\t => %d\n", _APPLE_   + 0);
    } else {
        strcat(buffer, "_APPLE_\n");
    }
#endif
#ifdef __APPLE
    if ( (__APPLE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__APPLE  \t\t => %d\n", __APPLE   + 0);
    } else {
        strcat(buffer, "__APPLE\n");
    }
#endif
#ifdef __APPLE__
    if ( (__APPLE__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__APPLE__  \t\t => %d\n", __APPLE__   + 0);
    } else {
        strcat(buffer, "__APPLE__\n");
    }
#endif

#ifdef MACOS
    if ( (MACOS   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MACOS  \t\t => %d\n", MACOS   + 0);
    } else {
        strcat(buffer, "MACOS\n");
    }
#endif
#ifdef _MACOS
    if ( (_MACOS   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MACOS  \t\t => %d\n", _MACOS   + 0);
    } else {
        strcat(buffer, "_MACOS\n");
    }
#endif
#ifdef _MACOS_
    if ( (_MACOS_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MACOS_  \t\t => %d\n", _MACOS_   + 0);
    } else {
        strcat(buffer, "_MACOS_\n");
    }
#endif
#ifdef __MACOS
    if ( (__MACOS   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MACOS  \t\t => %d\n", __MACOS   + 0);
    } else {
        strcat(buffer, "__MACOS\n");
    }
#endif
#ifdef __MACOS__
    if ( (__MACOS__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MACOS__  \t\t => %d\n", __MACOS__   + 0);
    } else {
        strcat(buffer, "__MACOS__\n");
    }
#endif

/* aix */
#ifdef AIX
    if ( (AIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "AIX\t\t => %d\n", AIX + 0);
    } else {
        strcat(buffer, "AIX\n");
    }
#endif
#ifdef _AIX
    if ( (_AIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIX\t\t => %d\n", _AIX + 0);
    } else {
        strcat(buffer, "_AIX\n");
    }
#endif
#ifdef _AIX_
    if ( (_AIX_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIX_\t\t => %d\n", _AIX_ + 0);
    } else {
        strcat(buffer, "_AIX_\n");
    }
#endif
#ifdef __AIX
    if ( (__AIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AIX\t\t => %d\n", __AIX + 0);
    } else {
        strcat(buffer, "__AIX\n");
    }
#endif
#ifdef __AIX__
    if ( (__AIX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AIX__\t\t => %d\n", __AIX__ + 0);
    } else {
        strcat(buffer, "__AIX__\n");
    }
#endif

#ifdef _AIX32
    if ( (_AIX32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIX32\t\t => %d\n", _AIX32 + 0);
    } else {
        strcat(buffer, "_AIX32\n");
    }
#endif
#ifdef __AIX32
    if ( (__AIX32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AIX32\t\t => %d\n", __AIX32 + 0);
    } else {
        strcat(buffer, "__AIX32\n");
    }
#endif
#ifdef __AIX32__
    if ( (__AIX32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AIX32__\t\t => %d\n", __AIX32__ + 0);
    } else {
        strcat(buffer, "__AIX32__\n");
    }
#endif






/* ## linux ## */
#ifdef linux
    if ( (linux + 1) > 1) {
        sprintf(buffer + strlen(buffer), "linux    \t\t => %d\n", linux + 0);
    } else {
        strcat(buffer, "linux\n");
    }
#endif
#ifdef _linux
    if ( (_linux + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_linux\t\t => %d\n", _linux + 0);
    } else {
        strcat(buffer, "_linux\n");
    }
#endif
#ifdef _linux_
    if ( (_linux_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_linux_\t\t => %d\n", _linux_ + 0);
    } else {
        strcat(buffer, "_linux_\n");
    }
#endif
#ifdef __linux
    if ( (__linux + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__linux  \t\t => %d\n", __linux + 0);
    } else {
        strcat(buffer, "__linux\n");
    }
#endif
#ifdef __linux__
    if ( (__linux__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__linux__\t\t => %d\n", __linux__ + 0);
    } else {
        strcat(buffer, "__linux__\n");
    }
#endif


#ifdef __LINUX__
    if ( (__LINUX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LINUX__\t\t => %d\n", __LINUX__ + 0);
    } else {
        strcat(buffer, "__LINUX__\n");
    }
#endif


#ifdef __HOS_LINUX__
    if ( (__HOS_LINUX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HOS_LINUX__\t\t => %d\n", __HOS_LINUX__ + 0);
    } else {
        strcat(buffer, "__HOS_LINUX__\n");
    }
#endif
#ifdef __TOS_LINUX__
    if ( (__TOS_LINUX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TOS_LINUX__\t\t => %d\n", __TOS_LINUX__ + 0);
    } else {
        strcat(buffer, "__TOS_LINUX__\n");
    }
#endif


/* ## unix ##*/
#ifdef unix
    if ( (unix + 1) > 1) {
        sprintf(buffer + strlen(buffer), "unix\t\t\t => %d\n", unix + 0);
    } else {
        strcat(buffer, "unix\n");
    }
#endif

#ifdef _unix
    if ( (_unix + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_unix\t\t\t => %d\n", _unix + 0);
    } else {
        strcat(buffer, "_unix\n");
    }
#endif
#ifdef _unix_
    if ( (_unix_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_unix_\t\t => %d\n", _unix_ + 0);
    } else {
        strcat(buffer, "_unix_\n");
    }
#endif
#ifdef __unix
    if ( (__unix + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__unix\t\t\t => %d\n", __unix + 0);
    } else {
        strcat(buffer, "__unix\n");
    }
#endif
#ifdef __unix__
    if ( (__unix__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__unix__\t\t => %d\n", __unix__ + 0);
    } else {
        strcat(buffer, "__unix__\n");
    }
#endif

#ifdef UNIX
    if ( (UNIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "UNIX\t\t => %d\n", UNIX + 0);
    } else {
        strcat(buffer, "UNIX\n");
    }
#endif
#ifdef _UNIX
    if ( (_UNIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_UNIX\t\t => %d\n", _UNIX + 0);
    } else {
        strcat(buffer, "_UNIX\n");
    }
#endif
#ifdef _UNIX_
    if ( (_UNIX_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_UNIX_\t\t => %d\n", _UNIX_ + 0);
    } else {
        strcat(buffer, "_UNIX_\n");
    }
#endif
#ifdef __UNIX
    if ( (__UNIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__UNIX\t\t => %d\n", __UNIX + 0);
    } else {
        strcat(buffer, "__UNIX\n");
    }
#endif
#ifdef __UNIX__
    if ( (__UNIX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__UNIX__\t\t => %d\n", __UNIX__ + 0);
    } else {
        strcat(buffer, "__UNIX__\n");
    }
#endif


#ifdef _M_UINIX
    if ( (_M_UINIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_UINIX \t\t => %d\n", _M_UINIX + 0);
    } else {
        strcat(buffer, "_M_UINIX\n");
    }
#endif


/* BSD variants */

#ifdef i386BSD
    if ( (i386BSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "i386BSD \t\t => %d\n", i386BSD + 0);
    } else {
        strcat(buffer, "i386BSD\n");
    }
#endif

#ifdef _i386BSD
    if ( (_i386BSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i386BSD \t\t => %d\n", _i386BSD + 0);
    } else {
        strcat(buffer, "_i386BSD\n");
    }
#endif

#ifdef _i386BSD_
    if ( (_i386BSD_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i386BSD_ \t\t => %d\n", _i386BSD_ + 0);
    } else {
        strcat(buffer, "_i386BSD_\n");
    }
#endif

#ifdef __i386BSD
    if ( (__i386BSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i386BSD \t\t => %d\n", __i386BSD + 0);
    } else {
        strcat(buffer, "__i386BSD\n");
    }
#endif

#ifdef __i386BSD__
    if ( (__i386BSD__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i386BSD__ \t\t => %d\n", __i386BSD__ + 0);
    } else {
        strcat(buffer, "__i386BSD__\n");
    }
#endif



#ifdef FreeBSD
    if ( (FreeBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "FreeBSD \t\t => %d\n", FreeBSD + 0);
    } else {
        strcat(buffer, "FreeBSD\n");
    }
#endif

#ifdef _FreeBSD
    if ( (_FreeBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FreeBSD \t\t => %d\n", _FreeBSD + 0);
    } else {
        strcat(buffer, "_FreeBSD\n");
    }
#endif

#ifdef _FreeBSD_
    if ( (_FreeBSD_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FreeBSD_ \t\t => %d\n", _FreeBSD_ + 0);
    } else {
        strcat(buffer, "_FreeBSD_\n");
    }
#endif

#ifdef __FreeBSD
    if ( (__FreeBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FreeBSD \t\t => %d\n", __FreeBSD + 0);
    } else {
        strcat(buffer, "__FreeBSD\n");
    }
#endif

#ifdef __FreeBSD__
    if ( (__FreeBSD__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FreeBSD__ \t\t => %d\n", __FreeBSD__ + 0);
    } else {
        strcat(buffer, "__FreeBSD__\n");
    }
#endif


#ifdef NetBSD
    if ( (NetBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NetBSD \t\t => %d\n", NetBSD + 0);
    } else {
        strcat(buffer, "NetBSD\n");
    }
#endif

#ifdef _NetBSD
    if ( (_NetBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NetBSD \t\t => %d\n", _NetBSD + 0);
    } else {
        strcat(buffer, "_NetBSD\n");
    }
#endif

#ifdef _NetBSD_
    if ( (_NetBSD_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NetBSD_ \t\t => %d\n", _NetBSD_ + 0);
    } else {
        strcat(buffer, "_NetBSD_\n");
    }
#endif

#ifdef __NetBSD
    if ( (__NetBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NetBSD \t\t => %d\n", __NetBSD + 0);
    } else {
        strcat(buffer, "__NetBSD\n");
    }
#endif

#ifdef __NetBSD__
    if ( (__NetBSD__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NetBSD__ \t\t => %d\n", __NetBSD__ + 0);
    } else {
        strcat(buffer, "__NetBSD__\n");
    }
#endif


#ifdef OpenBSD
    if ( (OpenBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "OpenBSD \t\t => %d\n", OpenBSD + 0);
    } else {
        strcat(buffer, "OpenBSD\n");
    }
#endif

#ifdef _OpenBSD
    if ( (_OpenBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OpenBSD \t\t => %d\n", _OpenBSD + 0);
    } else {
        strcat(buffer, "_OpenBSD\n");
    }
#endif

#ifdef _OpenBSD_
    if ( (_OpenBSD_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OpenBSD_ \t\t => %d\n", _OpenBSD_ + 0);
    } else {
        strcat(buffer, "_OpenBSD_\n");
    }
#endif

#ifdef __OpenBSD
    if ( (__OpenBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OpenBSD \t\t => %d\n", __OpenBSD + 0);
    } else {
        strcat(buffer, "__OpenBSD\n");
    }
#endif

#ifdef __OpenBSD__
    if ( (__OpenBSD__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OpenBSD__ \t\t => %d\n", __OpenBSD__ + 0);
    } else {
        strcat(buffer, "__OpenBSD__\n");
    }
#endif


/* posix */
#ifdef POSIX
    if ( (POSIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "POSIX\t\t => %d\n", POSIX + 0);
    } else {
        strcat(buffer, "POSIX\n");
    }
#endif
#ifdef _POSIX
    if ( (_POSIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX\t\t => %d\n", _POSIX + 0);
    } else {
        strcat(buffer, "_POSIX\n");
    }
#endif
#ifdef _POSIX_
    if ( (_POSIX_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX_\t\t => %d\n", _POSIX_ + 0);
    } else {
        strcat(buffer, "_POSIX_\n");
    }
#endif
#ifdef __POSIX
    if ( (__POSIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POSIX\t\t => %d\n", __POSIX + 0);
    } else {
        strcat(buffer, "__POSIX\n");
    }
#endif
#ifdef __POSIX__
    if ( (__POSIX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POSIX__\t\t => %d\n", __POSIX__ + 0);
    } else {
        strcat(buffer, "__POSIX__\n");
    }
#endif



/* ## OS2 ## */
#ifdef __OS2__
    if ( (__OS2__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OS2__ \t\t => %d\n", __OS2__  + 0);
    } else {
        strcat(buffer, "__OS2__\n");
    }
#endif

#ifdef __OS2V2__
    if ( (__OS2V2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OS2V2__\t\t => %d\n", __OS2V2__ + 0);

    } else {
        strcat(buffer, "__OS2V2__\n");
    }
#endif



/* ## DOS ## */
#ifdef DOS
    if ( (DOS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DOS\t\t\t => %d\n", DOS + 0);
    } else {
        strcat(buffer, "DOS\n");
    }
#endif

#ifdef _DOS
    if ( (_DOS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DOS\t\t\t => %d\n", _DOS + 0);
    } else {
        strcat(buffer, "_DOS\n");
    }
#endif

#ifdef _DOS_
    if ( (_DOS_  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DOS_ \t\t => %d\n", _DOS_  + 0);
    } else {
        strcat(buffer, "_DOS_\n");
    }
#endif

#ifdef __DOS
    if ( (__DOS  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DOS\t\t => %d\n", __DOS + 0);
    } else {
        strcat(buffer, "__DOS\n");
    }
#endif
#ifdef __DOS__
    if ( (__DOS__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DOS__ \t\t => %d\n", __DOS__  + 0);
    } else {
        strcat(buffer, "__DOS__\n");
    }
#endif

#ifdef MSDOS
    if ( (MSDOS    + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MSDOS   \t\t => %d\n", MSDOS    + 0);
    } else {
        strcat(buffer, "MSDOS\n");
    }
#endif

#ifdef _MSDOS
    if ( (_MSDOS    + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSDOS   \t\t => %d\n", _MSDOS    + 0);
    } else {
        strcat(buffer, "_MSDOS\n");
    }
#endif

#ifdef _MSDOS_
    if ( (_MSDOS_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSDOS_\t\t => %d\n", _MSDOS_ + 0);
    } else {
        strcat(buffer, "_MSDOS_\n");
    }
#endif


#ifdef __MSDOS
    if ( (__MSDOS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MSDOS\t\t => %d\n", __MSDOS + 0);
    } else {
        strcat(buffer, "__MSDOS\n");
    }
#endif

#ifdef __MSDOS__
    if ( (__MSDOS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MSDOS__ \t => %d\n", __MSDOS__ + 0);
    } else {
        strcat(buffer, "__MSDOS__\n");
    }
#endif

/* ################### */
/* source type */
#ifdef _GNU_SOURCE
    if ( (_GNU_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_GNU_SOURCE \t => %d\n", _GNU_SOURCE + 0);
    } else {
        strcat(buffer, "_GNU_SOURCE\n");
    }
#endif


#ifdef _POSIX_SOURCE
    if ( (_POSIX_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX_SOURCE  \t\t => %d\n", _POSIX_SOURCE   + 0);
    } else {
        strcat(buffer, "_POSIX_SOURCE\n");
    }
#endif


#ifdef ANSI_C_SOURCE
    if ( (ANSI_C_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ANSI_C_SOURCE\t\t => %d\n", ANSI_C_SOURCE + 0);
    } else {
        strcat(buffer, "ANSI_C_SOURCE\n");
    }
#endif

#ifdef _ANSI_C_SOURCE
    if ( (_ANSI_C_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANSI_C_SOURCE\t\t => %d\n", _ANSI_C_SOURCE + 0);
    } else {
        strcat(buffer, "_ANSI_C_SOURCE\n");
    }
#endif

#ifdef _ANSI_C_SOURCE_
    if ( (_ANSI_C_SOURCE_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANSI_C_SOURCE_\t\t => %d\n", _ANSI_C_SOURCE_ + 0);
    } else {
        strcat(buffer, "_ANSI_C_SOURCE_\n");
    }
#endif

#ifdef __ANSI_C_SOURCE
    if ( (__ANSI_C_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANSI_C_SOURCE\t\t => %d\n", __ANSI_C_SOURCE + 0);
    } else {
        strcat(buffer, "__ANSI_C_SOURCE\n");
    }
#endif

#ifdef __ANSI_C_SOURCE__
    if ( (__ANSI_C_SOURCE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANSI_C_SOURCE__\t\t => %d\n", __ANSI_C_SOURCE__ + 0);
    } else {
        strcat(buffer, "__ANSI_C_SOURCE__\n");
    }
#endif


#ifdef BSD_SOURCE
    if ( (BSD_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "BSD_SOURCE  \t\t => %d\n", BSD_SOURCE   + 0);
    } else {
        strcat(buffer, "BSD_SOURCE\n");
    }
#endif
#ifdef _BSD_SOURCE
    if ( (_BSD_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BSD_SOURCE  \t\t => %d\n", _BSD_SOURCE   + 0);
    } else {
        strcat(buffer, "_BSD_SOURCE  \n");
    }
#endif
#ifdef _BSD_SOURCE_
    if ( (_BSD_SOURCE_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BSD_SOURCE_  \t\t => %d\n", _BSD_SOURCE_   + 0);
    } else {
        strcat(buffer, "_BSD_SOURCE_  \n");
    }
#endif
#ifdef __BSD_SOURCE
    if ( (__BSD_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BSD_SOURCE  \t\t => %d\n", __BSD_SOURCE   + 0);
    } else {
        strcat(buffer, "__BSD_SOURCE  \n");
    }
#endif
#ifdef __BSD_SOURCE__
    if ( (__BSD_SOURCE__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BSD_SOURCE__  \t\t => %d\n", __BSD_SOURCE__   + 0);
    } else {
        strcat(buffer, "__BSD_SOURCE__  \n");
    }
#endif



/* ################### */
/* optimize */

#ifdef OPTIMIZE
    if ( (OPTIMIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "OPTIMIZE \t => %d\n", OPTIMIZE + 0);
    } else {
        strcat(buffer, "OPTIMIZE\n");
    }
#endif


#ifdef _OPTIMIZE
    if ( (_OPTIMIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OPTIMIZE \t => %d\n", _OPTIMIZE + 0);
    } else {
        strcat(buffer, "_OPTIMIZE\n");
    }
#endif
#ifdef _OPTIMIZE_
    if ( (_OPTIMIZE_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OPTIMIZE_ \t => %d\n", _OPTIMIZE_ + 0);
    } else {
        strcat(buffer, "_OPTIMIZE_\n");
    }
#endif
#ifdef __OPTIMIZE
    if ( (__OPTIMIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE \t => %d\n", __OPTIMIZE + 0);
    } else {
        strcat(buffer, "__OPTIMIZE\n");
    }
#endif
#ifdef __OPTIMIZE__
    if ( (__OPTIMIZE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE__ \t => %d\n", __OPTIMIZE__ + 0);
    } else {
        strcat(buffer, "__OPTIMIZE__\n");
    }
#endif

#ifdef OPTIMIZE_SIZE
    if ( (OPTIMIZE_SIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "OPTIMIZE_SIZE \t => %d\n", OPTIMIZE_SIZE + 0);
    } else {
        strcat(buffer, "OPTIMIZE_SIZE\n");
    }
#endif


#ifdef _OPTIMIZE_SIZE
    if ( (_OPTIMIZE_SIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OPTIMIZE_SIZE \t => %d\n", _OPTIMIZE_SIZE + 0);
    } else {
        strcat(buffer, "_OPTIMIZE_SIZE\n");
    }
#endif


#ifdef _OPTIMIZE_SIZE_
    if ( (_OPTIMIZE_SIZE_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OPTIMIZE_SIZE_ \t => %d\n", _OPTIMIZE_SIZE_ + 0);
    } else {
        strcat(buffer, "_OPTIMIZE_SIZE_\n");
    }
#endif


#ifdef __OPTIMIZE_SIZE
    if ( (__OPTIMIZE_SIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE_SIZE \t => %d\n", __OPTIMIZE_SIZE + 0);
    } else {
        strcat(buffer, "__OPTIMIZE_SIZE\n");
    }
#endif

#ifdef __OPTIMIZE_SIZE__
    if ( (__OPTIMIZE_SIZE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE_SIZE__ \t => %d\n", __OPTIMIZE_SIZE__ + 0);
    } else {
        strcat(buffer, "__OPTIMIZE_SIZE__\n");
    }
#endif

/* inline */
#ifdef __NO_INLINE__
    if ( (__NO_INLINE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NO_INLINE__\t\t => %d\n", __NO_INLINE__ + 0);
    } else {
        strcat(buffer, "__NO_INLINE__\n");
    }
#endif

#ifdef __GNUC_GNU_INLINE__
    if ( (__GNUC_GNU_INLINE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_GNU_INLINE__ \t => %d\n", __GNUC_GNU_INLINE__ + 0);
    } else {
        strcat(buffer, "__GNUC_GNU_INLINE__\n");
    }
#endif

#ifdef __GNUC_STDC_INLINE__
    if ( (__GNUC_STDC_INLINE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_STDC_INLINE__ \t => %d\n", __GNUC_STDC_INLINE__ + 0);
    } else {
        strcat(buffer, "__GNUC_STDC_INLINE__\n");
    }
#endif




/* ################### */
/* target format */


#ifdef ELF
    if ( (ELF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ELF\t\t\t => %d\n", ELF + 0);
    } else {
        strcat(buffer, "ELF\n");
    }
#endif

#ifdef _ELF
    if ( (_ELF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ELF\t\t\t => %d\n", _ELF + 0);
    } else {
        strcat(buffer, "_ELF\n");
    }
#endif


#ifdef _ELF_
    if ( (_ELF_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ELF_\t\t\t => %d\n", _ELF_ + 0);
    } else {
        strcat(buffer, "_ELF_\n");
    }
#endif


#ifdef __ELF
    if ( (__ELF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ELF\t\t\t => %d\n", __ELF + 0);
    } else {
        strcat(buffer, "__ELF\n");
    }
#endif


#ifdef __ELF__
    if ( (__ELF__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ELF__\t\t\t => %d\n", __ELF__ + 0);
    } else {
        strcat(buffer, "__ELF__\n");
    }
#endif

#ifdef _LP64
    if ( (_LP64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LP64\t\t\t => %d\n", _LP64 + 0);
    } else {
        strcat(buffer, "_LP64\n");
    }
#endif
#ifdef __LP64
    if ( (__LP64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LP64\t\t\t => %d\n", __LP64 + 0);
    } else {
        strcat(buffer, "__LP64\n");
    }
#endif
#ifdef __LP64__
    if ( (__LP64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LP64__\t\t\t => %d\n", __LP64__ + 0);
    } else {
        strcat(buffer, "__LP64__\n");
    }
#endif

/* cpu features */
#ifdef __ALTIVEC__
    if ( (__ALTIVEC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ALTIVEC__ \t\t => %d\n", __ALTIVEC__ + 0);
    } else {
        strcat(buffer, "__ALTIVEC__\n");
    }
#endif


/* endian */
#ifdef BIG_ENDIAN
    if ( (BIG_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "BIG_ENDIAN \t\t => %d\n", BIG_ENDIAN + 0);
    } else {
        strcat(buffer, "BIG_ENDIAN\n");
    }
#endif
#ifdef _BIG_ENDIAN
    if ( (_BIG_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BIG_ENDIAN \t\t => %d\n", _BIG_ENDIAN + 0);
    } else {
        strcat(buffer, "_BIG_ENDIAN\n");
    }
#endif
#ifdef _BIG_ENDIAN_
    if ( (_BIG_ENDIAN_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BIG_ENDIAN_ \t\t => %d\n", _BIG_ENDIAN_ + 0);
    } else {
        strcat(buffer, "_BIG_ENDIAN_\n");
    }
#endif
#ifdef __BIG_ENDIAN
    if ( (__BIG_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BIG_ENDIAN \t\t => %d\n", __BIG_ENDIAN + 0);
    } else {
        strcat(buffer, "__BIG_ENDIAN\n");
    }
#endif
#ifdef __BIG_ENDIAN__
    if ( (__BIG_ENDIAN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BIG_ENDIAN__ \t\t => %d\n", __BIG_ENDIAN__ + 0);
    } else {
        strcat(buffer, "__BIG_ENDIAN__\n");
    }
#endif



#ifdef BYTE_ORDER
    if ( (BYTE_ORDER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "BYTE_ORDER \t\t => %d\n", BYTE_ORDER + 0);
    } else {
        strcat(buffer, "BYTE_ORDER\n");
    }
#endif

#ifdef _BYTE_ORDER
    if ( (_BYTE_ORDER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BYTE_ORDER \t\t => %d\n", _BYTE_ORDER + 0);
    } else {
        strcat(buffer, "_BYTE_ORDER\n");
    }
#endif

#ifdef _BYTE_ORDER_
    if ( (_BYTE_ORDER_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BYTE_ORDER_ \t\t => %d\n", _BYTE_ORDER_ + 0);
    } else {
        strcat(buffer, "_BYTE_ORDER_\n");
    }
#endif

#ifdef __BYTE_ORDER
    if ( (__BYTE_ORDER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BYTE_ORDER \t\t => %d\n", __BYTE_ORDER + 0);
    } else {
        strcat(buffer, "__BYTE_ORDER\n");
    }
#endif

#ifdef __BYTE_ORDER__
    if ( (__BYTE_ORDER__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BYTE_ORDER__ \t\t => %d\n", __BYTE_ORDER__ + 0);
    } else {
        strcat(buffer, "__BYTE_ORDER__\n");
    }
#endif



/* ################### */
/* sizes */


#ifdef CHAR_UNSIGNED
    if ( (CHAR_UNSIGNED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "CHAR_UNSIGNED\t\t => %d\n", CHAR_UNSIGNED + 0);
    } else {
        strcat(buffer, "CHAR_UNSIGNED\n");
    }
#endif
#ifdef _CHAR_UNSIGNED
    if ( (_CHAR_UNSIGNED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CHAR_UNSIGNED\t\t => %d\n", _CHAR_UNSIGNED + 0);
    } else {
        strcat(buffer, "_CHAR_UNSIGNED\n");
    }
#endif
#ifdef _CHAR_UNSIGNED_
    if ( (_CHAR_UNSIGNED_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CHAR_UNSIGNED_\t\t => %d\n", _CHAR_UNSIGNED_ + 0);
    } else {
        strcat(buffer, "_CHAR_UNSIGNED_\n");
    }
#endif

#ifdef __CHAR_UNSIGNED
    if ( (__CHAR_UNSIGNED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CHAR_UNSIGNED\t\t => %d\n", __CHAR_UNSIGNED + 0);
    } else {
        strcat(buffer, "__CHAR_UNSIGNED\n");
    }
#endif


#ifdef __CHAR_UNSIGNED__
    if ( (__CHAR_UNSIGNED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CHAR_UNSIGNED__\t\t => %d\n", __CHAR_UNSIGNED__ + 0);
    } else {
        strcat(buffer, "__CHAR_UNSIGNED__\n");
    }
#endif


#ifdef __WCHAR_UNSIGNED__
    if ( (__WCHAR_UNSIGNED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WCHAR_UNSIGNED__\t\t => %d\n", __WCHAR_UNSIGNED__ + 0);
    } else {
        strcat(buffer, "__WCHAR_UNSIGNED__\n");
    }
#endif


/* size of data types */

#ifdef __CHAR_BIT__
    sprintf(buffer+strlen(buffer), "__CHAR_BIT__\t\t => %d\n", __CHAR_BIT__);
#endif

#ifdef __SCHAR_MAX__
    sprintf(buffer+strlen(buffer), "__SCHAR_MAX__\t\t => 0x%x\n", __SCHAR_MAX__);
#endif

#ifdef __WCHAR_MAX__
    sprintf(buffer+strlen(buffer), "__WCHAR_MAX__\t\t => 0x%x\n", __WCHAR_MAX__);
#endif

#ifdef __SHRT_MAX__
    sprintf(buffer+strlen(buffer), "__SHRT_MAX__\t\t => 0x%x\n", __SHRT_MAX__);
#endif

#ifdef __INT_MAX__
    sprintf(buffer+strlen(buffer), "__INT_MAX__\t\t => 0x%x\n", __INT_MAX__);
#endif

#ifdef __LONG_MAX__
    sprintf(buffer+strlen(buffer), "__LONG_MAX__\t\t => 0x%lx\n", __LONG_MAX__);
#endif

#ifdef __LONG_LONG_MAX__
    sprintf(buffer+strlen(buffer), "__LONG_LONG_MAX__\t => 0x%llx\n", __LONG_LONG_MAX__);
#endif

#ifdef __INTMAX_MAX__
    sprintf(buffer+strlen(buffer), "__INTMAX_MAX__\t\t => 0x%llx\n", __INTMAX_MAX__);
#endif
#ifdef __UINTMAX_MAX__
    sprintf(buffer+strlen(buffer), "__UINTMAX_MAX__\t\t => 0x%llx\n", __UINTMAX_MAX__);
#endif

#ifdef _INTEGRAL_MAX_BITS
    sprintf(buffer+strlen(buffer), "_INTEGRAL_MAX_BITS\t => 0x%x\n", _INTEGRAL_MAX_BITS);
#endif


/* ################### */
/* float */

#ifdef _SOFT_FLOAT
    if ( (_SOFT_FLOAT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SOFT_FLOAT\t\t\t => %d\n", _SOFT_FLOAT + 0);
    } else {
        strcat(buffer, "_SOFT_FLOAT\n");
    }
#endif



/* ################### */
/* types */


#ifdef __PTRDIFF_TYPE__
     sprintf(buffer+strlen(buffer), "__PTRDIFF_TYPE__ \t => size is %d\n", sizeof( __PTRDIFF_TYPE__ ) );
#endif

#ifdef __SIZE_TYPE__
     sprintf(buffer+strlen(buffer), "__SIZE_TYPE__\t\t => size is %d\n", sizeof( __SIZE_TYPE__ ) );
#endif

#ifdef __WCHAR_TYPE__
     sprintf(buffer+strlen(buffer), "__WCHAR_TYPE__\t\t => size is %d\n", sizeof( __WCHAR_TYPE__ ) );
#endif

#ifdef __WINT_TYPE__
    sprintf(buffer+strlen(buffer), "__WINT_TYPE__\t\t => size is %d\n", sizeof( __WINT_TYPE__ ) );
#endif

#ifdef __INTMAX_TYPE__
    sprintf(buffer+strlen(buffer), "__INTMAX_TYPE__\t\t => size is %d\n", sizeof( __INTMAX_TYPE__ ) );
#endif

#ifdef __UINTMAX_TYPE__
    sprintf(buffer+strlen(buffer), "__UINTMAX_TYPE__ \t => size is %d\n", sizeof( __UINTMAX_TYPE__ ) );
#endif

/* other */
#ifdef __REGISTER_PREFIX__
    strcat(buffer, "__REGISTER_PREFIX__\n");
#endif

#ifdef __USER_LABEL_PREFIX__
     strcat(buffer,  "__USER_LABEL_PREFIX__\n" );
#endif



/* ################### */
/* memory modell */
#ifdef TINY
    if ( (TINY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "TINY\t\t\t => %d\n", TINY + 0);
    } else {
        strcat(buffer, "TINY\n");
    }
#endif

#ifdef _TINY
    if ( (_TINY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TINY\t\t\t => %d\n", _TINY + 0);
    } else {
        strcat(buffer, "_TINY\n");
    }
#endif

#ifdef __TINY__
    if ( (__TINY__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TINY__\t\t => %d\n", __TINY__ + 0);
    } else {
        strcat(buffer, "__TINY__\n");
    }
#endif


#ifdef SMALL
    if ( (SMALL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "SMALL\t\t\t => %d\n", SMALL + 0);
    } else {
        strcat(buffer, "SMALL\n");
    }
#endif

#ifdef _SMALL
    if ( (_SMALL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SMALL\t\t\t => %d\n", _SMALL + 0);
    } else {
        strcat(buffer, "_SMALL\n");
    }
#endif

#ifdef __SMALL__
    if ( (__SMALL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SMALL__\t\t => %d\n", __SMALL__ + 0);
    } else {
        strcat(buffer, "__SMALL__\n");
    }
#endif

#ifdef __MEDIUM__
    if ( (__MEDIUM__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MEDIUM__\t\t => %d\n", __MEDIUM__ + 0);
    } else {
        strcat(buffer, "__MEDIUM__\n");
    }
#endif

#ifdef __COMPACT__
    if ( (__COMPACT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__COMPACT__\t\t => %d\n", __COMPACT__ + 0);
    } else {
        strcat(buffer, "__COMPACT__\n");
    }
#endif


#ifdef __LARGE__
    if ( (__LARGE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LARGE__\t\t => %d\n", __LARGE__ + 0);
    } else {
        strcat(buffer, "__LARGE__\n");
    }
#endif

#ifdef __HUGE__
    if ( (__HUGE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HUGE__\t\t => %d\n", __HUGE__ + 0);
    } else {
        strcat(buffer, "__HUGE__\n");
    }
#endif

#ifdef __FLAT__
    if ( (__FLAT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FLAT__\t\t => %d\n", __FLAT__ + 0);
    } else {
        strcat(buffer, "__FLAT__\n");
    }
#endif

/* ################### */
/* calling convention */

#ifdef _CALL_SYSV
    if ( (_CALL_SYSV + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CALL_SYSV \t => %d\n", _CALL_SYSV + 0);
    } else {
        strcat(buffer, "_CALL_SYSV\n");
    }
#endif



#ifdef stdcall
    strcat(buffer, "stdcall\n");
#endif
#ifdef _stdcall
    strcat(buffer, "_stdcall\n");
#endif
#ifdef __stdcall
    strcat(buffer, "__stdcall\n");
#endif

#ifdef cdecl
    strcat(buffer, "cdecl\n");
#endif
#ifdef _cdecl
    strcat(buffer, "_cdecl\n");
#endif
#ifdef __cdecl
    strcat(buffer, "__cdecl\n");
#endif

#ifdef pascal
    strcat(buffer, "pascal\n");
#endif
#ifdef _pascal
    strcat(buffer, "_pascal\n");
#endif
#ifdef __pascal
    strcat(buffer, "__pascal\n");
#endif

/* ################### */
/* includes */

#ifdef __INCLUDE_LEVEL__
    if ( (__INCLUDE_LEVEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__INCLUDE_LEVEL__\t\t => %d\n", __INCLUDE_LEVEL__ + 0);
    } else {
        strcat(buffer, "__INCLUDE_LEVEL__\n");
    }
#endif

#ifdef _BSD_TYPES_DEFINED
    if ( (_BSD_TYPES_DEFINED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BSD_TYPES_DEFINED\t => %d\n", _BSD_TYPES_DEFINED + 0);
    } else {
        strcat(buffer, "_BSD_TYPES_DEFINED\n");
    }
#endif

#ifdef _BSDTYPES_DEFINED
    if ( (_BSDTYPES_DEFINED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BSDTYPES_DEFINED\t => %d\n", _BSDTYPES_DEFINED + 0);
    } else {
        strcat(buffer, "_BSDTYPES_DEFINED\n");
    }
#endif

#ifdef __TYPES_H_INCLUDED
    if ( (__TYPES_H_INCLUDED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TYPES_H_INCLUDED\t\t => %d\n", __TYPES_H_INCLUDED + 0);
    } else {
        strcat(buffer, "__TYPES_H_INCLUDED\n");
    }
#endif


#ifdef _TYPES_H
    if ( (_TYPES_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TYPES_H\t\t => %d\n", _TYPES_H + 0);
    } else {
        strcat(buffer, "_TYPES_H\n");
    }
#endif

#ifdef _SYS_TYPES_H
    if ( (_SYS_TYPES_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_TYPES_H\t\t => %d\n", _SYS_TYPES_H + 0);
    } else {
        strcat(buffer, "_SYS_TYPES_H\n");
    }
#endif


/* windows includes */
#ifdef _WINSOCKAPI_
    if ( (_WINSOCKAPI_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINSOCKAPI_\t\t => %d\n", _WINSOCKAPI_ + 0);
    } else {
        strcat(buffer, "_WINSOCKAPI_\n");
    }
#endif


#ifdef _WINSOCK_H
    if ( (_WINSOCK_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINSOCK_H\t\t => %d\n", _WINSOCK_H + 0);
    } else {
        strcat(buffer, "_WINSOCK_H\n");
    }
#endif

#ifdef _WINSOCKAPI2_
    if ( (_WINSOCKAPI2_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINSOCKAPI2_\t\t => %d\n", _WINSOCKAPI2_ + 0);
    } else {
        strcat(buffer, "_WINSOCKAPI2_\n");
    }
#endif

#ifdef _WINSOCK2_H
    if ( (_WINSOCK2_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINSOCK2_H\t\t => %d\n", _WINSOCK2_H + 0);
    } else {
        strcat(buffer, "_WINSOCK2_H\n");
    }
#endif


#ifdef _WINDOWS_H
    if ( (_WINDOWS_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINDOWS_H\t\t => %d\n", _WINDOWS_H + 0);
    } else {
        strcat(buffer, "_WINDOWS_H\n");
    }
#endif

#ifdef _INC_WINDOWS
    if ( (_INC_WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_INC_WINDOWS\t\t => %d\n", _INC_WINDOWS + 0);
    } else {
        strcat(buffer, "_INC_WINDOWS\n");
    }
#endif

#ifdef _INC_WINDOWS_H
    if ( (_INC_WINDOWS_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_INC_WINDOWS_H\t\t => %d\n", _INC_WINDOWS_H + 0);
    } else {
        strcat(buffer, "_INC_WINDOWS_H\n");
    }
#endif


/* ################### */

#ifdef USE_WINDOWS
    if ( (USE_WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "USE_WINDOWS\t\t => %d\n", USE_WINDOWS + 0);
    } else {
        strcat(buffer, "USE_WINDOWS\n");
    }
#endif

#ifdef NO_GUI
    if ( (NO_GUI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NO_GUI\t\t => %d\n", NO_GUI + 0);
    } else {
        strcat(buffer, "NO_GUI\n");
    }
#endif


#ifdef NO_STDIO
    if ( (NO_STDIO + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NO_STDIO\t\t => %d\n", NO_STDIO + 0);
    } else {
        strcat(buffer, "NO_STDIO\n");
    }
#endif

#ifdef NO_MAIN
    if ( (NO_MAIN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NO_MAIN\t\t => %d\n", NO_MAIN + 0);
    } else {
        strcat(buffer, "NO_MAIN\n");
    }
#endif



#ifdef NO_WINMAIN
    if ( (NO_WINMAIN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NO_WINMAIN\t\t => %d\n", NO_WINMAIN + 0);
    } else {
        strcat(buffer, "NO_WINMAIN\n");
    }
#endif

    sprintf(buffer+strlen(buffer), "(need%4d byte)", strlen(buffer) + 16);

#endif

    return buffer;
}

/* ####### */

#ifndef NO_WINMAIN
#ifdef USE_WINDOWS
// int PASCAL WinMain (struct HINSTANCE__ * hInstance, struct HINSTANCE__ * hPrevInstance, LPSTR lpCmdLine, int nCmdChow)
// int PASCAL WinMain (HANDLE hInstance, HANDLE hPrevInstance, LPSTR lpCmdLine, int nCmdChow)
int PASCAL WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdChow)
{
    char	buffer[BUFFERSIZE];

    get_txt(buffer);

#ifndef NO_GUI
    MessageBox(NULL, buffer, "Hello World", MB_OK);
#endif
#ifndef NO_STDIO
    printf("%s\n", buffer);
#endif
    return 0;
}
#endif
#endif

/* ####### */

#ifndef NO_MAIN
int main(int argc, char ** argv)
{
    char buffer[BUFFERSIZE];

    get_txt(buffer);
#ifndef NO_STDIO
    printf("%s\n", buffer);
#endif
    return 0;    
}
#endif

/* ####### */


#ifdef __cplusplus
}
#endif
