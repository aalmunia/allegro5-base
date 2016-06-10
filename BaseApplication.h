/*
* File:   BaseApplication.h
* Author: aalmunia
*
* Created on May 26, 2016, 2:14 PM
*/

#include <allegro5/allegro.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>

#ifndef APPLICATION_H
#define APPLICATION_H

class BaseApplication {
public:
	BaseApplication();
	BaseApplication(const BaseApplication& orig);
	BaseApplication(unsigned int iWidth, unsigned int iHeight, std::string sName);
	BaseApplication(unsigned int iWidth, unsigned int iHeight, char* sName);	
	void initApp();
	virtual int mainLoop() = 0;
	virtual ~BaseApplication();
protected:
	ALLEGRO_DISPLAY *m_pDisplay = NULL;
	unsigned int m_iWindowWidth = 0;
	unsigned int m_iWindowHeight = 0;
	std::string m_sWindowName;
	bool m_bInit = false;
	ALLEGRO_COLOR m_oColRed;
	ALLEGRO_COLOR m_oColGreen;
	ALLEGRO_COLOR m_oColBlue;
	ALLEGRO_EVENT_QUEUE* m_pEventQueue;
	void initColors();	
};

#endif /* APPLICATION_H */