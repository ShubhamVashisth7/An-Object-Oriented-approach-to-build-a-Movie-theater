#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<dos.h>


class Movie
{
char mname[40], genre[40], time[20], date[20], venue[40] ,cbfc[10];
float price;

public:

void mget()
{
clrscr();
int x=0;
cout<<"\n\n\n\t\t\tWELCOME ADMIN ,PLEASE FILL THE DETAILS\n";
cout<<"\n->ENTER THE MOVIE NAME\n";
gets(mname);
cout<<"\n->ENTER THE PRICE FOR  THE MOVIE\n";
cin>>price;
cout<<"\n->ENTER THE GENRE OF THE ABOVE MOVIE\n";
gets(genre);
cout<<"\n->ENTER THE TIME SLOT FOR THE RESPECTIVE MOVIE\n";
gets(time);
cout<<"\n->ENTER THE DATES FOR MOVIE STREAMING\n";
gets(date);
cout<<"\n->ENTER THE CINEMA HALL AND IT'S ADDRESS WHERE THE MOVIE WILL BE STREAMING\n";
gets(venue);
cout<<"\n->CHOOSE THE CBFC CERTIFICATION FROM THE FOLLOWING OPTIONS\n";
delay(800);
cout<<"  1.'U/A'\n";
delay(800);
cout<<"  2.'U'\n";
delay(800);
cout<<"  3.'A'\n";
delay(800);
cout<<"  4.'OTHER *'\n\n";
cout<<"ENTER YOUR CHOICE (1-4)\n";
cin>>x;
if(x==1)
strcpy(cbfc,"U/A");
if(x==2)
strcpy(cbfc,"U");
if(x==3)
strcpy(cbfc,"A");
if(x==4)
strcpy(cbfc,"OTHER *");
if(x!=1 && x!=2 && x!=3 && x!=4)
{
cout<<"\t\t\t INVALID INPUT :(, PLEASE TRY AGAIN\n";
delay(2000);
mget();
}
cout<<"\n\n\t\t\t        UPDATING DATA\n";
delay(2000);
cout<<"\n\n\n\t\t\t   '"<<mname<<"' ADDED TO DATABASE\n";
getch();
}
char * movieName()
{ return mname; }
char * getGenre()
{ return genre; }
char * getTime()
{ return time; }
char * getDate()
{ return date; }
float getPrice()
{ return price; }
char * getVenue()
{ return venue; }
char * getCbfc()
{ return cbfc; }

};




class Admin
{
char aname[40] , apass[40] ,aemail[40];
public:

void aget()
{
clrscr();
char check[20];

cout<<"\n\n\n\n\t\t\t       SIGN UP AS ADMIN!!\n";
int k=0,g=3;
cout<<"\n\t\t* TO BECOME THE ADMIN ,ENTER THE 3 LETTER KEY *\n";
for(g=3;g>=0;g--)
{
gets(check);
if(strcmpi(check,"c++")==0)
break;
if(g==0)
{
cout<<"\nADMIN ACCESS DENIED\n";
getch();
intermediate();
}
else
{
cout<<"\nINVLAID KEY\n";
cout<<"\nNUMBER OF TRIES LEFT - "<<g<<endl;
}
}
cout<<"\n\n-> GREAT :) YOU ARE 3 STEPS AWAY FROM BECOMING THE ADMIN\n";
cout<<"\n-> ENTER YOUR NAME\n";
gets(aname);

while(1)
{
cout<<"\n-> ENTER YOUR NEW EMAIL ID\n";
gets(aemail);
	for(int i=0;i<strlen(aemail);i++)
	{
	if(aemail[i]=='@')
	k++;
	}

	if(k==0)
	{
	cout<<"\nINVALID EMAIL ,PLEASE TRY AGAIN\n";
	continue;
	}
	else
	break;
}



	fflush(stdin);
		int z=0;
	   cout<<"\n-> ENTER YOUR PASSWORD\n";
		 //	gets(pass);
		 while(1)
	{
	apass[z]=getch();
		cout<<"*";
	if(apass[z]==13)
	break;
	z++;
	}
	apass[z]='\0';

	cout<<"\n\n\nPLEASE WAIT\n";
	delay(2000);
	cout<<"\n\t\t\t     FINISHING THINGS UP!!\n";
	delay(2000);
	cout<<"\n\n\n\t\t          ADMIN ACCOUNT CREATED SUCCESSFULLY\n\n";
	delay(2000);




}



void aoutput()
{
clrscr();
fflush(stdin);
cout<<"\n\n\n\n\t\t\tADMIN ACCOUNT DETAILS ARE :-\n\n";
cout<<"->NAME - "<<aname;
fflush(stdin);
cout<<"\n->EMAIL ID - "<<aemail<<"\n";
fflush(stdin);
cout<<"->PASSWORD - "<<apass;
}
char * getAname()
{ return aname; }

char * getApass()
{ return apass; }

char * getAemail()
{ return aemail; }


};


