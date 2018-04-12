#include<stdio.h>
#include<cs50.h>

int main(void) // second efficant
{
int multipleWhiles(int anAmount) { // 24 lines goes thru
    int change = anAmount;
    int coins = 0;
    while(change >= 25)
    {
        change = change - 25;
        coins++;
    }
    while(change >= 10)
    {
        change = change - 10;
        coins++;
    }
    while(change >= 5)
    {
        change = change - 5;
        coins++;
    }
    while(change >= 1)
    {
        change = change - 1;
        coins++;
    }
    return coins;
}
}