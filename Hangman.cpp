#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include<windows.h>
//Bahadýr Özdemir Adam Asmaca
int adam0()
	{
    	printf("   |-----|  \n");
    	printf("   |/    |  \n");
    	printf("   |     O  \n");
    	printf("   |    /|\\\n");
    	printf("   |    / \\\n");
    	printf("---|---     \n");
	}

int adam1()
	{
    	printf("   |-----|  \n");
    	printf("   |/    |  \n");
    	printf("   |     O  \n");
    	printf("   |    /|\\\n");
    	printf("   |    /   \n");
    	printf("---|---     \n");
	}

int adam2()
	{
    	printf("   |-----|  \n");
    	printf("   |/    |  \n");
    	printf("   |     O  \n");
    	printf("   |    /|\\\n");
    	printf("   |        \n");
    	printf("---|---     \n");
	}

int adam3()
	{
    	printf("   |-----|  \n");
    	printf("   |/    |  \n");
    	printf("   |     O  \n");
    	printf("   |     |\\\n");
    	printf("   |        \n");
    	printf("---|---     \n");
	}

int adam4()
	{
    	printf("   |-----|  \n");
    	printf("   |/    |  \n");
    	printf("   |     O  \n");
    	printf("   |     |  \n");
    	printf("   |        \n");
    	printf("---|---     \n");
	}

int adam5()
	{
    	printf("   |-----|  \n");
    	printf("   |/    |  \n");
    	printf("   |     O  \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("---|---     \n");
	}

int adam6()
	{
    	printf("   |-----|  \n");
    	printf("   |/    |  \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("---|---     \n");
	}

int adam7()
	{
    	printf("   |-----|  \n");
    	printf("   |/       \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("---|---     \n");
	}

int adam8()
	{
    	printf("   |-----   \n");
    	printf("   |/       \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("---|---     \n");
	}

int adam9()
	{
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("   |        \n");
    	printf("---|---     \n");
	}
int yazici(int hak,char tahmin[10])
{
	switch(hak)
	{	
		case 0:
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak);
			adam0();
			printf("           ");
			printf("%s",tahmin);
		break;
		
		case 1:
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak);
			adam1();
			printf("           ");
			printf("%s",tahmin);
		break;
		
		case 2:
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak);
			adam2();
			printf("           ");
			printf("%s",tahmin);
		break;
		
		case 3:
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak);
			adam3();
			printf("           ");
			printf("%s",tahmin);
		break;
		
		case 4:
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak);
			adam4();
			printf("           ");
			printf("%s",tahmin);
		break;
		
		case 5:
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak);
			adam5();
			printf("           ");
			printf("%s",tahmin);
		break;
			
		case 6:
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak);
			adam6();
			printf("           ");
			printf("%s",tahmin);
		break;
			
		case 7:
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak);
			adam7();
			printf("           ");
			printf("%s",tahmin);
		break;
			
		case 8:
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak)		;
			adam8();
			printf("           ");
			printf("%s",tahmin);
		break;
			
		case 9:
			
			system("CLS");
			printf("Adam Asmaca Oyunu\n0 girerek kelimenin tamamini tahmin edebilirsiniz.(yanlis ise kaybedersiniz)\n\nKalan Hak:%d\n\n",hak);
			adam9();
			printf("           ");
			printf("%s",tahmin);
		break;
	}
}
int main()
{
	char sehirler[10][10] = {"istanbul", "ankara", "izmir", "bursa", "antalya", "adana", "konya", "kayseri", "trabzon", "samsun"};
    srand(time(NULL));
    char sehir[10]="",chr='\0',tahmin[10]="";
    int hak=9,sayac=0;
    
    //random sehir secme
	strcpy(sehir,sehirler[rand()%10]);
	
	
	for(int i=0;i<strlen(sehir);i++)
		tahmin[i]='_';
	
	
	yazici(hak,tahmin);
	
	
	while(1)
	{
		
		if(strcmp(sehir,tahmin)==0)
		{
			printf("\nKazandiniz!!");
			scanf("");
			getch();
			return 0;
		}
		
		printf("\nbir harf girin:");
		scanf(" %c",&chr);
		
		if(chr!='0')
		{
			sayac=0;
			for(int i=0;i<strlen(sehir);i++)
				if(sehir[i]==chr)
				{
					tahmin[i]=chr;
					sayac++;	
				}
			
			if(sayac==0)
				hak--;
			if(hak==0)
			{
				yazici(hak,tahmin);
				printf("\nKaybettiniz.");
				printf("\nDogru cevap:%s",sehir);
				scanf("");
				getch();
				return 0;
			}
			yazici(hak,tahmin);
		}
		else
		{	
			
			printf("Tahmininiz Nedir?:");
			scanf("%s",tahmin);
			if(strcmp(tahmin,sehir)==0)
			{
				printf("\nTebrikler Kazandiniz!");
				scanf("");
				getch();
				return 0;
			}
			else
			{
				yazici(0,tahmin);
				printf("\nKaybettiniz.");
				printf("\nDogru cevap:%s",sehir);
				scanf("");
				getch();
				return 0;
			}
		}
		
	}
	
}

