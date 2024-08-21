#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;
*
const int THICKNESS = 3;
const int DELAY_DURATION = 500;

void drawThickLine(int x1, int y1, int x2, int y2, int thickness) {
    for (int i = 0; i < thickness; i++) {
        line(x1 + i, y1, x2 + i, y2);
    }
}

void drawThickCircle(int x, int y, int radius, int thickness) {
    for (int i = 0; i < thickness; i++) {
        circle(x, y, radius + i);
    }
}

void Menu() {
    cleardevice();

    setbkcolor(BLACK);
    setcolor(WHITE);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

    outtextxy(250,10,"MENU LIST");
    outtextxy(100, 60, "1. See my name.");
    outtextxy(100, 120, "2. Draw a line.");
    outtextxy(100, 180, "3. Happy face.");
    outtextxy(100, 250, "4. Moving car.");
    outtextxy(100, 310, "5. Exit.");
    rectangle(50, 40, 600, 400);
}

void myname()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(GREEN);

    // Alphabet "S"
    line(50, 30, 80, 30);
    line(51, 31, 81, 31);
    line(52, 32, 82, 32);
    line(50, 30, 50, 60);
    line(51, 31, 51, 61);
    line(52, 32, 52, 62);
    line(50, 60, 80, 60);
    line(51, 61, 81, 61);
    line(52, 62, 82, 62);
    line(80, 60, 80, 90);
    line(81, 61, 81, 91);
    line(82, 62, 82, 92);
    line(80, 90, 50, 90);
    line(81, 91, 51, 91);
    line(82, 92, 52, 92);

    // Alphabet "H"
    line(100, 30, 100, 90);
    line(101, 31, 101, 91);
    line(102, 32, 102, 92);
    line(130, 30, 130, 90);
    line(131, 31, 131, 91);
    line(132, 32, 132, 92);
    line(100, 60, 130, 60);
    line(101, 61, 131, 61);
    line(102, 62, 132, 62);

    // Alphabet "E"
    line(150, 30, 150, 90);
    line(151, 31, 151, 91);
    line(152, 32, 152, 92);
    line(150, 30, 180, 30);
    line(151, 31, 181, 31);
    line(152, 32, 182, 32);
    line(150, 60, 180, 60);
    line(151, 61, 181, 61);
    line(152, 62, 182, 62);
    line(150, 90, 180, 90);
    line(151, 91, 181, 91);
    line(152, 92, 182, 92);

    // Alphabet "P"
    line(195, 30, 195, 90);
    line(196, 31, 196, 91);
    line(197, 32, 197, 92);
    line(195, 30, 225, 30);
    line(196, 31, 226, 31);
    line(197, 32, 227, 32);
    line(225, 30, 225, 60);
    line(226, 31, 226, 61);
    line(227, 32, 227, 62);
    line(195, 60, 225, 60);
    line(196, 61, 226, 61);
    line(197, 62, 227, 62);

    // Alphabet "O"
    circle(265, 60, 30);
    circle(265, 59, 30);
    // Alphabet "N"
    line(310, 30, 310, 90);
    line(311, 31, 311, 91);
    line(312, 32, 312, 92);
    line(310, 30, 340, 90);
    line(311, 31, 341, 91);
    line(312, 32, 342, 92);
    line(340, 30, 340, 90);
    line(341, 31, 341, 91);
    line(342, 32, 342, 92);

    getch();
    closegraph();
}

