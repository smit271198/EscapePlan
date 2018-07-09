#include<iostream>
#include<graphics.h>
using namespace std;
class StartUp;
class Game
{
public:
    void screen1(int color)   // To create background screen for level-1
    {
        int x,y;
        line(100,590,300,590);
        line(400,450,700,450);
        line(750,300,900,300);
        for(int i=0;i<64;i++)  //Code for spikes
        {
            line(0+(i*40),680,20+(i*40),660);
        }
        for(int i=0;i<64;i++)
        {
            line(40+(i*40),680,20+(i*40),660);
        }
        setfillstyle(7,7);
        bar3d(1080,80,1160,160,8,1);
        setfillstyle(1,7);
        bar3d(1100,100,1140,160,8,5);
        line(1000,160,1240,160);
        for(int i=0; i<=500; i++) //For Star
        {
            x=rand()%getmaxx();
            y=rand()%getmaxy();
            putpixel(x,y,color);
        }
    }
    void level1()
    {
        int i=120,j=500,x=0,y=0,ch;
        int color;
        while(1)
        {
            while(!kbhit()) //Loop for ball to automatically come downward
            {
                circle(i,j,30);
                color=rand()%10;
                screen1(color);
                j=j+2;
                if(j>=630)
                {
                    cleardevice();
                    Star(3);
                    settextstyle(8,HORIZ_DIR,4);
                    outtextxy(500,260,"Game Over");
                    outtextxy(450,295,"Press any key...");
                    getch();
                    Endup(1);
                    break;
                }
                if(j>=560 && i>100 && i<300 && j<=562)
                {
                    j=560;
                }
                if(j>=420 && i>400 && i<700 && j<=422)
                {
                    j=420;
                }
                if(j>=270 && j<=272 && i>750 && i<900)
                {
                    j=270;
                }
                if(j>=130 && j>=132 && i>1000 && i<1240)
                {
                    j=130;
                    if(i>=1110)
                    {
                        cleardevice();
                        Star(2);
                        settextstyle(8,HORIZ_DIR,4);
                        outtextxy(500,260,"Level 1 is completed");
                        outtextxy(550,295,"Press any key...");
                        getch();
                        level2();
                        break;
                    }
                }
                delay(50);
                cleardevice();
            }
            ch=getch();
            switch(ch) //Switch case to move the ball in given direction using arrow or A,D,W key
            {
            case 72:
            case 'w':
                if(j>=560 && i>=100 && i<=300 && j<=562)
                {
                    x=0;
                    y=-200;
                }
                else if(j>=420 && i>=400 && i<=700 && j<=422)
                {
                    x=0;
                    y=-200;
                }
                else if(j>=270 && j<=272 && i>750 && i<900)
                {
                    x=0;
                    y=-200;
                }
                else if(j>=130 && j>=132 && i>1000 && i<1240)
                {
                    x=0;
                    y=-200;
                }
                else
                {
                    x=0;
                    y=0;
                }
                break;
            case 75:
            case 'a':
                x=-25;
                y=0;
                break;
            case 77:
            case 'd':
                x=25;
                y=0;
                break;
            case 27:
                exit(0);
            default:
                x=0;
                y=0;
                break;
            }
            i=i+x;
            j=j+y;
            cin.clear();
        }
    }
    void screen2(int color)  //Background screen for Level-2
    {
        int x,y;
        line(800,590,1200,590);
        line(950,590,970,530);//Spikes on line
        line(970,530,990,590);//Spikes on line
        line(400,450,600,450);
        line(500,450,520,390);//Spikes on line
        line(520,390,540,450);//Spikes on line
        line(460,450,480,390);//Spikes on line
        line(480,390,500,450);//Spikes on line
        line(320,300,350,300);
        setfillstyle(7,7);
        bar3d(100,80,180,160,8,1);
        setfillstyle(1,7);
        bar3d(120,100,160,160,8,5);
        line(80,160,320,160);
        line(220,160,240,100); //Spikes on line
        line(240,100,260,160); //Spikes on line
        for(int i=0;i<64;i++) //Spikes at the end
        {
            line(0+(i*40),680,20+(i*40),660);
        }
        for(int i=0;i<64;i++)
        {
            line(40+(i*40),680,20+(i*40),660);
        }
        for(int i=0; i<=500; i++) //For Star
        {
            x=rand()%getmaxx();
            y=rand()%getmaxy();
            putpixel(x,y,color);
        }
    }
    void level2()
    {
        int i=1100,j=500,x=0,y=0,ch;
        int color;
        while(1)
        {
            while(!kbhit()) //Loop for ball to automatically come downward
            {
                circle(i,j,30);
                color=rand()%10;
                screen2(color);
                j=j+2;
                if(j>=630)
                {
                    cleardevice();
                    Star(3);
                    settextstyle(8,HORIZ_DIR,4);
                    outtextxy(500,260,"Game Over");
                    outtextxy(450,295,"Press any key...");
                    getch();
                    Endup(2);
                    break;
                }
                if(i>=940 && i<=1000 && j<=590 && j>=500)
                {
                    cleardevice();
                    Star(3);
                    settextstyle(8,HORIZ_DIR,4);
                    outtextxy(500,260,"Game Over");
                    outtextxy(450,295,"Press any key...");
                    getch();
                    Endup(2);
                    break;
                }
                if(i>440 && i<560 && j>=360 && j<=450)
                {
                    cleardevice();
                    Star(3);
                    settextstyle(8,HORIZ_DIR,4);
                    outtextxy(500,260,"Game Over");
                    outtextxy(450,295,"Press any key...");
                    getch();
                    Endup(2);
                    break;
                }
                if(i>195 && i<275 && j>=60 && j<=160)
                {
                    cleardevice();
                    Star(3);
                    settextstyle(8,HORIZ_DIR,4);
                    outtextxy(500,260,"Game Over");
                    outtextxy(450,295,"Press any key...");
                    getch();
                    Endup(2);
                    break;
                }
                if(j>=560 && i>800 && i<1200 && j<=562)
                {
                    j=560;
                }
                if(j>=420 && i>=400 && i<=600 && j<=422)
                {
                    j=420;
                }
                if(j>=270 && j<=272 && i>=320 && i<=350)
                {
                    j=270;
                }
                if(j>=130 && j<=132 && i>80 && i<320)
                {
                    j=130;
                    if(i<=140)
                    {
                        cleardevice();
                        Star(2);
                        settextstyle(8,HORIZ_DIR,4);
                        outtextxy(500,260,"Level 2 is completed");
                        outtextxy(550,295,"Press any key...");
                        getch();
                        exit(0);
                        break;
                    }
                }
                delay(50);
                cleardevice();
            }
            ch=getch();
            switch(ch)  //Switch case to move the ball in given direction using arrow or A,D,W key
            {
            case 72:
            case 'w':
                if(j>=560 && i>=800 && i<=1200 && j<=562)
                {
                    x=0;
                    y=-200;
                }
                else if(j>=420 && i>=400 && i<=600 && j<=422)
                {
                    x=0;
                    y=-200;
                }
                else if(j>=270 && j<=272 && i>=320 && i<=350)
                {
                    x=0;
                    y=-200;
                }
                else if(j>=130 && j<=132 && i>80 && i<320)
                {
                    x=0;
                    y=-100;
                }
                else
                {
                    x=0;
                    y=0;
                }
                break;
            case 75:
            case 'a':
                x=-25;
                y=0;
                break;
            case 77:
            case 'd':
                x=25;
                y=0;
                break;
            case 27:
                exit(0);
            default:
                x=0;
                y=0;
                break;
            }
            i=i+x;
            j=j+y;
            cin.clear();
        }
    }
    void Star(int m)
    {
        int x,y;
        for(int i=0;i<=2000; i++)
        {
            x=rand()%getmaxx();
            y=rand()%getmaxy();
            putpixel(x,y,m);
        }
    }
    void Endup(int i)
    {
        int ch;
        cleardevice();
        Star(5);
        settextstyle(8,HORIZ_DIR,3);
        outtextxy(450,260,"Want to play again ?");
        outtextxy(500,285,"1. Yes");
        outtextxy(500,310,"2. No");
        outtextxy(450,335,"Enter your choice:");
        ch=getch();
        switch(ch)
        {
        case '1':
            if(i==1)
            {
                level1();
            }
            else
            {
                level2();
            }
            break;
        case '2':
            exit(0);
            break;
        default:
            Endup(i);
        }
    }
};
class StartUp
{
    Game g;
public:
    void Star(int m)
    {
        int x,y;
        for(int i=0;i<=2000; i++)
        {
            x=rand()%getmaxx();
            y=rand()%getmaxy();
            putpixel(x,y,m);
        }
    }
    void About()
    {
        int ch;
        cleardevice();
        Star(5);
        settextstyle(5,HORIZ_DIR,6);
        outtextxy(450,200,"The Escape Plan");
        settextstyle(8,HORIZ_DIR,3);
        outtextxy(300,260,"This game is prepared by Smit & Palak from IT-1");
        outtextxy(450,285,"Press ESC to return back");
        ch=getch();
        if(ch==27)
        {
            cleardevice();
            Startup();
        }
        else
        {
            cleardevice();
            About();
        }
    }
    void Help()
    {
        int ch;
        cleardevice();
        Star(2);
        settextstyle(5,HORIZ_DIR,6);
        outtextxy(450,200,"The Escape Plan");
        settextstyle(8,HORIZ_DIR,3);
        outtextxy(500,260,"A & Left Arrow = To move left");
        outtextxy(500,285,"W & Up Arrow= To move upward");
        outtextxy(500,310,"D & Right Arrow= To move right");
        outtextxy(500,335,"S & Down Arrow= To move downward");
        outtextxy(480,360,"Press ESC to return back");
        ch=getch();
        if(ch==27)
        {
            cleardevice();
            Startup();
        }
        else
        {
            cleardevice();
            Help();
        }
    }
    void Startup()
    {
        int ch;
        Star(1);
        settextstyle(5,HORIZ_DIR,6);
        outtextxy(450,200,"The Escape Plan");
        settextstyle(8,HORIZ_DIR,3);
        outtextxy(500,260,"1. Start");
        outtextxy(500,285,"2. Help");
        outtextxy(500,310,"3. About this game");
        outtextxy(500,335,"4. Quit");
        outtextxy(500,360,"Enter your choice:");
        ch=getch();
        switch(ch)
        {
        case '1':
            cleardevice();
            Star(6);
            settextstyle(5,HORIZ_DIR,6);
            outtextxy(450,200,"The Escape Plan");
            settextstyle(8,HORIZ_DIR,4);
            outtextxy(550,260,"Level 1");
            outtextxy(500,295,"Press any key...");
            getch();
            g.level1();
            break;
        case '2':
            Help();
            break;
        case '3':
            About();
            break;
        case '4':
            exit(0);
            break;
        default:
            cleardevice();
            Startup();
            break;
        }
    }
};
int main()
{
    initwindow(1350,700); //To start graphics window
    StartUp s;
    s.Startup();
}
