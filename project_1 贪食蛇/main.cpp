#include <iostream>
#include <Windows.h>
using namespace std;

//定义游戏窗口
#define W 60
#define H 27

struct Pos {
	int x;
	int y;
};

struct Snake {
	Pos snake[H * W];
	int snakeDir;
	int snakeLength;
};

void initSnake(Snake *snk) {
	snk->snakeLength = 1;
	snk->snakeDir = 1;
	snk->snake[0] = { W / 2,H / 2 };
}

//枚举的定义
enum BlockType {
	EMPTY = 0,
	FOOD = 1,
};
//二维数组的使用
struct Map {
	BlockType data[H][W];
	bool hasFood;
};
//指针的使用
void initMap(Map* map) {
	for (int y = 0; y < H;y++) {
		for (int x = 0; x < W; x++) {
			map->data[y][x] = BlockType::EMPTY;
		}
	}
	map->hasFood = false;
}

//隐藏光标
//默认的步骤 直接调用函数即可
void hideCursor() {
	HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);//输出窗口的距离/编号
	CONSOLE_CURSOR_INFO curInfo = { 1,FALSE };
	SetConsoleCursorInfo(hOutput, &curInfo);
}

//绘制窗口 函数
void drawMap(Map *map) {
	system("cls");
	//上边界
	cout << "*";
	for (int i = 0; i < W;i++) {
		cout << "-";
	}
	cout << "*" << endl;

	//左右边界
	for (int i = 0; i < H; i++) {
		cout << "|";
		for (int j = 0; j < W; j++) {
			cout << " ";
		}
		
		cout << "|" << endl;
	}

	//下边界
	cout << "*";
	for (int i = 0; i < W;i++) {
		cout << "-";
	}
	cout << "*" << endl;

}
int main() {
	Snake snk;
	Map map;
	hideCursor();
	initMap(&map);
	initSnake(&snk);
	drawMap(&map);
	while (1) {

	}
	return 0;
}