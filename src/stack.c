#include <stdio.h>
#include <calc.h>

#define MAXVAL 100

static int sp = 0;
static double val[MAXVAL];

void push(double c)
{
    if (sp >= MAXVAL) {
        printf("error: stack overflow, can't push %g\n", c);
        return;
    }
    
    val[sp++] = c;
}

double pop(void)
{
    if (sp <= 0) {
        printf("error: stack underflow\n");
        return 0.0;
    }
    
    return val[--sp];
}

