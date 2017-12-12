// vc++_console_64bit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <cstdio>
#include <windows.h>
#include "lum_sdk.h"

int _tmain(int argc, _TCHAR* argv[])
{
    if (!lum_sdk_is_supported())
    {
        fprintf(stdout, "Luminati SDK not supported\n");
        return 1;
    }
    fprintf(stdout, "User choice on startup: %d\n", lum_sdk_get_choice());
    fflush(stdout);
    lum_sdk_set_dlg_size(500);
    lum_sdk_set_logo_link("https://1001freedownloads.s3.amazonaws.com/vector/thumb/"
        "76922/sailor_penguin.png");
    lum_sdk_set_tos_link("https://hola.org/legal/sla");
    lum_sdk_set_bg_color("#ffffffff");
    lum_sdk_set_btn_color("#ff323232");
    lum_sdk_set_txt_color("#ff000000");
    lum_sdk_set_peer_txt(PEER_TXT_I_AGREE);
    lum_sdk_set_not_peer_txt(NOT_PEER_TXT_I_DISAGREE);
    lum_sdk_set_app_name("MyApp");
    lum_sdk_init_wait("win_myapp.example.com");
    fprintf(stdout, "User choice after init: %d\n", lum_sdk_get_choice());
    fflush(stdout);
    system("pause");
    lum_sdk_clear_choice();
    Sleep(1000);
    fprintf(stdout, "User choice after clear: %d\n", lum_sdk_get_choice());
    fflush(stdout);
    lum_sdk_init_wait("win_myapp.example.com");
    fprintf(stdout, "User choice after init2: %d\n", lum_sdk_get_choice());
    fflush(stdout);
    system("pause");
    return 0;
}

