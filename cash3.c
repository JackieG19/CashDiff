#include<stdio.h>
#include<cs50.h>

int main(void) // more efficant
{
int modulo(int anAmount)
{ // hits each coin once, 9 hits of code
    change = anAmount
    int coins = change / 25;
    change = change % 25;

    coins += change / 10;
    change = change % 10;

    coins += change / 5;
    change = change % 5;

    coins += change / 1;
    change = change % 1; // error checker

    return coins;
}
}