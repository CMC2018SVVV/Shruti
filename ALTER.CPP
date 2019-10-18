//Imports
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<fstream.h>

//Methods
void home();
void fest4();
void fest_4();
void fest3();
void ex();
void stucon();
void constu();
void student();
void employee();
void empsign();
void admin();
void fest();
void tab();
void name();
void login();
void stusign();
void stucolor();
void empcolor();
void tabnav();
void festcolor();
void admincolor();
void adminselect();
void fest1();
void fest_1();
void fest2();
void fest_2();
void stutab();
void stuside();
void empside();
void stuper();
void empper();
void stuatt();
void empatt();
void stumarks();
void empstu();
void back();
void sturegist();
void empregist();
void logo();
void logout();
void logage();
void empmarks();
void empatt();
void logagee();
union REGS in,out;
struct mouse
{
	int x,y,button;
};
//Coordinate
mouse getcoordinates()
{
	in.x.ax=3;
	int86(51,&in,&out);
	mouse a;
	a.button=out.x.bx;
	a.x=out.x.cx;
	a.y=out.x.dx;
	return a;
}

void callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
}

void hidemouse()
{
	in.x.ax=2;
	int86(51,&in,&out);
}
struct stu
{
	char Stu_ID[12];
	char name[30];
	char fname[30];
	char mname[30];
	char dob[11];
	char gender[7];
	char branch[10];
	char sem[2];
	char email[30];
	char mobile[11];
	char em[11];
	char address[50];
	char city[10];
	char state[20];
	char pin[11];
	int maths;
	int physics;
	int c;
	int java;
	int cmc;
	int matt;
	int patt;
	int catt;
	int jatt;
	int cmcatt;
};

struct emp{
	char Emp_ID[12];
	char name[30];
	char dob[11];
	char year[5];
	char mobile[11];
	char gen[8];
	char mail[30];
	char add[50];
	char city[10];
	char state[20];
	char pin[7];
	char subject[10];
};

char uname[20];
char pswd[20];

char a8[2];
char a2[2];
char a3[2];
char a4[2];
char a5[2];
char a6[2];
char a7[2];

void tabnav()
{
	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       
            callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			stucolor();
			student();

		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			employee();
		    }
		    if(a1.x>593 && a1.y>445 && a1.x<629 && a1.y<480)
		    {
			fest();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		 }
	  }
}
void tab()
{

	setfillstyle(SOLID_FILL,DARKGRAY); //LOGO
	rectangle(0,5,60,50);
	floodfill(1,6,WHITE);

	setfillstyle(SOLID_FILL,BLUE);
	rectangle(5,15,10,40);
	floodfill(7,16,WHITE);
	rectangle(15,15,20,27);
	floodfill(16,16,WHITE);
	rectangle(25,15,30,40);
	floodfill(26,16,WHITE);
	rectangle(35,15,40,20);
	floodfill(36,18,WHITE);
	rectangle(45,15,55,20);
	floodfill(46,16,WHITE);
	rectangle(45,23,50,40);
	floodfill(46,26,WHITE);
	setfillstyle(SOLID_FILL,RED);
	rectangle(35,27,40,40);
	floodfill(36,28,WHITE);


	setfillstyle(SOLID_FILL,BLUE);    //COLLEGENAME
	line(60,5,140,5);
	line(60,5,60,50);
	line(60,50,140,50);
	line(140,50,160,25);
	line(140,5,160,25);
	floodfill(61,45,WHITE);
	settextstyle(1,0,1);
	outtextxy(70,10,"McLaren");
	settextstyle(2,0,4);
	outtextxy(70,30,"College of IT");

	setfillstyle(SOLID_FILL,BLUE);     //TABS
	settextstyle(2,0,5);

	line(239,0,239,65);
	line(239,65,319,50);
	line(319,0,319,50);
	floodfill(240,1,WHITE);

	line(319,0,319,65);
	line(319,65,399,50);
	line(399,0,399,50);
	floodfill(320,1,WHITE);

	line(399,0,399,65);
	line(399,65,479,50);
	line(479,0,479,50);
	floodfill(400,1,WHITE);

	line(479,0,479,65);
	line(479,65,559,50);
	line(559,0,559,50);
	floodfill(480,1,WHITE);

	line(559,0,559,65);
	line(559,65,639,50);
	line(639,0,639,50);

	floodfill(560,1,WHITE);

}

void stutab()
{
	rectangle(0,75,639,445);
	setfillstyle(1,CYAN);
	rectangle(0,75,120,445);
	floodfill(1,76,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	line(0,100,80,100);
	line(80,100,100,125);
	line(100,125,80,150);
	line(0,150,80,150);
	floodfill(50,101,WHITE);

	line(0,175,80,175);
	line(0,225,80,225);
	line(80,175,100,200);
	line(100,200,80,225);
	floodfill(50,176,WHITE);

	line(0,250,80,250);
	line(80,250,100,275);
	line(100,275,80,300);
	line(0,300,80,300);
	floodfill(50,251,WHITE);


	line(0,325,80,325);
	line(80,325,100,350);
	line(100,350,80,375);
	line(0,375,80,375);
	floodfill(50,351,WHITE);

	setfillstyle(1,WHITE);
	rectangle(120,75,639,445);
	floodfill(121,76,WHITE);

}

void ex()
{
	setfillstyle(SOLID_FILL,BLUE);                          //EXIT
	rectangle(10,445,46,480);
	floodfill(11,479,WHITE);
	rectangle(0,75,639,445);
	setfillstyle(SOLID_FILL,BLUE);
	setcolor(BLUE);
	line(10,445,46,445);
	setcolor(WHITE);
	line(10,445,28,422);
	line(46,445,28,422);
	floodfill(30,444,WHITE);
	settextstyle(2,1,6);
	outtextxy(18,435,"EXIT");

}
void name()
{
	setcolor(WHITE);
	outtextxy(333,20,"STUDENT");
	outtextxy(265,20,"HOME");
	outtextxy(411,20,"EMPLOYEE");
	outtextxy(501,20,"ADMIN");
	outtextxy(583,20,"FEST");
}
void login()
{
	setfillstyle(SOLID_FILL,CYAN);
	rectangle(0,75,639,445);
	floodfill(1,444,WHITE);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(160,110,500,395);
	floodfill(161,394,WHITE);
	settextstyle(2,0,7);
	outtextxy(295,130,"SIGN IN");
	settextstyle(2,0,5);
	outtextxy(180,185,"USERNAME");
	setfillstyle(SOLID_FILL,WHITE);
	rectangle(180,203,460,227);
	floodfill(181,221,WHITE);
	outtextxy(180,250,"PASSWORD");
	rectangle(180,267,460,291);
	floodfill(181,270,WHITE);
	setfillstyle(SOLID_FILL,RED);
	rectangle(180,320,460,344);
	floodfill(181,323,WHITE);
	outtextxy(295,325,"SIGN IN");

}

void stucolor()
{	setfillstyle(SOLID_FILL,CYAN);
	line(319,0,319,65);
	line(319,65,399,50);
	line(399,0,399,50);
	floodfill(397,20,WHITE);
}
void stuside()
{
	setcolor(BLACK);
	settextstyle(2,0,5);
	outtextxy(10,115,"Profile");
	outtextxy(10,190,"Contact");
	outtextxy(10,265,"Marks");
	outtextxy(10,340,"Attendance");
}
void student()
{
      cleardevice();
	login();
	tab();
	stucolor();
	name();
	ex();
  k:	gotoxy(25,14);
	gets(uname);
	gotoxy(25,18);
	gets(pswd);
	for(int i=0;i<12;i++)
	{
		gotoxy(24+i,18);
		cout<<"*";
	}
		mouse a1;
		a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>180 && a1.y>320 && a1.x<460 && a1.y<344)
		    {
		    stu s;
		    int c=0;
		    ifstream f;
			f.open("student6.dat",ios::in|ios::binary);

			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Stu_ID)==0 && strcmp(pswd,s.Stu_ID)==0)
			{
			c=1;
			cleardevice();
			stuper();
			break;
			}
			}
			if(c==0)
			{
			while(!kbhit())
			{
			 setcolor(RED);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(200);
			 setcolor(BLACK);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(100);
			}
			goto k;
			}
			f.close();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			cleardevice();
			exit(0);
		    }

		 }
	  }
}
void logout()
{
	setfillstyle(1,BLUE);
	line(549,435,629,435);
	line(549,435,549,465);
	line(549,465,589,478);
	line(589,478,629,465);
	line(629,435,629,465);
	floodfill(590,439,WHITE);
 	setcolor(BLUE);
 	line(549,445,629,445);
 	setcolor(WHITE);
}
void logage()
{
	cleardevice();
	back();
	tab();
	stucolor();
	name();
  	setfillstyle(1,WHITE);
  	rectangle(0,75,639,445);
  	floodfill(1,76,WHITE);
  	settextstyle(1,0,3);
  	setcolor(BLACK);
  	outtextxy (155,240,"LOGGED OUT SUCCESSFULLY!!!!");
	setcolor(WHITE);
	setfillstyle(1,BLUE);
	rectangle(10,445,46,480);
	floodfill(11,450,WHITE);
	setcolor(BLUE);
	line(10,445,46,445);
	setcolor(BLACK);
	setfillstyle(1,BLUE);
	line(10,445,28,422);
	line(46,445,28,422);
	floodfill(30,430,BLACK);
	setcolor(WHITE);
	line(10,445,28,422);
	line(46,445,28,422);
	setcolor(BLUE);
	line(593,445,629,445);
	setcolor(WHITE);
	settextstyle(2,1,6);
	outtextxy(18,434,"EXIT");


	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>593 && a1.y>445 && a1.x<629 && a1.y<480)
		    {
			cleardevice();
			student();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		    }
		    }

}
void logagee()
{
	cleardevice();
	back();
	tab();
	empcolor();
	name();
  	setfillstyle(1,WHITE);
  	rectangle(0,75,639,445);
 	floodfill(1,76,WHITE);
  	settextstyle(1,0,3);
 	setcolor(BLACK);
 	outtextxy (155,240,"LOGGED OUT SUCCESSFULLY!!!!");
	setcolor(WHITE);
	settextstyle(1,0,1);
	outtextxy(70,10,"McLaren");

	setfillstyle(1,BLUE);
	rectangle(10,445,46,480);
	floodfill(11,450,WHITE);
	setcolor(BLUE);
	line(10,445,46,445);
	setcolor(BLACK);
	setfillstyle(1,BLUE);
	line(10,445,28,422);
	line(46,445,28,422);
	floodfill(30,430,BLACK);
	setcolor(WHITE);
	line(10,445,28,422);
	line(46,445,28,422);
	setcolor(BLUE);
	line(593,445,629,445);
	setcolor(WHITE);
	settextstyle(2,1,6);
	outtextxy(18,434,"EXIT");


	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>593 && a1.y>445 && a1.x<629 && a1.y<480)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		    }
		    }
}
void prostu()
{
	setfillstyle(1,YELLOW);
	line(120,100,120,150);
	line(140,125,120,150);
	line(120,100,140,125);
	floodfill(139,125,WHITE);
}
void stuper()
{
	cleardevice();
	logout();
	prostu();
	tab();
	stucolor();
	name();
	stutab();
	ex();

      stu s;
			fstream f;
			f.open("student6.dat",ios::in|ios::binary);
			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Stu_ID)==0)
		       {
			f.read((char*)&s,sizeof(s));
			settextstyle(2,0,5);
			setcolor(DARKGRAY);
			outtextxy(320,150,s.name);
			outtextxy(320,180,s.Stu_ID);
			outtextxy(320,210,s.fname);
			outtextxy(320,240,s.mname);
			outtextxy(320,270,s.dob);
			outtextxy(320,300,s.gender);
			outtextxy(320,330,s.branch);
			outtextxy(320,360,s.sem);
			setcolor(WHITE);
			}
			}
			f.close();
	setcolor(YELLOW);
	line(120,100,120,150);
	line(80,100,100,125);
	line(80,150,100,125);
	setcolor(WHITE);
	setcolor(BLACK);
 	settextstyle(3,0,3);
 	outtextxy(150,80,"PROFILE");
 	setcolor(BLACK);
 	settextstyle(2,0,6);
 	outtextxy(150,145,"NAME:");
 	setcolor(DARKGRAY);
 	line(150,170,600,170);
 	setcolor(BLACK);
 	outtextxy(150,175,"STUDENT ID:");
 	setcolor(DARKGRAY);
 	line(150,200,600,200);
 	setcolor(BLACK);
 	outtextxy(150,205,"FATHER's NAME:");
 	setcolor(DARKGRAY);
 	line(150,230,600,230);
 	setcolor(BLACK);
 	outtextxy(150,235,"MOTHER's NAME:");
 	setcolor(DARKGRAY);
 	line(150,260,600,260);
 	setcolor(BLACK);
 	outtextxy(150,265,"D.O.B:");
 	setcolor(DARKGRAY);
 	line(150,290,600,290);
 	setcolor(BLACK);
	outtextxy(150,295,"GENDER:");
 	setcolor(DARKGRAY);
 	line(150,320,600,320);
 	setcolor(BLACK);
 	outtextxy(150,325,"BRANCH:");
 	setcolor(DARKGRAY);
 	line(150,350,600,350);
 	setcolor(BLACK);
 	outtextxy(150,355,"SEMESTER:");
 	setcolor(DARKGRAY);
 	line(150,380,600,380);
 	setcolor(WHITE);
	setfillstyle(1,YELLOW);
	line(0,100,120,100);
	line(0,150,120,150);
	floodfill(100,101,WHITE);
	setcolor(BLUE);
	line(549,445,629,445);
	setcolor(WHITE);
	settextstyle(2,0,5);
	outtextxy(570,445,"LOGOUT");
	stuside();
	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>0 && a1.y>100 && a1.x<80 && a1.y<150)
		    {
			cleardevice();
			stuper();
		    }
		    if(a1.x>0 && a1.y>175 && a1.x<80 && a1.y<225)
		    {
			cleardevice();
			stucon();
		    }
		    if(a1.x>0 && a1.y>250 && a1.x<80 && a1.y<300)
		    {
			cleardevice();
			stumarks();
		    }
		    if(a1.x>0 && a1.y>325 && a1.x<80 && a1.y<375)
		    {
			cleardevice();
			stuatt();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<455)
		    {
			cleardevice();
			logage();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		 }
	  }
}
void constu()
{
	setfillstyle(1,YELLOW);
	line(120,175,120,225);
	line(140,175,120,200);
	line(120,200,140,225);
	floodfill(139,200,WHITE);
}
void stucon()
{
	cleardevice();
	setcolor(YELLOW);
	line(80,175,100,200);
	line(100,200,80,225);
	setcolor(WHITE);
	logout();
	rectangle(0,75,639,445);
 	setfillstyle(1,WHITE);
 	rectangle(120,75,639,445);
 	floodfill(121,76,WHITE);
 	tab();
 	stucolor();
 	name();
	stutab();
 	stuside();

	setfillstyle(1,YELLOW);
	line(120,175,120,225);
	line(120,175,140,200);
	line(140,200,120,225);
	floodfill(130,199,WHITE);
 	int i;
 	for(i=0;i<40;i++)
 {
 	setcolor(YELLOW);
 	line(80+i,175,80+i,225);
 	setcolor(WHITE);
 }
 	line(80,175,120,175);
 	line(80,225,120,225);


	settextstyle(2,0,5);
	setcolor(BLACK);
	outtextxy(10,190,"Contact");
	setcolor(WHITE);
	setcolor(BLACK);
 	settextstyle(3,0,3);
 	outtextxy(150,80,"CONTACT INFO");
 	setcolor(BLACK);
 	settextstyle(2,0,6);
 	outtextxy(150,145,"E-mail:");
 	setcolor(DARKGRAY);
 	line(150,170,600,170);
 	setcolor(BLACK);
 	outtextxy(150,175,"MOBILE NUMBER:");
 	setcolor(DARKGRAY);
 	line(150,200,600,200);
 	setcolor(BLACK);
 	outtextxy(150,205,"EMERGENCY NUMBER:");
 	setcolor(DARKGRAY);
 line(150,230,600,230);
 setcolor(BLACK);
 outtextxy(150,235,"ADDRESS:");
 setcolor(DARKGRAY);
 line(150,290,600,290);
 setcolor(BLACK);
 outtextxy(150,295,"STATE:");
 setcolor(DARKGRAY);
 line(150,320,600,320);
 setcolor(BLACK);
 outtextxy(150,325,"CITY:");
 setcolor(DARKGRAY);
 line(150,350,600,350);
 setcolor(BLACK);
 outtextxy(150,355,"PINCODE:");
 setcolor(DARKGRAY);
 line(150,380,600,380);
 setcolor(BLACK);
 setcolor(BLUE);
line(549,445,629,445);
setcolor(WHITE);
settextstyle(2,0,5);
outtextxy(570,445,"LOGOUT");
ex();
constu();
stu s;
			fstream f;
			f.open("student6.dat",ios::in|ios::binary);
			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Stu_ID)==0)
			{
			f.read((char*)&s,sizeof(s));
			settextstyle(2,0,5);
			setcolor(DARKGRAY);
			outtextxy(350,150,s.email);
			outtextxy(350,180,s.mobile);
			outtextxy(350,210,s.em);
			outtextxy(350,240,s.address);
			outtextxy(350,300,s.city);
			outtextxy(350,330,s.state);
			outtextxy(350,360,s.pin);
			setcolor(WHITE);
			}
			}
			f.close();

mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>0 && a1.y>100 && a1.x<80 && a1.y<150)
		    {
			cleardevice();
			stuper();
		    }
		    if(a1.x>0 && a1.y>175 && a1.x<80 && a1.y<225)
		    {
			cleardevice();
			stucon();
		    }
		    if(a1.x>0 && a1.y>250 && a1.x<80 && a1.y<300)
		    {
			cleardevice();
			stumarks();
		    }
		    if(a1.x>0 && a1.y>325 && a1.x<80 && a1.y<375)
		    {
			cleardevice();
			stuatt();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<455)
		    {
			cleardevice();
			logage();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<478)
		    {
		    cleardevice();
		    logage();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		 }
	  }
}
void stumarks()
{
	cleardevice();
	logout();
	setfillstyle(1,YELLOW);
	line(120,250,140,275);
	line(120,250,120,300);
	line(120,300,140,275);
	floodfill(130,275,WHITE);

	tab();
	stucolor();
	stutab();
	stuside();
	int i;
	for(i=0;i<40;i++)
	{setcolor(YELLOW);
	line(80+i,250,80+i,300);
	setcolor(WHITE);
	}
	line(80,250,120,250);
	line(80,300,120,300);

	rectangle(0,75,639,445);
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,WHITE);
	rectangle(120,75,639,445);
	floodfill(121,76,WHITE);

 settextstyle(1,0,1);
 setcolor(BLACK);
 outtextxy(140,90,"MARKS");
 settextstyle(2,0,5);
 outtextxy(141,130,"STUDENT NAME :");
 outtextxy(142,150,"STUDENT ID   :");
 outtextxy(140,170,"BRANCH(SEC)  :");
 outtextxy(140,190,"SEM          :");
 line(140,220,600,220);
 line(140,220,140,425);
 line(600,220,600,400);
 line(140,400,600,400);
 line(180,220,180,380);
 line(140,255,600,255);
 line(310,220,310,380);
 line(455,220,455,380);
 line(490,425,600,425);
 line(600,425,600,400);
 line(140,425,600,425);
 line(140,380,600,380);

	  settextstyle(2,0,5);
	  outtextxy(150,225,"S.");
	  outtextxy(150,240,"NO.");
	  outtextxy(210,230,"SUBJECTS");
	  outtextxy(340,230,"TOTAL MARKS");
	  outtextxy(480,230,"MARKS OBTAIN");
	  outtextxy(380,383,"TOTAL");
	  outtextxy(150,260,"1.");
	  outtextxy(150,285,"2.");
	  outtextxy(150,310,"3.");
	  outtextxy(150,335,"4.");
	  outtextxy(150,360,"5.");
       outtextxy(185,260,"MATHEMATICS");
 outtextxy(185,285,"PHYSICS");
	outtextxy(185,310,"C++");
	  outtextxy(185,335,"JAVA CORE");
	  outtextxy(185,360,"CLOUD COMPUTING");
	  outtextxy(160,405,"RESULT :");
	  outtextxy(350,405,"PERCENTAGE :");
	     name();
		setcolor(YELLOW);
		line(120,250,120,300);
		setcolor(WHITE);
		ex();
		setcolor(BLUE);
line(549,445,629,445);
setcolor(WHITE);
settextstyle(2,0,5);
outtextxy(570,445,"LOGOUT");
stu s;
	fstream f;
			f.open("student6.dat",ios::in|ios::binary);
			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Stu_ID)==0)
			{f.read((char*)&s,sizeof(s));
			settextstyle(2,0,5);
			setcolor(DARKGRAY);
			outtextxy(350,130,s.name);
			outtextxy(350,150,s.Stu_ID);
			outtextxy(350,170,"CSE");
			outtextxy(350,190,"2");
			int i;
			for(i=0;i<125;i=i+25)
			{
			outtextxy(360,260+i,"100");
			}
			outtextxy(540,260,"89");
			outtextxy(540,285,"93");
			outtextxy(540,310,"83");
			outtextxy(540,335,"96");
			outtextxy(540,360,"87");
			outtextxy(538,382,"448");
			outtextxy(540,405,"89.6");
			i=0;
			while(i<5)
			{setcolor(GREEN);
			outtextxy(235,405,"PASS");
			delay(200);
			setcolor(WHITE);
			outtextxy(235,405,"PASS");
			delay(100);
			i++;
			}
			setcolor(GREEN);
			outtextxy(235,405,"PASS");
			setcolor(WHITE);
			}
			}
			f.close();

mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>0 && a1.y>100 && a1.x<80 && a1.y<150)
		    {
			cleardevice();
			stuper();
		    }
		    if(a1.x>0 && a1.y>175 && a1.x<80 && a1.y<225)
		    {
			cleardevice();
			stucon();
		    }
		    if(a1.x>0 && a1.y>250 && a1.x<80 && a1.y<300)
		    {
			cleardevice();
			stumarks();
		    }
		    if(a1.x>0 && a1.y>325 && a1.x<80 && a1.y<375)
		    {
			cleardevice();
			stuatt();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<455)
		    {
			cleardevice();
			logage();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<478)
		    {
		    cleardevice();
		    logage();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		 }
	  }

}

