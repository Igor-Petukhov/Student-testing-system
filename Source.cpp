﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <conio.h>
#include <windows.h>
#include <direct.h>

using namespace std;

#include "Users.h"
#include "Singleton_Menu.h"
#include "test.h"

int main()
{
	Base_User a;
	a.Start();
	Singleton_Menu* singleton_menu = Singleton_Menu::getInstance();
	singleton_menu->Show_Menu(a);

}

