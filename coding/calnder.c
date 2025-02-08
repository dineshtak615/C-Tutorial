#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include <sstream>  
#include <windows.h>        // Provides the mouse message types
//#include <limits.h>         // Provides INT_MAX
//#include <sstream
//std::ostringstream
int mouthnum=0;
int fristday;//day num of frist day of month
int loop_size;
int option;//option from menu
#ifndef WINBGI_H
#define WINBGI_H
#include"d:\turboc3\calmenu.c"
#include"d:\turboc3\gic.c" \\this func shows the calender of the inputted date

void show_calender()
{
    char *month[12]={"jan","feb","march","april","may","june","july","aug","sept","oct","nov","dec"};

    char *day[8]={ "sun","mon","tues","wed","thure","fri","sat"};
    int i=0;
    clrscr();
    printf("\n\n\n\t\t\t\t %s %d \n\n\t",month[mouthnum],use_year);
    printf("\n\n\n\t");
    
    //print day mon
    for(i=0;i<7;i++)
{
    printf("%s ",day[i]);
    printf("\t");
    
}
printf("\n\n\t");//formating

//print blank space with day
for(i=0;i<fristday;i++)

printf("\t");

for(i=1;i<=loop_size;i++)
{
    printf("%d",i);
    printf("t");
    fristday++;
    if(fristday%7==0)
    {
        printf("\n\t");
        fristday=0;

    }//if end

}//for ends
}//fun show_calender is end


//the func is used to display the main screen the main screen of calender program
void m_screen()
{
    clrscr();
    window(4,4,60,20);
    textbackgrond(1);
    textcolor(4);
    clrscr();

}
//the exit screen of the calender menu
void screen_scroll()
{
    int i,il;
    clrscr();
    gotoxy(1,8);
    printf("have nice day ");//name++

    for(i=0;i<10000;i++)
    
    for(il=0;il<10000;il++)
  
}
//main menu programming logic start

void main()
{
    char ch='y';
    while((ch=='y'||ch=='Y'))
    {
        clrscr();
        option=menu();//cmalmenu.cpp
        m_screen();

    switch(option)
    {
     case 1:
          {
            mouthnum=input_data(option);
            loop_size=cheak_date();
            fristday=day();
            show_calender();
            break;
           
          }//case1 is show calender 
     case 2:
          {
           mouthnum=input_data(option);
           loop_size=cheak_date();
           fristday=day();
           printf("\n\n\n\t\trequred data");
           printf("\n\n\tday   ::");

            switch(fristday)
            {
                //switch
                
                case 0:printf("SUNDAY");break;
                case 1:printf("MONDAY");break;
                case 2:printf("TUESDAY");break;
                case 3:printf("WEDNESDAY");break;
                case 4:printf("THURSDAY");break;
                case 5:printf("FRIDAY");break;
                case 6:printf("SATURDAY");break;
            } //INNER SWITCH
            break;
          }   
         case 3:
             {
                screen_scroll();
                exit(0);

             }
    }//outer switch over   
    getch();
}
getch();
}//end of main




