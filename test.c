#include <stdio.h>

int main() {
    #ifdef _WIN32
        printf("Windows\n");
    #elif __linux__
        printf("Linux\n");
    #elif __APPLE__
        printf("macOS\n");
    #else
        printf("Unknown OS\n");
    #endif
    return 0;
}
