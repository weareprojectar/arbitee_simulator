#pragma once
class Algorithm
{
private:
	float profit;
	int dueDay;

public:
	Algorithm(float _profit);
	~Algorithm();

	void Update();
};