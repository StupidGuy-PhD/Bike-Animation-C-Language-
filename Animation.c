#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main()
{
int gd = DETECT, gm, i;
int bike = 0;
int road;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

if (graphresult() != grOk)
{
printf("Graphics initialization failed.\n");
return 1;
}

road = getmaxx();

for (i = 0; i < 6000; i++)
{
cleardevice();

//bike//
line(50, 405-bike, 100 + bike, 405);//down
line(75 + bike, 375, 125 + bike, 375);//up
line(50 + bike, 405, 75 + bike, 375);//left /
line(100 + bike, 405, 125 + bike, 375); //right /
line(150 + bike, 405, 100 + bike, 375);// right to wheel
line(75 + bike, 375, 75 + bike, 370); //chair
line(70 + bike, 370, 80 + bike, 375);  //wheel
line(80 + bike, 345, 100 + bike, 345); //handle

// Wheels//
circle(150 + bike, 405, 40);
circle(50 + bike, 405, 40);

// Road//
line(0, 446, road, 446);

// Mountain //
line(200, 446, 300, 300);
line(300, 300, 400, 446);
line(270, 350, 300, 320);
line(300, 320, 330, 350);

outtextxy(280, 270, "The Endless Ride");

//clouds//
line(100,310,160,310);
line(200,300,220,300);

bike++;
if (bike > road)
{
bike = 0;
}
delay(20);
if(kbhit()) {
getch();
break;
}
}
closegraph();
return 0;
}