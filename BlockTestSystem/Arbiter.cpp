#include "stdafx.h"
#include "Arbiter.h"


Arbiter::Arbiter()
{
}


Arbiter::~Arbiter()
{
}

void Arbiter::RecieveCoin(int _coin)
{
	coinNum += _coin;
}

void Arbiter::SetICO()
{
	cout << "\n\tICO �ݾ� ���� :";
	cin >> fund;
}

bool Arbiter::IsEmpty()
{
	if (fund < 0)
		return true;
}
