/*
A modeless Dvorak layout for the Atreus keyboard
Copyright (C) 2019 Jason Koh <wildlymanifest@fastmail.net>

This program is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

/* Debug option */
#define DEBUG_FW

/*
Mechanical locking support.
Not needed!!
*/
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

/* one shot modifiers / layers */
#define ONESHOT_TAP_TOGGLE 3  // Tapping this number of times holds the key until tapped once again.
#define ONESHOT_TIMEOUT 1000  // Time (in ms) before the one shot key is released