class User
{
char name[40] , pass[40] , country[20] , email[40], msg[20];
public:
User()
{
strcpy(msg,"NO MOVIE CONFIRMED\n");
}
void get()
{
clrscr();
cout<<"\n\n\n\n\t\t\t       SIGN UP FOR FREE!!\n";
int k=0;
cout<<"-> ENTER YOUR NAME\n";
gets(name);
cout<<"\n-> ENTER YOUR COUNTRY\n";
gets(country);

while(1)
{
cout<<"\n-> ENTER YOUR NEW EMAIL ID\n";
gets(email);
	for(int i=0;i<strlen(email);i++)
	{
	if(email[i]=='@')
	k++;
	}

	if(k==0)
	{
	cout<<"\nINVALID EMAIL ,PLEASE TRY AGAIN\n";
	continue;
	}
	else
	break;
}



	fflush(stdin);
		int z=0;
	   cout<<"\n-> ENTER YOUR PASSWORD\n";
		 //	gets(pass);
		 while(1)
	{
	pass[z]=getch();
		cout<<"*";
	if(pass[z]==13)
	break;
	z++;
	}
	pass[z]='\0';

	cout<<"\n\n\nPLEASE WAIT\n";
	delay(2000);
	cout<<"\n\t\t\t     FINISHING THINGS UP!!\n";
	delay(2000);
	cout<<"\n\n\n\t\t\t ACCOUNT CREATED SUCCESSFULLY\n\n";
	delay(2000);




}



void output()
{
clrscr();
fflush(stdin);
cout<<"\n\n\n\n\t\t\t  YOUR ACCOUNT DETAILS ARE :-\n\n\n\n";
cout<<"->NAME - "<<name<<"\n\n"<<"->COUNTRY - "<<country;
fflush(stdin);
cout<<"\n\n"<<"->EMAIL ID - "<<email<<"\n\n";
fflush(stdin);
cout<<"->PASSWORD - "<<pass;
}
void detail(char idk[10])
{
strcpy(msg,idk);
}
char * getName()
{ return name; }


char * getPass()
{ return pass; }

char * getCountry()
{ return country; }

char * getEmail()
{ return email; }
char * getMsg()
{
fflush(stdin);
fflush(stdout);
return msg ; }


};

void bye();
void check(User &u);

