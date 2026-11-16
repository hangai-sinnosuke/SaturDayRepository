#pragma once
class Sphere
{
private:
	float x;
	float y;
	float z;

public:

	void Init();

	void Update(float deltaTiem);

	void Draw() const;

	void Reset();
};

