#pragma once
//#include "Arbiter.h"
#include "ArbiterCoinBase.h"
#include "Trader.h"

class Simulator
{
private:
	/*Arbiter * abt;
	int counting;
	int deltaTime;*/
	int day;
	ArbiterCoinBase* coinBase;
	vector<Trader*> vTraders;

public:
	Simulator();
	~Simulator();

	void Init();
	void Update();
	void Release();
};