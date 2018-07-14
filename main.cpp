#include"vars.h"

int main() {
	init();
	BeginBatchDraw();

	menust();
	
	FlushBatchDraw();
	cleardevice();

	
	EndBatchDraw();
	Sleep(3000);
	return 0;	
}

void init() {
	int  WND_WIDTH = 960; //窗口宽度
	int  WND_HEIGHT = 640;//窗口高度

						   //	WND_WIDTH = GetSystemMetrics(SM_CXSCREEN);
						   //	WND_HEIGHT = GetSystemMetrics(SM_CYSCREEN);全屏

	initgraph(WND_WIDTH, WND_HEIGHT);
}

void doorfunc(int num) {
	switch (num)
	{
	case 2:
		myrole.x = 8;
		myrole.y = 12;
		loadimage(&background, TEXT("Resource\\f1-left.jpg"));
		mymap.Setmap_F1_left();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 3:
		myrole.x = 4;
		myrole.y = 12;
		loadimage(&background, TEXT("Resource\\f1-right.jpg"));
		mymap.Setmap_F1_right();
		myrole.moveRight();
		myrole.x++;
		break;
	case 4:
		myrole.x = 5;
		myrole.y = 0;
		loadimage(&background, TEXT("Resource\\f2-down.jpg"));
		mymap.Setmap_F2_down();
		myrole.moveDown();
		myrole.y++;
		break;
	case 5:
		myrole.x = 6;
		myrole.y = 1;
		loadimage(&background, TEXT("Resource\\f1-left.jpg"));
		mymap.Setmap_F1_left();
		myrole.moveDown();
		myrole.y++;
		break;
	case 6:
		myrole.x = 6;
		myrole.y = 1;
		loadimage(&background, TEXT("Resource\\f1-right.jpg"));
		mymap.Setmap_F1_right();
		myrole.moveDown();
		myrole.y++;
		break;
	case 7:
		myrole.x = 13;
		myrole.y = 15;
		loadimage(&background, TEXT("Resource\\class-up.jpg"));
		mymap.Setmap_classroom1();
		myrole.moveUp();
		myrole.y--;
		break;
	case 8:
		myrole.x = 13;
		myrole.y = 15;
		loadimage(&background, TEXT("Resource\\class-up.jpg"));
		mymap.Setmap_classroom2();
		myrole.moveUp();
		myrole.y--;
		break;
	case 9:
		myrole.x = 13;
		myrole.y = 15;
		loadimage(&background, TEXT("Resource\\class-up.jpg"));
		mymap.Setmap_classroom3();
		myrole.moveUp();
		myrole.y--;
		break;
	case 10:
		myrole.x = 12;
		myrole.y = 2;
		loadimage(&background, TEXT("Resource\\class-down.jpg"));
		mymap.Setmap_classroom4();
		myrole.moveDown();
		myrole.y++;
		break;
	case 11:
		myrole.x = 12;
		myrole.y = 2;
		loadimage(&background, TEXT("Resource\\class-down.jpg"));
		mymap.Setmap_classroom5();
		myrole.moveDown();
		myrole.y++;
		break;
	case 12:
		myrole.x = 12;
		myrole.y = 2;
		loadimage(&background, TEXT("Resource\\class-down.jpg"));
		mymap.Setmap_classroom6();
		myrole.moveDown();
		myrole.y++;
		break;
	case 13:
		myrole.x = 0;
		myrole.y = 6;
		loadimage(&background, TEXT("Resource\\f1-down.jpg"));
		mymap.Setmap_F1_down();
		myrole.moveRight();
		myrole.x++;
		break;
	case 14:
		myrole.x = 0;
		myrole.y = 8;
		loadimage(&background, TEXT("Resource\\f1-up.jpg"));
		mymap.Setmap_F1_up();
		myrole.moveRight();
		myrole.x++;
		break;
	case 15:
		if (myrole.report_hos == 1 && myrole.soup_din == 0)
		{
			myrole.x = 13;
			myrole.y = 0;
			loadimage(&background, TEXT("Resource\\dining.jpg"));
			mymap.Setmap_dining();
			myrole.moveDown();
			myrole.y++;
		}
		else
		{
			myclue.Clue_136_door_dining();
		}
		break;
	case 16:
		myrole.x = 15;
		myrole.y = 6;
		loadimage(&background, TEXT("Resource\\f1-down.jpg"));
		mymap.Setmap_F1_down();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 17:
		myrole.x = 15;
		myrole.y = 8;
		loadimage(&background, TEXT("Resource\\f1-up.jpg"));
		mymap.Setmap_F1_up();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 18:
		myrole.x = 5;
		myrole.y = 0;
		loadimage(&background, TEXT("Resource\\f1-down.jpg"));
		mymap.Setmap_F1_down();
		myrole.moveDown();
		myrole.y++;
		break;
	case 19:
		myrole.x = 8;
		myrole.y = 12;
		loadimage(&background, TEXT("Resource\\f2-left.jpg"));
		mymap.Setmap_F2_left();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 20:
		myrole.x = 4;
		myrole.y = 12;
		loadimage(&background, TEXT("Resource\\f2-right.jpg"));
		mymap.Setmap_F2_right();
		myrole.moveRight();
		myrole.x++;
		break;
	case 21:
		myrole.x = 5;
		myrole.y = 0;
		loadimage(&background, TEXT("Resource\\f3-down.jpg"));
		mymap.Setmap_F3_down();
		myrole.moveDown();
		myrole.y++;
		break;
	case 22:
		myrole.x = 6;
		myrole.y = 1;
		loadimage(&background, TEXT("Resource\\f2-left.jpg"));
		mymap.Setmap_F2_left();
		myrole.moveDown();
		myrole.y++;
		break;
	case 23:
		myrole.x = 6;
		myrole.y = 1;
		loadimage(&background, TEXT("Resource\\f2-right.jpg"));
		mymap.Setmap_F2_right();
		myrole.moveDown();
		myrole.y++;
		break;
	case 24:
		myrole.x = 13;
		myrole.y = 15;
		loadimage(&background, TEXT("Resource\\class-up.jpg"));
		mymap.Setmap_classroom7();
		myrole.moveUp();
		myrole.y--;
		break;
	case 25:
		myrole.x = 13;
		myrole.y = 15;
		loadimage(&background, TEXT("Resource\\class-up.jpg"));
		mymap.Setmap_classroom8();
		myrole.moveUp();
		myrole.y--;
		break;
	case 26:
		myrole.x = 13;
		myrole.y = 15;
		loadimage(&background, TEXT("Resource\\class-up.jpg"));
		mymap.Setmap_classroom9();
		myrole.moveUp();
		myrole.y--;
		break;
	case 27:
		myrole.x = 12;
		myrole.y = 2;
		loadimage(&background, TEXT("Resource\\class-down.jpg"));
		mymap.Setmap_classroom10();
		myrole.moveDown();
		myrole.y++;
		break;
	case 28:
		myrole.x = 12;
		myrole.y = 2;
		loadimage(&background, TEXT("Resource\\class-down.jpg"));
		mymap.Setmap_classroom11();
		myrole.moveDown();
		myrole.y++;
		break;
	case 29:
		myrole.x = 12;
		myrole.y = 2;
		loadimage(&background, TEXT("Resource\\class-down.jpg"));
		mymap.Setmap_classroom12();
		myrole.moveDown();
		myrole.y++;
		break;
	case 30:
		myrole.x = 0;
		myrole.y = 6;
		loadimage(&background, TEXT("Resource\\f2-down.jpg"));
		mymap.Setmap_F2_down();
		myrole.moveRight();
		myrole.x++;
		break;
	case 31:
		myrole.x = 0;
		myrole.y = 8;
		loadimage(&background, TEXT("Resource\\f2-up.jpg"));
		mymap.Setmap_F2_up();
		myrole.moveRight();
		myrole.x++;
		break;
	case 32:
		myclue.Clue_125_door_library();
		break;
	case 33:
		myrole.x = 15;
		myrole.y = 6;
		loadimage(&background, TEXT("Resource\\f2-down.jpg"));
		mymap.Setmap_F2_down();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 34:
		myrole.x = 15;
		myrole.y = 8;
		loadimage(&background, TEXT("Resource\\f2-up.jpg"));
		mymap.Setmap_F2_up();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 35:
		myrole.x = 2;
		myrole.y = 8;
		loadimage(&background, TEXT("Resource\\goods.jpg"));
		mymap.Setmap_goods();
		myrole.moveRight();
		myrole.x++;
		break;
	case 36:
		myclue.Clue_135_door_hos();
		break;
	case 37:
		myrole.x = 9;
		myrole.y = 0;
		loadimage(&background, TEXT("Resource\\f2-down.jpg"));
		mymap.Setmap_F2_down();
		myrole.moveDown();
		myrole.y++;
		break;
	case 38:
		myrole.x = 8;
		myrole.y = 12;
		loadimage(&background, TEXT("Resource\\f3-left.jpg"));
		mymap.Setmap_F3_left();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 39:
		myrole.x = 7;
		myrole.y = 12;
		loadimage(&background, TEXT("Resource\\f3-right.jpg"));
		mymap.Setmap_F3_right();
		myrole.moveRight();
		myrole.x++;
		break;
	case 40:
		myrole.x = 6;
		myrole.y = 1;
		loadimage(&background, TEXT("Resource\\f3-left.jpg"));
		mymap.Setmap_F3_left();
		myrole.moveDown();
		myrole.y++;
		break;
	case 41:
		myrole.x = 9;
		myrole.y = 1;
		loadimage(&background, TEXT("Resource\\f3-right.jpg"));
		mymap.Setmap_F3_right();
		myrole.moveDown();
		myrole.y++;
		break;
	case 42:
		myrole.x = 11;
		myrole.y = 2;
		loadimage(&background, TEXT("Resource\\president.jpg"));
		mymap.Setmap_president();
		myrole.moveDown();
		myrole.y++;
		break;
	case 43:
		myrole.x = 0;
		myrole.y = 6;
		loadimage(&background, TEXT("Resource\\f3-down.jpg"));
		mymap.Setmap_F3_down();
		myrole.moveRight();
		myrole.x++;
		break;
	case 44:
		myrole.x =0;
		myrole.y = 8;
		loadimage(&background, TEXT("Resource\\f3-up.jpg"));
		mymap.Setmap_F3_up();
		myrole.moveRight();
		myrole.x++;
		break;
	case 45:
		myrole.x = 15;
		myrole.y = 6;
		loadimage(&background, TEXT("Resource\\f3-down.jpg"));
		mymap.Setmap_F3_down();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 46:
		myrole.x = 15;
		myrole.y = 8;
		loadimage(&background, TEXT("Resource\\f3-up.jpg"));
		mymap.Setmap_F3_up();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 47:
		myrole.x = 4;
		myrole.y = 8;
		loadimage(&background, TEXT("Resource\\f1-left.jpg"));
		mymap.Setmap_F1_left();
		myrole.moveRight();
		myrole.x++;
		break;
	case 48:
		myrole.x = 8;
		myrole.y = 5;
		loadimage(&background, TEXT("Resource\\f1-right.jpg"));
		mymap.Setmap_F1_right();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 49:
		myrole.x = 4;
		myrole.y = 8;
		loadimage(&background, TEXT("Resource\\f2-left.jpg"));
		mymap.Setmap_F2_left();
		myrole.moveRight();
		myrole.x++;
		break;
	case 50:
		myrole.x = 8;
		myrole.y = 5;
		loadimage(&background, TEXT("Resource\\f2-right.jpg"));
		mymap.Setmap_F2_right();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 51:
		myrole.x = 8;
		myrole.y = 11;
		loadimage(&background, TEXT("Resource\\f2-right.jpg"));
		mymap.Setmap_F2_right();
		myrole.moveLeft();
		myrole.x--;
		break;
	case 52:
		myrole.x = 7;
		myrole.y = 5;
		loadimage(&background, TEXT("Resource\\f3-up.jpg"));
		mymap.Setmap_F3_up();
		myrole.moveDown();
		myrole.y++;
		break;
	case 53:
		myrole.x = 4;
		myrole.y = 5;
		loadimage(&background, TEXT("Resource\\f1-up.jpg"));
		mymap.Setmap_F1_up();
		myrole.moveDown();
		myrole.y++;
		break;
	case 54:
		myrole.x = 8;
		myrole.y = 5;
		loadimage(&background, TEXT("Resource\\f1-up.jpg"));
		mymap.Setmap_F1_up();
		myrole.moveDown();
		myrole.y++;
		break;
	case 55:
		myrole.x = 12;
		myrole.y = 5;
		loadimage(&background, TEXT("Resource\\f1-up.jpg"));
		mymap.Setmap_F1_up();
		myrole.moveDown();
		myrole.y++;
		break;
	case 56:
		myrole.x = 4;
		myrole.y = 10;
		loadimage(&background, TEXT("Resource\\f1-up.jpg"));
		mymap.Setmap_F1_up();
		myrole.moveUp();
		myrole.y--;
		break;
	case 57:
		myrole.x = 8;
		myrole.y = 10;
		loadimage(&background, TEXT("Resource\\f1-up.jpg"));
		mymap.Setmap_F1_up();
		myrole.moveUp();
		myrole.y--;
		break;
	case 58:
		myrole.x = 12;
		myrole.y = 10;
		loadimage(&background, TEXT("Resource\\f1-up.jpg"));
		mymap.Setmap_F1_up();
		myrole.moveUp();
		myrole.y--;
		break;
	case 59:
		myrole.x = 4;
		myrole.y = 5;
		loadimage(&background, TEXT("Resource\\f2-up.jpg"));
		mymap.Setmap_F2_up();
		myrole.moveDown();
		myrole.y++;
		break;
	case 60:
		myrole.x = 8;
		myrole.y = 5;
		loadimage(&background, TEXT("Resource\\f2-up.jpg"));
		mymap.Setmap_F2_up();
		myrole.moveDown();
		myrole.y++;
		break;
	case 61:
		myrole.x = 12;
		myrole.y = 5;
		loadimage(&background, TEXT("Resource\\f2-up.jpg"));
		mymap.Setmap_F2_up();
		myrole.moveDown();
		myrole.y++;
		break;
	case 62:
		myrole.x = 4;
		myrole.y = 10;
		loadimage(&background, TEXT("Resource\\f2-up.jpg"));
		mymap.Setmap_F2_up();
		myrole.moveUp();
		myrole.y--;
		break;
	case 63:
		myrole.x = 8;
		myrole.y = 10;
		loadimage(&background, TEXT("Resource\\f2-up.jpg"));
		mymap.Setmap_F2_up();
		myrole.moveUp();
		myrole.y--;
		break;
	case 64:
		myrole.x = 12;
		myrole.y = 10;
		loadimage(&background, TEXT("Resource\\f2-up.jpg"));
		mymap.Setmap_F2_up();
		myrole.moveUp();
		myrole.y--;
		break;
	case 65:
		myrole.x = 11;
		myrole.y = 0;
		loadimage(&background, TEXT("Resource\\office.jpg"));
		mymap.Setmap_office();
		myrole.moveDown();
		myrole.y++;
		break;

	default:
		break;
	}
}

