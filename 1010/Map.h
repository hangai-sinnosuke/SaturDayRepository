#pragma once

#include<vector>
#include<string>

using namespace std;

class Map
{
private:
	//マップチップの番号
	vector<vector<int>> mapData;
	vector<vector<int>> hitData;

	//マップチップ画像
	int chipImage[64];

	//マップの縦横のマスの数
	int mapWidth;
	int mapHeight;

	//マップの大きさ
	static constexpr int CHIP_SIZE = 64;

	//csvファイルの読み込み
	bool LoadCSV(const char* fileName, vector<vector<int>> &data);
public:
	Map();
	bool Init();
	//マップ描画
	void Draw(float cameraX, float cameraY);
	//指定したマスが通行できるか調べる
	bool IsSolid(int tikeX, int tileY);
	//ワールド座標から当たり判定を調べる
	bool IsSolidAt(float worldX, float worldY);
};