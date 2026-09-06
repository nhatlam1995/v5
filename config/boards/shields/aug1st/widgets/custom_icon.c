#include <lvgl.h>

LV_IMG_DECLARE(icon);

void aug1st_widget_icon_init(lv_obj_t *parent) {
    lv_obj_t *img = lv_img_create(parent);
    lv_img_set_src(img, &icon);
    
    // Đặt icon nằm chính giữa màn hình 128x32
    lv_obj_align(img, LV_ALIGN_CENTER, 0, 0);
}