void GameRe() {
	IMAGE story;
	loadimage(&story, TEXT("Resource\\backstory.jpg"));
	putimage(0, 0, &story);
	FlushBatchDraw();
	while (1) {
		if (GetAsyncKeyState(13) & 0x8000)
			break;
		Sleep(50);
	}

	IMAGE Bag;
	myrole.x = 8;
	myrole.y = 15;
	myrole.bag_num = 0;
	myrole.hyd_goods = 0;
	myrole.key_hos = 0;
	myrole.key_lib = 0;
	myrole.key_hos_can = 0;
	myrole.report_hos = 0;
	myrole.soup_din = 0;
	myrole.weapon_guard = 0;
	loadimage(&background, TEXT("Resource\\f1-down.jpg"));
	loadimage(&actor, TEXT("Resource\\人物.bmp"));
	loadimage(&Bag, TEXT("Resource\\bag.jpg"));
	mymap.Setmap_F1_down();
	putimage(0, 0, &background);
	putimage(640, 0, &Bag);
	myrole.moveUp();
	myrole.y = 14;

	FlushBatchDraw();
}

void save() {
	FILE*fp;
	errno_t err;
	if ((err = fopen_s(&fp, "data.dat", "wb")) == 0) {
		fwrite(&myrole.x, sizeof(int), 1, fp);
		fwrite(&myrole.y, sizeof(int), 1, fp);
		fwrite(&myrole.hyd_goods, sizeof(int), 1, fp);
		fwrite(&myrole.key_hos, sizeof(int), 1, fp);
		fwrite(&myrole.key_hos_can, sizeof(int), 1, fp);
		fwrite(&myrole.key_lib, sizeof(int), 1, fp);
		fwrite(&myrole.report_hos, sizeof(int), 1, fp);
		fwrite(&myrole.soup_din, sizeof(int), 1, fp);
		fwrite(&myrole.weapon_guard, sizeof(int), 1, fp);
		fwrite(&mymap.scene, sizeof(int), 1, fp);
		fclose(fp);
	}	
}

