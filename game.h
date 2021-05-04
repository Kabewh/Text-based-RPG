#pragma once
#include <iostream>
#include<string>
#include<iomanip>
#include<ctime>

class game
{
	public:
		game();
		void mainMenu();
		//void story();
		//void combatMenu();

		inline bool getPlaying() const { return this->playing; }

private:
	int choice1;
	bool playing;
	int st;
};


