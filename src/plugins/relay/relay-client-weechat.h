/*
 * Copyright (C) 2003-2011 Sebastien Helleu <flashcode@flashtux.org>
 *
 * This file is part of WeeChat, the extensible chat client.
 *
 * WeeChat is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * WeeChat is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with WeeChat.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __WEECHAT_RELAY_CLIENT_WEECHAT_H
#define __WEECHAT_RELAY_CLIENT_WEECHAT_H 1

struct t_relay_client;

#define RELAY_WEECHAT_DATA(client, var)                                 \
    (((struct t_relay_client_weechat_data *)client->protocol_data)->var)

struct t_relay_client_weechat_data
{
    int password_ok;                   /* password received and ok?         */
};

extern void relay_client_weechat_recv (struct t_relay_client *client,
                                       const char *data);
extern void relay_client_weechat_alloc (struct t_relay_client *client);
extern void relay_client_weechat_alloc_with_infolist (struct t_relay_client *client,
                                                      struct t_infolist *infolist);
extern void relay_client_weechat_free (struct t_relay_client *client);
extern int relay_client_weechat_add_to_infolist (struct t_infolist_item *item,
                                                 struct t_relay_client *client);
extern void relay_client_weechat_print_log (struct t_relay_client *client);

#endif /* __WEECHAT_RELAY_CLIENT_WEECHAT_H */
