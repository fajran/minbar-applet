
SUBDIRS = src

serverdir = $(libdir)/bonobo/servers
server_in_files = minbar-applet.server.in
server_DATA = $(server_in_files:.server.in=.server)

$(server_DATA): $(server_in_files)
	sed -e "s|\@LIBDIR\@|$(libdir)|" $< > $@

CLEANFILES = \
	$(server_DATA)

