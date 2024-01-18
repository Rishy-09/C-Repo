# include <stdio.h>
# include <conio.h>
# include <math.h>
// program for triangle type.
int main()
{
    int a, b, c;
    printf("Enter the sides of a triangle: \nFirst side: ");
    scanf("%d", &a);
    printf("\nSecond side: ");
    scanf("%d", &b);
    printf("\nThird side: ");
    scanf("%d", &c);


    if (a == b && b == c && c == a){
        printf("It is an aquilateral triangle.");
    }
    else if ( a == b || b == c || a == c){
        printf("It is an isosceles triangle.");
    }
    else if ( a != b && b != c && a != c){
        printf("It is either a right angled or scalene triangle.\n\n");
        
        if (pow(a, 2) == pow(b, 2) + pow(c, 2) ||pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2)){
            printf("It is a right angled triangle.");

        }
        else {
            printf("It is a scalene triangle.");
        }
    }
}