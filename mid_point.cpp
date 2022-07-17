#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void joy_062(int X1, int Y1, int X2, int Y2,int color)
{
    int dx = abs(X2 - X1);
    int dy = abs(Y2 - Y1);
    double m=dy/dx;
    if(m<1.00)
    {
        int d = dy - (dx/2);
        int x = X1, y = Y1;
        putpixel (x, y,color);
        while (x < X2)
        {
            x++;
            if (d < 0)
                d = d + dy;
            else
            {
                d += abs(dy - dx);
                y++;
            }
            putpixel (x, y,color);
        }
    }
    else
        cout<<"The slope of your given (x1,y1) & (x2,y2) is > 1 so , Plz enter valid (x1,y1) & (x2,y2) "<<endl;
}

int main()
{
    int x1, x2, y1, y2, color,w1,w2;

    cout<<"Enter the sub-window size W1 & W2"<<endl;
    cin>>w1>>w2;

    initwindow (w1, w2, "MId_point line drawing algo");

    cout<<"Please Enter the frist x , y : ";
    cin>>x1>>y1;

    cout<<"Please Enter the second x, y : ";
    cin>>x2>>y2;

    cout<<"Enter color in integer format range(1:15): ";
    cin>>color;

    joy_062(x1, y1, x2, y2,color);

    getch();
    return 0;
}
