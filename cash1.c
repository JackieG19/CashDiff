#include<stdio.h>
#include<cs50.h>

int main(void) // 3rd efficant
{
int oneWhile(int anAmount) { // 33 process
    amount = anAmount;
    int coins = 0;
    while(amount > 0) {
        if(amount >= 25) { // 91 - 25 , hits 10 line
            coins++;
            amount -= 25;
        } else if(amount >= 10) {
            coins++;
            amount -= 10;
        } else if(amount >= 5) {
            coins++;
            amount -= 5;
        } else {
            coins++;
            amount -= 1;
        }
    }
    return coins;
}