#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Coordinates for the top-left and bottom-right corners of the rectangle
    int left = 100, top = 100, right = 300, bottom = 200;

    // Draw the rectangle
    rectangle(left, top, right, bottom);

    // Close the graphics window
    getch();
    closegraph();

    return 0;
}
