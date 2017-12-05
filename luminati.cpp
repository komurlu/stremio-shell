#include "luminati.h"

static char* app_name = (char *)"stremio.com";

Luminati::Luminati(QObject *parent) : QObject(parent) {
#ifdef _WIN32
	//lum_sdk_uninit();
	lum_sdk_set_logo_link((char *)"http://www.strem.io/4.0/stremio-logo-small.png");
	lum_sdk_set_tos_link((char *)"https://www.strem.io/tos");
	lum_sdk_set_bg_color((char *)"#ff201f32");
	lum_sdk_set_btn_color((char *)"#ff3a497d");
	lum_sdk_set_txt_color((char *)"#ffffffff");

	lum_sdk_set_dlg_size(500);
	lum_sdk_set_peer_txt(PEER_TXT_FREE);
	lum_sdk_set_not_peer_txt(NOT_PEER_TXT_ADS);
	lum_sdk_set_app_name((char *)"Stremio");
	//lum_sdk_init(app_name);
#endif
}

Luminati::~Luminati(void) {
}

void Luminati::emitEvent(void) {
	emit choiceChanged();
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
	lum_sdk_init(app_name);
#endif
}

void Luminati::clearChoice(void) {
#ifdef _WIN32
	lum_sdk_clear_choice();
#endif
}
