#include <iostream>
#include "janken.h"
using namespace std;


void start()
{
	int n;
	cout << "数字を入力してください: ";
	cout << "(1)じゃんけんゲーム" << "(2)数当てゲーム" << "(3)終了" << endl;
	cin >> n;
	n == 1 ? cout << "じゃんけんゲームを開始します" << endl : 
	n == 2 ? cout << "数当てゲームを開始します" << endl :
	n == 3 ? cout << "終了します" << endl :
			 cout << "無効な入力です" << endl;
	
}

int main()
{
	start();
	InitRand();
	janken();
}

