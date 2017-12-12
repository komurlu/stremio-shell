' LICENSE_CODE ZON ISC

Public Const LUM_SDK_CHOICE_NONE = 0
Public Const LUM_SDK_CHOICE_PEER = 1
Public Const LUM_SDK_CHOICE_NOT_PEER = 2

Public Enum peer_txt_t
    PEER_TXT_NO_ADS = 0
    PEER_TXT_PREMIUM = 1
    PEER_TXT_FREE = 2
    PEER_TXT_DONATE = 3
    PEER_TXT_I_AGREE = 4
End Enum

Public Enum not_peer_txt_t
    NOT_PEER_TXT_ADS = 0
    NOT_PEER_TXT_LIMITED = 1
    NOT_PEER_TXT_PREMIUM = 2
    NOT_PEER_TXT_NO_DONATE = 3
    NOT_PEER_TXT_NOT_AGREE = 4
    NOT_PEER_TXT_I_DISAGREE = 5
End Enum

' set dll name to use for import lum_sdk32.dll|lum_sdk64.dll
Public Const DLL_IMPORT = "lum_sdk32.dll"

Public Declare Sub lum_sdk_init Lib DLL_IMPORT _
    Alias "_lum_sdk_init_c@4" _
    (ByVal appid As String)

Public Declare Sub lum_sdk_init_wait Lib DLL_IMPORT _
    Alias "_lum_sdk_init_wait_c@4" _
    (ByVal appid As String)

Public Declare Sub lum_sdk_uninit Lib DLL_IMPORT _
    Alias "_lum_sdk_uninit_c@0" ()

Public Declare Sub lum_sdk_set_dlg_size Lib DLL_IMPORT _
    Alias "_lum_sdk_set_dlg_size_c@4" _
    (ByVal dlg_size As Long)

Public Declare Sub lum_sdk_set_bg_color Lib DLL_IMPORT _
    Alias "_lum_sdk_set_bg_color_c@4" _
    (ByVal bg_color As String)

Public Declare Sub lum_sdk_set_btn_color Lib DLL_IMPORT _
    Alias "_lum_sdk_set_btn_color_c@4" _
    (ByVal btn_color As String)

Public Declare Sub lum_sdk_set_txt_color Lib DLL_IMPORT _
    Alias "_lum_sdk_set_txt_color_c@4" _
    (ByVal txt_color As String)

Public Declare Sub lum_sdk_set_app_name Lib DLL_IMPORT _
    Alias "_lum_sdk_set_app_name_c@4" _
    (ByVal app_name As String)

Public Declare Sub lum_sdk_set_tos_link Lib DLL_IMPORT _
    Alias "_lum_sdk_set_tos_link_c@4" _
    (ByVal tos_link As String)

Public Declare Sub lum_sdk_set_logo_link Lib DLL_IMPORT _
    Alias "_lum_sdk_set_logo_link_c@4" _
    (ByVal logo_link As String)

Public Declare Sub lum_sdk_set_peer_txt Lib DLL_IMPORT _
    Alias "_lum_sdk_set_peer_txt_c@4" _
    (ByVal peer_txt As peer_txt_t)

Public Declare Sub lum_sdk_set_not_peer_txt Lib DLL_IMPORT _
    Alias "_lum_sdk_set_not_peer_txt_c@4" _
    (ByVal not_peer_txt As not_peer_txt_t)

Public Declare Function lum_sdk_get_choice Lib DLL_IMPORT _
    Alias "_lum_sdk_get_choice_c@0" () As Long

Public Declare Sub lum_sdk_clear_choice Lib DLL_IMPORT _
    Alias "_lum_sdk_clear_choice_c@0" ()

