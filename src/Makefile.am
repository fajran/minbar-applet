
bin_PROGRAMS = minbarapplet

minbarapplet_SOURCES = applet.c prefs.h

minbarapplet_CPPFLAGS = $(AM_CPPFLAGS) $(GCONF_CFLAGS)
minbarapplet_CFLAGS = $(MINBARAPPLET_CFLAGS) $(WARN_CFLAGS) $(AM_CFLAGS)
minbarapplet_LDFLAGS = $(AM_LDFLAGS) 
minbarapplet_LDADD = @ITL_LIBS@ $(MINBARAPPLET_LIBS) $(GCONF_LIBS)

