#pragma once
class ArbiterCoinBase
{
private:
	unsigned int totalCoin;

public:
	ArbiterCoinBase(unsigned int _totalCoin);
	~ArbiterCoinBase();

	inline unsigned int GetTotalCoin() { return totalCoin; }

	float GenerateByProfit(float profit, int day);
};