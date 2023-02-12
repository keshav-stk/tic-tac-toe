#include <stdio.h>
// only one working code
#include <conio.h>
#include<stdlib.h>
#include<Windows.h>// to call color system
#include<time.h>
/* project for c, done by BASK team*/
int test();// to test the winning conditions
void board();// to display board
int human_play();// for playing game with humans
int bot_play();//for playing game with bot
int finish();//for exiting game
void aftab();//cuz this code is written by aftab
void samir();//cuz this code is written by samir
int nothing( int);//for displaying ads in screen
 void for_nth(int);//for allocating time to run ad
 char bot( char);//bot playing included
 char human();//human playing included
char box[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };// global declarations to be used in multiple functions
int t =0,d=0,c=0;
	int win[3]={0,0,0};
	int main()
	{

	    char g,w,n;


	       system("cls");// to clear the screen
	       system("color 30");// for colorful console
	    printf("\n\n\t\t\tChoose an option please!!!........\n\n\n");

	    printf("\t\t\t1) About game and gameplay!\n\t\t\t2) Gameplay \n\t\t\t3) About developers\n\t\t\t4) Exit\n");
	    printf("\n\tWe suggest you to go through instructions before getting into game play\n");
	    scanf(" %c",&n);
	    switch(n)
	    {
        case '1':
            system("cls");
          samir();
            printf("\t\tPress m to go to menu!!!....\n");
            scanf(" %c",&g);
             if(g == 'm'||g=='M')
            {
                main();
            }
            else
            break;
        case '2':
        		top:
            system("cls");

             printf("\n\n\t\t\tChoose an option please!!!........\n\n\n");

            printf("\t\t\t1--> MULTIPLAYER\n\t\t\t2-->SINGLE PLAYER\n");
            scanf(" %c",&w);
            switch(w)
            {

            	case '1':
            	human_play();
            	break;

            	case '2':
            		system("cls");
            		printf("\n\n\t\tthis mode of game is under development\n\t\tcomplain us about the missing features\n\npress any key to continue\n");
            		getch();
            				system("cls");
            				printf("\n\n\t\tAND YEAH! DONT COMPLAIN ABOUT BOT BEING DUMB\n\t\t HAHAHAHAHAHA\n press any key to continue\n");
            			getch();
            		bot_play();
            		break;
            		default:
            		goto top;//to ask choice again
			}

            break;
        case '3':
            system("cls");
aftab();
              printf("\t\tPress m to go to gameplay!!!....\n");
            scanf(" %c",&g);
            if(g == 'm'|| g=='M')
            {
             main();
            }
            else
            break;
        case '4':

            system("cls");
            printf("Are you sure?(y/n)\n");
            char sure;
   scanf(" %c",&sure);
            if( sure == 'y'|| sure=='Y')
            {


               finish();
            }
            else
              main();

break;
        default:
         main();

	    }

	}
	int bot_play()
	{

		int a,p=1;
       box[1]='1',box[2]='2',box[3]='3',
   box[4]='4',box[5]='5',box[6]='6',box[7]='7',box[8]='8',box[9]='9';// to reset stored value in box

char tick,b;
char choice;

  do
    {
    	system("color 1f");//for color in screen
    	same:

        board();

        p = (p % 2) ? 1 : 2;

        t= win[1]+win[2]+d+c;
        printf("  ___________________________________________\n");
        printf("  |Total game played:%-2d\t ",t);
        printf("Player 1 wins:%-2d   |\n",win[1]);
        printf("  |Draw:%-2d\t",d);
        printf("   \t Computer wins:%-2d   |\n",win[2]);
        printf("  |Cancelled games:%-2d                       |\n",c);
        printf("  |_________________________________________|\n");
        printf("COMPUTER IS PLAYER 2\n");
if(p%2!= 0)
{
	 b = human();
}
else{
	b=bot(b);
}


		 tick = (p==1) ? 'O' : 'X';

if (b == '1' && box[1] == '1')
           box[1] = tick;
else if (b == '2' && box[2] == '2')
            box[2] = tick;
else if (b == '3' && box[3] == '3')
          box[3] = tick;
else if (b == '4' && box[4] == '4')
           box[4] = tick;
else if (b == '5' && box[5] == '5')
            box[5] = tick;
else if (b == '6' && box[6] == '6')
           box[6] = tick;
else if (b == '7' && box[7] == '7')
            box[7] = tick;
else if (b == '8' && box[8] == '8')
        box[8] = tick;
else if (b == '9' && box[9] == '9')
            box[9] = tick;

      else if(b=='0')
            {
            	system("cls");
   printf("Are you sure you want to end the game?\n Press y to go to menu!!\n Press n for new game!!\n Press any other key to continue playing!! \n");
            	scanf(" %c",&choice);
            	if(choice=='y'||choice == 'Y')
            	{

       box[1]='1',box[2]='2',box[3]='3',
   box[4]='4',box[5]='5',box[6]='6',box[7]='7',box[8]='8',box[9]='9';// to reset stored value in box
            	c+=1;
            		t+=1;
for_nth(t);
             main();
            		last:
              return 0;
				}
				else if(choice=='n'|| choice == 'N')
				{
					c+=1;
					t+=1;
					for_nth(t);
		 box[1]='1',box[2]='2',box[3]='3',
   box[4]='4',box[5]='5',box[6]='6',box[7]='7',box[8]='8',box[9]='9';// to reset stored value in box
					bot_play();
				;	}
				else
				{
			main();
				}
			}
 else
        {

            printf(" Ooops !! Either you try to input words\n Or,It is packed, try next\n");// in case wrong or packed choice
            if(p%2!=0)//to hold screen only if human entered packed box number
            getch();
            p--;


        }

        a = test();// to check if the game has be won or not

        p++;
    }while (a ==  - 1);


    board();

    if(a == 1 && p%2==0)
{

        printf("\t\t\tCongratulations!\n");
        printf("\n\t\t\tPlayer %d win\n ", --p);// --p to neutralise p++
        getch();
        win[p]+=1;
        t+=win[p];
for_nth(t);
    }
    else if(a==1 && p%2!=0)
    {
         printf("\t\t\tCongratulations!\n");
        printf("\n\t\t\t Computer win\n ");// --p to neutralise p++
        getch();
        win[--p]+=1;
        t+=win[p];
        for_nth(t);
	}
     else
{
        printf("\nGame has been draw!\n");
        getch();
        t+=1;
        d+=1;
for_nth(t);
}




        printf("Press a to play again\n Any other key to quit game\n");
char dec;
        scanf(" %c",&dec);
        if(dec == 'a'|| dec =='A')
        {
   
       box[1]='1',box[2]='2',box[3]='3',
   box[4]='4',box[5]='5',box[6]='6',box[7]='7',box[8]='8',box[9]='9';
        	 bot_play();
        	}
        	else
        	{
        	main();
        		}
        	}





 char retrace( char b)
 {
 	int i;
 	 char temp[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
 char box[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	for(i=0;i<=9;i++)
	{
		if(b==box[i])
		{
			srand(time(NULL));
			return box[rand()%10];
			break;
		}

	}
}
char bot( char b)
{

	b=retrace(b);
	return b;
}
	char human()
	{
	char b;
		 printf("\tPlayer \tIt is your turn\n Enter number of box where u want to put tick: \n");// to take input from user
 scanf(" %c", &b);
		return b;


	}
int human_play()

{
int p = 1, a=2;
char tick,b;
char choice;

  do
    {
    	system("color 1f");//for color in screen
    	same:

        board();

        p = (p % 2) ? 1 : 2;

        t= win[1]+win[2]+d+c;
        printf("  ___________________________________________\n");
        printf("  |Total game played:%-2d\t ",t);
        printf("Player 1 wins:%-2d   |\n",win[1]);
        printf("  |Draw:%-2d\t",d);
        printf("   \t Player 2 wins:%-2d   |\n",win[2]);
        printf("  |Cancelled games:%-2d                       |\n",c);
        printf("  |_________________________________________|\n");
 printf("\tPlayer %d\tIt is your turn\n Enter number of box where u want to put tick: \n", p);// to take input from user
 scanf(" %c", &b);

		 tick = (p==1) ? 'O' : 'X';

if (b == '1' && box[1] == '1')
           box[1] = tick;
else if (b == '2' && box[2] == '2')
            box[2] = tick;
else if (b == '3' && box[3] == '3')
          box[3] = tick;
else if (b == '4' && box[4] == '4')
           box[4] = tick;
else if (b == '5' && box[5] == '5')
            box[5] = tick;
else if (b == '6' && box[6] == '6')
           box[6] = tick;
else if (b == '7' && box[7] == '7')
            box[7] = tick;
else if (b == '8' && box[8] == '8')
        box[8] = tick;
else if (b == '9' && box[9] == '9')
            box[9] = tick;
      else if(b=='0')
            {
            	system("cls");
   printf("Are you sure you want to end the game?\n Press y to go to menu!!\n Press n for new game!!\n Press any other key to continue playing!! \n");
            	scanf(" %c",&choice);
            	if(choice=='y'||choice == 'Y')
            	{

       box[1]='1',box[2]='2',box[3]='3',
   box[4]='4',box[5]='5',box[6]='6',box[7]='7',box[8]='8',box[9]='9';// to reset stored value in box
            	c+=1;
            		t+=1;
            		for_nth(t);
              main();
            		last:
              return 0;
				}
				else if(choice=='n'|| choice == 'N')
				{
					c+=1;
					t+=1;
					for_nth(t);

					goto neww;
					}
				else
				{
					goto same;
				}
			}
 else
        {
            printf(" Ooops !! Either you try to input words\n Or,It is packed, try next\n");// in case wrong or packed choice
            p--;
            getch();

        }
        a = test();// to check if the game has be won or not

        p++;
    }while (a ==  - 1);

    board();

    if(a == 1)
{

        printf("\t\t\tCongratulations!\n");
        printf("\n\t\t\tPlayer %d win\n ", --p);// --p to neutralise p++ in 166 line
        getch();
        win[p]+=1;
        t+=win[p];
     for_nth(t);

    }
     else
{
        printf("\nGame has been draw!\n");
        getch();
        t+=1;
        d+=1;
        for_nth(t);// passing value to function
}


        printf("Press a to play again\n Any other key to quit game\n");
char dec;
        scanf("\t %c",&dec);
        if(dec == 'a'|| dec =='A')
        {
        	neww:
       box[1]='1',box[2]='2',box[3]='3',
   box[4]='4',box[5]='5',box[6]='6',box[7]='7',box[8]='8',box[9]='9';
        	 human_play();
        	}
        	else
        	{
        		goto last;
        		}
}
void board()
{

    system("cls");

 printf("(O)-Player 1\n(X)-Player 2\n");
 printf("press 0 to cancel game!!!\n\n");



    printf("\t\t\t     |     |     \n");
    printf("\t\t\t  %c  |  %c  |  %c \n", box[1], box[4], box[7]);

    printf("\t\t\t_____|_____|_____\n");
    printf("\t\t\t     |     |     \n");

    printf("\t\t\t  %c  |  %c  |  %c \n", box[2], box[5], box[8]);

    printf("\t\t\t_____|_____|_____\n");
    printf("\t\t\t     |     |     \n");

    printf("\t\t\t  %c  |  %c  |  %c \n", box[3], box[6], box[9]);

    printf("\t\t\t     |     |     \n\n");
}


int test()
{

    if (box[1] == box[2] && box[2] == box[3])
        return 1;

    else if (box[4] == box[5] && box[5] == box[6])
        return 1;

    else if (box[7] == box[8] && box[8] == box[9])
        return 1;

    else if (box[1] == box[4] && box[4] == box[7])
        return 1;

    else if (box[2] == box[5] && box[5] == box[8])
        return 1;

    else if (box[3] == box[6] && box[6] == box[9])
        return 1;

    else if (box[1] == box[5] && box[5] == box[9])
        return 1;

    else if (box[3] == box[5] && box[5] == box[7])
        return 1;

    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
        box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7]
        != '7' && box[8] != '8' && box[9] != '9')
     return 0;

    else
        return  - 1;
}

