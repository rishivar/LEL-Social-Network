#include<iostream.h>
#include <process.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#include<fstream.h>

void homepage(void);
void signup(void);
void profile(void);
void error(void);
void signin(void);
void timeline(void);
void quiz(void);
void games(void);
void ttt(void);
void hang(void);
void cod(void);
void browser();
void profilechk();
void initUnknown (char[], char[]);
int checkwin();
void board();
int letterFill (char, char[], char[]);

char url[20];
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int upin;
const int totchan=7;




class user_detail
{
     public:
     char name[30];
     int gender,scre,scre1;
     char email[30],pass[30],pswrdconf[80],music[20];
}user;

void main()
{
       clrscr();
       browser();
       getch();
}
 
void browser()
 {
      char webpage[20];
     textcolor(CYAN);
      cprintf("___°New tab° ñ__________________LEL-      SURF______________________________³_³þ³X³");
      textcolor(WHITE);
     cprintf("³<-|->³³----------------------------------------------------------------*******");
     for(int z=0;z<80;z++)
     {textcolor(LIGHTRED);
     cprintf("Í");}
     cout<<"\t           Enter Webpage: https://www.";
     cin.getline(webpage,20);
     if( strcmp(webpage,"lel.com")==0)
      homepage();
     else
     {delay(200);
     error();}
 }
void profilechk()
{ 
       clrscr();
       ifstream fin("check.dat");
       fin.read((char*)&user,sizeof(user));

         cout<<"Hi,"<<user.name<<endl;

         cout<<"Your e-mail is "<<user.email<<" \n\n\n";
         cout<<"Your Fav "<<user.music<<"'s concert is on coming monday! Book your tickets! "<<endl;
         cout<<"\n\nYour profile has beenr recently viewed by 550 LEL members\n"<<endl;
         cout<<"\n\nYour LEL points in the recent quiz is "<<user.scre<<endl;
         cout<<"\Your latest score in High-Low Game is "<<user.scre1<<endl;
         cout<<"\nWe hope you better your game!"<<endl;
         cout<<"\nAs the server is under maintanance,\nwe plead you to retun back within 2days to check       your complete status"<<endl;
         cout<<"\n Have a nice day :)"<<endl;
         fin.close();
         getch();
         profile();
}

void homepage()
{
  clrscr();
 for(int i=1;i<=50;i++)
      {
         clrscr();

          textcolor(CYAN);
          cprintf("___°New tab° ñ__________________LEL-SURF______________________________³_³þ³X³");
      textcolor(WHITE);
     cprintf("³<-|->³³----------------------------------------------------------------*******");
     for(int z=0;z<80;z++)
     {textcolor(LIGHTRED);
     cprintf("Í");
     }
  cout<<"\n\n\t\t  We request you to be patient while LEL loads . "<<'\n'<<'\t'<<'\t';
 for(int j=1;j<=i;j++)
{
int o=i/5;
textcolor(o);
  cprintf("²"); }
  cout<<"\n\n\t "<<2*i<<"%";
 if( i > 1 && i < 20)
  cout<<"\n\n\tEstablishing Bandwidth modes ";
 else if( i > 20 && i<40)
  cout<<"\n\n\tAllocating LEL-Server";
 else if(i >40 && i<48)
   {
  textcolor(5);
  cprintf("\n\n	      Accessing cache and data files");
   }
 else{
  textcolor(MAGENTA);
  cprintf("\n\n     YAY!Connected to servers");
   textcolor(10);
  cprintf(".Press Enter to LEL!!!");}
  delay(150 - i*3);
      }

      cout<<"\n==============================================================================";
      cout<<endl;
      textcolor(LIGHTRED);
      cprintf("     Book tickets with LEL at GIRIMAX       ÎÞ Î          DUNKIRK-U/A   ");
      cout<<endl;
      textcolor(WHITE);
      cprintf("          to avail 20% DISCOUNT!            ÎÞ Î     Now at your GIRIMAX ");
      cout<<endl;
      textcolor(GREEN);
	    cprintf("     WWW.GIRIMAX.COM/LEL.                   ÎÞ Î                   ");
      for(i=0;i<40;i++)
      {textcolor(14);
      cprintf("°°");
      }
      cout<<endl;
      for(i=0;i<80;i++)
      {delay(5);
      textcolor(7);
      cprintf("þ");
      }
      for(i=0;i<80;i++)
      {delay(5);
      textcolor(14);
      cprintf("þ");
      }
      for(i=0;i<80;i++)
      {delay(5);
      textcolor(6);
      cprintf("þ");
      }
      for(i=0;i<80;i++)
      {delay(5);
      textcolor(10);
      cprintf("þ");
      }
      delay(500);
cout<<"\tNew to LEL?\t\t\t\t Already on LEL?"<<endl;
cout<<"\n\t1--SIGN UP \t\t\t\t  2--SIGN IN"<<endl;
cin>>upin;
delay(1000);
if(upin==1)
	signup();
else if(upin==2)
	signin();
else if(upin==123)
      exit(0);
else
homepage();
}

