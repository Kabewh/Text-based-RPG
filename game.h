#pragma once
#include <iostream>
#include<string>
#include<iomanip>
#include<ctime>

using namespace std;

class game
{
	public:
		game();
		void mainMenu();

		inline bool getPlaying() const { return this->playing; }

private:
	int choice1;
	int st;

	bool playing;
};


