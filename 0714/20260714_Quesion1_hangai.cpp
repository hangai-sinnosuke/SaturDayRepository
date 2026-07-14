#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_QuesionHeader_hangai.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数
    int player;
    int cpu;
    int probability;

    int strike = 0;
    int ball = 0;
    int out = 0;
    int hit = 0;
    //乱数の初期化
    srand((unsigned int)time(nullptr));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    do
    {
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;
        //プレイヤーに入力範囲の設定
        player = InputCheck(PITCHING_MIN, PITCHING_MAX);
        //プレイヤーが球を投げた際に何を投げたかをプレイヤーに設定
        PitchingType(player);
        //ランダムに定数をCPUに設定
        cpu = rand() % PROBABILITY;

        probability = rand() % PROBABILITY;

        //プレイヤーとCPUの判定
        if (player != cpu)
        {
            if (probability == 0)
            {
                cout << "ボール！" << endl;
                ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                strike++;
            }
        }
        else
        {
            strike = 0;
            ball = 0;

            if (probability == 1)
            {
                cout << "OUT!!" << endl;
                out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                hit++;
            }
        }


        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            if (strike >= STRIKE_COUNT)
            {
                cout << "三振アウト！" << endl;
                out++;
            }
            else
            {
                cout << "フォアボール！" << endl;
                hit++;
            }

            strike = 0;
            ball = 0;
        }
        //ストライク、ボール、アウトの表示とカウント
        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;

    } while (out < OUT_COUNT && hit < HIT_COUNT);

    Result(out);

    return 0;
}