void moving_car()
{
    cleardevice();

    setbkcolor(BLACK);
    setcolor(WHITE);
    setbkcolor(4);

    int i = 0;

    do
    {

        ellipse(200,30,60,240,10,15);

        ellipse(225,20,345,165,20,15);

        ellipse(262,27,340,160,20,15);

        ellipse(268,42,230,50,20,10);

        ellipse(226,46,163,340,31,15);

        ellipse(300,21,20,182,21,19);

        ellipse(325,31,290,100,21,15);

        ellipse(299,45,228,20,33,11);


        ellipse(40,30,60,240,10,15);

        ellipse(65,20,345,165,20,15);

        ellipse(105,27,340,160,20,15);

        ellipse(109,42,230,50,20,10);

        ellipse(66,46,163,340,31,17);



        ellipse(450,30,60,240,10,15);

        ellipse(475,20,345,165,20,15);

        ellipse(512,27,340,160,20,15);

        ellipse(518,42,230,50,20,10);

        ellipse(476,46,163,340,31,15);


        setcolor(WHITE);

        setfillstyle(SOLID_FILL,GREEN);

        line(0,150,100,75);

        line(100,75,200,150);


        setcolor(WHITE);

        setfillstyle(SOLID_FILL,GREEN);

        line(175,131,275,75);

        line(275,75,375,150);


        setcolor(WHITE);

        setfillstyle(SOLID_FILL,GREEN);

        line(350,131,450,75);

        line(450,75,550,150);

        setcolor(WHITE);

        setfillstyle(SOLID_FILL,GREEN);

        line(525,131,600,75);

        line(600,75,750,180);



        line(0,150,750,150);

        floodfill(100,136,WHITE);

        floodfill(275,136,WHITE);

        floodfill(450,136,WHITE);

        floodfill(600,136,WHITE);


        setcolor(WHITE);
        setfillstyle(SOLID_FILL, 14);
        arc(178, 112, 0, 180, 30);
        floodfill(171, 109, WHITE);

        setfillstyle(SOLID_FILL,BLUE);

        floodfill(50,50,WHITE);


        setbkcolor(4);
        line(50 + i, 370, 90 + i, 370);
        arc(110 + i, 370, 0, 180, 20);
        line(130 + i, 370, 220 + i, 370);
        arc(240 + i, 370, 0, 180, 20);
        line(260 + i, 370, 300 + i, 370);
        line(300 + i, 370, 300 + i, 350);
        line(300 + i, 350, 240 + i, 330);
        line(240 + i, 330, 200 + i, 300);
        line(200 + i, 300, 110 + i, 300);
        line(110 + i, 300, 80 + i, 330);
        line(80 + i, 330, 50 + i, 340);
        line(50 + i, 340, 50 + i, 370);

        setfillstyle(SOLID_FILL, 0);
        floodfill(51 + i, 369, 15);
        setfillstyle(SOLID_FILL, 0);
        floodfill(105 + i, 310, 15);


        setfillstyle(SOLID_FILL , 1);
        line(165 + i, 305, 165 + i, 330);
        line(165 + i, 330, 230 + i, 330);
        line(230 + i, 330, 195 + i, 305);
        line(195 + i, 305, 165 + i, 305);
        floodfill(165 + i, 310, 15);

        line(160 + i, 305, 160 + i, 330);
        line(160 + i, 330, 95 + i, 330);
        line(95 + i, 330, 120 + i, 305);
        line(120 + i, 305, 160 + i, 305);
        floodfill(105 + i, 310, 15);

        setfillstyle(SOLID_FILL, 0);
        circle(110 + i, 370, 17);
        floodfill(110 + i, 370, 15);
        setfillstyle(SOLID_FILL, 3);
        circle(110 + i, 370, 8);
        floodfill(110 + i, 370, 15);

        setfillstyle(SOLID_FILL, 0);
        circle(240 + i, 370, 17);
        floodfill(240 + i, 370, 15);
        setfillstyle(SOLID_FILL, 3);
        circle(240 + i, 370, 8);
        floodfill(240 + i, 370, 15);

        delay(50);
        cleardevice();

        setfillstyle(SOLID_FILL , 0);
        line(0, 290, 639, 290);
        line(0, 390, 639, 390);
        floodfill(10,300,15);

        if(i > 0){
           setfillstyle(SOLID_FILL,15);
            rectangle(10,335,40,340);
            floodfill(11,337,15);
        }
        if(i > 50)
        {
           setfillstyle(SOLID_FILL,15);
            rectangle(70,335,100,340);
            floodfill(75,337,15);
        }
        if(i > 110)
        {
           setfillstyle(SOLID_FILL,15);
            rectangle(130,335,160,340);
            floodfill(140,337,15);
        }
        if(i > 170)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(190,335,220,340);
            floodfill(195,337,15);
        }
        if(i > 230)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(250,335,280,340);
            floodfill(260,337,15);
        }
        if(i < 20 or i > 290)
        {
           setfillstyle(SOLID_FILL,15);
            rectangle(310,335,340,340);
            floodfill(320,337,15);
        }
        if(i < 90 or i > 350)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(370,335,400,340);
            floodfill(375,337,15);
        }
        if(i < 120 or i > 410)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(430,335,460,340);
            floodfill(445,337,15);
        }
        if(i < 180 or i > 470)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(490,335,520,340);
            floodfill(500,337,15);
        }
        if(i < 240)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(550,335,580,340);
            floodfill(560,337,15);
        }

        if(i > 500)
        {
            getch();
        }
        i++;


    }while(!kbhit());

    setfillstyle(SOLID_FILL,15);
    rectangle(550,335,580,340);
    floodfill(560,337,15);

    getch();
}


