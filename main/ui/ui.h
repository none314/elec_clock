// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"

void muyushow_Animation(lv_obj_t * TargetObject, int delay);
void blink_Animation(lv_obj_t * TargetObject, int delay);
void top_Animation(lv_obj_t * TargetObject, int delay);
void weather_Animation(lv_obj_t * TargetObject, int delay);
void bottom_Animation(lv_obj_t * TargetObject, int delay);
void opaon_Animation(lv_obj_t * TargetObject, int delay);
void shaizishow_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_home
void ui_home_screen_init(void);
void ui_event_home(lv_event_t * e);
extern lv_obj_t * ui_home;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_hour;
extern lv_obj_t * ui_min;
extern lv_obj_t * ui_date;
extern lv_obj_t * ui_weekday;
extern lv_obj_t * ui_temp;
extern lv_obj_t * ui_weather;
extern lv_obj_t * ui_colon;
extern lv_obj_t * ui_weathershow;
extern lv_obj_t * ui_Panel2;
// SCREEN: ui_muyuplay
void ui_muyuplay_screen_init(void);
void ui_event_muyuplay(lv_event_t * e);
extern lv_obj_t * ui_muyuplay;
void ui_event_Panel3(lv_event_t * e);
extern lv_obj_t * ui_Panel3;
extern lv_obj_t * ui_muyu;
extern lv_obj_t * ui_gongdetxt;
extern lv_obj_t * ui_Panel5;
// SCREEN: ui_shaiziplay
void ui_shaiziplay_screen_init(void);
void ui_event_shaiziplay(lv_event_t * e);
extern lv_obj_t * ui_shaiziplay;
extern lv_obj_t * ui_Panel4;
void ui_event_shaizibut(lv_event_t * e);
extern lv_obj_t * ui_shaizibut;
extern lv_obj_t * ui_shaizitxt;
extern lv_obj_t * ui_shaizi1;
extern lv_obj_t * ui_dot1;
extern lv_obj_t * ui_dot2;
extern lv_obj_t * ui_dot3;
extern lv_obj_t * ui_dot5;
extern lv_obj_t * ui_dot6;
extern lv_obj_t * ui_dot4;
extern lv_obj_t * ui_dot7;
extern lv_obj_t * ui_shaizi2;
extern lv_obj_t * ui_dot15;
extern lv_obj_t * ui_dot8;
extern lv_obj_t * ui_dot9;
extern lv_obj_t * ui_dot10;
extern lv_obj_t * ui_dot11;
extern lv_obj_t * ui_dot12;
extern lv_obj_t * ui_dot13;
extern lv_obj_t * ui_shaizi3;
extern lv_obj_t * ui_dot16;
extern lv_obj_t * ui_dot17;
extern lv_obj_t * ui_dot18;
extern lv_obj_t * ui_dot19;
extern lv_obj_t * ui_dot20;
extern lv_obj_t * ui_dot21;
extern lv_obj_t * ui_dot22;
extern lv_obj_t * ui_Panel6;
void ui_event____initial_actions0(lv_event_t * e);
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_clody_png);    // assets/clody.png
LV_IMG_DECLARE(ui_img_wifi_png);    // assets/wifi.png
LV_IMG_DECLARE(ui_img_battery_png);    // assets/battery.png
LV_IMG_DECLARE(ui_img_muyu_png);    // assets/muyu.png



LV_FONT_DECLARE(ui_font_ComfortaaBold75);
LV_FONT_DECLARE(ui_font_ComfortaaLight70);
LV_FONT_DECLARE(ui_font_OPPOSansH18);
LV_FONT_DECLARE(ui_font_OPPOSansH25);
LV_FONT_DECLARE(ui_font_OPPOSansL70);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif