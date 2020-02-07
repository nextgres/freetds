SUBDIRS		=	. unittests
AM_CPPFLAGS	=	-I$(top_srcdir)/include

lib_LTLIBRARIES	=	libsrv.la
libsrv_la_SOURCES=	srv.c srv_freetds.c
if MINGW32
libsrv_la_SOURCES +=	winmain.c
endif

# version bumped for 0.64, I hope we'll bump it less in the future -- freddy77
libsrv_la_LDFLAGS =	-version-info 4:0:0 $(FREETDS_SYMBOLIC)
if !MACOSX
libsrv_la_LDFLAGS +=	-export-symbols-regex '^(cs_|ct_|blk_).*'
endif

libsrv_la_LIBADD	=	../tds/libtds.la ../replacements/libreplacements.la $(LTLIBICONV) $(FREETDS_LIBGCC)

EXTRA_DIST		= srvlib.def CMakeLists.txt winmain.c

