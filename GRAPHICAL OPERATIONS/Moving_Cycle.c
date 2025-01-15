#include <graphics.h>
#include <conio.h>
#include <dos.h>  
void drawCycle(int x, int y) {
    circle(x - 30, y, 20); // Left wheel
    circle(x + 30, y, 20); // Right wheel
    // Draw cycle frame 
    line(x - 30, y, x + 30, y);  // Horizontal frame
    line(x - 30, y, x, y - 30);  // Left diagonal frame
    line(x + 30, y, x, y - 30);  // Right diagonal frame
    // Draw pedals 
    line(x - 5, y - 15, x + 5, y - 15);  // Pedal horizontal bar
    line(x, y - 15, x, y - 25);          // Pedal center
}
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // Initialize graphics mode

    int x = 200, y = 200; // Initial position of the cycle

    while (!kbhit()) {
        cleardevice();  // Clear the screen

        drawCycle(x, y);  // Draw the cycle at new position

        delay(50); // Wait for 50ms to make the movement smooth

        x += 5; // Move the cycle to the right

        if (x > getmaxx()) {  // If the cycle reaches the screen's right end
            x = 0;  // Reset to the left end
        }
    }

    closegraph(); // Close the graphics mode
    return 0;
}
