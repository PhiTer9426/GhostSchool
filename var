#pragma once
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include"map.h"
#pragma comment( lib, "msimg32.lib")
#pragma comment( lib, "winmm.lib")
using namespace std;

void init();
void GetCommand();
void doorfunc(int num);
void GameRe();
void menust();
void pause();
void save();
void Load();

class menuView {
public:
	int x1; int y1; int x2; int y2; int x3; int y3; int x4; int y4;
	int choice;
	IMAGE menu;
	IMAGE menu_1;
	IMAGE Pausemenu;
	MOUSEMSG mouse_con;

	menuView(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	virtual void bg() = 0;
	virtual void mouse_dis() = 0;
	void print();
};

class mainmenu :public menuView {
public:
	mainmenu(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	void mouse_dis();
	void bg();
};

class pausemenu :public menuView {
public:
	IMAGE back;
	bool flag_p;
	pausemenu(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	void mouse_dis();
	void bg();
};

class role {
	public:
		bool key_lib;  //图书馆钥匙
		bool weapon_guard;  //棍子
		bool key_hos;  //医务室钥匙
		bool key_hos_can;  //医务室柜子钥匙
		bool report_hos;  //医务室报告
		bool soup_din;  //食堂汤
		bool hyd_goods;  //杂物间灭火器
		int bag_num;


		int x;
		int y;
		int dir;
		int speed=40;
		int expl[4][2]= { { 0,1 },//右
							{ 1,0 },//下
							{ 0,-1 },//左
								{ -1,0 } };//上

		void moveLeft();
		void moveRight();
		void moveUp();
		void moveDown();
		void explore();		
};

class Clue
{
public:

	void Clue_101_noticeboard();   //F1_down
	void Clue_102_calendar();   //F1_right
	void Clue_103_door_guard();   //F1_down_guard
	void Clue_104_cabinet_guard();   //F1_down_guard
	void Clue_106_desk1_office();   //F1_right_office
	void Clue_107_desk2_office();   //F1_right_office
	void Clue_108_desk3_office();   //F1_right_office
	void Clue_109_cabinet_office();   //F1_right_office
	void Clue_110_figure_dining();   //F1_left_dining
	void Clue_111_number1_classroom();   //F1_up
	void Clue_117_number7_classroom();   //F2_up
	void Clue_118_number8_classroom();   //F2_up
	void Clue_119_number9_classroom();   //F2_up
	void Clue_120_number10_classroom();   //F2_up
	void Clue_121_number11_classroom();   //F2_up
	void Clue_122_number12_classroom();   //F2_up
	void Clue_123_blackboard_classroom();   //F1&2_up_classroomS
	void Clue_124_cabinet_classroom();   //F1&2_up_classroomS
	void Clue_125_door_library();
	void Clue_126_shelf1_library();   //F2_left_library
	void Clue_127_shelf2_library();   //F2_left_library
	void Clue_128_shelf3_library();   //F2_left_library
	void Clue_129_fackedwindow_hospital();   //F2_right_hospital
	void Clue_130_cabinet_hospital();   //F2_right_hospital
	void Clue_131_weapen_goods();   //F2_right_goods
	void Clue_132_hydrant_goods();   //F2_right_goods
	void Clue_134_desk_president();   //F3_up_president
	void Clue_135_door_hos();
	void Clue_136_door_dining();
	void Clue_150_final();
};

role myrole;
Map mymap;
Clue myclue;

IMAGE background;
IMAGE actor;
IMAGE help_p;
