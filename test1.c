#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��ӡ�˵�
void Menu()
{
printf("******************************\n");
printf(����ӭ������������Ϸ\n");
printf("����1��������Ϸ\n");
printf("����0���˳���Ϸ\n��);
printf("******************************\n");
}

//��ʼ������
void InitBoard(char board[][COL], int row, int col)
{
int i = 0;
int j = 0;
for (i = 0;i < row;i++)
{
for (j = 0;j < col;j++)
{
board[i][j] = �� ';
}
}
}

//��ӡ����
void ShowBoard(char board[][COL], int row, int col)
{
int i = 0;
int j = 0;
for (i = 0;i < row;i++)
{
for (j = 0;j < col;j++)
{
printf(" %c ��, board[i][j]);//��ӡ�����ո�
if (j < col - 1)
{
printf(��|");
}
}
printf("\n");
if (i < row - 1)
{
for (j = 0;j < col;j++)
{
printf("��");
if (j < col - 1)
{
printf("|");
}
}
}
printf("\n");
}
}

//����ƶ�������Ϊ��O��
void PlayerMove(char board[][COL], int row, int col)
{
int x = 0;
int y = 0;
while (1)
{
printf(������ƶ���\n��);
printf(��������1����>3�����꣺��);
scanf("%d%d", &x, &y);
if (x > 0 && x <= 3 && y > 0 && y <= 3)
{
if (board[x - 1][y - 1] == �� ')//��������ֵ������Ҫ���м�һ�����ܶ�Ӧ��������Ӧ��λ��
{
board[x - 1][y - 1] = ��O��;
break;
}
else
{
printf(��������������������ӣ�����������:��);
}
}
else
{
printf(��������������������������룺��);
}
}
}

//�ж��������Ƿ�����
int IsFull(char board[][COL], int row, int col)
{
int i = 0;
int j = 0;
for (i = 0;i < ROW;i++)
{
for (j = 0;j < COL;j++)
{
if (board[i][j] == �� ')
{
return 0;
}
}
}
return 1;
}

//��Ӯ
int IsWin(char board[][COL], int row, int col)
{
int i = 0;
for (i = 0;i < ROW;i++)
{
//�жϺ����Ƿ����������ͬ������
if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != �� ')
{
return board[i][0];
}
//�ж������Ƿ����������ͬ������
if (board[0][i] ==board[1][i] && board[1][i] == board[2][i] && board[0][i] != �� ')
{
return board[0][i];
}
//�ж����Ͻǵ����½ǵĶԽ����Ƿ����������ͬ������
if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != �� ')
{
return board[0][0];
}
//�ж����Ͻǵ����½ǵĶԽ����Ƿ����������ͬ������
if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != �� ')
{
return board[i][0];
}
if (IsFull(board, 3, 3) == 1)
{
return ��P��;//ƽ��
}
}
return ��C��;//��������
}

//�����ƶ�������Ϊ��X��
void ComputerMove(char board[][COL], int row, int col)
{
int x = 0;
int y = 0;
printf(�������ƶ���\n��);
while (1)
{
x = rand() % ROW;
y = rand() % COL;
if (board[x][y] == �� ')
{
board[x][y] = ��X��;
break;
}
}
}

void Game()
{
int a = 0;
char board[ROW][COL] = { 0 };
//��ʼ������
InitBoard(board, 3, 3);
//��ӡ����
ShowBoard(board, 3, 3);
while (1)
{
//������ƶ�
PlayerMove(board, 3, 3);
//�ƶ����ӡ����
ShowBoard(board, 3, 3);
//�жϵ��Ի�������������Ѿ�����������
a = IsWin(board, 3, 3);
if (a != ��C��)//C��ʾ��û���ȵ�������
{
break;
}
//�����ƶ�
ComputerMove(board, 3, 3);
//������ӡ����
ShowBoard(board, 3, 3);
}
if (a == ��O��)//���ص���O��һ�ʤ
{
printf(����ϲ����Ӯ�ˣ���);
}
else if (a == ��X��)//���ص���X���Ի�ʤ
{
printf(�����ź��������ˣ���);
}
else if (a == ��P��)//������P��û�л�ʤ��ƽ��
{
printf(��ƽ��Ӵ����);
}
}

int main()
{
int input = 0;
srand((unsigned int)time(NULL));
do
{
//��ӡ�˵�
Menu();
printf(�����������ѡ��:��);
scanf("%d", &input);
switch (input)
{
case 1:
//������1����ʼ��Ϸ
Game();
break;
case 0:
//������0��������Ϸ
printf(���˳���Ϸ\n��);
break;
default://����1Ҳ����0����ʾ�������
printf(����������������������룺��);
break;
}
} while (input);
system(��pause��);
return 0;
}
