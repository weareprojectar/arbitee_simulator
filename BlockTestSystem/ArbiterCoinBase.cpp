#include "stdafx.h"
#include "ArbiterCoinBase.h"


ArbiterCoinBase::ArbiterCoinBase(unsigned int _maxCoin) : maxCoin(_maxCoin), totalCoin(_maxCoin)
{
}


ArbiterCoinBase::~ArbiterCoinBase()
{
}

float ArbiterCoinBase::GenerateByProfit(float profit, int day)
{
	return 0.0f;
}

int ArbiterCoinBase::IssueABT(int _day)
{
	int issueNum;
	issueNum = IssueFunc(_day)*totalCoin;
	totalCoin -= issueNum;
	return issueNum;
}
