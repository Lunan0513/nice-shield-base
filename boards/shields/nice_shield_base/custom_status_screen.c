#include <lvgl.h>
#include <zmk/display.h>

// 声明外部变量（定义在 assets 文件夹里）
extern const lv_img_dsc_t left_image;
extern const lv_img_dsc_t right_image;

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen = lv_obj_create(NULL);

    lv_obj_t *img = lv_img_create(screen);
    lv_img_set_src(img, &left_image);
    lv_obj_align(img, LV_ALIGN_CENTER, 0, 0);

    return screen;
}
