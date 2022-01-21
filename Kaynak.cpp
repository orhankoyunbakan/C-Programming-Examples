#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include<locale.h>

unsigned int p1=1,hiz=0;
bool str = true;
char b1[100] = "";
char eng1[500] = "", eng2[500] = "", eng3[500] = "", b2[300] = "",bo[300]="", a8[140] = "                                                                                                                       ";


int bayrak(int rnd) {
	setlocale(LC_ALL,"turkish");
	char y1[] = "----------------------------------------------------------------------------------------------------------------------\n", n1[] = "\n\n\n\n\n\n\n";
	char  a1[] = "\n", a2[] = "          ___________         \n", a3[] = "  -  ----// --|||-- \\\\      \n", a4[] = " ---- __//____|||____\\\\____   \n", a5[] = "     | _|    \" |  \"   --_ || \n", a6[] = " ----|/ \\______|______/ \\_|| \n", a7[] = "      \\_/             \\_/       \n"; 

	if (rnd == 1) {
		
		printf("%s%s%s%s%s%s%s%s%s%s%s%s", y1, b1, a1, b1, a2, b1, a3, b1, a4, b1, a5, b1);
		printf("%s%s%s%s%s%s%s%s%s%s%s  Hiz:%d  |  Puan:%d", a6, b1, a7, eng1, y1, n1, eng2, y1, n1, eng3, y1,hiz,p1);
	}
	else if (rnd == 2) {

	printf("%s%s%s%s%s%s%s%s%s%s%s%s", y1, n1,eng1, y1, b1, a1, b1, a2, b1, a3, b1, a4);
	printf("%s%s%s%s%s%s%s%s%s%s%s  Hiz:%d  |  Puan:%d", b1, a5, b1, a6, b1, a7, eng2, y1, n1, eng3, y1,hiz,p1);
	}
	else {		

		printf("%s%s%s%s%s%s%s%s%s%s%s%s", y1, n1, eng1, y1, n1, eng2, y1, b1, a1, b1, a2, b1);
		printf("%s%s%s%s%s%s%s%s%s%s%s  Hiz:%d  |  Puan:%d", a3, b1, a4, b1, a5, b1, a6, b1, a7, eng3, y1,hiz,p1);
	}
	return 0;
}


int rnd() {
	DWORD dw1 = GetTickCount();
	srand(dw1);
	int rnd = (rand() % 12) + 1;
	return rnd;
}


int engel(int rnds) {
	if (rnds==0)
	{
		strcpy(eng1, "");
		strcpy(eng2, "");
		strcpy(eng3, "");
		strcpy(b2, "");
		strcpy(bo, "");
	}
	else if (rnds == 3|| rnds == 6|| rnds == 9)
	{
		strcpy(eng1, "");
		strcpy(b2, "");
		strcat(eng1, a8);
		int k;
		for (k = 0; k < 7; k++)
		{
			strcat(bo, "\b");
		}
		strcat(b2, bo);
		strcat(b2, "/|\\\n");
		strcat(eng1, b2);
		strcpy(eng2,"\n");
		strcpy(eng3, "\n");
	}
	else if (rnds == 1|| rnds == 4|| rnds == 7)
	{
		strcpy(eng2, "");
		strcpy(b2, "");
		strcat(eng2, a8);
		int k;
		for (k = 0; k < 7; k++)
		{
			strcat(bo, "\b");
		}
		strcat(b2, bo);
		strcat(b2, "/|\\\n");
		strcat(eng2, b2);
		strcpy(eng1, "\n");
		strcpy(eng3, "\n");
	}
	else if (rnds == 2|| rnds == 5|| rnds == 8)
	{
		strcpy(eng3, "");
		strcpy(b2, "");
		strcat(eng3, a8);
		int k;
		for (k = 0; k < 7; k++)
		{
			strcat(bo, "\b");
		}
		strcat(b2, bo);
		strcat(b2, "/|\\\n");
		strcat(eng3, b2);
		strcpy(eng1, "\n");
		strcpy(eng2, "\n");
	}
	else if (rnds == 10)
	{
		strcpy(eng1, "");
		strcpy(eng2, "");
		strcpy(b2, "");
		strcat(eng1, a8);
		strcat(eng2, a8);
		int k;
		for (k = 0; k < 7; k++)
		{
			strcat(bo, "\b");
		}
		strcat(b2, bo);
		strcat(b2, "/|\\\n");
		strcat(eng1, b2);
		strcat(eng2, b2);
		strcpy(eng3, "\n");
	}
	else if (rnds == 11)
	{
		strcpy(eng1, "");
		strcpy(eng3, "");
		strcpy(b2, "");
		strcat(eng3, a8);
		strcat(eng1, a8);
		int k;
		for (k = 0; k < 7; k++)
		{
			strcat(bo, "\b");
		}
		strcat(b2, bo);
		strcat(b2, "/|\\\n");
		strcat(eng1, b2);
		strcat(eng3, b2);
		strcpy(eng2, "\n");
	}
	else if (rnds == 12)
	{
		strcpy(eng2, "");
		strcpy(eng3, "");
		strcpy(b2, "");
		strcat(eng3, a8);
		strcat(eng2, a8);
		int k;
		for (k = 0; k < 7; k++)
		{
			strcat(bo, "\b");
		}
		strcat(b2, bo);
		strcat(b2, "/|\\\n");
		strcat(eng3, b2);
		strcat(eng2, b2);
		strcpy(eng1, "\n");
	}
	return 0;
}