void stuatt()
{
	cleardevice();
	logout();
	setfillstyle(1,YELLOW);
	line(120,325,140,350);
	line(120,325,120,375);
	line(120,375,140,350);
	floodfill(130,350,WHITE);

	stutab();
	tab();
	stucolor();
	int i;
	for(i=0;i<40;i++)
	{setcolor(YELLOW);
	line(80+i,325,80+i,375);
	setcolor(WHITE);
	}
	line(80,325,120,325);
	line(80,375,120,375);
stuside();
rectangle(0,75,639,445);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(120,75,639,445);
floodfill(121,76,WHITE);
setcolor(BLACK);
settextstyle(1,0,1);
outtextxy(140,90,"ATTENDENCE");
settextstyle(2,0,5);
outtextxy(140,130,"STUDENT ID:");
outtextxy(380,130,"STUDENT NAME:");
line(140,158,600,158);
line(140,160,600,160);
line(140,210,600,210);
line(140,260,600,260);
line(140,310,600,310);
line(140,360,600,360);
line(140,410,600,410);
line(140,412,600,412);
settextstyle(2,0,6);
outtextxy(140,171,"MATHEMATICS");
outtextxy(140,220,"PHYSICS");
outtextxy(140,270,"C++");
outtextxy(140,320,"JAVA CORE");
outtextxy(140,370,"CLOUD COMPUTING");
settextstyle(2,0,5);
outtextxy(380,170,"TOTAL   -");
outtextxy(380,185,"PRESENT -");
outtextxy(380,220,"TOTAL   -");
outtextxy(380,235,"PRESENT -");
outtextxy(380,270,"TOTAL   -");
outtextxy(380,285,"PRESENT -");
outtextxy(380,320,"TOTAL   -");
outtextxy(380,335,"PRESENT -");
outtextxy(380,370,"TOTAL   -");
outtextxy(380,385,"PRESENT -");
name();
     settextstyle(2,0,4);
     outtextxy(280,420,"***");
     outtextxy(301,420,"75% ATTENDANCE IS MUST");
     outtextxy(435,420,"***");
	setcolor(YELLOW);
	line(120,325,120,375);
	setcolor(WHITE);
      ex();
      setcolor(BLUE);
      line(549,445,629,445);
      setcolor(WHITE);
      settextstyle(2,0,5);
      outtextxy(570,445,"LOGOUT");
stu s;
	fstream f;
			f.open("student6.dat",ios::in|ios::binary);
			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Stu_ID)==0)
			{settextstyle(2,0,5);
			setcolor(DARKGRAY);
			outtextxy(500,130,s.name);
			outtextxy(250,130,s.Stu_ID);
			int i;
			for(i=0;i<250;i=i+50)
			{
			outtextxy(460,170+i,"40");
			}
			outtextxy(460,185,"35");
			outtextxy(460,235,"30");
			outtextxy(460,285,"38");
			outtextxy(460,335,"32");
			outtextxy(460,385,"29");
			setcolor(WHITE);
			}
			}
			f.close();

mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>0 && a1.y>100 && a1.x<80 && a1.y<150)
		    {
			cleardevice();
			stuper();
		    }
		    if(a1.x>0 && a1.y>175 && a1.x<80 && a1.y<225)
		    {
			cleardevice();
			stucon();
		    }
		    if(a1.x>0 && a1.y>250 && a1.x<80 && a1.y<300)
		    {
			cleardevice();
			stumarks();
		    }
		    if(a1.x>0 && a1.y>325 && a1.x<80 && a1.y<375)
		    {
			cleardevice();
			stuatt();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<455)
		    {
			cleardevice();
			logage();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<478)
		    {
		    cleardevice();
		    logage();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		 }
	  }
}
void empcolor()
{
	setfillstyle(SOLID_FILL,CYAN);
	line(399,0,399,65);
	line(399,65,479,50);
	line(479,0,479,50);
	floodfill(400,1,WHITE);
}
void empside()
{
	setcolor(BLACK);
	settextstyle(2,0,5);
	outtextxy(10,115,"Profile");
	outtextxy(10,190,"Marks");
	outtextxy(10,265,"Attendance");
}
void emptab()
{
	setfillstyle(1,YELLOW);
	line(0,100,80,100);
	line(80,100,100,125);
	line(100,125,80,150);
	line(0,150,80,150);
	floodfill(50,101,WHITE);

	setfillstyle(1,YELLOW);
	line(0,175,80,175);
	line(0,225,80,225);
	line(80,175,100,200);
	line(100,200,80,225);
	floodfill(50,176,WHITE);

	setfillstyle(1,YELLOW);
	line(0,250,80,250);
	line(80,250,100,275);
	line(100,275,80,300);
	line(0,300,80,300);
	floodfill(50,251,WHITE);
}
void employee()
{
	cleardevice();
	login();
	tab();
	empcolor();
	name();
	ex();

      settextstyle(1,0,1);
      outtextxy(70,10,"McLaren");
	gotoxy(25,14);
k:		gets(uname);
		gotoxy(25,18);
		gets(pswd);
	for(int i=0;i<12;i++)
		{
		gotoxy(24+i,18);
		cout<<"*";
		}

		mouse a1;
	 a1.button=0;
	 while(!kbhit())
	 { 
            callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			cleardevice();
			student();
		    }

		    if(a1.x>180 && a1.y>320 && a1.x<460 && a1.y<344)
		    {
			cleardevice();
			emp e;
			fstream f;
			int c=0;
			f.open("employee.dat",ios::in|ios::binary);
			while(!f.eof())
			{
				f.read((char*)&e,sizeof(e));
if(strcmp(uname,e.Emp_ID)==0 &&    strcmp(pswd,e.Emp_ID)==0)
			{
			c=1;
			cleardevice();
			empper();
			break;
			}
			}
			if(c==0)
			{
			while(!kbhit())
			{
			 setcolor(RED);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(200);
			 setcolor(BLACK);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(100);
			}
			goto k;
			}
			}
      }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			cleardevice();
			exit(0);
		    }
		 }
}
void empper()
{
	 cleardevice();
	 logout();
	 prostu();
	 tab();
	 empcolor();
	 setcolor(WHITE);
	 outtextxy(333,20,"STUDENT");
	 outtextxy(265,20,"HOME");
	 outtextxy(411,20,"EMPLOYEE");
	 outtextxy(501,20,"ADMIN");
	 outtextxy(583,20,"FEST");

	 line(0,100,120,100);
	 line(80,100,100,125);
	 line(100,125,120,150);
	 line(0,150,120,150);
      emptab();

      rectangle(0,75,639,445);
       setfillstyle(1,WHITE);
 rectangle(120,75,639,445);
 floodfill(521,76,WHITE);
 setcolor(BLACK);
 settextstyle(3,0,4);
 outtextxy(150,85,"PROFILE");
 setcolor(BLACK);
 settextstyle(2,0,6);
 outtextxy(150,145,"NAME:");
 setcolor(DARKGRAY);
 line(150,170,600,170);
 setcolor(BLACK);
 outtextxy(150,175,"EMPLOYEE ID:");
 setcolor(DARKGRAY);
 line(150,200,600,200);
 setcolor(BLACK);
 outtextxy(150,205,"D.O.B:");
 setcolor(DARKGRAY);
 line(150,230,600,230);
 setcolor(BLACK);
 outtextxy(150,235,"YEAR OF JOINING:");
 setcolor(DARKGRAY);
 line(150,260,600,260);
 setcolor(BLACK);
 outtextxy(150,265,"MOBILE:");
 setcolor(DARKGRAY);
 line(150,290,600,290);
 setcolor(BLACK);
 outtextxy(150,295,"GENDER:");
 setcolor(DARKGRAY);
 line(150,320,600,320);
 setcolor(BLACK);
 outtextxy(150,325,"E-MAIL:");
 setcolor(DARKGRAY);
 line(150,350,600,350);
 setcolor(BLACK);
 outtextxy(150,355,"ADDRESS:");
 setcolor(DARKGRAY);
 line(150,410,600,410);

 setfillstyle(1,CYAN);
 	rectangle(1,76,119,444);
 	floodfill(1,78,WHITE);

 int i;
	for(i=0;i<120;i++)
	{
		setcolor(YELLOW);
	 	line(0+i,101,0+i,149);
	 	line(120,101,120,149);
	 	setcolor(WHITE);
	 }
	 for(i=0;i<80;i++)
	 {
	 	setcolor(YELLOW);
	 	line(0+i,176,0+i,224);
	 	line(0+i,251,0+i,299);
	 	setcolor(WHITE);
	 }
setfillstyle(1,YELLOW);
setcolor(YELLOW);
line(80,175,80,225);
setcolor(WHITE);
line(80,175,100,200);
line(80,225,100,200);
floodfill(90,200,WHITE);
setfillstyle(1,YELLOW);
setcolor(YELLOW);
line(80,250,80,300);
setcolor(WHITE);
line(100,275,80,300);
line(100,275,80,250);
floodfill(90,275,WHITE);
settextstyle(2,0,5);
outtextxy(570,445,"LOGOUT");
empside();
emp s;
			fstream f;
			f.open("employee.dat",ios::in|ios::binary);
			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Emp_ID)==0)
			{
			setcolor(BLACK);
			settextstyle(2,0,5);
			outtextxy(320,150,s.name);
		     outtextxy(320,180,s.Emp_ID);
			outtextxy(320,210,s.dob);
			outtextxy(320,240,s.year);
			outtextxy(320,270,s.mobile);
			outtextxy(320,300,s.gen);
			outtextxy(320,330,s.mail);
			outtextxy(320,354,s.add);
			outtextxy(320,374,s.city);
			outtextxy(350,374,s.state);
			outtextxy(320,394,s.pin);
			setcolor(WHITE);
			}
			}
 ex();
 setcolor(BLUE);
line(549,445,629,445);
setcolor(WHITE);
		mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>0 && a1.y>140 && a1.x<80 && a1.y<190)
		    {
			cleardevice();
			empper();
		    }
		    if(a1.x>0 && a1.y>250 && a1.x<80 && a1.y<300)
		    {
			cleardevice();
			empatt();
		    }
		    if(a1.x>0 && a1.y>175 && a1.x<80 && a1.y<225)
		    {
			cleardevice();
			empstu();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<478)
		    {
		    cleardevice();
		    logagee();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		 }
	  }
}

