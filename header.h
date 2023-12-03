#ifndef __GAME__
#define __GAME__

#ifndef BOARD_SIZE
# define BOARD_SIZE 20
#endif

#ifndef SNAKE_REP
# define SNAKE_REP 'o'
#endif

#if BOARD_SIZE > 50
# define BOARD_SIZE 20
#endif

# define TOP_DIRECTION 2
# define BOTTOM_DIRECTION 0
# define RIGHT_DIRECTION 3
# define LEFT_DIRECTION 1

#include <unistd.h>
#include <stdio.h>
#include <termios.h>
#include <sys/select.h>
#include <ncurses.h>

typedef struct s_snake_p
{
    struct  s_snake_p *next;
    struct  s_snake_p *prev;
    char    content;
}   t_snake_p;

typedef struct s_snake
{
    t_snake_p   *head;
    int         direction;
}   t_snake;

char    input();
int     generate_map();

#endif