// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
#include <windows.h>
//#include <MMSystem.h>
#include <stdio.h>
#include <tchar.h>
#include <iostream>
using namespace std;

#include <vector>
#include <conio.h>
#include <math.h>
#include <list>
#include <queue>
#include <time.h>

#define __FPS	1
#define __ENTER	13

#include "Configure.h"
#include "KeyManager.h"

struct sStockOutput {
	float investAmount;
	float profitRate;
};