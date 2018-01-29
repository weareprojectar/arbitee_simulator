#include "stdafx.h"
#include "Simulator.h"


Simulator::Simulator(): day(0)
{
}


Simulator::~Simulator()
{
	this->Release();
}

void Simulator::Init()
{
	coinBase = new ArbiterCoinBase(21000000);

	KEYMANAGER->init();
}

void Simulator::Update()
{
	while (1) {
		/*deltaTime++;
		if (deltaTime >= __FPS) {
			deltaTime = 0;
			counting++;
			cout << "----------------------------------------------------------" << endl;
			if (abt->PublishStockReturnPenalty(0.5f, abt->GetCurrentAmount()) <= 0.00001f) break;
			cout << "현재돈 : " << abt->GetCurrentAmount() << endl;
		}

		if (KEYMANAGER->isOnceKeyDown('P')) {
			cout << counting << "회반복" << endl;
			system("pause");
		}
		if (KEYMANAGER->isOnceKeyDown(VK_ESCAPE)) {
			cout << counting << "회반복" << endl;
			break;
		}*/

		if (KEYMANAGER->isOnceKeyDown('P')) { system("pause"); }
	}
}

void Simulator::Release()
{
	delete coinBase;
	coinBase = nullptr;

	KEYMANAGER->release();
	KEYMANAGER->ReleaseInstance();
}
