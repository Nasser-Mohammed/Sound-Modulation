#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int processSound();
int recordSound();

int main(void) {
    printf("Enter command (r=record, s=stop, q=quit)");
    char input;
    while (1) {
        scanf(" %c", &input);

        if (input == 'r') {
            printf("Recording... \n");
        }
        else if (input == 's') {
            printf("Recording stopped \n");
            processSound();
            break;
        }
        else if (input == 'q') {
            printf("Quitting program");
            return 0;
        }
    }
    return 0;
}

int processSound() {
    return 0;
}

int recordSound() {
    return 0;
}