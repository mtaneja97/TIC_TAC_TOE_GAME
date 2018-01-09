#pragma once
using namespace std;
class Game
{
public:
	Game();
	void printBoard();
	void getInput1();
	void getInput2();
	void check();
	bool isMatch();

private:
	char _board[3][3];
	char _input;
	int pl;
};