int finish()
{
       	    system("cls");
        printf(" \t\tYou successfully left the game.....\n\n\n");
        printf("\t\t\tSome records!!!\n\n");
          printf("  __________________________________________\n");
        printf("  |Total game played:%-2d\t ",t);
        printf("Player 1 wins:%-2d   |\n",win[1]);
        printf("  |Draw:%-2d\t",d);
        printf("   \t Player 2 wins:%-2d   |\n",win[2]);
        printf("  |Cancelled games:%-2d                       |\n",c);
        printf("  |_________________________________________|\n");

            	    getch();

            	    system("cls");

        printf("\n\n\t\tThanks for using it");
        return 0;


}
void samir()
{
	system("color 70");
board();
	printf("This game looks like:\n");

printf("\n About game:\n  \t\tName:TIC TAC TOE \n It is a small game mnthe by using C language. It consists of 9 boxes and therefore has inputs in same way.\n It's a fun game played between two players. Each player can choose among two symbols . To win the game symbols should match horizontally  or vertically or diagonally.You can quit the game whenever you want.It's a beautiful game. So enjoy it. ");
printf("\nAbout gameplay:\n 1)You have to enter number of the box where u want to put the mark either 'x' or 'o'!!!	\n For example: Enter 5 to put your tick in place of 5.\n 2)Entering word is considered as wrong input...\n");
}

