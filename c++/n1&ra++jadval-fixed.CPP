/*
* Name : Nima Hamzeh
* Date : 1401/10/4
* project number 4
* Gmail : hmznima77@gmail.com 
*/
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<time.h>

int jadval();
int rrandom();
int ddisplay(int num, int who);              //functions
int winal();
int wol();
                                           //global variables
int arrz[9] = {0,0,0,0,0,0,0,0,0};                              //win or lose
int arrzs[9] = {0,0,0,0,0,0,0,0,0,};                            //win or lose
int ra;         //random
int n1;         //number

int main()
{
   int arrps[10];    //random + number
	jadval();

   check1:
	gotoxy(60,1);
   cout<<"welcome . please enter a number 1-9 : ";
   cin>>n1;                                          //number = 1
   if(n1<1)
   {
   	cout<<"\a";
   	goto check1;
   }
   if(9<n1)
   {
   	cout<<"\a";
      goto check1;
   }
   n1 -= 1;
   arrps[1] = n1;
   arrz[n1] = 1;
   ddisplay(n1,1);

   again:
   ra = rrandom();
   for(int i = 0 ; i<3 ; i++)
   {
   	if(ra == arrps[i])
      {
         goto again;                                 //random = 1
      }
   }
   arrps[2] = ra;
   arrzs[ra] = 1;
   ddisplay(ra,2);

   ENTERN:
   gotoxy(60,2);
   cout<<"your next move : ";
   cin>>n1;
   if(n1<1)
   {
   	cout<<"\a";
   	goto ENTERN;
   }
   if(9<n1)
   {
   	cout<<"\a";
      goto ENTERN;
   }
   n1 -= 1;
   for(int p = 0 ; p < 4 ; p++)
 	{ 	if(n1 == arrps[p])                             //number = 2
      {
      	cout<<"\a";
			goto ENTERN;
      }
   }
   arrps[3] = n1;
   arrz[n1] = 1;
   ddisplay(n1,1);

   aggain:
   ra = rrandom();
   for(int j = 0 ; j<5 ; j++)
   {                                                 //rendom = 2
   	if(ra == arrps[j])
      {
      	goto aggain;
      }
   }
   arrps[4] = ra;
   arrzs[ra] = 1;
   ddisplay(ra, 2);

   ENTERNN:
   gotoxy(60,3);
   cout<<"your next move : ";
   cin>>n1;
   if(n1<1)
   {
   	cout<<"\a";
   	goto ENTERNN;
   }
   if(9<n1)
   {
   	cout<<"\a";
      goto ENTERNN;
   }
   n1 -= 1;
	for(int u = 0 ; u < 6 ; u++)
   {	if(n1 == arrps[u])                             //number = 3
      {
      	cout<<"\a";
      	goto ENTERNN;
      }
	}
   arrps[5] = n1;
   arrz[n1] = 1;
   ddisplay(n1,1);
   wol();

   agggain:
   ra = rrandom();
   for(int q = 0 ; q<7 ; q++)
   {
   	if(ra == arrps[q])
      {                                              //random = 3
      	goto agggain;
      }
   }
   arrps[6] = ra;
   arrzs[ra] = 1;
   ddisplay(ra,2);
	wol();

   ENTERRN:
   gotoxy(60,4);
   cout<<"your next move : ";
   cin>>n1;
   if(n1<1)
   {
   	cout<<"\a";
   	goto ENTERRN;
   }
   if(9<n1)
   {
   	cout<<"\a";
      goto ENTERRN;
   }
   n1 -= 1;
   for(int o = 0 ; o<8 ; o++)
   {	if(n1 == arrps[o])
      {                                              //number = 4
      	cout<<"\a";
      	goto ENTERRN;
	   }
   }
	arrps[7] = n1;
   arrz[n1] = 1;
   ddisplay(n1, 1);
   wol();

   aagain:
   ra = rrandom();
   for(int l = 0 ; l < 9 ; l++)
   {
   	if(ra == arrps[l])
      {
      	goto aagain;                                //random = 4
      }
   }
   arrps[8] = ra;
   arrzs[ra] = 1;
   ddisplay(ra, 2);
   wol();

   EENTER:
   gotoxy(60,5);
   cout<<"your next move : ";
   cin>>n1;
   if(n1<1)
   {
   	cout<<"\a";
   	goto EENTER;
   }
   if(9<n1)
   {
   	cout<<"\a";
      goto EENTER;
   }
   n1 -= 1;
   for(int a =0 ; a < 10 ; a++)
   {
   	if(n1 == arrps[a])
      {                                              //number = 5
      	cout<<"\a";
         goto EENTER;
      }
   }
	arrps[8] = n1;
   arrz[n1] = 1;
   ddisplay(n1, 1);
   wol();

   gotoxy(2,22);
   cout<<"End";
	getch();
   return 0;
}

int rrandom()          //random number 0 to 8
{
	int temp;
   srand(time(NULL));
	temp = (rand() % 9);
   return temp;
}

