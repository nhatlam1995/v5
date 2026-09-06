/*
 * Custom status screen for the aug1st shield.
 */

#include <lvgl.h>
#include <zephyr/kernel.h>

#include <zmk/display/status_screen.h>
#include <zmk/display/widgets/battery_status.h>

#include "widgets/layer_status.h"
#include "widgets/os_mode.h"
#include "widgets/output_status.h"

#if IS_ENABLED(CONFIG_ZMK_WIDGET_BATTERY_STATUS)
static struct zmk_widget_battery_status battery_status_widget;
#endif

static struct aug1st_widget_output_status output_status_widget;
static struct aug1st_widget_layer_status layer_status_widget;
static struct aug1st_widget_os_mode os_mode_widget;

void aug1st_widget_icon_init(lv_obj_t *parent);

lv_obj_t *zmk_display_status_screen(void) {
    lv_obj_t *screen = lv_obj_create(NULL);

#if IS_ENABLED(CONFIG_ZMK_WIDGET_BATTERY_STATUS)
    zmk_widget_battery_status_init(&battery_status_widget, screen);
    lv_obj_align(zmk_widget_battery_status_obj(&battery_status_widget), LV_ALIGN_TOP_RIGHT, 0, 0);
#endif

    aug1st_widget_output_status_init(&output_status_widget, screen);
    lv_obj_align(aug1st_widget_output_status_obj(&output_status_widget), LV_ALIGN_TOP_LEFT, 0, 0);

    // Hiển thị icon của bác ở chính giữa màn hình
    aug1st_widget_icon_init(screen);

    aug1st_widget_layer_status_init(&layer_status_widget, screen);
    lv_obj_align(aug1st_widget_layer_status_obj(&layer_status_widget), LV_ALIGN_BOTTOM_LEFT, 0, 0);

    aug1st_widget_os_mode_init(&os_mode_widget, screen);
    lv_obj_align(aug1st_widget_os_mode_obj(&os_mode_widget), LV_ALIGN_BOTTOM_RIGHT, 0, 0);

    return screen;
}