void signup()
{
char pw;
clrscr();
ofstream fout("check.dat");

cout<<"\n\nHello! You're just about to join the biggest personalized entertainment network in the cyber world"<<endl;
cout<<"\nIntroduce yourself"<<endl;
cout<<"\nWhat's your name?:";
gets(user.name);

cout<<"\nYour gender?----1)Male 2)Female"<<endl;
cin>>user.gender;
cout<<"\nEnter your Email-Id\n";
gets(user.email);
cout<<"\nEnter your favourite Musician"<<endl;
gets(user.music);
cout<<"\n Seems we have come to the end of the process,Enter your secret LELcode ";
	for(int i=0;i<16;i++)
			{
				pw=getch();
				int back=8;
				if(pw==(char)back)
				{
					i=i-2;
					pw=(char)back;
					cout<<pw;
					continue;
				}
				if(pw=='\r')
				{
					pw='\0';
					user.pass[i]=pw;
					break;
				}
					user.pass[i]=pw;
					cout<<"*";
			}
cout<<"\n Enter your Lelcode again to confirm ";
	for(i=0;i<16;i++)
			{
				pw=getch();
				int back=8;
				if(pw==(char)back)
				{
					i=i-2;
					pw=(char)back;
					cout<<pw;
					continue;
				}
				if(pw=='\r')
				{
					pw='\0';
					user.pswrdconf[i]=pw;
					break;
				}
					user.pswrdconf[i]=pw;
					cout<<"*";
			}
cout<<"\n\n";
if(strcmp(user.pswrdconf,user.pass)!=0)
		{
               		cout<<"\nDetails not correct\n Please retype the information.";
	              		delay(1000);
			signup();
		}

cout<<"Your details are verified;You'll be  redirected to our homepage in few seconds.";
fout.write((char*)&user,sizeof(user));
fout.close();
delay(1500);
homepage();
}

void error ()
{
clrscr();
cout<<"Webpage not available :( "<<endl;
cout<<"Try-\n     +reconnecting to Wifi.";
cout<<"\n     +checking the network cables,modem,and router.";
cout<<"\n     +Run lel network diagnostics";
cout<<"\n     +Reload the webpage";

}


void signin()
{
char pw;
clrscr();
ifstream fin("check.dat");
char userchck[20],passw[30];
int choice;
cout<<"\nEnter your name:\n";
gets(userchck);
cout<<"Enter your password:\n";


fin.read((char*)&user,sizeof(user));
{
for(int i=0;i<16;i++)
			{
				pw=getch();
				int back=8;
				if(pw==(char)back)
				{
					i=i-2;
					pw=(char)back;
					cout<<pw;
					continue;
				}
				if(pw=='\r')
				{
					pw='\0';
					passw[i]=pw;
					break;
				}
					passw[i]=pw;
					cout<<"*";
			}
cout<<"\n\n";

delay(1000);
 if((strcmp(userchck,user.name)==0)&&(strcmp(passw,user.pass)==0))
   profile();
else
{ 	cout<<"\nDetails not correct"<<endl;
	delay(1000);
	cout<<"Do you want to try again?\t1)Yes 2)No(exit)";
	cin>>choice;
	if(choice==1)
	  signin();
	else
	  homepage();

 }
 fin.close();
 }

 }
   void profile()
{
 int ch;
 clrscr();
 cout<<"123-Exit|"<<endl;
 for(int i=0;i<8;i++)
 cout<<"^-+*+-^";
 cout<<"\n\t\tHi!Welcome to your LEL profile,Choose what you want to do."<<endl;
 for(i=0;i<13;i++)
 cout<<"-----";
 cout<<"\n1) LEL Timeline\n";
 cout<<"\n2) LEL Quiz\n";
 cout<<"\n3) LEL Games\n";
 cout<<"\n4) LEL Profile(View your profile)\n";
 cin>>ch;
 if(ch==1)
	timeline();
 if(ch==2)
	quiz();
 if(ch==3)
	games();
 if(ch==123)
 homepage();
 if(ch==4)
 profilechk();
  }