int jadval()                     //table
{
	int x = 20, y = 19, yy = 2;
	for(int i = 0 ; i < x ; i++)
   {
   	cout<<"*  ";
   }

	for(int j = 1 ; j < y ; j++)
   {
		cout<<"\n*";
      gotoxy(58, 0 + yy);
      cout<<"*";
      yy += 1;
   }

   cout<<endl;
   gotoxy(0,30);
   for(int l = 0 ; l < x ; l++)
   {
   	cout<<"*  " ;
   }

   gotoxy(4,7);
   cout<<"________________";
   gotoxy(4,12);
  	cout<<"________________";
   gotoxy(40,12);
   cout<<"________________";
   gotoxy(40,7);
   cout<<"________________";

  	int m1=2;
	int m = 0;
  	while(m<16)
  {
   	gotoxy(20,1+m1);
      cout<<"|\t\t      |";
      cout<<"\n";
      m1 += 1;
      m++;
  }

  gotoxy(21,7);
  cout<<"__________________";
  gotoxy(21,12);
  cout<<"__________________";

  gotoxy(11,5);   cout<<"<1>";
  gotoxy(28,5);   cout<<"<2>";
  gotoxy(47,5);  	cout<<"<3>";
  gotoxy(11,10);  cout<<"<4>";
  gotoxy(28,10);  cout<<"<5>";
  gotoxy(47,10);  cout<<"<6>";
  gotoxy(11,15);  cout<<"<7>";
  gotoxy(28,15);  cout<<"<8>";
  gotoxy(47,15);  cout<<"<9>";
  gotoxy(1,1);

   return 0;
}

int ddisplay(int num, int who)             //display
{
	if(who == 1)
   {
   	if(num == 0)
      {
      	gotoxy(11,5);
      	cout<<"&&&";
    	}
    	if(num == 1)
    	{
    		gotoxy(28,5);
      	cout<<"&&&";
    	}
    	if(num == 2)
    	{
    		gotoxy(47,5);
      	cout<<"&&&";
    	}
    	if(num == 3)
    	{
    		gotoxy(11,10);
      	cout<<"&&&";
    	}
    	if(num == 4)
    	{
    		gotoxy(28,10);
      	cout<<"&&&";
    	}
    	if(num == 5)
    	{
    		gotoxy(47,10);
      	cout<<"&&&";
    	}
    	if(num == 6)
    	{
    		gotoxy(11,15);
      	cout<<"&&&";
    	}
    	if(num == 7)
    	{
    		gotoxy(28,15);
      	cout<<"&&&";
    	}
    	if(num == 8)
    	{
    		gotoxy(47,15);
      	cout<<"&&&";
    	}
	}
   if(who == 2)
   {
    	if(num == 0)
    	{
    		gotoxy(11,5);
     	 	cout<<"***";
    	}
    	if(num == 1)
    	{
    		gotoxy(28,5);
      	cout<<"***";
    	}
    	if(num == 2)
    	{
    		gotoxy(47,5);
      	cout<<"***";
    	}
    	if(num == 3)
    	{
    		gotoxy(11,10);
      	cout<<"***";
    	}
    	if(num == 4)
    	{
    		gotoxy(28,10);
      	cout<<"***";
    	}
    	if(num == 5)
    	{
    		gotoxy(47,10);
      	cout<<"***";
      }
    	if(num == 6)
    	{
    		gotoxy(11,15);
      	cout<<"***";
    	}
    	if(num == 7)
    	{
    		gotoxy(28,15);
      	cout<<"***";
    	}
    	if(num == 8)
    	{
    		gotoxy(47,15);
      	cout<<"***";
    	}
	}
   gotoxy(70,4);
	return 0;
}

int winal(int num)                      //win alert
{
	int aa;
	if(num == 1)
   {
   	gotoxy(2,21);
   	cout<<"*** YOU WIN ***";
      do{
      	aa = getche();
      }while(aa != '~');
   }
   if(num == 2)
   {
   	gotoxy(2,21);
   	cout<<"*** YOU LOSE ***";
      do{
      	aa = getche();
      }while(aa != '~');
   }

   return 0;
}

int wol()           // win or lose ?
{
// system
   int c = 0;
   int v = 0;

   for(int p = 0 ; p<3 ;p++)
   {
   	if(arrzs[0+c] && arrzs[1+c] && arrzs[2+c] == 1)
   	{
   		winal(2);
   	}
		c += 3;
   }
   for(int q = 0 ; q<3 ; q++)
   {
   	if(arrzs[0+v] && arrzs[3+v] && arrzs[6+v] == 1)
      {
      	winal(2);
      }
		v += 1;
   }
	if(arrzs[0] && arrzs[4] && arrzs[8] == 1)
   {
   	winal(2);
   }
   if(arrzs[2] && arrzs[4] && arrzs[6] == 1)
   {
   	winal(2);
   }

// player
	int m = 0;
   int n = 0;

   for(int i = 0 ; i<3 ;i++)
   {
   	if(arrz[0+m] && arrz[1+m] && arrz[2+m] == 1)
   	{
   		winal(1);
   	}
		m += 3;
   }

   for(int j = 0 ; j<3 ; j++)
   {
   	if(arrz[0+n] && arrz[3+n] && arrz[6+n] == 1)
      {
      	winal(1);
      }
		n += 1;
   }
   if(arrz[0] && arrz[4] && arrz[8] == 1)
   {
   	winal(1);
   }
   if(arrz[2] && arrz[4] && arrz[6] == 1)
   {
      winal(1);
   }

   gotoxy(2,22);
   return 0;
}

