#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>

int select_move()
{ randomize();
  return(random(10));
}

void main()
{
int i,j,k,track[10]={100,20,30,40,60,70,50,70,60,40};
int f=0,row, column;
int last=0;
char c1,c2,c3,c4,c5,c6,c7,c8,c9;
char name1[20];
char name2[50];
char ch=' ';
clrscr();
int mode;
int diff=0;
cout<<"\n\tWelcome to tic-tac-toe\nEnter mode \n1. Two Players Mode :\n2. Single  ";
cin>>mode;
if(mode==1)
{ cout<<"\nEnter players name  \n1: ";
  gets(name1);
  cout<<"\n2: ";
  gets(name2);
  clrscr();
  cout<<"\n\n\t\t"<<name1<<" Vs "<<name2;
  delay(2000);

}
else if(mode==2)
{
 cout<<"\nEnter level: \1.Easy\n2.Medium  ";
 cin>>diff;
 cout<<"\nEnter name ";
 gets(name1);
 clrscr();
cout<<"\n\n\t\t"<<name1<<" Vs Computer";
delay(2000);

}

clrscr();
k=3;
while(k!=-1)
{
delay(1000);
clrscr();
gotoxy(10,10);
cout<<"\nThe game starts in...."<<k<<" Sec";
k--;
}
clrscr();
for(i=3;i<29;i++)
{
 gotoxy(i,5);
 cout<<"_";
 gotoxy(i,8);
 cout<<"_";
}

for(j=3;j<13;j++)
{
 gotoxy(10,j);
 cout<<"|";
 gotoxy(20,j);
 cout<<"|";
}
int data=0;
int index=0;
cout<<"\n\nEnter corresponding numbers... ";
gotoxy(60,100);
cout<<"starting from ...<<"<<name1<<"   ";
delay(2000);
clrscr();
clrscr();
for(i=3;i<29;i++)
{
 gotoxy(i,5);
 cout<<"_";
 gotoxy(i,8);
 cout<<"_";
}

for(j=3;j<13;j++)
{
 gotoxy(10,j);
 cout<<"|";
 gotoxy(20,j);
 cout<<"|";
}
cout<<"\n\n\n";

for(int s=1;s<=9;s++)
{
if(s%2==1)
 {
  ch='X';
 }
else if(s%2==0)
 {
  ch='O';
 }

  track[index]=data;
  index++;

 if(s%2==1)
   {
    input:

     row=wherex();
     column=wherey();
     cin>>data;
     gotoxy(row,column);
     cout<<"  ";
      for(int check=0;check<9;check++)
     if(data==0||track[check]==data)
       {
	 gotoxy(row,column);
	 goto input;
       }
   }
 else if(s%2==0&&(mode==2&&diff==1))
   {
    cout<<"Thinking...";
    top:
    gotoxy(row,column);

    if(s==8)
     {
      for(int check1=0;check1<9;check1++)
	if(track[last]>9)
	   {
	     data=last;
	     break;
	    }
      }
    data=select_move();

    for(int check=0;check<9;check++)
     if(data==0||track[check]==data)
       {
	 gotoxy(row,column);


	 goto top;
       }
      gotoxy(row,column);
    cout<<"           ";

    }



 if(s%2==0&&mode==1)
   {
    test:

    cin>>data;
    gotoxy(row,column);
    cout<<"  ";


    for(int check=0;check<9;check++)
     if(data==0||track[check]==data)
       { gotoxy(row,column);





	 goto test;
       }
    }




 if(data==1)
  {
    gotoxy(3,4);
    cout<<ch;
    gotoxy(row,column);
    c1=ch;
   }
  else if(data==2)
  {
    gotoxy(15,4);
    cout<<ch;
    gotoxy(row,column);
    c2=ch;
   }
  else if(data==3)
  {
    gotoxy(25,4);
    cout<<ch;
    gotoxy(row,column);
    c3=ch;
   }
  else if(data==4)
  {
    gotoxy(5,7);
    cout<<ch;
    gotoxy(row,column);
    c4=ch;
   }
  else if(data==5)
  {
    gotoxy(15,7);
    cout<<ch;
    gotoxy(row,column);
    c5=ch;
   }
  else if(data==6)
  {
    gotoxy(25,7);
    cout<<ch;
    gotoxy(row,column);
    c6=ch;
   }
  else if(data==7)
  {
    gotoxy(3,10);
    cout<<ch;
    gotoxy(row,column);
    c7=ch;
   }
  else if(data==8)
  {
    gotoxy(15,10);
    cout<<ch;
    gotoxy(row,column);
    c8=ch;
   }
  else if(data==9)
  {
    gotoxy(25,10);
    cout<<ch;
    gotoxy(row,column);
    c9=ch;
   }







   else if(data==0||data>9)
   {

    cout<<"\nError...";
    i--;
    }


if(c1==c2&&c1==c3)
 {
  if(c1=='X')
    cout<<"\n\t\t\t"<<name1<<"  Wins...";
   else
    cout<<"\n\t\t\t"<<"AI"<<"  Wins...";

    f=1;
    break;
  }
else if(c1==c5&&c1==c9)
 {
  if(c1=='X')
   cout<<"\n\t\t\t"<<name1<<"  Wins...";
   else if(c1==0)
    cout<<"\n\t\t\t"<<"AI"<<"  Wins...";

    f=1;
    break;
 }
else if(c1==c4&&c1==c7)
 {
    if(c1=='X')
   cout<<"\n\t\t\t"<<name1<<"  Wins...";
   else if(c1==0)
    cout<<"\n\t\t\t"<<"AI"<<"  Wins...";

    f=1;
    break;
  }
else if(c3==c5&&c3==c7)
     {
      if(c3=='X')
   cout<<"\n\t\t\t"<<name1<<"  Wins...";
   else
    cout<<"\n\t\t\t"<<"AI"<<"  Wins...";

    f=1;
      break;
      }
else if(c4==c5&&c4==c6)
 {
 if(c4=='X')
   cout<<"\n\t\t\t"<<name1<<"  Wins...";
   else
    cout<<"\n\t\t\t"<<"AI"<<"  Wins...";

    f=1;
    break;
 }
else if(c7==c8&&c7==c9)
{
if(c7=='X')
   cout<<"\n\t\t\t"<<name1<<"  Wins...";
   else
    cout<<"\n\t\t\t"<<"AI"<<"  Wins...";


   f=1;
   break;
}
else if(c3==c6&&c3==c9)
 {
 if(c3=='X')
   cout<<"\n\t\t\t"<<name1<<"   Wins...";
   else if(c3==0)
    cout<<"\n\t\t\t"<<"AI"<<"  Wins...";

    f=1;
    break;
 }
else if(c2==c5&&c2==c8)
 {
 if(c2=='X')
   cout<<"\n\t\t\t"<<name1<<"  Wins...";
   else if(c2==0)
    cout<<"\n\t\t\t"<<"AI"<<"  Wins...";

    f=1;
    break;
 }



}
if(f==0)
cout<<"\n\t\t\tGame draw...";





getch();

}