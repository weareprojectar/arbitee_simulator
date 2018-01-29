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
	/*abt = new Arbiter(21000000.0f);
	abt->SetCurrentAmount(200.0f);
	counting = 0;
	deltaTime = 0;*/

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

		if (KEYMANAGER->isOnceKeyDown('P')) {
		}
	}
}

void Simulator::Release()
{
	delete coinBase;
	coinBase = nullptr;

	KEYMANAGER->release();
	KEYMANAGER->ReleaseInstance();
}
