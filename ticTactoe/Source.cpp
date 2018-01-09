#include<iostream>
#include<string>
#include "Game.h"
using namespace std;
int main()
{
	int count = 5;
	Game tic;
	bool game;
	game = 0;
	tic.printBoard();
	while ((!(game))&&(count!=0))
	{
		if(count<5)
			cout << "next move::::::\n\n";
		tic.getInput1();
		tic.printBoard();
		tic.check();
		game = tic.isMatch();
		if (game)
			break;
		count--;
		if (count == 0)
		{
			cout << "\nits a tie\n";
			break;
		}
		cout << "\nnext move::::::\n";
		tic.getInput2();
		tic.printBoard();
		tic.check();
		game = tic.isMatch();
		
	}
	cout << "\nHope you enjoyed playing\n";
	system("PAUSE");
	return 0;
}