int k, spd = 500, p = 1;


int main() {
	setlocale(LC_ALL, "");
	int yil = 10;
	printf("\n   Oyuna girmek için \"ENTER\" tusuna basiniz\n\n   Yardim almak isterseniz \"H\" tusuna basiniz\n");
	k = getch();
	int c = rnd()%3+1;
	if (k == 104|| k == 72)
	{
		system("cls");
		printf("\n   Arabayi hareket ettirmek istiyorsaniz \"Sag Yon\" tusuna basiniz\n\n   Arabayi yukari hareket ettirmek istiyorsaniz \"Yukari Yon\" tusuna basiniz\n\n   Eger asagi hareket ettirmek istiyorsaniz \"Asagi Yon\" tusuna basiniz\n\n");
		printf("   Oyunu kapatmak istiyorsaniz \"ESC\" tusuna basiniz\n\n   Araciniz hizlandikca puaniniz artar");
		getch();
		k = 13;
	}
	
	if (k == 13) {
	do
	{
			if (str)
			{
				system("cls");
				str = false;
			}
			int i,rnds;
			rnds = rnd();
			engel(rnds);
			for (i = 0; i < 12; i = i + 1)
			{
				if (GetAsyncKeyState(VK_UP))
				{
					c = c + -1;
					if (c < 1)
					{
						c = 3;
					}
				}
				else if (GetAsyncKeyState(VK_DOWN))
				{
					c = c + 1;
					if (c > 3)
					{
						c = 1;
					}
				}
				else if (GetAsyncKeyState(VK_ESCAPE))
				{
					return 0;
				}
				
				if (GetAsyncKeyState(VK_RIGHT))
				{
					if (spd>50)
					{
						spd = spd - 10;
						hiz += 2;
						if (spd % 100 == 0 && spd!=50)
						p += 1;

					}

				}
				else
				{
					if (spd < 500)
					{
						spd =spd + 10;
						hiz -= 2;
						if (spd % 100 == 0)
						p -= 1;
						
					}
				}
				if (spd<500)
				{
					if (i!=0)
					{
						strcat(b1, "\t");
						engel(rnds);
						if (spd % 50 == 0)
						p1 =p1+ p;
					}
				}
				else
				{
					i = i - 1;
				}
				bayrak(c);

				if (((i == 6||i == 7) &&(rnds<10)&&(c == ((rnds%3)+1)))||((rnds > 9) && (i == 6 || i == 7) && (((rnds == 10) && (c != 3)) || ((rnds == 11) && (c != 2)) || ((rnds == 12) && (c != 1))))) 
				{
					
					system("cls");
					bayrak(c);
					printf("\nOyun bitti tekrar baslamak icin  ");
					i = -1;
					rnds = rnd();
					engel(0);
					strcpy(b1, "");
					spd = 500;
					p1 = 1;
					p = 1;
					hiz = 0;
					engel(rnds);
					system("pause");
				}
				Sleep(spd);
				system("cls");
			}
		engel(0);
		strcpy(b1, "");
	} while (true);
	}
	else
	{
		system("cls");
		printf("   Gecersiz bir tusa bastiniz tekrar deneyiniz...\n");
		main();
	}
	return 0;
}
