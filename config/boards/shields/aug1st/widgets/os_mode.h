/*
 * OS mode widget for the aug1st shield.
 *
 * Renders "MAC" or "WIN" depending on whether the WINMODE flag layer is
 * toggled on -- see the conditional-layers block in aug1st.keymap.
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

struct aug1st_widget_os_mode {
    sys_snode_t node;
    lv_obj_t *obj;
};

int aug1st_widget_os_mode_init(struct aug1st_widget_os_mode *widget, lv_obj_t *parent);
lv_obj_t *aug1st_widget_os_mode_obj(struct aug1st_widget_os_mode *widget);
