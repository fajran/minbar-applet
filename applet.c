#include <string.h>

#include <panel-applet.h>
#include <gtk/gtk.h>


GtkWidget *menu;
GtkWidget *label_prayer_time[6];

// FIXME: gettext
gchar *names[] = {
	"Subuh",
	"Fajar",
	"Dzuhur",
	"Ashar",
	"Maghrib",
	"Isya"
};

gboolean on_menubar_pressed(GtkWidget *widget, GdkEventButton *event, gpointer user_data)
{
	if (event->button != 1)
	{
		g_signal_stop_emission_by_name(widget, "button-press-event");
	}

	return FALSE;
}

void on_menu_preferences_activated(GtkMenuItem *menuitem, gpointer user_data)
{
	// TODO: open preferences
}

void on_menu_about_activated(GtkMenuItem *menuitem, gpointer user_data)
{
	// TODO: open about
}

static gboolean
minbar_applet_fill (PanelApplet *applet,
   const gchar *iid,
   gpointer data)
{

	if (strcmp (iid, "OAFIID:MinbarApplet") != 0)
		return FALSE;

	GtkWidget *menubar;
	menubar = gtk_menu_bar_new();

	menu = gtk_menu_item_new_with_label("Jadwal Sholat");

	gtk_menu_shell_append(GTK_MENU_SHELL(menubar), menu);

	gtk_container_add(GTK_CONTAINER(applet), menubar);
	gtk_widget_show_all(GTK_WIDGET(applet));

	g_signal_connect(G_OBJECT(menubar), "button-press-event", G_CALLBACK(on_menubar_pressed), NULL);

	GtkWidget *submenu;
	GtkWidget *child;

	GtkWidget *hbox, *label_name;
	submenu = gtk_menu_new();


	GtkWidget *menu_prayer_time;
	int i;
	for (i=0; i<6; i++) {
		menu_prayer_time = gtk_menu_item_new();

		child = gtk_bin_get_child(GTK_BIN(menu_prayer_time));
		gtk_container_remove(GTK_CONTAINER(menu_prayer_time), child);

		hbox = gtk_hbox_new(FALSE, 50);
		label_name = gtk_label_new(names[i]);
		label_prayer_time[i] = gtk_label_new("00:00");

		gtk_box_pack_start(GTK_BOX(hbox), label_name, FALSE, FALSE, 0);
		gtk_box_pack_end(GTK_BOX(hbox), label_prayer_time[i], FALSE, FALSE, 0);

		gtk_container_add(GTK_CONTAINER(menu_prayer_time), hbox);

		gtk_menu_append(GTK_MENU(submenu), menu_prayer_time);
	}

	gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu), submenu);

	// GtkWidget *label;
	// label = gtk_label_new ("Hello World");
	gtk_container_add (GTK_CONTAINER (applet), menu);
	gtk_widget_show_all (GTK_WIDGET (applet));

	return TRUE;
}

PANEL_APPLET_BONOBO_FACTORY ("OAFIID:MinbarApplet_Factory",
                             PANEL_TYPE_APPLET,
                             "The Hello World Applet",
                             "0",
                             minbar_applet_fill,
                             NULL);
