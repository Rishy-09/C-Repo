#include <stdio.h>
int main ()

{
    
    do
    {
        int n, i , prod = 1, nu, number;
        int unsigned num;
        
        printf("\n\nEnter \n1. for factorial of number.\n2. for Prime or not.\n3. for odd for even.\n4. Exit the function.\n");
        scanf("%d", &n);
        switch (n)
        {
            case 1:
            
            printf("Enter the number you want to get factorial of:\n");
            scanf("%d", &num);
            for (i = 2; i <= num; i++)
            {
                prod *= i;
            }
            printf("The factorial of %d is %d\n", num, prod);
            break;

            case 3:

            
            printf("Enter any number here to get odd or even number:\n");
            scanf("%d", &nu);

            if (nu % 2 == 0){
                printf("The given number is even.\n");
            }

            else{
                printf("The given number is odd.\n");
            }
            break;
            
            case 2:

            
            printf("Enter the number to check whether the given number is prime or not.\n");
            scanf("%d", &number);
            for (int i = 2; i< number/2; i++)
            {
                if (number % i == 0){
                    printf("It is not a prime number.\n");
                    break;
                }
                else{
                    printf("It is a prime number.\n");
                    break;
                }
            }
            break;

            case 4:

            printf("You have exit the function.\n");
            exit (1);
            break;

        }

    }while (1);
    
}


// int main ()
// {
//     int class, sub, marks;
//     printf("Enter the class of student you want to give grace marks: \n");
//     scanf("%d", &class);
//     printf("\nEnter the number of subjects he/she has failed.\n");
//     scanf("%d", &sub);

//     switch (class)
//     {
//         case 1:
//         if (sub > 3){
//             printf("\nNo grace marks for the student.\n");
//         }
//         else
//         {
//             marks = 5 - sub;
//             marks = marks * 5;
//             printf("The grace marks obtained by this student is %d marks", marks);
//         }
//         break;

//         case 2:
//         if (sub > 2)
//         {
//             printf("\nNo grace marks for the student.\n");
//         }

//         else
//         {
//             marks = 5 - sub;
//             marks = marks * 5;
//             printf("The grace marks obtained by this student is %d marks\n", marks);
//         }
//         break;

//         case 3:
//         if (sub > 1)
//         {
//             printf("No grace marks for the student.\n");
//         }

//         else
//         {
//             marks = 5 - sub;
//             marks = marks * 5;
//             printf("The grace marks obtained by this student is %d marks\n", marks);
//         }

//     }
// }