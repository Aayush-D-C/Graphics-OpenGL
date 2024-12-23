#include<iostream>
#include<conio.h>
#include"graphics.h"

void ddaline(int x1, int y1, int x2, int y2){
    int dx = x2-x1;
    int dy = y2-y1;
    
    int steps;

    float x = x1;
    float y = y1;
    
    if(abs(dx)>abs(dy)){
        steps = abs(dx);
    }
    else{
        steps = abs(dy);
    }

    float xinc = x/steps;
    float yinc = y/steps;

    putpixel(round(xinc),round(yinx),WHITE);

    for(int i<0; i<steps; i++){
        x = x + xinc;
        y = y + yinc;
        putpixel(round(x),round(y),WHITE);
    }
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x1, y1, x2, y2;
    cout << "Enter two end points (x1, y1, x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;

    // Call the DDA line-drawing function
    ddaline(x1, y1, x2, y2);

    getch(); // Wait for user input
    closegraph(); // Close the graphics mode
    return 0;
}
