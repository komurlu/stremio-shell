// LICENSE_CODE ZON ISC
#ifndef LUM_SDK_H
#define LUM_SDK_H

#define LUM_SDK_CHOICE_NONE 0
#define LUM_SDK_CHOICE_PEER 1
#define LUM_SDK_CHOICE_NOT_PEER 2

#define DLLIMPORT _declspec(dllimport)

// C-style imports
DLLIMPORT void lum_sdk_init_c(char *app_name);
DLLIMPORT void lum_sdk_uninit_c(void);
DLLIMPORT void lum_sdk_set_bg_color_c(char *bg_color);
DLLIMPORT void lum_sdk_set_btn_color_c(char *btn_color);
DLLIMPORT void lum_sdk_set_txt_color_c(char *txt_color);
DLLIMPORT void lum_sdk_set_tos_link_c(char *tos_link);
DLLIMPORT void lum_sdk_set_logo_link_c(char *logo_link);
DLLIMPORT int lum_sdk_get_choice_c(void);
DLLIMPORT void lum_sdk_clear_choice_c(void);

// C++ decorated imports
DLLIMPORT void lum_sdk_init(char *app_name);
DLLIMPORT void lum_sdk_uninit(void);
DLLIMPORT void lum_sdk_set_bg_color(char *bg_color);
DLLIMPORT void lum_sdk_set_btn_color(char *btn_color);
DLLIMPORT void lum_sdk_set_txt_color(char *txt_color);
DLLIMPORT void lum_sdk_set_tos_link(char *tos_link);
DLLIMPORT void lum_sdk_set_logo_link(char *logo_link);
DLLIMPORT int lum_sdk_get_choice(void);
DLLIMPORT void lum_sdk_clear_choice(void);

#endif