void timeline()
{
clrscr();
cout<<"\nWelcome to LEL timeline";
delay(2000);
clrscr();
cout<<"\t\t\t\tTECH NEWS"<<endl;
cout<<"\nFacebook signs up new partnership with LEL"<<endl;
delay(1500);
cout<<"LEL tops the list of ' Most successful' entertainment sites"<<endl;
delay(1500);
cout<<"LEL aims to fix frequent server issues as the users reach 1 Zillion mark"<<endl;
delay(1500);
cout<<"LEL announces that Movies can be downloaded via LEL.com for 1$. Offer starting from 2019 "<<endl;
delay(1500);
cout<<"Forbes claims LEL to be the best startup ever"<<endl;
delay(2000);

clrscr();
cout<<"\t\t\t\tSports news"<<endl;
cout<<"Real Madrid.C.F signs up parntership with LEL up on their next season"<<endl;
delay(1500);
cout<<"Dhoni to miss World cup finals as he has with a severe injury"<<endl;
delay(1500);
cout<<"LEL has won the bid to conduct the 2026 FIFA WORDLD CUP in LEL'stadium,LELica";
delay(2000);
clrscr();
cout<<"\t\t\t\tPolitical News"<<endl;
cout<<"Government of India has partnered up with LEL to provide internet with a speed of 200Tb/sec"<<endl;
delay(1500);
cout<<"Donald trump claims LEL to strengthen bonds between countries"<<endl;
delay(2000);
profile();
}
void  quiz()
{
clrscr();
	int x;
	x=0;
	char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	cout<<"		Guest: Enter Your Name  ";
	cin>>ch1;
	clrscr();
	cout<<"	\n\nWelcome "<<ch1<<"\n\nGet ready to answer our questions";
	cout<<"Enter answer in form of 'a','b' and'c'only.\n\n";
	cout<<"		What is called as ' THE HOLYLAND'?\na.Jerusalem\nb.Mathura\nc.Mecca"<<endl;
	cin>>ch2;
	if(ch2=='a'){
		x=x+10;
		cout<<"Good Job.Your score is "<<x;}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"	What is called as ' THE ROOF OF THE WORLD'?\na.Nepal\nb.Rome\nc.Tibet"<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"Good Job.Your score is "<<x;

	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();

	cout<<"	What is called as ' THE LAND OF RISINGSUN'?\na.Chicago\nb.Japan\nc.Tibet"<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"Good Job.Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"	What is called as ' THE GIFT OF NILE'?\na.Chicago\nb.Egypt\nc.Africa"<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" score is "<<x;
	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"	What is called as ' THE LAND OF MIDNIGHT SUN'?\na.Norway\nb.Japan\nc.Australia"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Your score is "<<x;
}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();

delay(2000);
	if(x==50)
	cout<<"No cheating...... seems like you have done this earlier.";
	if(x==40)
	cout<<"You are extremely intelligent.Your Score is 40";
	if(x==30)
	cout<<"You are intelligent Your Score is 30";
	if(x==20||x==10||x==0)
	cout<<"You are average.Your Score is "<<x<<" Better luck nexttime";
	delay(3000);
	ofstream fout("check.dat");
	user.scre=x;
	fout.write((char*)&user,sizeof(user));
	fout.close();
	profile();
}