void empstu()
{
	cleardevice();
	tab();
	empcolor();
	name();
	emptab();
	logout();
	setfillstyle(1,CYAN);
	rectangle(0,75,120,445);
	floodfill(1,80,WHITE);
setfillstyle(1,WHITE);
rectangle(120,75,639,445);
floodfill(121,76,WHITE);
settextstyle(2,0,6);
setcolor(BLACK);
outtextxy(130,80,"NAME      :");
outtextxy(130,105,"SUBJECT  :");
outtextxy(130,130,"CLASSES  :");
outtextxy(255,80,"KUKOO");
outtextxy(255,105,"MATHEMATICS");
outtextxy(255,130,"CSD      CSE");
rectangle(130,155,620,420);
outtextxy(140,163,"S.NO.");
outtextxy(215,163,"STUDENT ID");
outtextxy(365,163,"STUDENT NAME");
outtextxy(535,163,"MARKS");
outtextxy(145,190,"1.");
outtextxy(145,223,"2.");
outtextxy(145,256,"3.");
outtextxy(145,286,"4.");
outtextxy(145,316,"5.");
outtextxy(145,346,"6.");
outtextxy(145,378,"7.");

outtextxy(210,190,"BTCMCI02938");
outtextxy(210,223,"BTCMCI02940");
outtextxy(210,256,"BTCMCI02954");
outtextxy(210,286,"BTCMCI02960");
outtextxy(210,316,"BTCMCI02965");
outtextxy(210,346,"BTCMCI02971");
outtextxy(210,378,"BTCMCI02979");

outtextxy(360,190,"Advait");
outtextxy(360,223,"Chirayu");
outtextxy(360,256,"Kashish");
outtextxy(360,286,"Mohit");
outtextxy(360,316,"Prayas");
outtextxy(360,346,"Robin");
outtextxy(360,378,"Shruti");

	line(180,155,180,420);
	line(330,155,330,420);
	line(500,155,500,420);
	line(130,185,620,185);
setcolor(WHITE);
empside();
setfillstyle(1,YELLOW);
line(120,175,120,225);
line(120,175,140,200);
line(120,225,140,200);
floodfill(125,199,BLACK);
floodfill(138,199,BLACK);
setcolor(YELLOW);
int i;
for(i=0;i<40;i++)
{
setcolor(YELLOW);
line(80+i,175,80+i,225);
setcolor(WHITE);
}
line(80,175,120,175);
line(80,225,120,225);

setcolor(YELLOW);
line(120,175,120,225);
line(120,175,140,200);
line(120,225,140,200);
line(130,187,130,213);
setcolor(WHITE);

setfillstyle(1,BLUE);
line(549,435,629,435);
line(549,435,549,465);
line(549,465,589,478);
line(589,478,629,465);
line(629,435,629,465);
floodfill(600,439,WHITE);
settextstyle(2,0,5);
outtextxy(570,445,"LOGOUT");
ex();
gotoxy(70,13);
gets(a8);
gotoxy(70,15);
gets(a2);
gotoxy(70,17);
gets(a3);
gotoxy(70,19);
gets(a4);
gotoxy(70,21);
gets(a5);
gotoxy(70,23);
gets(a6);
gotoxy(70,25);
gets(a7);
settextstyle(2,0,5);
int i1=0;
			while(i1<5)
			{setcolor(GREEN);
			outtextxy(275,425,"UPDATED SUCCESSFULLY!!!!");
			delay(200);
			setcolor(WHITE);
			outtextxy(275,425,"UPDATED SUCCESSFULLY!!!!");
			delay(100);
			i1++;
			}

			setcolor(GREEN);
			outtextxy(275,425,"UPDATED SUCCESSFULLY!!!!");
			setcolor(WHITE);

   setcolor(BLUE);
   line(549,445,629,445);
   setcolor(WHITE);
		mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>0 && a1.y>100 && a1.x<80 && a1.y<150)
		    {
			cleardevice();
			empper();
		    }
		    if(a1.x>0 && a1.y>250 && a1.x<80 && a1.y<300)
		    {
			cleardevice();
			empatt();
		    }
		    if(a1.x>0 && a1.y>175 && a1.x<80 && a1.y<225)
		    {
			cleardevice();
			empstu();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<478)
		    {
		    cleardevice();
		    logagee();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		 }
	  }
}
void empatt()
{
	cleardevice();
	tab();
	empcolor();
	name();
	emptab();
	logout();
	ex();
	setcolor(BLACK);
	settextstyle(2,0,5);
	outtextxy(10,115,"Profile");
	outtextxy(10,190,"Marks");
	outtextxy(10,265,"Attendance");
	setcolor(WHITE);

     settextstyle(1,0,1);
     outtextxy(70,10,"McLaren");

	setfillstyle(1,CYAN);
	rectangle(0,75,120,445);
	floodfill(1,76,WHITE);
	setfillstyle(1,WHITE);
	rectangle(120,75,639,445);
	floodfill(121,76,WHITE);
	settextstyle(2,0,6);
	setcolor(BLACK);
	outtextxy(130,80,"EMPLOYEE ID :");
	outtextxy(130,105,"SUBJECT    :");
	outtextxy(130,130,"CLASSES    :");
     outtextxy(255,80,"KUKOO");
     outtextxy(255,105,"MATHEMATICS");
     outtextxy(255,130,"CSD      CSE");
	rectangle(130,155,620,420);
	line(180,155,180,420);
	line(330,155,330,420);
	line(500,155,500,420);
	line(130,185,620,185);
	outtextxy(138,160,"S.NO.");
	outtextxy(205,160,"STUDENT ID");
	outtextxy(355,160,"STUDENT NAME");
	outtextxy(513,160,"ATTENDANCE");
	outtextxy(145,190,"1.");
	outtextxy(145,223,"2.");
	outtextxy(145,256,"3.");
	outtextxy(145,286,"4.");
	outtextxy(145,316,"5.");
	outtextxy(145,346,"6.");
	outtextxy(145,378,"7.");

outtextxy(210,190,"BTCMCI02938");
outtextxy(210,223,"BTCMCI02940");
outtextxy(210,256,"BTCMCI02954");
outtextxy(210,286,"BTCMCI02960");
outtextxy(210,316,"BTCMCI02965");
outtextxy(210,346,"BTCMCI02971");
outtextxy(210,378,"BTCMCI02979");

outtextxy(360,190,"Advait");
outtextxy(360,223,"Chirayu");
outtextxy(360,256,"Kashish");
outtextxy(360,286,"Mohit");
outtextxy(360,316,"Prayas");
outtextxy(360,346,"Robin");
outtextxy(360,378,"Shruti");
	setcolor(WHITE);

setcolor(YELLOW);
int i;
for(i=10;i<40;i++)
{
setcolor(YELLOW);
line(80+i,250,80+i,300);
line(70+i,250,70+i,260);
line(70+i,290,70+i,300);
setcolor(WHITE);
}
line(80,250,120,250);
line(80,300,120,300);
setfillstyle(1,YELLOW);
setcolor(BLACK);
line(120,250,140,275);
line(120,250,120,300);
line(120,300,140,275);
setcolor(WHITE);
floodfill(125,274,BLACK);
floodfill(135,274,BLACK);
setcolor(YELLOW);
line(120,250,140,275);
line(120,250,120,300);
line(120,300,140,275);
line(130,262,130,287);
setcolor(WHITE);
settextstyle(2,0,5);
outtextxy(570,445,"LOGOUT");
setcolor(BLUE);
line(10,445,45,445);
line(549,445,629,445);
setcolor(WHITE);
gotoxy(70,13);
gets(a8);
gotoxy(70,15);
gets(a2);
gotoxy(70,17);
gets(a3);
gotoxy(70,19);
gets(a4);
gotoxy(70,21);
gets(a5);
gotoxy(70,23);
gets(a6);
gotoxy(70,25);
gets(a7);

settextstyle(2,0,5);
int i1=0;
			while(i1<5)
			{setcolor(GREEN);
			outtextxy(275,425,"UPDATED SUCCESSFULLY!!!!");
			delay(200);
			setcolor(WHITE);
			outtextxy(275,425,"UPDATED SUCCESSFULLY!!!!");
			delay(100);
			i1++;
			}

			setcolor(GREEN);
			outtextxy(275,425,"UPDATED SUCCESSFULLY!!!!");
			setcolor(WHITE);

	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>0 && a1.y>100 && a1.x<80 && a1.y<150)
		    {
			cleardevice();
			empper();
		    }
		    if(a1.x>0 && a1.y>250 && a1.x<80 && a1.y<300)
		    {
			cleardevice();
			empatt();
		    }
		    if(a1.x>0 && a1.y>175 && a1.x<80 && a1.y<225)
		    {
			cleardevice();
			empstu();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>549 && a1.y>435 && a1.x<629 && a1.y<478)
		    {
		    cleardevice();
		    logagee();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }
		 }
	  }
}
void admincolor()
{
	setfillstyle(SOLID_FILL,CYAN);
	line(479,65,559,50);
	line(559,0,559,65);
	floodfill(480,49,WHITE);
}
void logo()
{
setfillstyle(SOLID_FILL,DARKGRAY);  //LOGO
rectangle(270,105,390,165);
floodfill(300,150,WHITE);
setfillstyle(SOLID_FILL,BLUE);
rectangle(280,110,290,160);
floodfill(285,115,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(300,110,310,135);
floodfill(305,120,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(320,110,330,160);
floodfill(325,120,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(340,110,350,120);
floodfill(345,115,WHITE);

setfillstyle(SOLID_FILL,RED);
rectangle(340,130,350,160);
floodfill(345,140,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(360,110,380,120);
floodfill(365,115,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(360,130,370,160);
floodfill(365,140,WHITE);
}
void admin()
{
	cleardevice();
	tab();
	admincolor();
	name();
setfillstyle(SOLID_FILL,DARKGRAY);
	rectangle(0,75,639,445);
floodfill(1,444,WHITE);
ex();
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(160,100,500,425);
floodfill(161,101,WHITE);

logo();
settextstyle(2,0,6);
setcolor(BLACK);
outtextxy(170,195,"Username");
rectangle(170,215,490,245);
outtextxy(170,260,"Password");
rectangle(170,280,490,310);
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
rectangle(180,320,490,360);
floodfill(380,330,WHITE);
setcolor(BLACK);
outtextxy(300,330,"LOGIN");
k:
		gotoxy(23,15);
		char user[20];
		gets(user);

		char pass[20];
		gotoxy(23,19);
		gets(pass);
		for(int i=0;i<8;i++)
		{
		gotoxy(23+i,19);
		cout<<"*";
		}
		mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			cleardevice();
			student();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>170 && a1.y>320 && a1.x<490 && a1.y<350)
		    {
if(strcmp(user,"itinshuk")==0 &&          	 strcmp(pass,"itinshuk")==0)
			{
				cleardevice();
				adminselect();
			}
			else
			 {
				setcolor(RED);
				outtextxy(250,380,"INCORRECT PASSWORD.");
				goto k;
			 }

		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }

		 }
	  }
}
void adminselect()
{

	   cleardevice();
	   setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);
         rectangle(0,75,639,445);
    floodfill(1,76,WHITE);
         ex();
         logo();
         line(319,205,319,445);
    setfillstyle(SOLID_FILL,BLACK);
	    line(70,225,250,225);
	    line(70,280,250,280);
	    line(70,225,35,250);
	    line(70,280,35,250);
	    line(250,225,285,250);
	    line(250,280,285,250);
     floodfill(71,226,WHITE);

	    line(70,330,250,330);
	    line(70,385,250,385);
	    line(70,330,35,360);
	    line(70,385,35,360);
	    line(250,330,285,360);
	    line(250,385,285,360);
     floodfill(71,331,WHITE);
	    line(380,225,560,225);
	    line(380,280,560,280);
	    line(380,225,345,250);
	    line(380,280,345,250);
	    line(560,225,595,250);
	    line(560,280,595,250);
     floodfill(381,226,WHITE);
	    line(380,330,560,330);
	    line(380,385,560,385);
	    line(380,330,345,360);
	    line(380,385,345,360);
	    line(560,330,595,360);
	    line(560,385,595,360);
floodfill(381,331,WHITE);
settextstyle(1,0,1);
setcolor(WHITE);
tab();
outtextxy(115,245,"ADD STUDENT");
outtextxy(105,350,"UPDATE STUDENT");
outtextxy(425,245,"ADD EMPLOYEE");
outtextxy(415,350,"UPDATE EMPLOYEE");
admincolor();


	settextstyle(2,0,5);
	outtextxy(333,20,"STUDENT");
	outtextxy(265,20,"HOME");
	outtextxy(411,20,"EMPLOYEE");
	outtextxy(501,20,"ADMIN");
	outtextxy(583,20,"FEST");
     settextstyle(8,0,2);
     setcolor(BLACK);
     outtextxy(210,175,"CHOOSE AN OPTION");

	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		  // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			cleardevice();
			student();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>70 && a1.y>225 && a1.x<250 && a1.y<280)
		    {
			cleardevice();
			stusign();
		    }
		    if(a1.x>380 && a1.y>225 && a1.x<560 && a1.y<280)
		    {
			cleardevice();
			empsign();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }
		 }
	  }
}
void back()
{
setfillstyle(1,BLUE);
rectangle(593,445,629,480);
floodfill(594,446,WHITE);
setfillstyle(1,BLUE);
line(593,445,611,422);
line(611,422,629,445);
floodfill(611,423,WHITE);
setcolor(BLUE);
line(593,445,629,445);
setcolor(WHITE);
settextstyle(2,1,6);
outtextxy(601,435,"BACK");
}
void sturegist()
{
	cleardevice();
	tab();
	admincolor();
	name();
	rectangle(0,75,639,445);
	settextstyle(2,0,7);
	outtextxy(85,195,"STUDENT HAS BEEN REGISTERED SUCCESSFULLY!!!!");
	back();
}