void menu(User &u)
{
clrscr();
ofstream fout("person.dat",ios::in|ios::app|ios::binary);
ifstream fin("film.dat",ios::binary);
Movie m;
int i=1;
cout<<"\n\n\n\t\t\t    ~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"\t\t\t    YOUR MOVIE, YOUR CHOICES\n";
cout<<"\n\t\t\t    ~~~~~~~~~~~~~~~~~~~~~~~~";
delay(1000);
cout<<"\n\n\n\n\t\t\t\t NOW STREAMING\n\n\n";
while(fin.read((char *)&m, sizeof(m)))
{
delay(700);
cout<<i++<<". "<<m.movieName()<<endl<<endl;
}

fflush(stdin);
fflush(stdout);
fin.close();
check(u);
//zero();
}
/*
void zero(User &u)
{
 ofstream fout("info.dat",ios::in|ios::app|ios::binary);
*/
void check(User &u)
{
int j=0;
delay(1000);
cout<<"\n->TO CHECK YOUR BOOKED MOVIE PRESS '1' OR TO BOOK A NEW MOVIE PRESS '0'\n";
cin>>j;
char idk[20];
delay(1000);
ifstream fin("film.dat",ios::binary);
ofstream fout("person.dat",ios::in|ios::app|ios::binary);
Movie n;
char x[10];
if(j==1)
{
cout<<"\nYOUR BOOKED MOVIE\t\t - "<<u.getMsg();
cout<<endl;
delay(1000);
char is[20];
cout<<"\nTO GO BACK PRESS 'BACK' ELSE PRESS 'EXIT' , TO EXIT\n";
gets(is);
if(strcmpi(is,"back")==0)
menu(u);
if(strcmpi(is,"exit")==0)
bye();
}
if(j==0)
{
cout<<"\n-> ENTER THE NAME OF THE MOVIE FROM ABOVE TO SEEK DETAILS\n";
gets(idk);
clrscr();
while(fin.read((char *)&n, sizeof(n)))
{
if(strcmpi(idk,n.movieName())==0)
{
cout<<"\n\n\n\n\t\t\t\t"<<n.movieName();
delay(700);
cout<<"\n\n* PRICE-"<<n.getPrice();
delay(700);
cout<<"\n\n* GENRE - "<<n.getGenre();
delay(700);
cout<<"\n\n* CATEGORY - "<<n.getCbfc();
delay(700);
cout<<"\n\n* DATE - "<<n.getDate();
delay(700);
cout<<"\n\n* TIME - "<<n.getTime();
delay(700);
cout<<"\n\n* CINEMA - "<<n.getVenue()<<endl;
strcpy(idk,n.movieName());
}
}
delay(1000);
cout<<"\n\n\nTO CONFIRM PRESS 'YES'\nTO CHECK YOUR ALREADY BOOKED MOVIES PRESS 'CHECK'\nTO CHECK OUR OTHER MOVIES PRESS 'BACK'\nTO LOGOUT PRESS 'EXIT'\n\n";
gets(x);
if(strcmpi(x,"yes")==0)
{         cout<<"\nCONFIRMING BOOKING\n";
delay(1000);
	fflush(stdin);
	fflush(stdout);
	u.detail(idk);
	fout.write((char *)&u , sizeof(User));
int w=0;

		cout<<"\nBOOKING CONFIRMED FOR MOIVE - "<<u.getMsg()<<"\n";
		delay(1000);
		cout<<"\nTO RESUME PRESS '1' ,TO SAVE AND EXIT PRESS '0'\n";
		cin>>w;
		if(w==1)
		menu(u);
		else
		bye();

}
if(strcmpi(x,"check")==0)
{
cout<<"\nYOUR BOOKED MOVIE\t\t - "<<u.getMsg();

}
if(strcmpi(x,"back")==0)
menu(u);
if(strcmpi(x,"exit")==0)
bye();

fout.close();
}
}

void addmovie()
{
int c=0;
Movie m;
m.mget();
ofstream fout("film.dat",ios::in|ios::app|ios::binary);
fout.write((char *)&m , sizeof(Movie));
fout.close();
cout<<"\n\n\tTO ADD MORE PRESS '1' TO LOGOUT AND EXIT PRESS '0'\n";
cin>>c;
if(c==1)
addmovie();
if(c==0)
{
cout<<"\n\n\t\t\t   SAVING CURRENT PROGRESS\n";
delay(2000);
bye();
}
}
void login()
{
ifstream fin("person.dat",ios::binary);
User u;
clrscr();
int x=0;
char id[20], p1[20];
cout<<"\n\n\n\n\n\t\t\t\t LOGIN HERE\n";
cout<<"->ENTER YOUR EMAIL ID\n";
gets(id);
cout<<"\n->ENTER YOUR PASSWORD\n";
int z=0;
while(1)
{
p1[z]=getch();
cout<<"*";
if(p1[z]==13)
break;
z++;
}
p1[z]='\0';
fflush(stdin);
while(fin.read((char *)&u, sizeof(u)))
{
p1[z]='\0';
if( strcmpi(u.getEmail(),id)==0 && strcmpi(u.getPass(),p1)==0 )
x++;
}
if(x>0)
{
cout<<"\n\n\t\t\t    LOGIN SUCCESSFUL :)\n";
delay(2000);
menu(u);
}
else
{
cout<<"\n\t\t\tLOGIN FAILED :( ,PLEASE TRY AGAIN\n";
getch();
fin.close();
}


}

void alogin()
{
ifstream fin("admin.dat",ios::binary);
Admin a;
clrscr();
int x=0;
char id[20], p1[20];
cout<<"\n\n\n\n\n\t\t\t\tADMIN LOGIN HERE\n";
cout<<"->ENTER YOUR EMAIL ID\n";
gets(id);
cout<<"\n->ENTER YOUR PASSWORD\n";
int z=0;
while(1)
{
p1[z]=getch();
cout<<"*";
if(p1[z]==13)
break;
z++;
}
p1[z]='\0';
fflush(stdin);
while(fin.read((char *)&a, sizeof(a)))
{
p1[z]='\0';
if( strcmpi(a.getAemail(),id)==0 && strcmpi(a.getApass(),p1)==0 )
x++;
}
if(x>0)
{
cout<<"\n\n\t\t\t      LOGIN SUCCESSFUL :)\n";
delay(2000);
addmovie();
}
else
{
cout<<"\n\t\t\tLOGIN FAILED :( ,PLEASE TRY AGAIN\n";
getch();
fin.close();
}


}

