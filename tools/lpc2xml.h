/*
linphone
Copyright (C) 2012 Belledonne Communications SARL

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef LPC2XML_H_
#define LPC2XML_H_

#include "lpconfig.h"

typedef struct _lpc2xml_context lpc2xml_context;

typedef enum _lpc2xml_log_level {
	LPC2XML_DEBUG = 0,
	LPC2XML_MESSAGE,
	LPC2XML_WARNING,
	LPC2XML_ERROR
} lpc2xml_log_level;

typedef void(*lpc2xml_function)(void *ctx, lpc2xml_log_level level, const char *fmt, va_list list);

lpc2xml_context* lpc2xml_context_new(lpc2xml_function cbf, void *ctx);
void lpc2xml_context_destroy(lpc2xml_context*);

int lpc2xml_set_lpc(lpc2xml_context* context, const LpConfig *lpc);

int lpc2xml_convert_file(lpc2xml_context* context, const char *filename);
int lpc2xml_convert_fd(lpc2xml_context* context, int fd);
int lpc2xml_convert_string(lpc2xml_context* context, unsigned char **content);


#endif //LPC2XML_H_