void stusign()
{
	name();
	cleardevice();


	setfillstyle(SOLID_FILL,CYAN);
	rectangle(0,75,639,445);
	floodfill(638,444,WHITE);
	settextstyle(7,0,1);
	setcolor(BLACK);
	outtextxy(210,75,"REGISTERATION FORM");
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(40,100,600,425);
	floodfill(41,419,WHITE);
	line(330,110,330,380);
	setfillstyle(SOLID_FILL,GREEN);
	rectangle(100,398,550,418);
	floodfill(101,407,WHITE);
	settextstyle(2,0,5);
	outtextxy(300,400,"REGISTER");
	outtextxy(60,110,"STUDENT ID");
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	rectangle(60,125,315,150);
	floodfill(61,126,WHITE);
	outtextxy(60,155,"STUDENT NAME");
	rectangle(60,175,315,200);
	floodfill(61,181,WHITE);
	outtextxy(60,205,"FATHER'S NAME");
	rectangle(60,220,315,245);
	floodfill(61,226,WHITE);
	outtextxy(60,255,"MOTHER'S NAME");
	rectangle(60,270,315,295);
	floodfill(61,271,WHITE);
	outtextxy(60,300,"ADDRESS");
	rectangle(60,315,315,340);
	floodfill(61,321,WHITE);
	outtextxy(60,345,"CITY");
	rectangle(60,360,140,385);
	floodfill(61,361,WHITE);
	outtextxy(150,345,"STATE");
	rectangle(150,360,230,385);
	floodfill(151,361,WHITE);
	outtextxy(240,345,"PINCODE");
	rectangle(240,360,315,385);
	floodfill(241,361,WHITE);
	outtextxy(350,110,"SEMESTER");
	rectangle(350,125,585,150);
	floodfill(351,136,WHITE);
	outtextxy(350,155,"E-MAIL");
	rectangle(350,175,585,200);
	floodfill(351,181,WHITE);
	outtextxy(350,205,"MOBILE");
	rectangle(350,220,585,245);
	floodfill(351,226,WHITE);
	outtextxy(350,255,"EMERGENCY MOBILE");
	rectangle(350,270,585,295);
	floodfill(351,271,WHITE);
	outtextxy(350,295,"DATE OF BIRTH : (DD/MM/YY)");
	rectangle(350,315,585,340);
	floodfill(471,316,WHITE);
	outtextxy(350,345,"BRANCH(SEC)");
	rectangle(350,360,450,385);
	floodfill(351,361,WHITE);
	outtextxy(460,345,"GENDER");
	rectangle(460,360,560,385);
	floodfill(461,361,WHITE);
	tab();
	admincolor();
	settextstyle(2,0,5);
	outtextxy(333,20,"STUDENT");
	outtextxy(265,20,"HOME");
	outtextxy(411,20,"EMPLOYEE");
	outtextxy(501,20,"ADMIN");
	outtextxy(583,20,"FEST");
	ex();
	back();

	stu s;
	int i;
	gotoxy(10,9);
	gets(s.Stu_ID);
	gotoxy(10,12);
	gets(s.name);
	gotoxy(10,15);
	gets(s.fname);
	gotoxy(10,18);
	gets(s.mname);
	gotoxy(10,21);
	gets(s.address);
	gotoxy(10,24);
	gets(s.city);
	gotoxy(20,24);
	gets(s.state);
	gotoxy(33,24);
	gets(s.pin);
	gotoxy(45,9);
	cin>>s.sem;
	gotoxy(45,12);
	gets(s.email);
	gotoxy(45,15);
	gets(s.mobile);
	gotoxy(45,18);
	gets(s.em);
	gotoxy(45,21);
	gets(s.dob);
	gotoxy(45,24);
	gets(s.branch);
	gotoxy(60,24);
	gets(s.gender);

	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			student();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			admin();
		    }
		    if(a1.x>593 && a1.y>445 && a1.x<629 && a1.y<480)
		    {
			adminselect();
		    }
		    if(a1.x>100 && a1.y>398 && a1.x<550 && a1.y<418)
		    {
			fstream f;
			f.open("student6.dat",ios::app|ios::binary);
			f.write((char*)&s,sizeof(s));
			f.close();
			sturegist();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }
		 }
	  }
}

void empregist()
{
	cleardevice();
	tab();
	admincolor();
	name();
	rectangle(0,75,639,445);
	settextstyle(2,0,7);
	outtextxy(85,195,"EMPLOYEE HAS BEEN REGISTERED SUCCESSFULLY!!!!");
	back();
}

void empsign()
{
	name();
	cleardevice();

     setfillstyle(SOLID_FILL,DARKGRAY);
 rectangle(0,75,639,445);
 floodfill(1,76,WHITE);
 settextstyle(7,0,2);
 outtextxy(160,77,"EMPLOYEE REGISTRATION FORM");
 setfillstyle(SOLID_FILL,BLACK);
 rectangle(60,100,570,420);
 floodfill(61,101,WHITE);
 line(310,100,310,380);
 setfillstyle(SOLID_FILL,GREEN);
 rectangle(100,395,520,415);
 floodfill(101,396,WHITE);
 settextstyle(2,0,6);
 outtextxy(265,395,"REGISTER");
 settextstyle(2,0,5);
 outtextxy(70,110,"EMPLOYEE ID");
 setfillstyle(SOLID_FILL,LIGHTGRAY);
 rectangle(70,125,300,150);
 floodfill(71,131,WHITE);
 outtextxy(70,155,"NAME");
 rectangle(70,170,300,195);
 floodfill(71,181,WHITE);
 outtextxy(70,205,"DATE OF BIRTH :(DD/MM/YY)");
 rectangle(70,220,300,245);
 floodfill(71,231,WHITE);
 outtextxy(70,255,"GENDER");
 rectangle(70,270,300,295);
 floodfill(71,276,WHITE);
 outtextxy(70,304,"ADDRESS");
 rectangle(70,319,300,344);
 floodfill(71,321,WHITE);
 outtextxy(70,350,"CITY");
 outtextxy(150,350,"STATE");
 outtextxy(230,350,"PINCODE");
 rectangle(70,365,140,390);
 floodfill(71,366,WHITE);
 rectangle(150,365,220,390);
 floodfill(151,366,WHITE);
 rectangle(230,365,300,390);
 floodfill(231,366,WHITE);
 outtextxy(330,110,"YEAR OF JOINING");
 rectangle(330,125,560,150);
 floodfill(331,126,WHITE);
 outtextxy(330,160,"SUBJECT");
 rectangle(330,175,560,200);
 floodfill(331,181,WHITE);
 outtextxy(330,235,"TRAINING OR CERTIFICATION");
 rectangle(330,250,560,295);
 floodfill(331,261,WHITE);
 outtextxy(330,304,"E-MAIL");
 rectangle(330,319,560,344);
 floodfill(431,343,WHITE);
 outtextxy(330,350,"CONTACT NO :");
 rectangle(330,365,560,390);
 floodfill(431,371,WHITE);
	tab();
	admincolor();
	settextstyle(2,0,5);
	outtextxy(333,20,"STUDENT");
	outtextxy(265,20,"HOME");
	outtextxy(411,20,"EMPLOYEE");
	outtextxy(501,20,"ADMIN");
	outtextxy(583,20,"FEST");
	ex();
	back();
  emp e;
gotoxy(11,9);
gets(e.Emp_ID);
gotoxy(11,12);
gets(e.name);
gotoxy(11,15);
gets(e.dob);
gotoxy(11,18);
gets(e.gen);
gotoxy(11,21);
gets(e.add);
gotoxy(11,24);
gets(e.city);
gotoxy(21,24);
gets(e.state);
gotoxy(31,24);
gets(e.pin);
gotoxy(43,9);
cin>>e.year;
char tr[30];
gotoxy(43,12);
gets(e.subject);
gotoxy(43,17);
gets(tr);
gotoxy(43,21);
gets(e.mail);
gotoxy(43,24);
gets(e.mobile);
	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			student();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			admin();
		    }
		    if(a1.x>593 && a1.y>445 && a1.x<629 && a1.y<480)
		    {
			adminselect();
		    }
		    if(a1.x>100 && a1.y>395 && a1.x<520 && a1.y<415)
		    {
			fstream f;
			f.open("employee.dat",ios::app|ios::binary);
			f.write((char*)&e,sizeof(e));
			f.close();
			empregist();

		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }
		 }
	  }
}

void festcolor()
{
	setfillstyle(SOLID_FILL,CYAN);
	line(559,65,639,50);
	line(639,0,639,50);
	floodfill(560,64,WHITE);
}

void fest()
{
	cleardevice();
      setfillstyle(SOLID_FILL,BROWN);
      rectangle(0,75,639,445);
      floodfill(1,76,WHITE);            //mid line

setfillstyle(SOLID_FILL,CYAN);
line(319,85,369,85);   //square top
line(319,85,319,135);
line(319,135,369,135);
line(369,135,369,106);
line(369,85,369,94);
line(369,94,379,100);
line(369,106,379,100);
floodfill(320,90,WHITE);

setfillstyle(SOLID_FILL,YELLOW);                          //square1
line(319,140,429,140);
line(319,250,429,250);
line(319,140,319,250);
line(429,140,429,158);
line(429,250,429,178);
line(444,168,429,158);
line(444,168,429,178);
floodfill(390,200,WHITE);

setcolor(BLUE);
settextstyle(1,0,2);
outtextxy(330,145,"SPLASH");
outtextxy(330,170,"AND");
outtextxy(330,195,"SING");
settextstyle(1,0,4);
outtextxy(385,210,"03");

setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);                  //square2
line(319,255,429,255);
line(319,255,429,255);
line(429,255,429,360);
line(319,360,391,360);
line(429,360,411,360);
line(401,375,411,360);
line(401,375,391,360);
line(319,360,319,255);
floodfill(320,260,WHITE);
settextstyle(1,0,4);
outtextxy(325,255,"01");
settextstyle(1,0,2);
outtextxy(365,285,"EVENT");
outtextxy(385,310,"AND");
outtextxy(325,335,"WORKSHOP");
//Designing
setfillstyle(SOLID_FILL,LIGHTBLUE);     //square3
line(319,365,389,365);
line(319,435,389,435);
line(319,365,319,435);
line(389,435,389,430);
line(389,420,389,365);
line(389,420,399,425);
line(389,430,399,425);
floodfill(320,380,WHITE);

