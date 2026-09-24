#include <iostream>
#include "janken.h"
using namespace std;

enum GameState
{
	JANKEN = 1,
	KAZUATE = 2,
	EXIT = 3
};

void Start()
{
	int n;
	cout << "数字を入力してください: ";
	cout << "(1)じゃんけんゲーム" << "(2)数当てゲーム" << "(3)終了" << endl;
	cin >> n;
	if (n == JANKEN) 
	{
		cout << "じゃんけんゲームを開始します" << endl;
		
	}
	else if (n == KAZUATE) 
	{
		cout << "数当てゲームを開始します" << endl;
	}
	else if (n == EXIT) 
	{
		cout << "終了します" << endl;
	}
	else 
	{
		cout << "無効な入力です" << endl;
		return Start();
	}
}

int main()
{
	Start();
	InitRand();
	int player_choice = Player();
	int npc_choice = Npc();
	janken(player_choice, npc_choice);
	
}

