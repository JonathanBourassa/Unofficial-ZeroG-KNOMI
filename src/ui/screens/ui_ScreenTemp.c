// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Knomi2

#include "../ui.h"

void ui_ScreenTemp_screen_init(void)
{
    ui_ScreenTemp = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenTemp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenTemp, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ScreenTemp, &ui_img_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_temp_nozzle = lv_imgbtn_create(ui_ScreenTemp);
    lv_imgbtn_set_src(ui_btn_temp_nozzle, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_sta_temp_png, NULL);
    lv_obj_set_width(ui_btn_temp_nozzle, 86);
    lv_obj_set_height(ui_btn_temp_nozzle, 97);
    lv_obj_set_x(ui_btn_temp_nozzle, 25);
    lv_obj_set_y(ui_btn_temp_nozzle, 57);

    ui_img_temp_nozzle = lv_img_create(ui_btn_temp_nozzle);
    lv_img_set_src(ui_img_temp_nozzle, &ui_img_nozzle_png);
    lv_obj_set_width(ui_img_temp_nozzle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_temp_nozzle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_img_temp_nozzle, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_temp_nozzle, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_temp_nozzle, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_label_temp_nozzle_target = lv_label_create(ui_btn_temp_nozzle);
    lv_obj_set_width(ui_label_temp_nozzle_target, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_temp_nozzle_target, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_temp_nozzle_target, 0);
    lv_obj_set_y(ui_label_temp_nozzle_target, -15);
    lv_obj_set_align(ui_label_temp_nozzle_target, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_label_temp_nozzle_target, "0℃");
    lv_obj_set_style_text_font(ui_label_temp_nozzle_target, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_temp_nozzle_actual = lv_label_create(ui_btn_temp_nozzle);
    lv_obj_set_width(ui_label_temp_nozzle_actual, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_temp_nozzle_actual, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_temp_nozzle_actual, 0);
    lv_obj_set_y(ui_label_temp_nozzle_actual, 10);
    lv_obj_set_align(ui_label_temp_nozzle_actual, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_label_temp_nozzle_actual, "0℃");
    lv_obj_set_style_text_color(ui_label_temp_nozzle_actual, lv_color_hex(0xFFD164), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_temp_nozzle_actual, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_temp_nozzle_actual, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_temp_bed = lv_imgbtn_create(ui_ScreenTemp);
    lv_imgbtn_set_src(ui_btn_temp_bed, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_sta_temp_png, NULL);
    lv_obj_set_width(ui_btn_temp_bed, 86);
    lv_obj_set_height(ui_btn_temp_bed, 97);
    lv_obj_set_x(ui_btn_temp_bed, -25);
    lv_obj_set_y(ui_btn_temp_bed, 57);
    lv_obj_set_align(ui_btn_temp_bed, LV_ALIGN_TOP_RIGHT);

    ui_img_temp_bed = lv_img_create(ui_btn_temp_bed);
    lv_img_set_src(ui_img_temp_bed, &ui_img_bed_png);
    lv_obj_set_width(ui_img_temp_bed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_temp_bed, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_img_temp_bed, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_temp_bed, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_temp_bed, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_label_temp_bed_target = lv_label_create(ui_btn_temp_bed);
    lv_obj_set_width(ui_label_temp_bed_target, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_temp_bed_target, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_temp_bed_target, 0);
    lv_obj_set_y(ui_label_temp_bed_target, -15);
    lv_obj_set_align(ui_label_temp_bed_target, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_label_temp_bed_target, "0℃");
    lv_obj_set_style_text_font(ui_label_temp_bed_target, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_temp_bed_actual = lv_label_create(ui_btn_temp_bed);
    lv_obj_set_width(ui_label_temp_bed_actual, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_temp_bed_actual, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_temp_bed_actual, 0);
    lv_obj_set_y(ui_label_temp_bed_actual, 10);
    lv_obj_set_align(ui_label_temp_bed_actual, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_label_temp_bed_actual, "0℃");
    lv_obj_set_style_text_color(ui_label_temp_bed_actual, lv_color_hex(0xFFD164), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_temp_bed_actual, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_temp_bed_actual, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_temp_preheat = lv_imgbtn_create(ui_ScreenTemp);
    lv_imgbtn_set_src(ui_btn_temp_preheat, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_btn_rec_png, NULL);
    lv_obj_set_width(ui_btn_temp_preheat, 108);
    lv_obj_set_height(ui_btn_temp_preheat, 38);
    lv_obj_set_x(ui_btn_temp_preheat, 0);
    lv_obj_set_y(ui_btn_temp_preheat, -25);
    lv_obj_set_align(ui_btn_temp_preheat, LV_ALIGN_BOTTOM_MID);

    ui_label_temp_preheat = lv_label_create(ui_btn_temp_preheat);
    lv_obj_set_width(ui_label_temp_preheat, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_temp_preheat, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_temp_preheat, 0);
    lv_obj_set_y(ui_label_temp_preheat, -2);
    lv_obj_set_align(ui_label_temp_preheat, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_temp_preheat, "Preheat");
    lv_obj_set_style_text_font(ui_label_temp_preheat, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btn_temp_nozzle, ui_event_btn_temp_nozzle, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btn_temp_bed, ui_event_btn_temp_bed, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btn_temp_preheat, ui_event_btn_temp_preheat, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScreenTemp, ui_event_ScreenTemp, LV_EVENT_ALL, NULL);

}
