/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/* 
 * Copyright (C) 2008 Philip Withnall <philip@tecnocode.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA.
 *
 * The Xplayer project hereby grant permission for non-gpl compatible GStreamer
 * plugins to be used and distributed together with GStreamer and Xplayer. This
 * permission are above and beyond the permissions granted by the GPL license
 * Xplayer is covered by.
 *
 * Monday 7th February 2005: Christian Schaller: Add excemption clause.
 * See license_change file for details.
 *
 * Author: Philip Withnall <philip@tecnocode.co.uk>
 */

#ifndef XPLAYER_TIME_ENTRY_H
#define XPLAYER_TIME_ENTRY_H

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

#define XPLAYER_TYPE_TIME_ENTRY		(xplayer_time_entry_get_type ())
#define XPLAYER_TIME_ENTRY(o)		(G_TYPE_CHECK_INSTANCE_CAST ((o), XPLAYER_TYPE_TIME_ENTRY, XplayerTimeEntry))
#define XPLAYER_TIME_ENTRY_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), XPLAYER_TYPE_TIME_ENTRY, XplayerTimeEntryClass))
#define XPLAYER_IS_TIME_ENTRY(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), XPLAYER_TYPE_TIME_ENTRY))
#define XPLAYER_IS_TIME_ENTRY_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), XPLAYER_TYPE_TIME_ENTRY))
#define XPLAYER_TIME_ENTRY_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), XPLAYER_TYPE_TIME_ENTRY, XplayerTimeEntryClass))

typedef struct XplayerTimeEntryPrivate	XplayerTimeEntryPrivate;

typedef struct {
	GtkSpinButton parent;
	XplayerTimeEntryPrivate *priv;
} XplayerTimeEntry;

typedef struct {
	GtkSpinButtonClass parent;
} XplayerTimeEntryClass;

GType xplayer_time_entry_get_type (void);
GtkWidget *xplayer_time_entry_new (GtkAdjustment *adjustment, gdouble climb_rate);

G_END_DECLS

#endif /* !XPLAYER_TIME_ENTRY_H */
