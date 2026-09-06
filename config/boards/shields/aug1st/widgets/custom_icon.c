#include <lvgl.h>

// Khai báo font tùy chỉnh do LVGL Font Converter sinh ra (ví dụ tệp my_icon_font.c)
LV_FONT_DECLARE(my_icon_font);

void aug1st_widget_icon_init(lv_obj_t *parent) {
    lv_obj_t *icon_label = lv_label_create(parent);
    
    // Gán font chữ chứa icon vào nhãn
    lv_obj_set_style_text_font(icon_label, &my_icon_font, LV_PART_MAIN);
    
    // Gán ký tự đại diện đã đặt lúc convert (ví dụ chữ "u" hoặc mã ký tự icon)
    lv_label_set_text(icon_label, "");
    
    lv_obj_align(icon_label, LV_ALIGN_CENTER, 0, 0);
}