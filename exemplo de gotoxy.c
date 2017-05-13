#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
void gotoxy(int x, int y)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD )
	{
		x, y
	});
}
int main(void)
{
	gotoxy(3, 7);
	printf("bruno");
	gotoxy(25, 4);
	printf("alskdjasldkj");
	gotoxy(9, 15);
	printf("l:15 c:9");
	gotoxy(20, 3);
	printf("l:3 c:20");
	system("pause >nul");
	return 0;
}