void Load() {
	FILE*fp;
	errno_t err;
	if ((err = fopen_s(&fp, "data.dat", "rb")) == 0)
	{
		fread(&myrole.x, sizeof(int), 1, fp);
		fread(&myrole.y, sizeof(int), 1, fp);
		fread(&myrole.hyd_goods, sizeof(int), 1, fp);
		fread(&myrole.key_hos, sizeof(int), 1, fp);
		fread(&myrole.key_hos_can, sizeof(int), 1, fp);
		fread(&myrole.key_lib, sizeof(int), 1, fp);
		fread(&myrole.report_hos, sizeof(int), 1, fp);
		fread(&myrole.soup_din, sizeof(int), 1, fp);
		fread(&myrole.weapon_guard, sizeof(int), 1, fp);
		fread(&mymap.scene, sizeof(int), 1, fp);
		fclose(fp);
		switch (mymap.scene)
		{
		case 1:
			mymap.Setmap_classroom1();
			loadimage(&background, TEXT("Resource\\class-up.jpg"));
			break;
		case 2:
			mymap.Setmap_classroom2();
			loadimage(&background, TEXT("Resource\\class-up.jpg"));
			break;
		case 3:
			mymap.Setmap_classroom3();
			loadimage(&background, TEXT("Resource\\class-up.jpg"));
			break;
		case 4:
			mymap.Setmap_classroom4();
			loadimage(&background, TEXT("Resource\\class-down.jpg"));
			break;
		case 5:
			mymap.Setmap_classroom5();
			loadimage(&background, TEXT("Resource\\class-down.jpg"));
			break;
		case 6:
			mymap.Setmap_classroom6();
			loadimage(&background, TEXT("Resource\\class-down.jpg"));
			break;
		case 7:
			mymap.Setmap_classroom7();
			loadimage(&background, TEXT("Resource\\class-up.jpg"));
			break;
		case 8:
			mymap.Setmap_classroom8();
			loadimage(&background, TEXT("Resource\\class-up.jpg"));
			break;
		case 9:
			mymap.Setmap_classroom9();
			loadimage(&background, TEXT("Resource\\class-up.jpg"));
			break;
		case 10:
			mymap.Setmap_classroom10();
			loadimage(&background, TEXT("Resource\\class-down.jpg"));
			break;
		case 11:
			mymap.Setmap_classroom11();
			loadimage(&background, TEXT("Resource\\class-down.jpg"));
			break;
		case 12:
			mymap.Setmap_classroom12();
			loadimage(&background, TEXT("Resource\\class-down.jpg"));
			break;
		case 13:
			mymap.Setmap_office();
			loadimage(&background, TEXT("Resource\\office.jpg"));
			break;
		case 14:
			mymap.Setmap_president();
			loadimage(&background, TEXT("Resource\\president.jpg"));
			break;
		case 15:
			mymap.Setmap_dining();
			loadimage(&background, TEXT("Resource\\dining.jpg"));
			break;
		case 16:
			mymap.Setmap_F1_down();
			loadimage(&background, TEXT("Resource\\f1-down.jpg"));
			break;
		case 17:
			mymap.Setmap_F1_left();
			loadimage(&background, TEXT("Resource\\f1-left.jpg"));
			break;
		case 18:
			mymap.Setmap_F1_right();
			loadimage(&background, TEXT("Resource\\f1-right.jpg"));
			break;
		case 19:
			mymap.Setmap_F1_up();
			loadimage(&background, TEXT("Resource\\f1-up.jpg"));
			break;
		case 20:
			mymap.Setmap_F2_down();
			loadimage(&background, TEXT("Resource\\f2-down.jpg"));
			break;
		case 21:
			mymap.Setmap_F2_left();
			loadimage(&background, TEXT("Resource\\f2-left.jpg"));
			break;
		case 22:
			mymap.Setmap_F2_right();
			loadimage(&background, TEXT("Resource\\f2-right.jpg"));
			break;
		case 23:
			mymap.Setmap_F2_up();
			loadimage(&background, TEXT("Resource\\f2-up.jpg"));
			break;
		case 24:
			mymap.Setmap_F3_down();
			loadimage(&background, TEXT("Resource\\f3-down.jpg"));
			break;
		case 25:
			mymap.Setmap_F3_left();
			loadimage(&background, TEXT("Resource\\f3-left.jpg"));
			break;
		case 26:
			mymap.Setmap_F3_right();
			loadimage(&background, TEXT("Resource\\f3-right.jpg"));
			break;
		case 27:
			mymap.Setmap_F3_up();
			loadimage(&background, TEXT("Resource\\f3-up.jpg"));
			break;
		case 28:
			mymap.Setmap_hospital();
			loadimage(&background, TEXT("Resource\\hospital.jpg"));
			break;
		case 29:
			mymap.Setmap_library();
			loadimage(&background, TEXT("Resource\\library.jpg"));
			break;
		case 30:
			mymap.Setmap_goods();
			loadimage(&background, TEXT("Resource\\goods.jpg"));
			break;
		default:
			break;
		}
		loadimage(&actor, TEXT("Resource\\人物.bmp"));
		IMAGE Bag;
		IMAGE stuff;
		loadimage(&Bag, TEXT("Resource\\bag.jpg"));
		HDC dstDC = GetImageHDC();  //获取目标环境句柄
		HDC srcDC;
		srcDC = GetImageHDC(&actor);
	//	cleardevice();
		putimage(0, 0, &background);
		putimage(640, 0, &Bag);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40, 40, 40, srcDC, 40, 0, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		myrole.bag_num = 0;
		if (myrole.hyd_goods==1)
		{
			loadimage(&stuff, TEXT("Resource\\hyd.jpg"));
			putimage(680, 90 + 75 * myrole.bag_num, &stuff);
			myrole.bag_num++;
		}
		if (myrole.key_hos == 1)
		{
			loadimage(&stuff, TEXT("Resource\\key_h.jpg"));
			putimage(680, 90 + 75 * myrole.bag_num, &stuff);
			myrole.bag_num++;
		}
		if (myrole.key_hos_can == 1)
		{
			loadimage(&stuff, TEXT("Resource\\key_h_c.jpg"));
			putimage(680, 90 + 75 * myrole.bag_num, &stuff);
			myrole.bag_num++;
		}
		if (myrole.key_lib == 1)
		{
			loadimage(&stuff, TEXT("Resource\\key_lib.jpg"));
			putimage(680, 90 + 75 * myrole.bag_num, &stuff);
			myrole.bag_num++;
		}
		if (myrole.weapon_guard == 1)
		{
			loadimage(&stuff, TEXT("Resource\\stick.jpg"));
			putimage(680, 90 + 75 * myrole.bag_num, &stuff);
			myrole.bag_num++;
		}
		if (myrole.report_hos == 1)
		{
			loadimage(&stuff, TEXT("Resource\\report_h.jpg"));
			putimage(680, 90 + 75 * myrole.bag_num, &stuff);
			myrole.bag_num++;
		}
		FlushBatchDraw();

		while (1)
		{
			GetCommand();
			Sleep(10);
		}
	}
}

