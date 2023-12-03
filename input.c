#include "header.h"

char    input()
{
    struct termios old_settings, new_settings;
    tcgetattr(STDIN_FILENO, &old_settings);
    new_settings = old_settings;
    new_settings.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);

    char c;
    if (read(STDIN_FILENO, &c, 1) == 1 && usleep(300000) == 0) {
        return c;
    }
    
    tcsetattr(STDIN_FILENO, TCSANOW, &old_settings);
    return 0;
}