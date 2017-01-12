#ifndef _INCLUDE_CPPUNIT_CONFIG_AUTO_H
#define _INCLUDE_CPPUNIT_CONFIG_AUTO_H

/* include/cppunit/config-auto.h. Generated automatically at end of configure. */

/* define if library uses std::string::compare(string,pos,n) */
/* #undef CPPUNIT_FUNC_STRING_COMPARE_STRING_FIRST */

/* define if the library defines strstream */
#define CPPUNIT_HAVE_CLASS_STRSTREAM 1

/* Define if you have the <cmath> header file. */
#define CPPUNIT_HAVE_CMATH 1

/* Define if you have the GNU dld library. */
/* #undef CPPUNIT_HAVE_DLD */

/* Define if you have the `dlerror' function. */
#define CPPUNIT_HAVE_DLERROR 1

/* Define if you have the <dlfcn.h> header file. */
#define CPPUNIT_HAVE_DLFCN_H 1

/* Define if you have the `finite' function. */
#define CPPUNIT_HAVE_FINITE 1

/* define if the compiler supports GCC C++ ABI name demangling */
//#define CPPUNIT_HAVE_GCC_ABI_DEMANGLE 1

/* Define if you have the <ieeefp.h> header file. */
/* #undef CPPUNIT_HAVE_IEEEFP_H */

/* Define if you have the <inttypes.h> header file. */
#define CPPUNIT_HAVE_INTTYPES_H 1

/* define if compiler has isfinite */
#define CPPUNIT_HAVE_ISFINITE 1

/* Define if you have the secure sprintf_s function */
/* #undef CPPUNIT_HAVE_SPRINTF_S */

/* Define if you have the libdl library or equivalent. */
#define CPPUNIT_HAVE_LIBDL 1

/* Define if you have the <memory.h> header file. */
#define CPPUNIT_HAVE_MEMORY_H 1

/* Define if the compiler implements namespaces */
#define CPPUNIT_HAVE_NAMESPACES 1

/* define if the compiler supports Run-Time Type Identification */
#define CPPUNIT_HAVE_RTTI 1

/* define if the compiler supports C++ style casts */
#define CPPUNIT_HAVE_CPP_CAST 1

/* define if the compiler does not support default arguments for template parameters */
/* #undef CPPUNIT_STD_NEED_ALLOCATOR */

/* Define if you have the shl_load function. */
/* #undef CPPUNIT_HAVE_SHL_LOAD */

/* define if the compiler has stringstream */
#define CPPUNIT_HAVE_SSTREAM 0

/* Define if you have the <stdint.h> header file. */
#define CPPUNIT_HAVE_STDINT_H 1

/* Define if you have the <stdlib.h> header file. */
#define CPPUNIT_HAVE_STDLIB_H 1

/* Define if you have the <strings.h> header file. */
#define CPPUNIT_HAVE_STRINGS_H 1

/* Define if you have the <string.h> header file. */
#define CPPUNIT_HAVE_STRING_H 1

/* Define if you have the <strstream> header file. */
#define CPPUNIT_HAVE_STRSTREAM 1

/* Define if you have the <sys/stat.h> header file. */
#define CPPUNIT_HAVE_SYS_STAT_H 1

/* Define if you have the <sys/types.h> header file. */
#define CPPUNIT_HAVE_SYS_TYPES_H 1

/* Define if you have the <unistd.h> header file. */
#define CPPUNIT_HAVE_UNISTD_H 1

/* The size of a void pointer */
#define CPPUNIT_SIZEOF_VOID_P 4

/* Name of package */
#define CPPUNIT_PACKAGE "cppunit"

/* Version number of package */
#define CPPUNIT_VERSION "AE01-634-gd5c92d0"

/* Define to the address where bug reports for this package should be sent. */
#ifndef CPPUNIT_PACKAGE_BUGREPORT
#define CPPUNIT_PACKAGE_BUGREPORT ""
#endif

/* Define to the full name of this package. */
#ifndef CPPUNIT_PACKAGE_NAME
#define CPPUNIT_PACKAGE_NAME ""
#endif

/* Define to the full name and version of this package. */
#ifndef CPPUNIT_PACKAGE_STRING
#define CPPUNIT_PACKAGE_STRING ""
#endif

/* Define to the one symbol short name of this package. */
#ifndef CPPUNIT_PACKAGE_TARNAME
#define CPPUNIT_PACKAGE_TARNAME ""
#endif

/* Define to the home page for this package. */
#ifndef CPPUNIT_PACKAGE_URL
#define CPPUNIT_PACKAGE_URL ""
#endif

/* Define to the version of this package. */
#ifndef CPPUNIT_PACKAGE_VERSION
#define CPPUNIT_PACKAGE_VERSION  ""
#endif

/* Define to use type_info::name() for class names */
#ifndef CPPUNIT_USE_TYPEINFO_NAME
#define CPPUNIT_USE_TYPEINFO_NAME CPPUNIT_HAVE_RTTI
#endif

#endif /* _INCLUDE_CPPUNIT_CONFIG_AUTO_H */
