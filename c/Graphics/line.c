#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Coordinates for the start and end points of the line
    int x1 = 100, y1 = 100, x2 = 300, y2 = 200;

    // Draw the line
    line(x1, y1, x2, y2);

    // Close the graphics window
    getch();
    closegraph();

    return 0;
}
