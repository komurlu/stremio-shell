#include "luminati.h"

Luminati::Luminati(QObject *parent) : QObject(parent) {
#ifdef _WIN32
	//lum_sdk_uninit();
	lum_sdk_set_logo_link((char *)"http://luminati.io/img/logo.png");
	lum_sdk_set_tos_link((char *)"https://hola.org/legal/sla");
	lum_sdk_set_bg_color((char *)"#ffffffff");
	lum_sdk_set_btn_color((char *)"#ff323232");
	lum_sdk_set_txt_color((char *)"#ff000000");

	lum_sdk_init((char *)"Stremio");
#endif
}

int Luminati::getChoice(void) {
#ifdef _WIN32
	return lum_sdk_get_choice();
#else
	return 2; // 2 is when the ads are enabled
#endif
}

void Luminati::askForChoice(void) {
#ifdef _WIN32
	lum_sdk_clear_choice();
	lum_sdk_init((char *)"Stremio");
#endif
}

void Luminati::clearChoice(void) {
#ifdef _WIN32
	lum_sdk_clear_choice();
#endif
}
