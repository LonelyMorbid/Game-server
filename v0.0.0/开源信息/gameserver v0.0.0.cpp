#include <bits/stdc++.h>
#include "GS1.cpp"
#include "GS2.cpp"
using namespace std;
using namespace gsserver1;
using namespace gsserver2;
void ls()
{
	printf("buy/sell ticket   --command--> tick\n");
	printf("Luogu world       --command--> world\n");
	printf("quit this pragram --command--> exit\n");
	printf("see list page     --command--> ls\n\n");
}
int main()
{
	printf("Game Server Group GS [版本 0.0.0]\n(c) 2019 Game Server Group Corporation。保留所有权利。\n");
	printf("If you want to use this pragram, please use command \"ls\".\n\n");
	string s;
	while(1)
	{
		printf("Game Server >>> ");
		cin>>s;
		if(s=="ls")
		ls();
		else if(s=="exit")
		break;
		else if(s=="tick")
		{
			system("cls");
			playgs1();
			Sleep(1000);
			system("cls");
			printf("Game Server Group GS [版本 0.0.0]\n(c) 2019 Game Server Group Corporation。保留所有权利。\n");
			printf("If you want to use this pragram, please use command \"ls\".\n\n");
		}
		else if(s=="world")
		{
			system("cls");
			playgs2();
			Sleep(1000);
			system("cls");
			printf("Game Server Group GS [版本 0.0.0]\n(c) 2019 Game Server Group Corporation。保留所有权利。\n");
			printf("If you want to use this pragram, please use command \"ls\".\n\n");
		} 
		else
		{
			printf("No such a command of \"");
			cout<<s;
			printf("\".\n\n");
		}
	}
	return 0;
}
