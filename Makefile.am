
SUBDIRS = src
bin_PROGRAMS = minbarapplet

minbarapplet_SOURCES = applet.c prefs.h

serverdir = $(libdir)/bonobo/servers
server_in_files = minbar-applet.server.in
server_DATA = $(server_in_files:.server.in=.server)

CLEANFILES = \
	$(server_DATA)

