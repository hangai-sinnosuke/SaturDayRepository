#include"Map.h"
#include"Dxlib.h"

#include<fstream>
#include<sstream>
#include<cmath>

//コンストラクタ
Map::Map()
{
	mapWidth = 0;
	mapHeight = 0;
	for (int i = 0; i < 64; i++)
	{
		chipImage[i] = -1;
	}
}