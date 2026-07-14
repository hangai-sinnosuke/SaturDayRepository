#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_hangai.h"
using namespace std;

void PitchingType(int pitching)
{
    //入力した際にどの球を投げたかの表示
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}
//勝ったほうの表示
void Result(int out)
{
    if (out >= OUT_COUNT)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}
//入力範囲（入力した際に誤りがある場合再度入力させる
int InputCheck(int min, int max)
{
    int player;

    while (true)
    {
        cin >> player;

        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }
    //戻り値
    return player;
}