void bye()
{
clrscr();
 cout<<endl;
 for(int i=0;i<=79;i++)
 {

  for(int j=0;j<=6;j++)
   cout<<"~";
 }

cout<<"\n\t\t\t\t   VISIT AGAIN!!\n\n\n\n\t\t             by:-   SHUBHAM VASHISTH\n\n\n\n";


  for(int i1=0;i1<=79;i1++)
  {

   for(int j1=0;j1<=6;j1++)
   cout<<"~";
  }
  getch();
}

void intermediate()
{
ofstream fout;
clrscr();
char x,x1;
cout<<"\n\n\n\n\n";
cout<<"                  NEW TO MY CINEMAS? PRESS 'Y' IF YES 'N' IF NO\n\n\n\n";
 cin>>x;
 if (x=='y'||x=='Y')
 {
	cout<<"                             sign up today for free!\n\n";
	cout<<"                       to proceed press 'y'to exit press 'n' \n";
	cin>>x1;
		if(x1=='y'||x1=='Y')
		{
		int p=0;
		cout<<"\n\n\n      TO SIGN UP AS ADMIN PRESS '0' OR IF WISH TO SIGN UP AS USER ENTER '1'\n\n";
		cin>>p;

		     if(p==0)
		    {
			Admin a;
			char o;
			fflush(stdin);
			a.aget();
			ofstream fout("admin.dat",ios::in|ios::app|ios::binary);
			fout.write((char *)&a , sizeof(Admin));
			a.aoutput();
			fout.close();
			cout<<"\n\t\t\t    TO LOGIN PRESS 'y', TO EXIT PRESS 'n' \n";
			cin>>o;
			if(o=='y'||o=='Y')
			alogin();
			else if(o=='n'||o=='N')
			bye();
			else
			{
			cout<<"\n\n\n\t\t      INVLAID INPUT :( ,PLEASE TRY AGAIN\n";
			delay(1000);
			bye();
			}
		       }
		      else if(p==1)
		     {    User u;
			cout<<"\n\n\n\n\n\n\n\n\t\t\t         LET'S BEGIN!!\n";
			delay(1000);
			char o;
			fflush(stdin);
			u.get();
			ofstream fout("person.dat",ios::in|ios::app|ios::binary);
			fout.write((char *)&u , sizeof(User));
			u.output();
			fout.close();
			cout<<"\n\t\t\t    TO LOGIN PRESS 'y', TO EXIT PRESS 'n' \n";
			cin>>o;
			if(o=='y'||o=='Y')
			login();
			else
			bye();
		    }

		    else
		 {
		cout<<"\n\n\n\t\t      INVLAID INPUT :( ,PLEASE TRY AGAIN\n";
		delay(1000);
		bye();

		}
       }

		else if(x1=='N'||x1=='n')
		{
		cout<<"\n\n\n\n\n\n\n\n\t\t\t                BYE!!\n";
		delay(100);
		bye();
		}

     }

 else if(x=='N'||x=='n')
 {
 char u;
 cout<<"\t    TO LOGIN AS USER PRESS 'U' OR TO LOGIN AS ADMIN PRESS 'A'\n";
 cin>>u;
 if(u=='u'||u=='U')
 login();
 else if(u=='a'||u=='A')
 alogin();
 else
 {
 cout<<"\n\n\n\t\t      INVLAID INPUT :( ,PLEASE TRY AGAIN\n";
 delay(1000);
 bye();
}
}
else
 {
 cout<<"\n\n\n\t\t        INVLAID INPUT :( ,PLEASE TRY AGAIN\n";
 delay(2000);
 bye();
}

}


void welcome()
{
cout<<"\n\n\n\n\t\t\t      WELCOME TO MY CINEMAS\n\t\t\t      ";

 for(int i=0;i<=20;i++)
 cout<<"_";

cout<<"\n\t\t\t      ";

 for(int j=0;j<=20;j++)
 cout<<"_";

cout<<"\n\n\n\n\t\t\t       LET'S GET STARTED!!\n\n\n\n\n\n\n\n\n\n\n\n\nNOW LOADING";

 for(int w=1;w<=69;w++)
 {
 delay(80);
 cout<<".";
 }
 intermediate();
}

void main()
{
clrscr();
//intermediate();
welcome();
getch();
}
