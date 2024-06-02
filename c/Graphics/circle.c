#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set the center and radius of the circle
    int x = 200, y = 200, radius = 100;

    // Draw the circle
    circle(x, y, radius);

    // Close the graphics window
    getch();
    closegraph();

    return 0;
}
