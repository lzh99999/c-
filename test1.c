#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//打印菜单
void Menu()
{
printf("******************************\n");
printf(“欢迎进入三子棋游戏\n");
printf("输入1：进入游戏\n");
printf("输入0：退出游戏\n”);
printf("******************************\n");
}

//初始化棋盘
void InitBoard(char board[][COL], int row, int col)
{
int i = 0;
int j = 0;
for (i = 0;i < row;i++)
{
for (j = 0;j < col;j++)
{
board[i][j] = ’ ';
}
}
}

//打印棋盘
void ShowBoard(char board[][COL], int row, int col)
{
int i = 0;
int j = 0;
for (i = 0;i < row;i++)
{
for (j = 0;j < col;j++)
{
printf(" %c “, board[i][j]);//打印三个空格
if (j < col - 1)
{
printf(”|");
}
}
printf("\n");
if (i < row - 1)
{
for (j = 0;j < col;j++)
{
printf("—");
if (j < col - 1)
{
printf("|");
}
}
}
printf("\n");
}
}

//玩家移动，棋子为‘O’
void PlayerMove(char board[][COL], int row, int col)
{
int x = 0;
int y = 0;
while (1)
{
printf(“玩家移动：\n”);
printf(“请输入1——>3的坐标：”);
scanf("%d%d", &x, &y);
if (x > 0 && x <= 3 && y > 0 && y <= 3)
{
if (board[x - 1][y - 1] == ’ ')//玩家输入的值，我们要进行减一，才能对应数组所对应的位置
{
board[x - 1][y - 1] = ‘O’;
break;
}
else
{
printf(“您输入的坐标已有棋子，请重新输入:”);
}
}
else
{
printf(“您输入的坐标有误！请重新输入：”);
}
}
}

//判断棋盘中是否已满
int IsFull(char board[][COL], int row, int col)
{
int i = 0;
int j = 0;
for (i = 0;i < ROW;i++)
{
for (j = 0;j < COL;j++)
{
if (board[i][j] == ’ ')
{
return 0;
}
}
}
return 1;
}

//判赢
int IsWin(char board[][COL], int row, int col)
{
int i = 0;
for (i = 0;i < ROW;i++)
{
//判断横向是否存在三个相同的棋子
if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ’ ')
{
return board[i][0];
}
//判断纵向是否存在三个相同的棋子
if (board[0][i] ==board[1][i] && board[1][i] == board[2][i] && board[0][i] != ’ ')
{
return board[0][i];
}
//判断左上角到右下角的对角线是否存在三个相同的棋子
if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ’ ')
{
return board[0][0];
}
//判断右上角到左下角的对角线是否存在三个相同的棋子
if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ’ ')
{
return board[i][0];
}
if (IsFull(board, 3, 3) == 1)
{
return ‘P’;//平局
}
}
return ‘C’;//继续下棋
}

//电脑移动，棋子为‘X’
void ComputerMove(char board[][COL], int row, int col)
{
int x = 0;
int y = 0;
printf(“电脑移动：\n”);
while (1)
{
x = rand() % ROW;
y = rand() % COL;
if (board[x][y] == ’ ')
{
board[x][y] = ‘X’;
break;
}
}
}

void Game()
{
int a = 0;
char board[ROW][COL] = { 0 };
//初始化棋盘
InitBoard(board, 3, 3);
//打印棋盘
ShowBoard(board, 3, 3);
while (1)
{
//玩家先移动
PlayerMove(board, 3, 3);
//移动后打印棋盘
ShowBoard(board, 3, 3);
//判断电脑或者玩家有棋子已经有三个连续
a = IsWin(board, 3, 3);
if (a != ‘C’)//C表示都没有先到三个的
{
break;
}
//电脑移动
ComputerMove(board, 3, 3);
//继续打印棋盘
ShowBoard(board, 3, 3);
}
if (a == ‘O’)//返回的是O玩家获胜
{
printf(“恭喜你你赢了！”);
}
else if (a == ‘X’)//返回的是X电脑获胜
{
printf(“真遗憾，你输了！”);
}
else if (a == ‘P’)//若返回P都没有获胜，平局
{
printf(“平局哟！”);
}
}

int main()
{
int input = 0;
srand((unsigned int)time(NULL));
do
{
//打印菜单
Menu();
printf(“请输入你的选择:”);
scanf("%d", &input);
switch (input)
{
case 1:
//若输入1，开始游戏
Game();
break;
case 0:
//若输入0，结束游戏
printf(“退出游戏\n”);
break;
default://不是1也不是0，提示输入错误
printf(“您输入的有误！请重新输入：”);
break;
}
} while (input);
system(“pause”);
return 0;
}
