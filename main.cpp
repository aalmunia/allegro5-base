#include <cstdlib>
#include <string>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include "Application.h"

int main(int argc, char** argv) {

	/**
	* IMPORTANT: We must invoke al_install_* / al_init_* before we begin using
	* ALLEGRO objects, otherwise we get a Segmentation Fault on trying to call
	* al_load_bitmap() and others.
	* Find out why, i would like to encapsulate the bootstrapping of the library
	* somehow, within the Application class.
	*/

	/* al_init();
	al_install_mouse();
	al_install_keyboard(); */

	std::string sTitle = "First Allegro 5 Application";
	Application* oApp = new Application(300, 300, sTitle);
	oApp->initApp();
	oApp->mainLoop();
	return 0;
}