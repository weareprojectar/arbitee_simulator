#pragma once
class Algorithm
{
private:
	vector<float> vProfit;
	int dueDay;
	bool isTest;

public:
	Algorithm(float _profit);
	~Algorithm();

	bool GetIsTest() { return isTest; }
	int GetDueDay() { return dueDay; }

	void Update();
};