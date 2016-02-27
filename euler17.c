#include <stdio.h>

int lettersIn(int num);

int main(void)
{
    int sum = 0;
    int max;
    printf("max:\n");
    scanf("%d", &max);
    for (int i = 1; i <= max; i++)
    {
        sum+= lettersIn(i);
    }
    printf("%d\n", sum);
    return 0;
}

int lettersIn(int num)
{
    if (num < 0)
    {
        printf("Error: lettersIn was passed negative integer\n");
        return 0;
    }
    else if (num > 1000)
    {
        printf("Error: lettersIn was passed integer greater than 1000\n");
        return 0;
    }
    else if (num == 0)
    {
        return 0;
    }
    else if (num < 20)
    {
        switch(num)
        {
            case 1: // one
            case 2: // two
            case 6: // six
            case 10: // ten
                return 3;
            case 4: // four
            case 5: // five
            case 9: // nine
                return 4;
            case 3: // three
            case 7: // seven
            case 8: // eight
                return 5;
            case 11: // eleven
            case 12: // twelve
                return 6;
            case 15: // fifteen
            case 16: // sixteen
                return 7;
            case 13: // thirteen
            case 14: // fourteen
            case 18: // eighteen
            case 19: // nineteen
                return 8;
            case 17: // seventeen
                return 9;
        }
    }
    else if (num < 100)
    {
        switch(num/10) // tens digit
        {
            case 4: // forty X
            case 5: // fifty X
            case 6: // sixty X
                return 5 + lettersIn(num%10);
            case 2: // twenty X
            case 3: // thirty X
            case 8: // eighty X
            case 9: // ninety X
                return 6 + lettersIn(num%10);
            case 7: // seventy X
                return 7 + lettersIn(num%10);
        }
    }
    else if (num < 1000)
    {
        if (num%100 == 0)
            return lettersIn(num/100) + 7;
                             /*   X  hundred    */
        else
            return lettersIn(num/100) + 7 + 3 + lettersIn(num%100);
                             /*   X  hundred and Y */
    }
    else
    {
        return 11; // one thousand
    }
}
