#pragma once
#include"stdafx.h"

double IssueFunc(int day)
{
	return (1 - (pow(day, 1. / exp(1)) / 20.3351)) / 968.434;
}

double RandomGaussian()
{
	return 0;
}

bool RandomBool()
{
	int random = rand();
	return (random % 2 == 0) ? true : false;
}

float RandomFloatRange(float min, float max)
{
	float factor = (rand() % 1001) * 0.001f;
	float delta = (max - min);
	float result = (delta * factor) + min;
	return result;
}

int RandomIntRange(int min, int max)
{
	int delta = max - min;
	return (rand() % delta) + min;
}
