#pragma once
//#include "Arbiter.h"
#include "ArbiterCoinBase.h"
#include "Trader.h"
#include "Arbiter.h"

class Simulator
{
private:
	int day;
	ArbiterCoinBase* coinBase;

	Arbiter*		arbiter;
	vector<Trader*> vTraders;

public:
	Simulator();
	~Simulator();

	void Init();
	void Update();
	void Release();
};