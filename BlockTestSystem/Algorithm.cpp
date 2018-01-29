#include "stdafx.h"
#include "Algorithm.h"


Algorithm::Algorithm(float _profit) : profit(_profit)
{
	dueDay = 30;
}


Algorithm::~Algorithm()
{
}

void Algorithm::Update()
{
	dueDay--;
}
