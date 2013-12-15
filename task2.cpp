// task2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{ 
	int i;
	int arr[100];
        srand(time(NULL));
		 for (int i = 0; i <=100; i++)
			 arr[i]=rand()%10;
		 for (int i = 0; i <=100 ;i++ )
       printf("%d", arr[i]);
		 FILE *file;

     if ((file = fopen("data.txt","w")) == NULL)
        printf("Файл невозможно открыть или создать\n");
     else
        for(int i=0; i<100;i++)
           
           fprintf (file, " %d\n\n" , arr[i]);
        
    
     fclose(file);
system("pause");
return 0;
}