# include <stdio.h>
# include <math.h>
// program for leap year.
int main()
{
    int y;
    printf("Enter a random year: \n");
    scanf("%d", &y);

    if (y % 400 == 0){

        printf("It is a leap year.\n");
    }
    else if (y % 400 != 0 && y % 100 == 0){

        printf("It is not a leap year.\n");
    }
    else if (y % 400 != 0 && y % 100 != 0 || y % 4 == 0){
        printf("It is a leap year.");
    }
}