void aftab()
{
	system("color 1f");
     printf("This game is designed by :\n\t1.	Mohammed Samir  (PAS076BAM019)	\n\t2.	Aftab Ansari   (PAS076BAM002)	\n\t3.	Keshav Prasad Sapkota  (PAS076BAM016)\n\t4.	Birat Acharya  (PAS076BAM009)");
printf("\n\n\n");
}


void for_nth(int r)
{

   if(r==5)
        {
        nothing(5);

		}
		else if(r==10)
		{
			nothing(10);

		}


}
int nothing(int q)
{
	int w;

 if(q==5)
	{

		    system("cls");

		w=q*1000;
		    printf("\t\tGAME WILL AUTOMATICALLY LOADED AFTER THIS AD!!!\n\n\n\n");
printf("Thanks for the Rejina's and Sabnam's team for helping us to learn delaying function in C\n They have made an outstanding project (quiz) which we refer you all to see\n   ");
printf("Their quiz is named as BRAIN MOCKER \n");
	printf("\n\nthis ad is generated cuz u played this game %d times\n",q);
		printf("it will end automatically after %d seconds ",q);
		Sleep(w);
		    system("cls");




	}
	else
	{
		w=q*1000;
		    system("cls");
		        printf("\t\tGAME WILL AUTOMATICALLY LOADED AFTER THIS AD!!!\n\n\n\n");
	aftab();
	printf("this ad is generated cuz u played this game %d times\n",q);
		printf("it will end automatically after %d seconds ",q);
	Sleep(w);
	system("cls");



}
}


