#pragma once
#define MAP_WIDTH 120
#define MAP_HEIGHT 40
#define MAP_MARGIN_X 8
#define MAP_MARGIN_Y 4
int gameBoardInfo[MAP_HEIGHT][MAP_WIDTH] = {0};	//0: �����
												//1: �׵θ�
												//2: PC�� �� ���� ����
												//3: PC�� ����� 2��(?)�� ���� ����
int curPosX, curPosY;
int npcNum;
int npcPos[100][100];
int npcFreeze;
int npcSpeed;
int itemUseFlag;								//0 : ������ ��� ����.
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
