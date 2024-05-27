#pragma once
class Player
{
public:
	int X;
	int Y;
	int Gold;

	void Move();
	void Attack();
	void Kill();
	void GetGold();
};