void DDA_algorithm()
{

cleardevice();

    int x1, y1,x2,y2;
    cin >> x1 >> y1>>x2>>y2;

    int delx = abs(x2-x1);
    int dely = abs(y2-y1);

    int x = x1;
    int y = y1;
    int step;

    if(delx > dely)
    {
        step = delx;
    }
    else
    {
        step = dely;
    }

    x = round(((double)delx/(double)step));
    y = round(((double)dely/(double)step));


    while(x1 <= x2 or y1 <= y2)
    {
        putpixel(x1,y1,GREEN);

        x1+= x;
        y1 += y;
        delay(100);

    }

    getch();
}
void emoji()
{
        int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,YELLOW);
    ellipse(300,250,0,360,200,180);
    floodfill(302,251,BLUE);
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BLACK);
    ellipse(230,200,0,360,35,40);
    floodfill(231,201,BROWN);
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BLACK);
    ellipse(350,200,0,360,35,40);
    floodfill(351,201,BROWN);
    
    
    setcolor(WHITE);
    ellipse(300,300,190,350,100,39);
    ellipse(300,300,190,350,100,40);
    setcolor(WHITE);
    ellipse(300,300,190,350,100,41);
    ellipse(300,300,190,350,100,42);
    ellipse(300,300,190,350,100,43);
    ellipse(300,300,190,350,100,44);
    ellipse(300,300,190,350,100,45);
    ellipse(300,300,190,350,100,46);
    ellipse(300,300,190,350,100,47);
    ellipse(300,300,190,350,100,48);
    ellipse(300,300,190,350,100,49);
    ellipse(300,300,190,350,100,50);
    ellipse(300,300,190,350,100,51);
    ellipse(300,300,190,350,100,52);
    ellipse(300,300,190,350,100,53);
    ellipse(300,300,190,350,100,54);
    
    //setcolor()

    setcolor(0);
    ellipse(300,295,190,350,100,80);
    ellipse(300,295,190,350,100,81);
    
    getch();
    closegraph();
}

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int choice;

    Menu();

    while(1)
    {
        choice = getch();

        switch (choice)
        {
        case '1':
            outtextxy(200, 400, "You chose option 1!");
            myname();
            cleardevice();
            //drawMenu();
            break;
        case '2':
            outtextxy(200, 400, "You chose option 2!");
            delay(1000);
            cleardevice();
            DDA_algorithm();
            delay(1000);
            cleardevice();
            //drawMenu();
            break;
        case '3':
            outtextxy(200, 400, "You chose option 3!");
            delay(1000);
            cleardevice();
            emoji();
            delay(1000);
            cleardevice();
            break;
        case '4':
            outtextxy(200, 400, "You chose option 4!");
            delay(1000);
            cleardevice();
            moving_car();
            delay(1000);
            cleardevice();
            break;
        case '5':
            closegraph();
            exit(0);
            break;
        default:
            outtextxy(200, 400, "Invalid choice!");
            break;
        }

        delay(1000);
        Menu();
    }

    getch();
    closegraph();

    return 0;
}

