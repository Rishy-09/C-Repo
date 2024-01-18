# include <stdio.h>
# include <math.h>
int main()

{
    int x, y;
   printf("Enter the point: \n");
   scanf("%d %d", &x, &y);

   if(x == 0 && y != 0){

    printf("The point lies on the y-axis.");

   }
   // yaha != ki vajah  se origin wali statement chali hai , specify karnaa jarurii hai.
   else if (y == 0 && x != 0){

    printf("The point lies on the x-axis.");
   }
   else if (x == 0 && y == 0){

    printf("The point lies on origin.");

   }
   else {

    printf("it lies in some plane and not axis.");
   }
} 