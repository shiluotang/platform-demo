#ifndef GETTEXT_H_INCLUDED
#define GETTEXT_H_INCLUDED

#ifdef HAVE_CONFIG_H
#   include <config.h>
#   ifdef ENABLE_NLS
#       ifdef HAVE_GETTEXT_H
#           include <gettext.h>
#       elif HAVE_LIBINTL_H
#           include <libintl.h>
#       endif
#   else
#       define gettext
#   endif
#endif

#endif
