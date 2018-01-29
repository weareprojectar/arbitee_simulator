#include "stdafx.h"
#include "Trader.h"


Trader::Trader(int _id) : id(_id)
{
}


Trader::~Trader()
{
}

void Trader::Update()
{
	for (int i = 0; i < vAlgos.size(); ++i)
		vAlgos[i]->Update();
}

void Trader::AddOneAlgorithm(float profit)
{
	Algorithm* newAlgo = new Algorithm(profit);
	vAlgos.push_back(newAlgo);
}
