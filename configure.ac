
AC_INIT([minbarapplet], [0.0.1], [fajran@gmail.com], [minbarapplet])

AM_INIT_AUTOMAKE([1.9 foreign dist-bzip2 no-dist-gzip -Wall])

AC_CONFIG_SRCDIR([src])

AC_PROG_CC
AC_HEADER_STDC

GNOME_COMMON_INIT
GNOME_DEBUG_CHECK
GNOME_COMPILE_WARNINGS([maximum])
GNOME_MAINTAINER_MODE_DEFINES

pkg_modules="gtk+-2.0 >= 2.10 gconf-2.0 libpanelapplet-2.0"
PKG_CHECK_MODULES(MINBARAPPLET, [$pkg_modules])

AC_CHECK_HEADER(itl/prayer.h,ITL_LIBS=-litl,AC_MSG_ERROR("itl/prayer.h not found."))
AC_SUBST(ITL_LIBS)

AC_CONFIG_FILES([
	Makefile
	src/Makefile
])

AC_OUTPUT

