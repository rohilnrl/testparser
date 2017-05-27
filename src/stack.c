#include <stdio.h>
#include "calc.h"

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double c)
{
    if (sp < MAXVAL)
        val[sp++] = c;
    else
        printf("error: stack overflow\n");
}

double pop(void)
{
    if (sp <= 0) {
        printf("error: stack underflow\n");
        return 0.0;
    }

    return val[--sp];
}