void help() {
	int tem = 1;
	loadimage(&help_p, TEXT("Resource\\help.jpg"));
	putimage(0, 0, &help_p);
	FlushBatchDraw();
	while (tem) {
		if (GetAsyncKeyState(27) & 0x8000) {
			tem = 0;
		}
		Sleep(50);
	}
}

void menust() {
	mainmenu menu1(400, 330, 400, 390, 400, 450, 400, 510);
	menu1.choice = 1;
	menu1.bg();
	FlushMouseMsgBuffer();
	while (1)
	{
		menu1.mouse_con = GetMouseMsg();
		menu1.mouse_dis();
		menu1.print();
	}
}

void pause() {
	pausemenu menu2(280, 180, 280, 260, 280, 340, 280, 420);
	menu2.flag_p = 1;
	menu2.choice = 1;
	getimage(&menu2.back, 0, 0, 960, 640);
	menu2.bg();
	FlushMouseMsgBuffer();
	while (menu2.flag_p) {
		menu2.mouse_con = GetMouseMsg();
		menu2.mouse_dis();
	}
	putimage(0, 0, &menu2.back);
	FlushBatchDraw();
}

void GetCommand()
{
	if (GetAsyncKeyState(80) & 0x8000)
	{
		pause();
	}
	if ((GetAsyncKeyState('e') & 0x8000) || (GetAsyncKeyState('E') & 0x8000)) {
		myrole.explore();
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
		HDC dstDC = GetImageHDC();  //获取目标环境句柄
		HDC srcDC;
		srcDC = GetImageHDC(&actor);
	//	cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40, 40, 40, srcDC, 40, 40, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		myrole.dir = 2;
		if (mymap.map[myrole.y][myrole.x - 1] == 1) {
			myrole.moveLeft();
			myrole.x--;
		}
		else if (mymap.map[myrole.y][myrole.x - 1] < 70 && mymap.map[myrole.y][myrole.x - 1] > 1) {

			myrole.moveLeft();
			doorfunc(mymap.map[myrole.y][myrole.x - 1]);
		}
	}
	else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
		HDC dstDC = GetImageHDC();  //获取目标环境句柄
		HDC srcDC;
		srcDC = GetImageHDC(&actor);
	//	cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40, 40, 40, srcDC, 40, 80, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		myrole.dir = 0;
		if (mymap.map[myrole.y][myrole.x + 1] == 1) {
		myrole.moveRight();
		myrole.x++;
		}
		else if (mymap.map[myrole.y][myrole.x + 1] < 70 && mymap.map[myrole.y][myrole.x + 1] > 1) {
			myrole.moveRight();
			doorfunc(mymap.map[myrole.y][myrole.x + 1]);
		}
	}
	else if (GetAsyncKeyState(VK_UP) & 0x8000) {
		HDC dstDC = GetImageHDC();  //获取目标环境句柄
		HDC srcDC;
		srcDC = GetImageHDC(&actor);
	//	cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40, 40, 40, srcDC, 40, 120, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 
		FlushBatchDraw();
		myrole.dir = 3;
		if (mymap.map[myrole.y - 1][myrole.x] == 1) {
		myrole.moveUp();
		myrole.y--;
		}
		else if (mymap.map[myrole.y - 1][myrole.x] < 70 && mymap.map[myrole.y - 1][myrole.x] > 1) {
			myrole.moveUp();
			doorfunc(mymap.map[myrole.y - 1][myrole.x]);
		}
	}
	else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
		HDC dstDC = GetImageHDC();  //获取目标环境句柄
		HDC srcDC;
		srcDC = GetImageHDC(&actor);
	//	cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40, 40, 40, srcDC, 40, 0, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		myrole.dir = 1;
		if (mymap.map[myrole.y + 1][myrole.x] == 1) {
		myrole.moveDown();
		myrole.y++;
		}
		else if (mymap.map[myrole.y + 1][myrole.x] < 70&& mymap.map[myrole.y + 1][myrole.x] > 1) {
			myrole.moveDown();
			doorfunc(mymap.map[myrole.y + 1][myrole.x]);
		}
	}
}

