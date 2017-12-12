// LICENSE_CODE ZON ISC

namespace lum_sdk {
public class api {
    public const int CHOICE_NONE = 0;
    public const int CHOICE_PEER = 1;
    public const int CHOICE_NOT_PEER = 2;

    public enum peer_txt_t {
        NO_ADS = 0,
        PREMIUM = 1,
        FREE = 2,
        DONATE = 3,
        I_AGREE = 4,
    };

    public enum not_peer_txt_t {
        ADS = 0,
        LIMITED = 1,
        PREMIUM = 2,
        NO_DONATE = 3,
        NOT_AGREE = 4,
        I_DISAGREE = 5
    };

    // set dll name to use for import lum_sdk32.dll|lum_sdk64.dll
    public static string dll_import = "lum_sdk64.dll";

    /// Return Type: void
    ///appid: char*
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_init_c")]
    public static extern void init(string appid);

    /// Return Type: void
    ///appid: char*
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_init_wait_c")]
    public static extern void init_wait(string appid);

    /// Return Type: void
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_uninit_c")]
    public static extern void uninit();

    /// Return Type: void
    ///dlg_size: int
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_set_dlg_size_c")]
    public static extern void set_dlg_size(int dlg_size);

    /// Return Type: void
    ///bg_color: char*
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_set_bg_color_c")]
    public static extern void set_bg_color(string bg_color);

    /// Return Type: void
    ///btn_color: char*
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_set_btn_color_c")]
    public static extern void set_btn_color(string btn_color);

    /// Return Type: void
    ///txt_color: char*
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_set_txt_color_c")]
    public static extern void set_txt_color(string txt_color);

    /// Return Type: void
    ///app_name: char*
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_set_app_name_c")]
    public static extern void set_app_name(string app_name);

    /// Return Type: void
    ///tos_link: char*
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_set_tos_link_c")]
    public static extern void set_tos_link(string tos_link);

    /// Return Type: void
    ///logo_link: char*
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_set_logo_link_c")]
    public static extern void set_logo_link(string logo_link);

    /// Return Type: void
    ///peer_txt: peer_txt_t
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_set_peer_txt_c")]
    public static extern void set_peer_txt(peer_txt_t peer_txt);

    /// Return Type: void
    ///not_peer_txt: not_peer_txt_t
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_set_not_peer_txt_c")]
    public static extern void set_not_peer_txt(not_peer_txt_t not_peer_txt);

    /// Return Type: int
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_get_choice_c")]
    public static extern int get_choice();

    /// Return Type: void
    [System.Runtime.InteropServices.DllImportAttribute(dll_import,
        EntryPoint="lum_sdk_clear_choice_c")]
    public static extern void clear_choice();
}
}
