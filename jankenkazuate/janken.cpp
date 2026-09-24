#include <iostream>
#include "janken.h"
using namespace std;

void InitRand()
{
	srand((unsigned int)time(NULL));
}

 int Player()
{
	int te;
	cout << "手を入力してください: (0)グー (1)チョキ (2)パー" << endl;
	cin >> te;
	if (te == 0) cout << "あなたの手はグーです" << endl;
	else if (te == 1) cout << "あなたの手はチョキです" << endl;
	else if (te == 2) cout << "あなたの手はパーです" << endl;
	else cout << "無効な入力です" << endl;
	return te;
}

int Npc()
{
	int npc;
	npc = rand() % 3;
	if (npc == 0) cout << "NPCの手はグーです" << endl;
	else if (npc == 1) cout << "NPCの手はチョキです" << endl;
	else if (npc == 2) cout << "NPCの手はパーです" << endl;
	else cout << "無効な入力です" << endl;
	return npc;
}

int janken(int te, int npc)
{
	//while
	if (te == npc)
	{
		cout << "あいこです" << endl;
		return 0;
	}
	else if ((te == 0 && npc == 1) || (te == 1 && npc == 2) || (te == 2 && npc == 0))
	{
		cout << "あなたの勝ちです" << endl;
		return 1;
	}
	else
	{
		cout << "あなたの負けです" << endl;
		return -1;
	}
	return 0;
}