menuView::menuView(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4) {
	x1 = X1; y1 = Y1; x2 = X2; y2 = Y2; x3 = X3; y3 = Y3; x4 = X4; y4 = Y4;
}

void role::moveLeft() {
		HDC dstDC = GetImageHDC();  //获取目标环境句柄
		HDC srcDC;
		srcDC = GetImageHDC(&actor);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40 - 10, myrole.y * 40, 40, 40, srcDC, 40, 40, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40 - 20, myrole.y * 40, 40, 40, srcDC, 80, 40, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
		FlushBatchDraw();
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40 - 30, myrole.y * 40, 40, 40, srcDC, 40, 40, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40 - 40, myrole.y * 40, 40, 40, srcDC, 0, 40, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
}

void role::moveRight() {
		HDC dstDC = GetImageHDC();  //获取目标环境句柄
		HDC srcDC;
		srcDC = GetImageHDC(&actor);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40 + 10, myrole.y * 40, 40, 40, srcDC, 40, 80, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40 + 20, myrole.y * 40, 40, 40, srcDC, 80, 80, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40 + 30, myrole.y * 40, 40, 40, srcDC, 40, 80, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40 + 40, myrole.y * 40, 40, 40, srcDC, 0, 80, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
}

void role::moveUp() {
		HDC dstDC = GetImageHDC();  //获取目标环境句柄
		HDC srcDC;
		srcDC = GetImageHDC(&actor);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40-10, 40, 40, srcDC, 40, 120, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40-20, 40, 40, srcDC, 80, 120, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 
		FlushBatchDraw();
		Sleep(speed);
		FlushBatchDraw();
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40-30, 40, 40, srcDC, 40, 120, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40-40, 40, 40, srcDC, 0, 120, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
}

void role::moveDown() {
		HDC dstDC = GetImageHDC();  //获取目标环境句柄
		HDC srcDC;
		srcDC = GetImageHDC(&actor);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40+10, 40, 40, srcDC, 40, 0, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 	
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40+20, 40, 40, srcDC, 80, 0, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40+30, 40, 40, srcDC, 40, 0, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 
		FlushBatchDraw();
		Sleep(speed);
//		cleardevice();
		putimage(0, 0, &background);
		TransparentBlt(dstDC, myrole.x * 40, myrole.y * 40+40, 40, 40, srcDC, 0, 0, 40, 40, RGB(0, 255, 1));//将键色设置为绿色 
		FlushBatchDraw();
		Sleep(speed);
}

void role::explore()
{
	switch (mymap.map[myrole.y + expl[dir][0]][myrole.x + expl[dir][1]])
	{
	case 101:
		myclue.Clue_101_noticeboard();
		break;
	case 102:
		myclue.Clue_102_calendar();
		break;
	case 103:
		myclue.Clue_103_door_guard();
		break;
	case 104:
		if (myrole.key_hos == 0)
		{
			myclue.Clue_104_cabinet_guard();
		}
		break;
	case 106:
		myclue.Clue_106_desk1_office();
		break;
	case 107:
		myclue.Clue_107_desk2_office();
		break;
	case 108:
		myclue.Clue_108_desk3_office();
		break;
	case 109:
		if (myrole.key_lib == 0) {
			myclue.Clue_109_cabinet_office();
		}
		break;
	case 110:
		myclue.Clue_110_figure_dining();
		break;
	case 111:
		myclue.Clue_111_number1_classroom();
		break;
	case 117:
		myclue.Clue_117_number7_classroom();
		break;
	case 118:
		myclue.Clue_118_number8_classroom();
		break;
	case 119:
		myclue.Clue_119_number9_classroom();
		break;
	case 120:
		myclue.Clue_120_number10_classroom();
		break;
	case 121:
		myclue.Clue_121_number11_classroom();
		break;
	case 122:
		myclue.Clue_122_number12_classroom();
		break;
	case 123:
		myclue.Clue_123_blackboard_classroom();
		break;
	case 124:
		myclue.Clue_124_cabinet_classroom();
		break;
	case 126:
		myclue.Clue_126_shelf1_library();
		break;
	case 127:
		myclue.Clue_127_shelf2_library();
		break;
	case 128:
		myclue.Clue_128_shelf3_library();
		break;
	case 129:
		if (myrole.key_hos_can==0)
		{
			myclue.Clue_129_fackedwindow_hospital();
		}
		break;
	case 130:
		if (myrole.report_hos==0)
		{
			myclue.Clue_130_cabinet_hospital();
		}
		break;
	case 131:
		if (myrole.weapon_guard==0)
		{
			myclue.Clue_131_weapen_goods();
		}
		break;
	case 132:
		if (myrole.hyd_goods==0)
		{
			myclue.Clue_132_hydrant_goods();
		}
		break;
	case 134:
		myclue.Clue_134_desk_president();
		break;
	case 150:
		myclue.Clue_150_final();
		break;
	}
}

void pausemenu::mouse_dis() {
	if ((mouse_con.x >= x1) && (mouse_con.y >= y1) && (mouse_con.x <= x1 + 400) && (mouse_con.y <= y1 + 40))//ÅÐ¶ÏÌõ¼þ
	{
		choice = 1;
		if (mouse_con.uMsg == WM_LBUTTONDOWN)
		{
			flag_p = 0;
		}
	}
	else if ((mouse_con.x >= x2) && (mouse_con.y >= y2) && (mouse_con.x <= x2 + 400) && (mouse_con.y <= y2 + 40))//ÅÐ¶ÏÌõ¼þ
	{
		choice = 2;
		if (mouse_con.uMsg == WM_LBUTTONDOWN)
		{
			save();
			flag_p = 0;
		}
	}
	else if ((mouse_con.x >= x3) && (mouse_con.y >= y3) && (mouse_con.x <= x3 + 400) && (mouse_con.y <= y3 + 40))//ÅÐ¶ÏÌõ¼þ
	{
		choice = 3;
		if (mouse_con.uMsg == WM_LBUTTONDOWN)
		{
			IMAGE tem_p;
			getimage(&tem_p, 0, 0, 960, 640);
			help();
			putimage(0, 0, &tem_p);
			FlushBatchDraw();
		}
	}
	else if ((mouse_con.x >= x4) && (mouse_con.y >= y4) && (mouse_con.x <= x4 + 400) && (mouse_con.y <= y4 + 40))//ÅÐ¶ÏÌõ¼þ
	{
		choice = 4;
		if (mouse_con.uMsg == WM_LBUTTONDOWN)
		{
			menust();
		}
	}
}

