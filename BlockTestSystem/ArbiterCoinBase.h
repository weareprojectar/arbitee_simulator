#pragma once
class ArbiterCoinBase
{
private:
	unsigned int maxCoin;
	unsigned int totalCoin;

public:
	ArbiterCoinBase(unsigned int _maxCoin);
	~ArbiterCoinBase();

	inline unsigned int GetTotalCoin() { return totalCoin; }

	float GenerateByProfit(float profit, int day);
	int IssueABT(int _day);
};