#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Display* display = XOpenDisplay(NULL);
    int screen_num = XDefaultScreen(display);
    printf("%d\n", screen_num);
    return 0;
}