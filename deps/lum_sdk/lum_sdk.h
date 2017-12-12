// LICENSE_CODE ZON ISC
#ifndef LUM_SDK_H
#define LUM_SDK_H

#define LUM_SDK_CHOICE_NONE 0
#define LUM_SDK_CHOICE_PEER 1
#define LUM_SDK_CHOICE_NOT_PEER 2

typedef enum peer_txt_t {
    PEER_TXT_NO_ADS = 0,
    PEER_TXT_PREMIUM = 1,
    PEER_TXT_FREE = 2,
    PEER_TXT_DONATE = 3,
    PEER_TXT_I_AGREE = 4,
} peer_txt_t;

typedef enum not_peer_txt_t {
    NOT_PEER_TXT_ADS = 0,
    NOT_PEER_TXT_LIMITED = 1,
    NOT_PEER_TXT_PREMIUM = 2,
    NOT_PEER_TXT_NO_DONATE = 3,
    NOT_PEER_TXT_NOT_AGREE = 4,
    NOT_PEER_TXT_I_DISAGREE = 5,
} not_peer_txt_t;

#define WINAPI __stdcall
typedef void (WINAPI *lum_sdk_choice_change_t)(void);

#ifndef LUM_SDK_INTERNAL

#define DLLIMPORT _declspec(dllimport)

// C-style imports
#ifdef __cplusplus
extern "C" {
#endif
DLLIMPORT int WINAPI lum_sdk_is_supported_c(void);
DLLIMPORT void WINAPI lum_sdk_init_c(char *appid);
DLLIMPORT void WINAPI lum_sdk_init_wait_c(char *appid);
DLLIMPORT void WINAPI lum_sdk_uninit_c(void);
DLLIMPORT void WINAPI lum_sdk_set_dlg_size_c(int dlg_size);
DLLIMPORT void WINAPI lum_sdk_set_bg_color_c(char *bg_color);
DLLIMPORT void WINAPI lum_sdk_set_btn_color_c(char *btn_color);
DLLIMPORT void WINAPI lum_sdk_set_txt_color_c(char *txt_color);
DLLIMPORT void WINAPI lum_sdk_set_app_name_c(char *app_name);
DLLIMPORT void WINAPI lum_sdk_set_tos_link_c(char *tos_link);
DLLIMPORT void WINAPI lum_sdk_set_logo_link_c(char *logo_link);
DLLIMPORT void WINAPI lum_sdk_set_peer_txt_c(peer_txt_t peer_txt);
DLLIMPORT void WINAPI lum_sdk_set_not_peer_txt_c(not_peer_txt_t not_peer_txt);
DLLIMPORT int WINAPI lum_sdk_get_choice_c(void);
DLLIMPORT void WINAPI lum_sdk_clear_choice_c(void);
DLLIMPORT void WINAPI lum_sdk_set_choice_change_cb_c(
    lum_sdk_choice_change_t cb);
#ifdef __cplusplus
}
#endif

// C++ decorated imports
DLLIMPORT int WINAPI lum_sdk_is_supported(void);
DLLIMPORT void WINAPI lum_sdk_init(char *appid);
DLLIMPORT void WINAPI lum_sdk_init_wait(char *appid);
DLLIMPORT void WINAPI lum_sdk_uninit(void);
DLLIMPORT void WINAPI lum_sdk_set_dlg_size(int dlg_size);
DLLIMPORT void WINAPI lum_sdk_set_bg_color(char *bg_color);
DLLIMPORT void WINAPI lum_sdk_set_btn_color(char *btn_color);
DLLIMPORT void WINAPI lum_sdk_set_txt_color(char *txt_color);
DLLIMPORT void WINAPI lum_sdk_set_app_name(char *app_name);
DLLIMPORT void WINAPI lum_sdk_set_tos_link(char *tos_link);
DLLIMPORT void WINAPI lum_sdk_set_logo_link(char *logo_link);
DLLIMPORT void WINAPI lum_sdk_set_peer_txt(peer_txt_t peer_txt);
DLLIMPORT void WINAPI lum_sdk_set_not_peer_txt(not_peer_txt_t not_peer_txt);
DLLIMPORT int WINAPI lum_sdk_get_choice(void);
DLLIMPORT void WINAPI lum_sdk_clear_choice(void);
DLLIMPORT void WINAPI lum_sdk_set_choice_change_cb(lum_sdk_choice_change_t cb);
#endif

#endif