setfillstyle(SOLID_FILL,MAGENTA);
line(434,178,504,178);
line(434,178,434,258);
line(434,258,504,258);
line(504,258,504,206);
line(504,178,504,190);
line(504,190,514,198);
line(514,198,504,206);
floodfill(440,190,WHITE);
//Designing
setfillstyle(SOLID_FILL,CYAN);
line(434,263,484,263);
line(434,263,434,313);
line(434,313,464,313);
line(464,313,469,323);
line(469,323,474,313);
line(474,313,484,313);
line(484,313,484,263);
floodfill(435,300,WHITE);
//Designing
setfillstyle(SOLID_FILL,LIGHTCYAN);
line(315,110,315,185);
line(315,185,235,185);
line(235,185,235,110);
line(235,110,240,110);
line(245,100,240,110);
line(245,100,250,110);
line(250,110,315,110);
floodfill(240,120,WHITE);
//Designing
setfillstyle(SOLID_FILL,BLUE);
line(315,190,315,295);
line(315,295,205,295);
line(205,295,205,190);
line(230,190,315,190);
line(205,190,220,190);
line(220,190,224,180);
line(224,180,230,190);
line(230,190,315,190);
floodfill(220,246,WHITE);
settextstyle(1,0,4);
outtextxy(215,255,"27");
settextstyle(1,0,2);
outtextxy(225,200,"SUMMER");
outtextxy(215,225,"TRAINING");
//Designing
setfillstyle(SOLID_FILL,MAGENTA);
line(315,300,315,400);
line(315,300,205,300);
line(205,300,205,400);
line(205,400,300,400);
line(305,410,300,400);
line(305,410,310,400);
line(310,400,315,400);
floodfill(240,390,WHITE);
settextstyle(1,0,4);
outtextxy(275,295,"03");
settextstyle(1,0,2);
outtextxy(215,325,"GAME");
outtextxy(215,350,"OF");
outtextxy(215,375,"CODES");
//Designing
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(200,250,200,300);
line(200,300,150,300);
line(150,300,150,250);
line(150,250,160,250);
line(160,250,165,240);
line(170,250,165,240);
line(170,250,200,250);
floodfill(155,260,WHITE);

//Designing
setfillstyle(SOLID_FILL,YELLOW);
line(130,305,200,305);
line(200,305,200,375);
line(200,375,130,375);
line(130,375,130,365);
line(130,355,120,360);
line(130,365,120,360);
line(130,355,130,305);
floodfill(150,320,WHITE);
	tab();
	festcolor();
	name();
	ex();

	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		  // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			student();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			fest();
		    }
		    if(a1.x>205 && a1.y>300 && a1.x<315 && a1.y<400)
		    {
			fest1();
		    }
		    if(a1.x>319 && a1.y>140 && a1.x<430 && a1.y<252)
		    {
			fest2();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }
		    if(a1.x>319 && a1.y>255 && a1.x<429 && a1.y<360)
		    {
			fest3();
		    }
		    if(a1.x>205 && a1.y>195 && a1.x<315 && a1.y<295)
		    {
			fest4();
		    }
}
	  }
}

