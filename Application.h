#pragma once
#include "BaseApplication.h"

class Application :
	public BaseApplication
{
public:
	Application(unsigned int iWidth, unsigned int iHeight, std::string sName) : BaseApplication(iWidth, iHeight, sName) {
		al_init();
		al_install_mouse();
		al_install_keyboard();
	};
	virtual ~Application();
	int mainLoop();
};

