ACLOCAL_AMFLAGS = -I m4

AM_CPPFLAGS = -Wall
AM_CFLAGS	=
AM_CXXFLAGS	=
AM_LDFLAGS	=

lib_LTLIBRARIES = libhello.la

libhello_la_SOURCES = ./src/@platform@/hello.c
libhello_la_LIBADD	= @LTLIBOBJS@

noinst_PROGRAMS = demo
demo_SOURCES = ./src/main.c
demo_LDADD = libhello.la @LIBOBJS@

check_PROGRAMS	= test1 test2

test1_SOURCES	= ./tests/test1.c
test1_LDADD		= libhello.la

test2_SOURCES	= ./tests/test2.c
test2_LDADD		= libhello.la

TESTS = $(check_PROGRAMS)
