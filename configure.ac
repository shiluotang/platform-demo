#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.63])
AC_INIT([platform-demo],[1.0],[shengquangang2015@163.com])

AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_LIBOBJ_DIR([src])

AC_CONFIG_SRCDIR([src/hello.h])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([-Wall foreign subdir-objects])

# Checks for programs.
AC_PROG_CC
AC_GNU_SOURCE
m4_pattern_allow([AM_PROG_AR])
AM_PROG_AR
LT_INIT
LT_LANG([Windows Resource])

AX_PLATFORM_DETECT

# Checks for libraries.

# Checks for header files.
AC_HEADER_STDBOOL
AC_HEADER_TIME

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AM_GNU_GETTEXT
AM_GNU_GETTEXT_VERSION([0.18.3])
AC_CHECK_FUNCS([usleep])
AC_FUNC_MALLOC
AC_FUNC_REALLOC

AC_CONFIG_FILES([Makefile
                 intl/Makefile])
AC_OUTPUT
