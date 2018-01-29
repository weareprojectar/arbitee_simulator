#pragma once
#include "SingletonBase.h"
#include <bitset>
#define KEYMAX 256

class KeyManager : public SingletonBase<KeyManager>
{
private:
	bitset<KEYMAX> _keyUp;
	bitset<KEYMAX> _keyDown;
	KeyManager();

public:
	friend KeyManager* SingletonBase<KeyManager>::GetInstance();
	~KeyManager();

	void init();
	void release();

	bool isOnceKeyDown(int key);
	bool isOnceKeyUp(int key);
	bool isStayKeyDown(int key);
	bool isToggleKey(int key);

};

#define KEYMANAGER KeyManager::GetInstance()