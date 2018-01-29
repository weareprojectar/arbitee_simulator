#pragma once
#include "Algorithm.h"
class Trader
{
private:
	int id;
	unsigned int coin;
	vector<Algorithm*> vAlgos;

public:
	Trader(int _id);
	~Trader();

	inline void DepositCoin(int coin) { this->coin += coin; }
	
	void Update();

	void AddOneAlgorithm(float profit);
};