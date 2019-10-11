//
// Created by Екатерина on 12/10/2019.
//
#include "fib.h"

int fib(int number) {

    if (number == 0 || number == 1)
        return 1;
    else return fib(number - 1) + fib (number - 2);
}