ACLOCAL_AMFLAGS = -I m4

AM_CPPFLAGS = -Wall
AM_CFLAGS	=
AM_CXXFLAGS	=
AM_LDFLAGS	=

if OS_WIN32
SUFFIXES = .rc
RCCOMPILE = $(RC) $(DEF) $(DEFAULT_INCLUDES) $(INCLUDES) $(CPPFLAGS)
LTRCCOMPILE = $(LIBTOOL) --mode=compile --tag=RC $(RCCOMPILE)
.rc.lo:
	$(LTRCCOMPILE) --include-dir=$(srcdir) -i $< -o $@
.rc.$(OBJEXT):
	$(RCCOMPILE) --include-dir=$(srcdir) -i $< -o $@
endif

lib_LTLIBRARIES = libhello.la

libhello_la_SOURCES = ./src/@platform@/hello.c
libhello_la_LIBADD	= @LTLIBOBJS@

if OS_WIN32
libhello_la_SOURCES += ./src/hello.rc
endif

noinst_PROGRAMS = demo
demo_SOURCES = ./src/main.c
demo_LDADD = libhello.la @LIBOBJS@

if OS_WIN32
demo_SOURCES += ./src/demo.rc
endif

check_PROGRAMS	= test1 test2

test1_SOURCES	= ./tests/test1.c
test1_LDADD		= libhello.la

test2_SOURCES	= ./tests/test2.c
test2_LDADD		= libhello.la

TESTS = $(check_PROGRAMS)
