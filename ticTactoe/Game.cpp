#include "Game.h"
#include<iostream>
#include<string>
using namespace std;
Game::Game()
{ 
	cout << "building board\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			_board[i][j] = '-';
		}
	}
}
void Game::printBoard()
{  
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << _board[i][j]<<"\t";
		}
		cout << "\n";
	}
	cout << endl;
}

void Game::getInput1()
{
	cout << "player X input\n:::::::\n";
	
	cout << "enter x(0-2) cordinate\n";
	int x;
	cin >> x;
	cout << "enter y(0-2) coordinate\n";
	int y;
	cin >> y;
	
	_board[x][y] = 'X';
}
void Game::check()
{
	for (int i = 0; i < 3; i++)
	{
		if ((_board[i][0] == 'X') && (_board[i][1] == 'X') && (_board[i][2] == 'X'))
		{
			pl = 1;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((_board[i][0] == 'O') && (_board[i][1] == 'O') && (_board[i][2] == 'O'))
		{
			pl = 2;
		}
	}

	for (int j = 0; j < 3; j++)
	{
		if ((_board[0][j] == 'X') && (_board[1][j] == 'X') && (_board[2][j] == 'X'))
		{
			pl = 1;
		}
	}
	for (int j = 0; j < 3; j++)
	{
		if ((_board[0][j] == 'O') && (_board[1][j] == 'O') && (_board[2][j] == 'O'))
		{
			pl = 2;
		}
	}

	if (((_board[0][0] == 'X') && (_board[1][1] == 'X') && (_board[2][2] == 'X')) || (_board[0][2] == 'X') && (_board[1][1] == 'X') && (_board[2][0] == 'X'))
	{
		pl = 1;
	}
	else if (((_board[0][0] == 'O') && (_board[1][1] == 'O') && (_board[2][2] == 'O')) || (_board[0][2] == 'O') && (_board[1][1] == 'O') && (_board[2][0] == 'O'))
	{
		pl = 2;
	}
	
}
bool Game::isMatch()
{
	if (pl == 1)
	{
		cout << "player X wins \n";
		return true;
	}
	else if (pl == 2)
	{
		cout << "player O wins \n";
		return true;
	}
	else
		return false;
}
void Game::getInput2()
{
	cout << "player O input\n:::::::\n";

	cout << "enter x(0-2) cordinate\n";
	int x;
	cin >> x;
	cout << "enter y(0-2) coordinate\n";
	int y;
	cin >> y;

	_board[x][y] = 'O';
}