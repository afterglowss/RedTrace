#pragma once
#define MAP_WIDTH 120
#define MAP_HEIGHT 40
#define MAP_MARGIN_X 8
#define MAP_MARGIN_Y 4
int gameBoardInfo[MAP_HEIGHT][MAP_WIDTH] = {0};	//0: 빈공간
												//1: 테두리
												//2: PC가 막 남긴 자취
												//3: PC가 남기고 2초(?)가 지난 자취
int curPosX, curPosY;
int npcNum;
int npcPos[100][100];
int npcFreeze;
int npcSpeed;
int itemUseFlag;								//0 : 아이템 사용 안함.
												//1 : VanishPC
												//2 : RemoveTrace
												//3 : ReverseKey
												//4 : TraceAccel
												//5 : NpcFreeze
												//6 : NpcSpeedUp
int stageNum;
int traceDelay;
int speed;
int score;
