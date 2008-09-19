
applet : applet.c
	 gcc `pkg-config --cflags --libs libpanelapplet-2.0` -o applet applet.c