void games()
{
clrscr();
int ch;
 clrscr();
 cout<<"123-Exit|"<<endl;
 for(int i=0;i<8;i++)
 cout<<"^-+*+-^";
 cout<<"\n\tHi!Welcome to your LEL gaming arena!Choose to play."<<endl;
 for(i=0;i<13;i++)
 cout<<"-----";
cout<<"Choose one :-";
cout<<"\n1)High Low game\n";
cout<<"\n2)Tic Tac Toe\n";
cout<<"\n3)Hangman(Guess the word)";
cin>>ch;
if(ch==1)
	ttt();
if(ch==2)
	hang();
if(ch==3)
	cod();
if(ch==123)
      profile();
}









void ttt()
{
    int number;
 int guess;
 int chances=0,score=0,chanscor;
 char ans;
 do
 { clrscr();
   chances=score=0;
   cout<<"				Welcome to the High/Low game."<<endl;
   cout<<"  I will pick a random number from 0 to 100."<<endl;
   cout<<"  You must try to guess the number."<<endl;
   randomize();
   number=(int)(rand()%100);
   chanscor=100/totchan;
   do
   {
     cout<<"	What is your guess? (0 to 100) "<<endl;
     cin>>guess;
     if((guess<0)||(guess>100))
     {
	cout<<"Sorry, but your guess "<<guess<<"must be from 0 to 100."<<endl;
     }
     else if(guess < number)
     {
	cout<<guess<<" is low.Try a higher number."<<endl;
     }
     else if(guess > number)
     {
	cout<<guess<<" is high.Try a lower number."<<endl;
     }
     else
     {
	cout<<guess<<" is correct. Congratulations!";
	score=chanscor*(totchan-chances);
	cout<<"	Your score is "<<score<<endl;
	ofstream fout("check.dat");
	user.scre1=score;
	fout.write((char*)&user,sizeof(user));
	fout.close();
	break;
     }
     chances++;
     if(guess!=number)
	 cout<<"Now you have "<<totchan-chances<<"chances left."<<endl;
     if(chances==totchan)
	 { cout<<" Only "<<totchan<<"chances are allowed.Better luck next time";
	   cout<<"The actual number was "<<number<<endl;
	   break;
	 }
     }while (guess!=number);
     cout<<"Thank you for playing High/Low!"<<endl;
     cout<<"Want to play it again? (y/n)..."<<endl;
     cin>>ans;
   }while(ans=='y' || ans=='Y');
games();
}

void hang()
{
	int player = 1,i,choice;
	char mark;
	clrscr();
	do
	{
		board();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout<<"Invalid move ";
			player--;
			getch();
		}
		i=checkwin();
		player++;
	}while(i==-1);
	board();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";
	delay(1000);
	games();

}
int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
		 square[4] != '4' && square[5] != '5' && square[6] != '6' &&
	    square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}


void board()
{
	clrscr();
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl << endl;
}
void cod()
{


{
	clrscr();
	const int MAXLENGTH=80;
	const int MAX_TRIES=5;
	int letterFill (char, char[], char[]);
	void initUnknown (char[], char[]);
	char unknown [MAXLENGTH];
	char letter;
	int num_of_wrong_guesses=0;
	char word[MAXLENGTH];
	char words[][MAXLENGTH] =
	{
		"microsoft",
		"apple",
		"intel",
		"sony",
		"lenovo",
		"acer",
		"nvdia",
		"asus",
		"dell",
		"samsung"
	};
	randomize();
	int n=random(10);
	strcpy(word,words[n]);
	initUnknown(word, unknown);

	cout << "\n\nHeyo Amigo! \nLets play a game ";
	cout<<"\n LEL Helps you by giving hints. (P.S: Tech company)";
	cout << "\n\nEach letter is represented by a star.";
	cout << "\n\nYou have to type only one letter in one try";
	cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the word.";
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: ";
		cin >> letter;

		if (letterFill(letter, word, unknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}

		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;

		if (strcmp(word, unknown) == 0)
		{
			cout << word << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}

	if(num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
	cout << "The word was : " << word << endl;
	}

delay(2000);
games();

}
}

int letterFill (char guess, char secretword[], char guessword[])
{
	int i;
	int matches=0;
	for (i = 0; secretword[i]!='\0'; i++)
	{

		if (guess == guessword[i])
			return 0;

		if (guess == secretword[i])
		{
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}


void initUnknown (char word[], char unknown[])
{
	int i;
	int length = strlen(word);
	for (i = 0; i < length; i++)
		unknown[i]='*';
	unknown[i]='\0';
}