void mainmenu::mouse_dis() {
	if ((mouse_con.x >= x1) && (mouse_con.y >= y1) && (mouse_con.x <= x1 + 160) && (mouse_con.y <= y1 + 50))//ÅÐ¶ÏÌõ¼þ
	{
		choice = 1;
		if (mouse_con.uMsg == WM_LBUTTONDOWN)
		{
			GameRe();
			while (1)
			{
				GetCommand();
				Sleep(10);
			}
		}
	}
	else if ((mouse_con.x >= x2) && (mouse_con.y >= y2) && (mouse_con.x <= x2 + 160) && (mouse_con.y <= y2 + 50))//ÅÐ¶ÏÌõ¼þ
	{
		choice = 2;
		if (mouse_con.uMsg == WM_LBUTTONDOWN)
		{
			Load();
		}
	}
	else if ((mouse_con.x >= x3) && (mouse_con.y >= y3) && (mouse_con.x <= x3 + 160) && (mouse_con.y <= y3 + 50))//ÅÐ¶ÏÌõ¼þ
	{
		choice = 3;
		if (mouse_con.uMsg == WM_LBUTTONDOWN)
		{
			IMAGE tem_p;
			getimage(&tem_p, 0, 0, 640, 640);
			help();
			putimage(0, 0, &tem_p);
		}
	}
	else if ((mouse_con.x >= x4) && (mouse_con.y >= y4) && (mouse_con.x <= x4 + 160) && (mouse_con.y <= y4 + 50))//ÅÐ¶ÏÌõ¼þ
	{
		choice = 4;
		if (mouse_con.uMsg == WM_LBUTTONDOWN)
		{
			exit(0);
		}
	}
}

void mainmenu::bg() {
	{
		loadimage(&menu, TEXT("Resource\\menu.jpg"));
		loadimage(&menu_1, TEXT("Resource\\menu_1.jpg"));
		putimage(0, 0, &menu);
		FlushBatchDraw();
	}
}

mainmenu::mainmenu(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4) : menuView(X1, Y1, X2, Y2, X3, Y3, X4, Y4) {}

pausemenu::pausemenu(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4) : menuView(X1, Y1, X2, Y2, X3, Y3, X4, Y4) {}

void menuView::print() {
	switch (choice)
	{
	case 1:
		putimage(0, 0, &menu);
		putimage(400, 330, 150, 50, &menu_1, 400, 330);
		break;
	case 2:
		putimage(0, 0, &menu);
		putimage(400, 390, 150, 50, &menu_1, 400, 390);
		break;
	case 3:
		putimage(0, 0, &menu);
		putimage(400, 450, 150, 50, &menu_1, 400, 450);
		break;
	case 4:
		putimage(0, 0, &menu);
		putimage(400, 510, 150, 50, &menu_1, 400, 510);
		break;
	}
	FlushBatchDraw();
}

void pausemenu::bg() {
	loadimage(&Pausemenu, TEXT("Resource\\Pausemenu.jpg"));
	putimage(200, 100, &Pausemenu);
	FlushBatchDraw();
}


