/*
 * Copyright (C) 2014 Julian Lewis
 * @author Maciej Suminski <maciej.suminski@cern.ch>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you may find one here:
 * http://www.gnu.org/licenses/gpl-3.0-standalone.html
 * or you may search the http://www.gnu.org website for the version 3 license,
 * or you may write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

/**
 * Menu structure.
 */

#include "app_list.h"
#include "menu_struct.h"


int get_menu_size(const menu_list *menu) {
    int len = 0;
    const menu_entry* ptr = menu->entries;

    // Look for sentinel
    while((*ptr++).type != END) ++len;

    return len;
}

menu_list board_testing_menu = {
    "Board Testing",
    {
        { APP,      NULL,        { .app = &motor_test_app } },
        { APP,      NULL,        { .app = &encoder_test_app } },
        { APP,      NULL,        { .app = &servo_test_app } },
        { APP,      NULL,        { .app = &imu_test_app } },
        { APP,      NULL,        { .app = &line_sensor_test_app } },
        { APP,      NULL,        { .app = &mainboard_test_app } },
        { END,      NULL,        { NULL } }
    }
};

menu_list settings_menu = {
    "Settings",
    {
        { APP,      NULL,        { .app = &set_backlight } },
        { APP,      NULL,        { .app = &set_date } },
        { APP,      NULL,        { .app = &set_buzzer } },
        { APP,      NULL,        { .app = &set_logging } },
        { APP,      NULL,        { .app = &set_usb } },
        { END,      NULL,        { NULL } }
    }
};

menu_list main_menu = {
    "Main menu",
    {
       { APP,       NULL,     { .app = &start_robot } },
       { APP,       NULL,     { .app = &motor_tuning } },
       { SUBMENU,   NULL,     { .submenu = &board_testing_menu} },
       { SUBMENU,   NULL,     { .submenu = &settings_menu } },
       { APP,       NULL,     { .app = &console} },
       { APP,       NULL,     { .app = &game} },
       { APP,       NULL,     { .app = &reset} },
       { END,       NULL,     { NULL } }
    }
};

