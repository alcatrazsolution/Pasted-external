#pragma once
#include "main.hpp"
#define safe_str

void createOverlay()
{
	cscene->create();
}

void createLoop()
{
	gameloop->PlayerLoop();
}

void createAimbot()
{
	aimbot->start();
}

int main()
{
	HWND hwnd = nullptr;
		bool cheatLaunched;
		if (init->cheat())
		{
			std::thread newrth(createOverlay);
			newrth.detach();
			std::thread newrth2(createLoop);
			newrth2.detach();
			std::thread newrth3(createAimbot);
			newrth3.detach();
			while (true)
			{
				//createLoop();
				SleepEx(1, false);
			}
		}
		else
		{
			system("cls");
			std::cout << "Couldn't Communicate With Driver";
		}
		return TRUE;
	}