void fest1()
{
cleardevice();
tab();
festcolor();
name();
int i;
rectangle(0,75,639,445);
  for(i=0;i<3;i++)
  {
  line(100,100+i,500,100+i);
  }
  for(i=0;i<3;i++)
  {
  line(500+i,100,500+i,422);
  }
  for(i=0;i<3;i++)
  {
  line(100,420+i,500,420+i);
  }
  for(i=0;i<3;i++)
  {
  line(100+i,100,100+i,300);
  }
  for(i=0;i<3;i++)
  {
  line(100+i,380,100+i,420);
  }
  settextstyle(1,0,4);
  outtextxy(65,300,"APRIL");
  outtextxy(230,155,"Game of");
  outtextxy(385,170,"3.0");
  settextstyle(1,0,6);
  outtextxy(230,180,"CODES");
  settextstyle(2,0,4);
  outtextxy(250,233,"ONLINE CODING");
  line(250,260,250,350);
  outtextxy(260,260,"PRIZE MONEY");
  outtextxy(260,330,"REGISTERATION FEE :");
  outtextxy(260,340,"SINGLE  :RS.100");
  setfillstyle(1,BLUE);
  rectangle(270,362,345,385);
  floodfill(279,363,WHITE);
  settextstyle(2,0,5);
  outtextxy(278,365,"REGISTER");
  settextstyle(2,0,4);
  outtextxy(80,365,"10pm-1pm");
  outtextxy(400,395,"CONTACT NO.");
  outtextxy(370,405,"9876543210,8901234567");
  settextstyle(1,0,5);
  outtextxy(260,270,"5K");
  outtextxy(90,322,"3");
  settextstyle(2,0,6);
  outtextxy(535,80,"BASED ON");
  settextstyle(1,1,8);
  outtextxy(520,105,"PYTHON");
  back();
		mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			stucolor();
			student();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			employee();
		    }
		    if(a1.x>593 && a1.y>445 && a1.x<629 && a1.y<480)
		    {
			fest();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			fest();
		    }
		    if(a1.x>270 && a1.y>362 && a1.x<345 && a1.y<385)
		    {
			fest_1();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }
		 }
	  }
}
void fest_4()
{
	cleardevice();
      login();
	tab();
	festcolor();
	name();
	ex();
  k:	gotoxy(25,14);
	gets(uname);
	gotoxy(25,18);
	gets(pswd);
	for(int i=0;i<12;i++)
		{
		gotoxy(24+i,18);
		cout<<"*";
		}
		mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>180 && a1.y>320 && a1.x<460 && a1.y<344)
		    {
			stu s;
			int c=0;
			ifstream f;
			f.open("student6.dat",ios::in|ios::binary);

			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
	if(strcmp(uname,s.Stu_ID)==0 &&      strcmp(pswd,s.Stu_ID)==0)
			{
			c=1;
			cleardevice();
		tab();
	festcolor();
	name();
      rectangle(0,75,639,445);
      setfillstyle(SOLID_FILL,BLUE);
	floodfill(1,76,WHITE);

	setfillstyle(SOLID_FILL,RED);            //TRIANGLE
	line(5,75,155,150);
	line(155,150,316,75);
	line(5,75,316,75);
	floodfill(100,80,WHITE);

	line(15,75,25,80);
	line(35,85,45,90);
	line(55,95,65,100);
	line(75,105,85,110);
	line(95,115,105,120);
	line(115,125,125,130);
	line(135,135,145,140);
	line(155,145,165,140);
	line(175,135,185,130);
	line(195,125,205,120);
	line(215,115,225,110);
	line(235,105,245,100);
	line(255,95,265,90);
	line(275,85,285,80);

	setfillstyle(SOLID_FILL,RED);           //TRIANGLE
	line(321,75,479,150);
	line(479,150,634,75);
	line(321,75,634,75);
	floodfill(421,80,WHITE);

	line(340,75,350,80);
	line(360,85,370,90);
	line(380,95,390,100);
	line(400,105,410,110);
	line(420,115,430,120);
	line(440,125,450,130);
	line(460,135,470,140);
	line(480,145,490,140);
	line(500,135,510,130);
	line(520,125,530,120);
	line(540,115,550,110);
	line(560,105,570,100);
	line(580,95,590,90);
	line(600,85,610,80);

	setfillstyle(1,CYAN);
	line(150,190,320,115);                 //HEXAGON
	line(320,115,490,190);
	line(320,440,150,365);
	line(320,440,490,365);
	line(490,365,490,190);
	line(150,365,150,190);
	floodfill(463,190,WHITE);

	setfillstyle(1,LIGHTCYAN);
	line(319,125,464,190);
	line(319,125,170,190);
	line(464,190,170,190);
	floodfill(320,130,WHITE);

	setfillstyle(1,LIGHTCYAN);
	line(165,365,464,365);
	line(165,365,319,430);
	line(319,430,464,365);
	floodfill(170,366,WHITE);

	setfillstyle(1,RED);
	circle(490,320,70);
	floodfill(491,321,WHITE);
	floodfill(465,364,WHITE);
	floodfill(468,368,WHITE);
	floodfill(460,366,WHITE);

	setcolor(RED);
	line(490,365,490,250);
	line(490,365,445,385);
	line(464,365,438,365);
	line(464,365,445,373);

	setcolor(WHITE);
	settextstyle(1,0,1);
	outtextxy(436,280,"Starts from");
	settextstyle(1,0,2);
	outtextxy(445,315,"27 April");
	outtextxy(460,350,"2019");
	settextstyle(1,0,3);
	outtextxy(210,200,"Summer Training");
	settextstyle(2,0,5);
	outtextxy(310,225,"on");
	settextstyle(2,0,8);
	outtextxy(293,240,"CMCI");
	settextstyle(2,0,4);
	outtextxy(220,280,"STUDENT ID :");
	outtextxy(220,300,"NAME       :");
	outtextxy(220,320,"CONTACT    :");
	outtextxy(220,340,"VENUE/TIME : SVVV (MAIN BLOCK)");
	outtextxy(297,350,"IBM LAB; 9am to 11am");

stu s;
			fstream f;
			f.open("student6.dat",ios::in|ios::binary);
			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Stu_ID)==0)
			{
			f.read((char*)&s,sizeof(s));
			settextstyle(2,0,4);
			setcolor(WHITE);
			outtextxy(290,280,s.Stu_ID);
			outtextxy(290,320,s.name);
			outtextxy(290,340,s.mobile);
			}
			}
			f.close();


	setcolor(CYAN);
	line(140,270,140,260);
	line(140,250,140,240);
	line(140,280,140,290);
	 int i;
	 for(i=0;i<3;i++)
	 {
	line(140-i,182,140-i,230);
	line(140,182-i,180,163-i);
	 }
	 line(190,158,200,153);
	 line(210,148,220,144);
	 line(230,139,240,134);
	 line(250,130,260,125);
	 for(i=0;i<3;i++)
	 {
	 line(270,121-i,320,99-i);
	 line(320,99-i,380,125-i);
	 }

	setcolor(WHITE);
	back();

			break;
			}
			}
			if(c==0)
			{
			while(!kbhit())
			{
			 setcolor(RED);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(200);
			  setcolor(BLACK);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(100);
			}
			goto k;
			}

			f.close();

		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			cleardevice();
			exit(0);
		    }
			 if(a1.x>559 && a1.y>445 && a1.x<639 && a1.y<480)
		    {
			fest();
		    }
		 }
	  }
}
void fest2()
{
	cleardevice();
	tab();
	festcolor();
	name();
	rectangle(0,75,639,445);
	setfillstyle(SOLID_FILL,WHITE);
	line(100,75,100,85);
	line(100,85,0,95);
	floodfill(1,76,WHITE);
	line(0,110,110,100);
	line(0,118,110,118);
	line(110,100,110,118);
	floodfill(1,117,WHITE);
	line(0,135,115,118);
	line(115,118,113,148);
	line(113,148,78,148);
	line(78,148,78,142);
	line(78,142,0,142);
	floodfill(79,144,WHITE);
	rectangle(0,150,125,168);
	floodfill(1,159,WHITE);
	line(0,185,105,183);
	line(105,183,105,168);
	line(115,168,122,205);
	line(122,205,0,197);
	floodfill(1,194,WHITE);
	line(0,223,125,210);
	line(125,210,129,235);
	line(129,235,0,233);
	floodfill(1,231,WHITE);
	line(0,244,133,235);
	rectangle(8,258,112,278);
	line(0,280,8,278);
	line(133,235,136,268);
	line(136,268,112,263);
	floodfill(1,257,WHITE);
	line(112,267,143,272);
	line(143,272,141,300);
	line(141,300,80,297);
	line(80,297,79,291);
	line(79,291,19,297);
	line(19,297,19,278);
	floodfill(20,279,WHITE);
	line(0,317,79,313);
	line(79,313,79,306);
	line(79,306,119,304);
	line(119,304,123,332);
	line(123,332,0,334);
	floodfill(1,333,WHITE);
	line(0,356,100,353);
	line(100,353,100,336);
	line(100,336,130,336);
	line(130,336,133,373);
	line(133,373,0,370);
	floodfill(1,369,WHITE);
	line(0,376,133,391);
	line(133,391,137,410);
	line(137,410,0,400);
	floodfill(1,399,WHITE);
	line(0,425,150,415);
	line(150,415,155,445);
	floodfill(149,416,WHITE);

	settextstyle(1,1,5);
	setcolor(WHITE);
	outtextxy(580,95,"MUSIC FESTIVAL");
	line(250,280,450,280);
	line(250,280,270,240);
	line(450,280,430,240);
	settextstyle(1,0,4);
	setcolor(YELLOW);
	outtextxy(300,150,"SPLASH");
	outtextxy(318,210,"SING");
	settextstyle(1,0,3);
	outtextxy(330,185,"AND");
	setcolor(WHITE);
	line(350,90,320,140);
	line(350,90,380,140);

	line(250,310,180,310);
	rectangle(250,295,450,325);
	line(450,310,520,310);
	settextstyle(1,0,3);
	outtextxy(295,295,"3rd APRIL");
	settextstyle(1,0,1);
	setcolor(YELLOW);
	outtextxy(282,333,"TIME - 7:00 PM");
	setcolor(WHITE);
	settextstyle(1,0,2);
	outtextxy(290,360,"DJ NUCLEYA");
	settextstyle(2,0,5);
	outtextxy(230,395,"FOR PASSES, CONTACT : 9826044366");
	setfillstyle(1,BLUE);
	rectangle(315,418,385,437);
	floodfill(316,419,WHITE);
	outtextxy(320,420,"REGISTER");
	back();
		mouse a1;
	 a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			stucolor();
			student();

		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			employee();
		    }
		    if(a1.x>593 && a1.y>445 && a1.x<629 && a1.y<480)
		    {
			fest();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			fest();
		    }
		    if(a1.x>315 && a1.y>418 && a1.x<385 && a1.y<437)
		    {
			fest_2();
		    }

		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }
		 }
	  }
}
void fest_2()
{
	cleardevice();

      login();
	tab();
	festcolor();
	name();
	ex();
  k:	gotoxy(25,14);
	gets(uname);
	gotoxy(25,18);
	gets(pswd);
	for(int i=0;i<12;i++)
		{
		gotoxy(24+i,18);
		cout<<"*";
		}
		mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>180 && a1.y>320 && a1.x<460 && a1.y<344)
		    {
		    stu s;
		    int c=0;
		    ifstream f;
		    f.open("student6.dat",ios::in|ios::binary);
			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Stu_ID)==0 &&                                                       strcmp(pswd,s.Stu_ID)==0)
			{
			c=1;
			cleardevice();
			tab();
			festcolor();
			name();
			rectangle(0,75,639,445);
			setfillstyle(SOLID_FILL,WHITE);
			line(100,75,100,85);
			line(100,85,0,95);
			floodfill(1,76,WHITE);
			line(0,110,110,100);
			line(0,118,110,118);
			line(110,100,110,118);
			floodfill(1,117,WHITE);
			line(0,135,115,118);
			line(115,118,113,148);

			line(113,148,78,148);
			line(78,148,78,142);
			line(78,142,0,142);
			floodfill(79,144,WHITE);
			rectangle(0,150,125,168);
			floodfill(1,159,WHITE);
			line(0,185,105,183);
			line(105,183,105,168);
			line(115,168,122,205);
			line(122,205,0,197);
			floodfill(1,194,WHITE);
			line(0,223,125,210);
			line(125,210,129,235);
			line(129,235,0,233);
			floodfill(1,231,WHITE);
			line(0,244,133,235);
			rectangle(8,258,112,278);
			line(0,280,8,278);
			line(133,235,136,268);
			line(136,268,112,263);
			floodfill(1,257,WHITE);
			line(112,267,143,272);
			line(143,272,141,300);
			line(141,300,80,297);
			line(80,297,79,291);
			line(79,291,19,297);
			line(19,297,19,278);
			floodfill(20,279,WHITE);
			line(0,317,79,313);
			line(79,313,79,306);
			line(79,306,119,304);
			line(119,304,123,332);
			line(123,332,0,334);
			floodfill(1,333,WHITE);
			line(0,356,100,353);
			line(100,353,100,336);
			line(100,336,130,336);
			line(130,336,133,373);
			line(133,373,0,370);
			floodfill(1,369,WHITE);
			line(0,376,133,391);
			line(133,391,137,410);
			line(137,410,0,400);
			floodfill(1,399,WHITE);
			line(0,425,150,415);
			line(150,415,155,445);
			floodfill(149,416,WHITE);

			settextstyle(1,1,5);
			setcolor(WHITE);
			outtextxy(580,95,"MUSIC FESTIVAL");
			line(250,280,450,280);
			line(250,280,270,240);
			line(450,280,430,240);
			settextstyle(1,0,4);
			setcolor(YELLOW);
			outtextxy(300,150,"SPLASH");
			outtextxy(318,210,"SING");
			settextstyle(1,0,3);
			outtextxy(330,185,"AND");
			setcolor(WHITE);
			line(350,90,320,140);
			line(350,90,380,140);

			line(250,310,180,310);
			rectangle(250,295,450,325);
			line(450,310,520,310);
			settextstyle(1,0,3);
			outtextxy(295,295,"3rd APRIL");
			setcolor(WHITE);
			settextstyle(1,0,1);
			outtextxy(298,255,"DJ NUCLEYA");
			setcolor(WHITE);

stu s;
			fstream f;
			f.open("student6.dat",ios::in|ios::binary);
			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Stu_ID)==0)
			{
			f.read((char*)&s,sizeof(s));
			settextstyle(2,0,4);
			setcolor(WHITE);
			outtextxy(325,335,s.Stu_ID);
			outtextxy(325,355,s.name);
			outtextxy(325,375,s.mobile);
			}
			}
			f.close();
			settextstyle(2,0,4);
			outtextxy(250,335,"STUDENT ID :");
			outtextxy(250,355,"NAME       :");
			outtextxy(250,375,"CONTACT    :");
			outtextxy(250,395,"I-CODE     : SNS001");
			outtextxy(250,415,"TIME/VENUE : 7pm/SVVV ");
			outtextxy(325,425,"BASKETBALL COURT");
			back();
					break;
			}
			}
			if(c==0)
			{
			while(!kbhit())
			{
			 setcolor(RED);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(200);
			 setcolor(BLACK);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(100);
			}
			goto k;
			}
			f.close();
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			cleardevice();
			exit(0);
		    }
		    if(a1.x>559 && a1.y>445 && a1.x<639 && a1.y<480)
		    {
			fest();
		    }

		 }
	  }
}
void fest3()
{
   cleardevice();
   tab();
   festcolor();
   setfillstyle(SOLID_FILL,CYAN);
   rectangle(0,75,318,445);
   floodfill(1,76,WHITE);
   setfillstyle(SOLID_FILL,YELLOW);
   rectangle(318,75,639,445);
   floodfill(319,76,WHITE);
   setcolor(BLACK);
   int i;
 for(i=0;i<3;i++)
 {
  line(318+i,75,318+i,445);
 }
	settextstyle(8,0,5);
	setcolor(BLACK);
	outtextxy(10,80,"SPOT");
	outtextxy(120,100,"EVENTS");
	setcolor(BLACK);
	outtextxy(342,80,"LEARNING");
	outtextxy(370,120,"WORKSHOPS");
	setcolor(RED);
	settextstyle(3,0,7);
	outtextxy(303,103,"&");
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,YELLOW);
	line(140,185,319,185);
	line(140,215,319,215);
	line(120,200,140,215);
      line(120,200,140,185);
	floodfill(141,186,BLACK);
	setfillstyle(1,CYAN);
	line(319,230,498,230);
	line(319,260,498,260);
	line(498,260,519,245);
     line(498,230,518,245);

	floodfill(321,246,BLACK);
	setfillstyle(SOLID_FILL,YELLOW);
	line(140,280,319,280);
	line(140,310,319,310);
	line(120,295,140,310);
	line(120,295,140,280);
     floodfill(141,281,BLACK);
	     setfillstyle(SOLID_FILL,CYAN);
	     line(319,330,498,330);
	     line(319,360,498,360);
	     line(498,360,518,345);
	     line(498,330,518,345);
	     floodfill(399,331,BLACK);
		setfillstyle(SOLID_FILL,YELLOW);
 line(140,380,319,380);
 line(140,410,319,410);
 line(120,395,140,410);
 line(120,395,140,380);
 floodfill(141,381,BLACK);
 settextstyle(8,0,1);
     outtextxy(145,188,"TREASUTE HUNT");
     outtextxy(324,233,"HTML,XML & PHP");
     outtextxy(165,283,"LAN GAMING");
     outtextxy(345,333,"CORE JAVA");
     outtextxy(170,383,"SPOT LIGHT");

     settextstyle(8,1,2);
     outtextxy(600,180,"CREATING A NEW YOU");
     outtextxy(5,155,"PLAY AND GET SPOTTED");

     settextstyle(2,0,5);
     outtextxy(325,410,"REGISTER :");
     outtextxy(325,430,"http:\\MIT.edu.com");
	name();
	back();
	tabnav();
}

