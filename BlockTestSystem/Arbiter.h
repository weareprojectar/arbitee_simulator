#pragma once
class Arbiter
{
private:
	int coinNum;
	int fund;

public:
	Arbiter();
	~Arbiter();

	void RecieveCoin(int _coin);
	void SetICO();

	bool IsEmpty();
};

