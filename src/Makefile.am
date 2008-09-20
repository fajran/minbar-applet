
bin_PROGRAMS = minbar-applet

minbar_applet_SOURCES = applet.c prefs.h
minbar_applet_CPPFLAGS = $(AM_CPPFLAGS) $(GCONF_CFLAGS) -DDATADIR=\""$(datadir)/minbar-applet/"\"
minbar_applet_CFLAGS = $(MINBARAPPLET_CFLAGS) $(WARN_CFLAGS) $(AM_CFLAGS)
minbar_applet_LDFLAGS = $(AM_LDFLAGS) 
minbar_applet_LDADD = @ITL_LIBS@ $(MINBARAPPLET_LIBS) $(GCONF_LIBS)