void fest4()
{
	cleardevice();
	tab();
	festcolor();
	name();
	rectangle(0,75,639,445);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(1,76,WHITE);

	setfillstyle(SOLID_FILL,RED);            //TRIANGLE
	line(5,75,155,150);
	line(155,150,316,75);
	line(5,75,316,75);
	floodfill(100,80,WHITE);

	line(15,75,25,80);
	line(35,85,45,90);
	line(55,95,65,100);
	line(75,105,85,110);
	line(95,115,105,120);
	line(115,125,125,130);
	line(135,135,145,140);
	line(155,145,165,140);
	line(175,135,185,130);
	line(195,125,205,120);
	line(215,115,225,110);
	line(235,105,245,100);
	line(255,95,265,90);
	line(275,85,285,80);

	setfillstyle(SOLID_FILL,RED);           //TRIANGLE
	line(321,75,479,150);
	line(479,150,634,75);
	line(321,75,634,75);
	floodfill(421,80,WHITE);

	line(340,75,350,80);
	line(360,85,370,90);
	line(380,95,390,100);
	line(400,105,410,110);
	line(420,115,430,120);
	line(440,125,450,130);
	line(460,135,470,140);
	line(480,145,490,140);
	line(500,135,510,130);
	line(520,125,530,120);
	line(540,115,550,110);
	line(560,105,570,100);
	line(580,95,590,90);
	line(600,85,610,80);

	setfillstyle(1,CYAN);
	line(150,190,320,115);                 //HEXAGON
	line(320,115,490,190);
	line(320,440,150,365);
	line(320,440,490,365);
	line(490,365,490,190);
	line(150,365,150,190);
	floodfill(463,190,WHITE);

	setfillstyle(1,LIGHTCYAN);
	line(319,125,464,190);
	line(319,125,170,190);
	line(464,190,170,190);
	floodfill(320,130,WHITE);

	setfillstyle(1,LIGHTCYAN);
	line(165,365,464,365);
	line(165,365,319,430);
	line(319,430,464,365);
	floodfill(170,366,WHITE);

	setfillstyle(1,RED);
	circle(490,320,70);
	floodfill(491,321,WHITE);
	floodfill(465,364,WHITE);
	floodfill(468,368,WHITE);
	floodfill(460,366,WHITE);

	setcolor(RED);
	line(490,365,490,250);
	line(490,365,445,385);
	line(464,365,438,365);
	line(464,365,445,373);

	setcolor(WHITE);
	settextstyle(1,0,1);
	outtextxy(436,280,"Starts from");
	settextstyle(1,0,2);
	outtextxy(445,315,"27 April");
	outtextxy(460,350,"2019");
	settextstyle(1,0,3);
	outtextxy(210,200,"Summer Training");
	settextstyle(1,0,1);
	outtextxy(300,225,"on");
	settextstyle(1,0,5);
	outtextxy(265,250,"CMCI");
	settextstyle(8,0,1);
	outtextxy(240,308,"By: Gurpreet Sir");
	setfillstyle(1,RED);
	rectangle(270,353,353,377);
	floodfill(271,354,WHITE);
	floodfill(349,371,WHITE);
	setcolor(RED);
	line(271,365,352,365);
	setcolor(WHITE);
	settextstyle(2,0,5);
	outtextxy(282,357,"REGISTER");

	setcolor(CYAN);
	line(140,270,140,260);
	line(140,250,140,240);
	line(140,280,140,290);
	 int i;
	 for(i=0;i<3;i++)
	 {
	 line(140-i,182,140-i,230);
	 line(140,182-i,180,163-i);
	 }
	 line(190,158,200,153);
	 line(210,148,220,144);
	 line(230,139,240,134);
	 line(250,130,260,125);
	 for(i=0;i<3;i++)
	 {
	 line(270,121-i,320,99-i);
	 line(320,99-i,380,125-i);
	 }
	setcolor(WHITE);
	back();
			mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			home();
		    }
		    if(a1.x>319 && a1.y>0 && a1.x<399 && a1.y<50)
		    {
			stucolor();
			student();

		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			employee();
		    }
		    if(a1.x>593 && a1.y>445 && a1.x<629 && a1.y<480)
		    {
			fest();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			fest();
		    }
		    if(a1.x>270 && a1.y>353 && a1.x<353 && a1.y<377)
		    {
			fest_4();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			exit(0);
		    }
		 }
	  }
}
void fest_1()
{
	cleardevice();

login();
	tab();
	festcolor();
	name();
	ex();
  k:	gotoxy(25,14);
	gets(uname);
	gotoxy(25,18);
	gets(pswd);
	for(int i=0;i<12;i++)
		{
		gotoxy(24+i,18);
		cout<<"*";
		}
		mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>239 && a1.y>0 && a1.x<319 && a1.y<50)
		    {
			cleardevice();
			home();
		    }
		    if(a1.x>180 && a1.y>320 && a1.x<460 && a1.y<344)
		    {
		    stu s;
		    int c=0;
		    ifstream f;
			f.open("student6.dat",ios::in|ios::binary);

			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			if(strcmp(uname,s.Stu_ID)==0 && 			         	             strcmp(pswd,s.Stu_ID)==0)
			{
			c=1;
	cleardevice();
	tab();
	festcolor();
	name();

setfillstyle(1,CYAN);
rectangle(0,75,639,445);
floodfill(121,76,WHITE);
setfillstyle(1,BLACK);
rectangle(145,95,500,400);
floodfill(146,96,WHITE);

setfillstyle(SOLID_FILL,DARKGRAY);  //LOGO
rectangle(270,105,390,165);
floodfill(300,150,WHITE);
setfillstyle(SOLID_FILL,BLUE);
rectangle(280,110,290,160);
floodfill(285,115,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(300,110,310,135);
floodfill(305,120,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(320,110,330,160);
floodfill(325,120,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(340,110,350,120);
floodfill(345,115,WHITE);

setfillstyle(SOLID_FILL,RED);
rectangle(340,130,350,160);
floodfill(345,140,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(360,110,380,120);
floodfill(365,115,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(360,130,370,160);
floodfill(365,140,WHITE);
 settextstyle(2,0,5);
 outtextxy(165,200,"PAYMENT ID :");

setfillstyle(1,WHITE);
rectangle(165,220,480,240);
floodfill(166,221,WHITE);
setfillstyle(1,BLUE);
rectangle(295,255,350,280);
floodfill(296,256,WHITE);
outtextxy(301,260,"SUBMIT");
settextstyle(2,0,4);
setcolor(RED);
outtextxy(150,360,"**                               			                       **");
setcolor(WHITE);
outtextxy(185,365,"THE ABOVE PAYMENT ID CAN BE OBTAIN BY PAYING THE");
outtextxy(150,380,"SPECIFIC AMOUNT AT THE ACCOUNT SECTION IN THE CS MAIN BLOCK");
l: gotoxy(23,15);
char pid[11];
gets(pid);
		mouse a2;
	a2.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a2=getcoordinates();
		 if(a2.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a2.x>295 && a2.y>255 && a2.x<350 && a2.y<280)
		    {
if(strcmp(pid,"PTMID001")!=0)
{                       int c=0;
			while(c<5)
			{
			 setcolor(RED);
			 settextstyle(2,0,5);
			 outtextxy(267,310,"INCORRECT PAYID");
			 delay(200);
			  setcolor(BLACK);
			 settextstyle(2,0,5);
			 outtextxy(267,310,"INCORRECT PAYID");
			 delay(100);
			 c++;
			}
			goto l;
}
else
{
cleardevice();
		tab();
	festcolor();
	name();
back();
int i;
  rectangle(0,75,639,445);
  for(i=0;i<3;i++)
  {
  line(100,100+i,500,100+i);
  }
  for(i=0;i<3;i++)
  {
  line(500+i,100,500+i,422);
  }
  for(i=0;i<3;i++)
  {
  line(100,420+i,500,420+i);
  }
  for(i=0;i<3;i++)
  {
  line(100+i,100,100+i,300);
  }
  for(i=0;i<3;i++)
  {
  line(100+i,380,100+i,420);
  }
  settextstyle(1,0,4);
  outtextxy(65,300,"APRIL");
  outtextxy(230,155,"Game of");
  outtextxy(385,170,"3.0");
  settextstyle(1,0,6);
  outtextxy(230,180,"CODES");
  settextstyle(2,0,4);
  outtextxy(250,233,"ONLINE CODING");
  line(250,260,250,390);
  outtextxy(260,260,"PRIZE MONEY");
  outtextxy(260,330,"STUDENT ID    : BTCMCI02979");
  outtextxy(260,345,"NAME          : SHRUTI");
  outtextxy(260,360,"CONTACT       : 9424400620");
  outtextxy(260,375,"VENUE         : SVVV-PROGRAMMING LAB");
  outtextxy(80,365,"10pm-1pm");
  settextstyle(1,0,5);
  outtextxy(260,270,"5K");
  outtextxy(90,322,"3");
  settextstyle(2,0,6);
  outtextxy(535,80,"BASED ON");
  settextstyle(1,1,8);
  outtextxy(520,105,"PYTHON");
  back();
			}
}
		    if(a2.x>559 && a2.y>445 && a2.x<639 && a2.y<480)
		    {
			fest();
		    }
}
}
		if(c==0)
			{
			while(!kbhit())
			{
			 setcolor(RED);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(200);
			 setcolor(BLACK);
			 settextstyle(2,0,5);
			 outtextxy(230,360,"INCORRECT ID OR PASSWORD");
			 delay(100);
			}
			goto k;
			}

			f.close();}
		    }
		    if(a1.x>399 && a1.y>0 && a1.x<479 && a1.y<50)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>479 && a1.y>0 && a1.x<559 && a1.y<50)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>559 && a1.y>0 && a1.x<639 && a1.y<50)
		    {
			cleardevice();
			fest();
		    }
		    if(a1.x>10 && a1.y>445 && a1.x<46 && a1.y<480)
		    {
			cleardevice();
			exit(0);
		    }
		    if(a1.x>559 && a1.y>445 && a1.x<639 && a1.y<480)
		    {
			fest();
		    }
		 }
		 }
	  }
}
void home()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setfillstyle(SOLID_FILL,RED);
	rectangle(0,0,639,175);
	floodfill(1,1,WHITE);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(0,175,639,285);
	floodfill(1,181,BLACK);
	setfillstyle(SOLID_FILL,RED);
	rectangle(0,285,639,480);
	floodfill(1,350,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	line(0,60,213,60);
	line(213,60,185,87);
	line(185,87,213,114);
	line(0,114,213,114);
	floodfill(1,70,WHITE);

	setfillstyle(SOLID_FILL,YELLOW);
	line(426,60,939,60);
	line(454,87,426,60);
	line(454,87,426,114);
	line(426,114,639,114);
	floodfill(638,79,WHITE);

	setfillstyle(SOLID_FILL,YELLOW);
	line(426,345,639,345);
	line(426,345,454,372);
	line(454,372,426,399);
	line(426,399,639,399);
	floodfill(638,398,WHITE);

	setfillstyle(SOLID_FILL,YELLOW);
	line(0,345,213,345);
	line(0,399,213,399);
	line(185,372,213,345);
	line(185,372,213,399);
	floodfill(2,350,WHITE);
	setcolor(BLACK);
	settextstyle(1,0,3);
	outtextxy(30,72,"STUDENT");
	outtextxy(490,72,"EMPLOYEE");
	outtextxy(30,355,"ADMIN");
	outtextxy(520,355,"FEST");
	setcolor(WHITE);
	settextstyle(2,0,6);
	outtextxy(125,175,"McLaren College of Information Technology");
	outtextxy(255,260,"Experience IT");
	setfillstyle(SOLID_FILL,WHITE);
	int i;
	for(i=0;i<9;i++)
	{
	line(240+i,202,240+i,255);
	line(272+i,202,272+i,255);
	}
	for(i=0;i<12;i++)
	{
	line(249+i,202+i,249+i,220+i);
	line(272-i,202+i,272-i,220+i);
	}
	for(i=0;i<11;i++)
	{
	line(317+i,202,317+i,255);
	}
	for(i=0;i<34;i++)
	{
	line(366+i,202,366+i,210);
	}
	for(i=0;i<9;i++)
	{
	line(378+i,210,378+i,255);
	}
	mouse a1;
	a1.button=0;
	 while(!kbhit())
	 {       callmouse();
		 a1=getcoordinates();
		 if(a1.button==1)
		 {
		    hidemouse();
		   // cout<<a1.x<<a1.y;
		    if(a1.x>0 && a1.y>60 && a1.x<185 && a1.y<114)
		    {
			cleardevice();
			student();
		    }
		    if(a1.x>426 && a1.y>60 && a1.x<639 && a1.y<114)
		    {
			cleardevice();
			employee();
		    }
		    if(a1.x>0 && a1.y>345 && a1.x<185 && a1.y<399)
		    {
			cleardevice();
			admin();
		    }
		    if(a1.x>426 && a1.y>345 && a1.x<639 && a1.y<399)
		    {
			cleardevice();
			fest();
		    }
		 }
	  }
}
void main()
{
	clrscr();
	home();
	getch();
}
