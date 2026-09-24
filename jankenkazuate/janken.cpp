#include <iostream>
#include "janken.h"
using namespace std;

void InitRand()
{
	srand((unsigned int)time(NULL));
}

int player()
{
	int te;
	cout << "手を入力してください: (0)グー (1)チョキ (2)パー" << endl;
	cin >> te;
	te == 0 ? cout << "あなたの手はグーです" << endl : te == 1 ? cout << "あなたの手はチョキです" << endl : cout << "あなたの手はパーです" << endl;
	return te;
}

int janken()
{
	int npc;
	npc = rand() % 3;
	npc == 0 ? cout << "グー" << endl : npc == 1 ? cout << "チョキ" << endl : cout << "パー" << endl;
	return npc;
}

int judge(int player, int npc)
{
	if (player == npc)
	{
		cout << "あいこです" << endl;
		return 0;
	}
	else if ((player == 0 && npc == 1) || (player == 1 && npc == 2) || (player == 2 && npc == 0))
	{
		cout << "あなたの勝ちです" << endl;
		return 1;
	}
	else
	{
		cout << "あなたの負けです" << endl;
		return -1;
	}
}