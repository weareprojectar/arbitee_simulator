#include "stdafx.h"
#include "Algorithm.h"


Algorithm::Algorithm(float _profit)
{
	vProfit.push_back(_profit);
	dueDay = 30;
}


Algorithm::~Algorithm()
{
}

void Algorithm::Update()
{
	dueDay--;
	if (dueDay == 0) {
		dueDay = 30;
		vProfit.push_back(vProfit.back + RandomFloatRange(-5.0f, 5.0f));
	}
}
