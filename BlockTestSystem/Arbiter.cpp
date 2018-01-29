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
	cout << "\n\tICO 금액 설정 :";
	cin >> fund;
}

bool Arbiter::IsEmpty()
{
	if (fund < 0)
		return true;
}