void Clue::Clue_101_noticeboard()
{
	/*图片
	（用黑板擦可擦除）
	*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\101.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000)|| (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_102_calendar()
{
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\102.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_103_door_guard()
{
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\103.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	while (1) {
		if (GetAsyncKeyState('2') & 0x8000) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		else if (GetAsyncKeyState('1') & 0x8000) {
			if (myrole.weapon_guard) {
				loadimage(&dial, TEXT("Resource\\103a.jpg"));
				putimage(0, 480, &dial);
				FlushBatchDraw();
				while (1)
				{
					if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000))
					{
						putimage(0, 0, &bk);
						FlushBatchDraw();
						break;
					}
					Sleep(50);
				}
				if (myrole.dir == 2)
				{
					myrole.moveLeft();
					myrole.moveLeft();
					myrole.x -= 2;
				}
				else if (myrole.dir == 0)
				{
					myrole.moveRight();
					myrole.moveRight();
					myrole.x += 2;
				}
			}
			else
			{
				loadimage(&dial, TEXT("Resource\\103b.jpg"));
				putimage(0, 480, &dial);
				FlushBatchDraw();
				while (1) {
					if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
						putimage(0, 0, &bk);
						FlushBatchDraw();
						break;
					}
					Sleep(50);
				}
				Sleep(300);
			}
			break;
		}
		Sleep(50);
	}
}
void Clue::Clue_104_cabinet_guard()
{
	/*发现医务室钥匙
	可放入背包*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\104.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
	myrole.key_hos = 1;
	IMAGE stuff;
	loadimage(&stuff, TEXT("Resource\\key_h.jpg"));
	putimage(680, 90 + 75 * myrole.bag_num, &stuff);
	FlushBatchDraw();
	myrole.bag_num++;
}
void Clue::Clue_106_desk1_office()
{
	/*发现语文书*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\106.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_107_desk2_office()
{
	/*发现英语书*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\107.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_108_desk3_office()
{
	/*发现图书借阅表*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\108.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_109_cabinet_office()
{
	/*发现图书馆钥匙
	可放入背包*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\109.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
	myrole.key_lib = 1;
	IMAGE stuff;
	loadimage(&stuff, TEXT("Resource\\key_lib.jpg"));
	putimage(680, 90 + 75 * myrole.bag_num, &stuff);
	myrole.bag_num++;
	FlushBatchDraw();
}
void Clue::Clue_110_figure_dining()
{
	/*触发对话
	选择背包一样物品交出
	正确有汤
	错误gg*/
	IMAGE dial;
	IMAGE dial2 ;
	IMAGE bk;
	bool flag=1;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\110_1.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (flag) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			flag = 0;
		}
		Sleep(50);
	}
	flag = 1;
	loadimage(&dial, TEXT("Resource\\110_2.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (flag) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			flag = 0;
		}
		Sleep(50);
	}
	flag = 1;
	loadimage(&dial, TEXT("Resource\\110_3.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	while (1)
	{
		if (GetAsyncKeyState('2') & 0x8000)
		{
			loadimage(&dial, TEXT("Resource\\110_4.jpg"));
			putimage(0, 480, &dial);
			FlushBatchDraw();
			flag = 1;
			while (flag) {
				if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
					flag = 0;
				}
				Sleep(50);
			}
			Sleep(300);
			loadimage(&dial, TEXT("Resource\\110_5.jpg"));
			putimage(0, 480, &dial);
			FlushBatchDraw();
			while (1) {
				if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
					putimage(0, 0, &bk);
					FlushBatchDraw();
					break;
				}
				Sleep(50);
			}
			Sleep(300);
			myrole.soup_din = 1;
			break;
		}
		else if (GetAsyncKeyState('1') & 0x8000)
		{
			loadimage(&dial, TEXT("Resource\\110_4.jpg"));
			putimage(0, 480, &dial);
			FlushBatchDraw();
			flag = 1;
			while (flag) {
				if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
					flag = 0;
				}
				Sleep(50);
			}
			Sleep(300);
			loadimage(&dial2, TEXT("Resource\\GameOver.jpg"));
			putimage(0, 0, &dial2);
			FlushBatchDraw();
			while (1) {
				if (GetAsyncKeyState(13) & 0x8000) {
					menust();
					break;
				}
				Sleep(50);
			}
			break;
		}
		Sleep(50);
	}
}
void Clue::Clue_111_number1_classroom()
{
	/*图片	*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\111.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
		//	cleardevice();
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_117_number7_classroom()
{
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\117.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
		//	cleardevice();
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_118_number8_classroom() {
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\118.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
		//	cleardevice();
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_119_number9_classroom()
{
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\119.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
		//	cleardevice();
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_120_number10_classroom()
{
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\120.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
		//	cleardevice();
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_121_number11_classroom()
{
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\121.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
		//	cleardevice();
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_122_number12_classroom()
{
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\122.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
		//	cleardevice();
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_123_blackboard_classroom()
{
	/*图片
	右下角有黑板擦
	可放入背包*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\123.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
		//	cleardevice();
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);

}
void Clue::Clue_124_cabinet_classroom()
{
	/*图片
	可用鼠标选择开哪个柜子
	除特殊外都是空*/
	IMAGE dial;
	IMAGE dial2;
	IMAGE dial3;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	HDC srcDC2;
	loadimage(&dial, TEXT("Resource\\124.bmp"));
	loadimage(&dial3, TEXT("Resource\\124b.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	MOUSEMSG Clue_dis;
	bool flag=1;
	while (flag) {
		Clue_dis = GetMouseMsg();
		if (mymap.scene == 1 && (Clue_dis.x >= 210) && (Clue_dis.y >= 20) && (Clue_dis.x <= 320) && (Clue_dis.y <= 170) && (Clue_dis.uMsg == WM_LBUTTONDOWN)) {
			putimage(0, 0, &bk);
			srcDC2 = GetImageHDC(&dial3);
			TransparentBlt(dstDC, 0, 0, 640, 640, srcDC2, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
			FlushBatchDraw();
		}
		else if ((Clue_dis.x >= 100) && (Clue_dis.y >= 20) && (Clue_dis.x <= 540) && (Clue_dis.y <= 620) && (Clue_dis.uMsg == WM_LBUTTONDOWN)) {
			loadimage(&dial2, TEXT("Resource\\124a.jpg"));
			putimage(0, 480, &dial2);
			FlushBatchDraw();
			Sleep(300);
			putimage(0, 0, &bk);
			TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
			FlushBatchDraw();
		}
		else  if  (Clue_dis.uMsg == WM_LBUTTONDOWN) {
			flag = 0;
		}
	}
	Sleep(300);
//	cleardevice();
	putimage(0, 0, &bk);
	FlushBatchDraw();
	Sleep(300);
}
void Clue::Clue_125_door_library()
{
	/*门是锁住的
	有钥匙可以打开*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\125.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	while (1)
	{
		if (GetAsyncKeyState('2') & 0x8000)
		{
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		else if (GetAsyncKeyState('1') & 0x8000)
		{
			if (myrole.key_lib)
			{
				myrole.x = 13;
				myrole.y = 8;
				loadimage(&background, TEXT("Resource\\library.jpg"));
				mymap.Setmap_library();
				myrole.moveLeft();
				myrole.x--;
			}
			else
			{
				loadimage(&dial, TEXT("Resource\\125b.jpg"));
				putimage(0, 480, &dial);
				FlushBatchDraw();
				while (1)
				{
					if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000))
					{
						putimage(0, 0, &bk);
						FlushBatchDraw();
						break;
					}
					Sleep(50);
				}
				Sleep(300);
			}
			break;
		}
		Sleep(50);
	}
}
void Clue::Clue_126_shelf1_library()
{
	/*英文小说*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\126.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_127_shelf2_library()
{
	/*学习资料*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\127.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_128_shelf3_library()
{
	/*新闻事实
	再按一次
	图片
	可选择*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\128.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_129_fackedwindow_hospital()
{
	/*发现医务室柜子钥匙
	可放入背包*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\129.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
	myrole.key_hos_can = 1;
	IMAGE stuff;
	loadimage(&stuff, TEXT("Resource\\key_h_c.jpg"));
	putimage(680, 90 + 75 * myrole.bag_num, &stuff);
	myrole.bag_num++;
	FlushBatchDraw();
}
void Clue::Clue_130_cabinet_hospital()
{
	/*柜子是锁住的
	有钥匙打开
	有真假两份报告
	图片
	可放入背包*/
	IMAGE dial2;
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\130.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	while(1)
	{
		if (GetAsyncKeyState('2') & 0x8000)
		{
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		else if (GetAsyncKeyState('1') & 0x8000)
		{
			if (myrole.key_hos_can) {
				HDC dstDC = GetImageHDC();  //获取目标环境句柄
				HDC srcDC;
				loadimage(&dial2, TEXT("Resource\\130b.bmp"));
				srcDC = GetImageHDC(&dial2);
				TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
				FlushBatchDraw();
				myrole.report_hos = 1;
				IMAGE stuff;
				loadimage(&stuff, TEXT("Resource\\report_h.jpg"));
				putimage(680, 90 + 75 * myrole.bag_num, &stuff);
				myrole.bag_num++;
				FlushBatchDraw();
				while (1) {
					if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
						putimage(0, 0, &bk);
						FlushBatchDraw();
						break;
					}
				}
				Sleep(300);
			}
			else
			{
				loadimage(&dial, TEXT("Resource\\130a.jpg"));
				putimage(0, 480, &dial);
				FlushBatchDraw();
				while (1) {
					if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
						putimage(0, 0, &bk);
						FlushBatchDraw();
						break;
					}
					Sleep(50);
				}
				Sleep(300);
			}
			break;
		}
		Sleep(50);
	}
}
void Clue::Clue_131_weapen_goods()
{
	/*发现棍子
	可放入背包*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\131.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		Sleep(50);
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
	}
	Sleep(300);
	myrole.weapon_guard = 1;
	IMAGE stuff;
	loadimage(&stuff, TEXT("Resource\\stick.jpg"));
	putimage(680, 90 + 75 * myrole.bag_num, &stuff);
	myrole.bag_num++;
	FlushBatchDraw();
}
void Clue::Clue_132_hydrant_goods()
{
	/*发现消防器
	可放入背包*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\132.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		Sleep(50);
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
	}
	Sleep(300);
	myrole.hyd_goods = 1;
	IMAGE stuff;
	loadimage(&stuff, TEXT("Resource\\hyd.jpg"));
	putimage(680, 90 + 75 * myrole.bag_num, &stuff);
	myrole.bag_num++;
	FlushBatchDraw();
}
void Clue::Clue_134_desk_president()
{
	/*发现会议记录*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	HDC dstDC = GetImageHDC();  //获取目标环境句柄
	HDC srcDC;
	loadimage(&dial, TEXT("Resource\\134.bmp"));
	srcDC = GetImageHDC(&dial);
	TransparentBlt(dstDC, 0, 0, 640, 640, srcDC, 0, 0, 640, 640, RGB(0, 255, 0));//将键色设置为绿色 	
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
		//	cleardevice();
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_135_door_hos()
{
	/*门是锁住的
	有钥匙可以打开*/
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\135.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	while (1)
	{
		if (GetAsyncKeyState('2') & 0x8000)
		{
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		else if (GetAsyncKeyState('1') & 0x8000)
		{
			if (myrole.key_hos) {
				myrole.x = 2;
				myrole.y = 8;
				loadimage(&background, TEXT("Resource\\hospital.jpg"));
				mymap.Setmap_hospital();
				myrole.moveRight();
				myrole.x++;
			}
			else
			{
				loadimage(&dial, TEXT("Resource\\135b.jpg"));
				putimage(0, 480, &dial);
				FlushBatchDraw();
				while (1) {
					if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
						putimage(0, 0, &bk);
						FlushBatchDraw();
						break;
					}
					Sleep(50);
				}
				Sleep(300);
			}
			break;
		}
		Sleep(50);
	}
}
void Clue::Clue_136_door_dining(){
	IMAGE dial;
	IMAGE bk;
	getimage(&bk, 0, 0, 640, 640);
	loadimage(&dial, TEXT("Resource\\136.jpg"));
	putimage(0, 480, &dial);
	FlushBatchDraw();
	Sleep(300);
	while (1) {
		if ((GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('e') & 0x8000)) {
			putimage(0, 0, &bk);
			FlushBatchDraw();
			break;
		}
		Sleep(50);
	}
	Sleep(300);
}
void Clue::Clue_150_final() {
	if (myrole.soup_din == 1 && myrole.hyd_goods == 1)
	{
		IMAGE goodEnd[30];
		loadimage(&goodEnd[0], TEXT("Resource\\good\\CG1.jpg"));
		loadimage(&goodEnd[1], TEXT("Resource\\good\\CG2.jpg"));
		loadimage(&goodEnd[2], TEXT("Resource\\good\\CG3.jpg"));
		loadimage(&goodEnd[3], TEXT("Resource\\good\\CG4.jpg"));
		loadimage(&goodEnd[4], TEXT("Resource\\good\\CG5.jpg"));
		loadimage(&goodEnd[5], TEXT("Resource\\good\\CG6.jpg"));
		loadimage(&goodEnd[6], TEXT("Resource\\good\\CG7.jpg"));
		loadimage(&goodEnd[7], TEXT("Resource\\good\\CG8.jpg"));
		loadimage(&goodEnd[8], TEXT("Resource\\good\\CG9.jpg"));
		loadimage(&goodEnd[9], TEXT("Resource\\good\\CG10.jpg"));
		loadimage(&goodEnd[10], TEXT("Resource\\good\\CG11.jpg"));
		loadimage(&goodEnd[11], TEXT("Resource\\good\\CG12.jpg"));
		loadimage(&goodEnd[12], TEXT("Resource\\good\\CG13.jpg"));
		loadimage(&goodEnd[13], TEXT("Resource\\good\\CG14.jpg"));
		loadimage(&goodEnd[14], TEXT("Resource\\good\\CG15.jpg"));
		loadimage(&goodEnd[15], TEXT("Resource\\good\\CG16.jpg"));
		loadimage(&goodEnd[16], TEXT("Resource\\good\\CG17.jpg"));
		loadimage(&goodEnd[17], TEXT("Resource\\good\\CG18.jpg"));
		loadimage(&goodEnd[18], TEXT("Resource\\good\\CG19.jpg"));
		loadimage(&goodEnd[19], TEXT("Resource\\good\\CG20.jpg"));
		loadimage(&goodEnd[20], TEXT("Resource\\good\\CG21.jpg"));
		loadimage(&goodEnd[21], TEXT("Resource\\good\\CG22.jpg"));
		loadimage(&goodEnd[22], TEXT("Resource\\good\\CG23.jpg"));
		loadimage(&goodEnd[23], TEXT("Resource\\good\\CG24.jpg"));
		loadimage(&goodEnd[24], TEXT("Resource\\good\\CG25.jpg"));
		loadimage(&goodEnd[25], TEXT("Resource\\good\\CG26.jpg"));
		loadimage(&goodEnd[26], TEXT("Resource\\good\\CG27.jpg"));
		loadimage(&goodEnd[27], TEXT("Resource\\good\\CG28.jpg"));
		loadimage(&goodEnd[28], TEXT("Resource\\good\\CG29.jpg"));
		loadimage(&goodEnd[29], TEXT("Resource\\good\\GoodEnding.jpg"));
		bool flag;
		for (int i = 0; i < 29; i++)
		{
			flag = 1;
			putimage(0, 0, &goodEnd[i]);
			FlushBatchDraw();
			Sleep(300);
			while (flag)
			{
				if (GetAsyncKeyState(13) & 0x8000)
				{
					flag = 0;
				}
				Sleep(50);
			}
		}
		putimage(0, 0, &goodEnd[29]);
		FlushBatchDraw();
		Sleep(300);
		while (1) {
			if (GetAsyncKeyState(13) & 0x8000) {
				menust();
				break;
			}
			Sleep(50);
		}
	}
	else if (myrole.soup_din == 1 && myrole.hyd_goods == 0)
	{
		IMAGE badEnd[5];
		bool flag;
		loadimage(&badEnd[0], TEXT("Resource\\Bad1.jpg"));
		loadimage(&badEnd[1], TEXT("Resource\\Bad2.jpg"));
		loadimage(&badEnd[2], TEXT("Resource\\Bad3jpg"));
		loadimage(&badEnd[3], TEXT("Resource\\Bad4.jpg"));
		loadimage(&badEnd[4], TEXT("Resource\\GameOver.jpg"));
		for (int i = 0; i < 4; i++)
		{
			flag = 1;
			putimage(0, 0, &badEnd[i]);
			FlushBatchDraw();
			Sleep(300);
			while (flag)
			{
				if (GetAsyncKeyState(13) & 0x8000)
				{
					flag = 0;
				}
				Sleep(50);
			}
		}
		putimage(0, 0, &badEnd[4]);
		FlushBatchDraw();
		Sleep(300);
		while (1) {
			if (GetAsyncKeyState(13) & 0x8000) {
				menust();
				break;
			}
			Sleep(50);
		}
	}
	else if (myrole.soup_din == 0)
	{
		IMAGE cold[5];
		bool flag;
		loadimage(&cold[0], TEXT("Resource\\Cold-1.jpg"));
		loadimage(&cold[1], TEXT("Resource\\Cold-2.jpg"));
		loadimage(&cold[2], TEXT("Resource\\Cold-3jpg"));
		loadimage(&cold[3], TEXT("Resource\\Cold-4.jpg"));
		loadimage(&cold[4], TEXT("Resource\\GameOver.jpg"));
		for (int i = 0; i < 4; i++)
		{
			flag = 1;
			putimage(0, 0, &cold[i]);
			FlushBatchDraw();
			Sleep(300);
			while (flag)
			{
				if (GetAsyncKeyState(13) & 0x8000)
				{
					flag = 0;
				}
				Sleep(50);
			}
		}
		putimage(0, 0, &cold[4]);
		FlushBatchDraw();
		Sleep(300);
		while (1) {
			if (GetAsyncKeyState(13) & 0x8000) {
				menust();
				break;
			}
			Sleep(50);
		}
	}
}
