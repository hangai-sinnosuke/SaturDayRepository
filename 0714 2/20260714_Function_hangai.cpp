/*/
配列で10こランダムな数字を出す
それをplayerとcpuに与える
*/




#include<iostream>
#include<ctime>
#include<cstdlib>
#include"20260714_Header_hangai.h"

using namespace std;

int InputCheck(int min,int max)
{
	int player;

	while (true)
	{
		cin >> player;

		if (min > player || max < player)
		{
			cout << "入力エラー\n";
		}
		else
		{
			break;
		}
		return player;
	}
}

void Game(int max,int min)
{
	int InputCheck(int min, int max);

	int player;
	int cpu;
	int i,j;
	int Arry[10];

	int playerWin = 3;
	int cpuWin = 3;
	int Draw = 1;

	srand((unsigned int)time(NULL));

	player = InputCheck(min, max);

	cpu = rand() % NUMBER;
	for (i = 0; i < 10; i++)
	{
		Arry[10];


		for (j = 0; j < 7; j++)
		{
			cout << "===============Game Start===============\n";

			if (player == cpu)
			{
				cout << "引き分け\n";
				Draw++;
			}
			else if (player > cpu)
			{
				cout << "Playerのかち\n";
				playerWin++;
			}
			else
			{
				cout << "cpuの勝ち\n";
				cpuWin++;
			}

			cout << "player" << playerWin << endl;
			cout << "CPU" << cpuWin << endl;

		}
	}

}