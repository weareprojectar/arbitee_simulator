// BlockTestSystem.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Simulator.h"

int main()
{
	srand(unsigned(time(NULL)));
	Simulator* pSimulator = new Simulator();
	pSimulator->Init();
	pSimulator->Update();
	delete pSimulator;
	pSimulator = nullptr;
	system("pause");
	return 0;
}