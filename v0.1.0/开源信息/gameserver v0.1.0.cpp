#include <bits/stdc++.h>
#include "GS1.cpp"
#include "GS2.cpp"
#include "GS3.cpp"
#include "GS4.cpp"
#include <iostream>
#include <windows.h>
#include <vector>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#define GameW 10
#define GameH 20
using namespace std;
using namespace gsserver1;
using namespace gsserver2;
using namespace gsserver3;
using namespace gsserver4;
void color(int i)
{
	HANDLE hout=GetStdHandle(STD_OUTPUT_HANDLE);
	if(i==-1)
	SetConsoleTextAttribute(hout,FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	else if(i==0)
	SetConsoleTextAttribute(hout,FOREGROUND_INTENSITY|FOREGROUND_RED);
	else if(i==1)
	SetConsoleTextAttribute(hout,FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
}
void ls()
{
	printf("Buy/sell ticket   --command--> tick\n");
	printf("Luogu world       --command--> world\n");
	printf("Greedy snake      --command--> snake\n");
	printf("Tetris            --command--> tetris\n");
	printf("Quit this pragram --command--> exit\n");
	printf("See list page     --command--> ls\n");
	puts("");
}
int main()
{
	color(-1);
	srand(time(0));
	system("color 1F");
	printf("Game Server Group GS [version 0.1.0]\n(c) 2019 Game Server Group Corporation.\n");
	printf("If you want to use this pragram, please use command \"ls\".\n\n");
	string s;
	HANDLE h_GAME =GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(h_GAME,&cursor_info);
	cursor_info.bVisible=true;
	SetConsoleCursorInfo(h_GAME,&cursor_info);
	while(1)
	{
		color(0);HANDLE hout=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hout,16+12);
		printf("Game Server");
		SetConsoleTextAttribute(hout,16+6);
		printf(" >>> ");
		SetConsoleTextAttribute(hout,16+15);
		cin>>s;
		if(s=="ls")
		ls();
		else if(s=="exit")
		break;
		else if(s=="tick")
		{
			system("cls");
			system("color 0F");
			playgs1();
			Sleep(1000);
			system("cls");
			system("color 1F");
			printf("Game Server Group GS [version 0.1.0]\n(c) 2019 Game Server Group Corporation.\n");
			printf("If you want to use this pragram, please use command \"ls\".\n\n");
		}
		else if(s=="world")
		{
			system("cls");
			system("color 0F");
			playgs2();
			Sleep(1000);
			system("cls");
			system("color 1F");
			printf("Game Server Group GS [version 0.1.0]\n(c) 2019 Game Server Group Corporation.\n");
			printf("If you want to use this pragram, please use command \"ls\".\n\n");
		} 
		else if(s=="snake")
		{
			system("cls");
			system("color 0F");
			playgs3();
			Sleep(1000);
			system("cls");
			system("color 1F");
			printf("Game Server Group GS [version 0.1.0]\n(c) 2019 Game Server Group Corporation.\n");
			printf("If you want to use this pragram, please use command \"ls\".\n\n");
		}
		else if(s=="tetris")
		{
			system("cls");
			system("color 0F");
			playgs4();
			HANDLE h_GAME =GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_CURSOR_INFO cursor_info;
			GetConsoleCursorInfo(h_GAME,&cursor_info);
			cursor_info.bVisible=true;
			SetConsoleCursorInfo(h_GAME,&cursor_info);
			Sleep(1000);
			system("cls");
			system("color 1F");
			printf("Game Server Group GS [version 0.1.0]\n(c) 2019 Game Server Group Corporation.\n");
			printf("If you want to use this pragram, please use command \"ls\".\n\n");
		}
		else if(s=="cls")
		{
			system("cls");
			printf("Game Server Group GS [version 0.1.0]\n(c) 2019 Game Server Group Corporation.\n");
			printf("If you want to use this pragram, please use command \"ls\".\n\n");
			continue;
		}
		else
		{
			printf("No such a command of \"");
			cout<<s;
			printf("\".\n\n");
		}
	}
	system("color");
	return 0;
}
