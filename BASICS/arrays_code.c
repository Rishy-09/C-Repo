# include <stdio.h>
int main ()

{
    int *p, n;
    p = (int *)malloc(n * sizeof(int));

        int marks [30];
    for (int i = 0; i <= 29; i++)
    {
        printf("Enter the marks");  // must declare.
        scanf("%d", &marks[i]);    }

        // array initialization.
int num[6] = {1, 2, 3, 4, 5, 6};
int n[] = {1, 2, 3, 4, 5,6, 6, 56};
float press[] = {12.4, 34.5, -78.45};
//array elements in memory.
int arr[8];
// bounds checking.
int num[40], i;
for (i=0; i<= 100;i++)
{
    num[i] = i;

}
printf("%d", num[i]);
return 0;
}

// demonstration of call by value.
//     int i;
//     int marks[] = {55, 65, 75, 78, 11,90, 56};
//     for (i = 1; i<=7; i = i+2)
//     {
//         display (marks[i]);  // ye ek ek karke value bhej raha hai isliye ek normal variable bhi chal raha hai.
//     }
//     return 0;
// }
// void display (int m)
// {
//     printf("%d\n", m);  // yAHA ek ramdom value bhi print ho gi. aur us se pehle length bhi print ho rahi hai array ki.
// }


//  // demonstration of call by reference.
// void disp (int *);
//     int main ()
//     {
//         int i;
//         int marks[] = {55, 56, 78, 89, 90, 78, 45, 1, 2, 3};
//         for (i = 0; i <= 6; i++)
//         {
//             disp (&marks[i]);
//         }
//         return 0;
//     }

// void disp(int *n)
// {
//     printf("%d\n", *n);   // address le ke value print.
// }
// }

//     // pointers and arrays
//     int i =3, *x;
//     float j = 1.5, *y;
//     char k = 'c', *z;
//     printf("%d\n", i);
//     printf("%f\n", j);
//     printf("%c\n", k);
//     x = &i;
//     y = &k;  // warning: assignment from incompatible pointer type [-Wincompatible-pointer-types]
//     z = &j;  //  warning: assignment from incompatible pointer type [-Wincompatible-pointer-types]
   
//     printf("Original address in x = %u\n", x);
//     printf("Original address in y = %u\n", y);  // par address abhi bhi print ho raha hai.
//     printf("Original address in z = %u\n", z);
//     return 0;


//     // addition of a number to a pointer.
//     int i = 4, *j, *k;
//     j = &i;
//     printf("%u\n", j);
//     j = j+1;
//     j = j+9;  //  yaha ovarall +40 hua hai address mai 4*10 kyoki int hai.
//     k = j+3;  // yaha 12 add ho ke address ho gya k me store.
//   //  k = 3+990; // warning: assignment makes pointer from integer without a cast [-Wint-conversion]
//     printf("%u %u\n", j, k);  // hala ki print kar ke 993 value de raha the k.

//     int i = 4, *j , *k;
//     // subtraction of a number from a pointer.
//     j = j-2;
//     j = j-5;
//     k = j-6;
//     printf("%d %u\n", j, k); //  yaha ek mai value ek mai uska addresshi print ho gya.

//     int i = 4, *j , *k;
//     // subtraction of a number from a pointer.
//     j= &i;
//     printf("%d\n", j); 
//     j = j-2;
//     j = j-5;
//     k = j-6;  
//     printf("%d %d\n", j, k); //  yaha address print ho raha hai.

// int main()
// {
// // subtraction of a pointer from other pointer.
// int arr[] = {10, 20, 30, 45, 67, 56, 74};
// int *i, *j;
// i = &arr[1];
// j = &arr[5];
// printf("%d %d\n", i, j);  // ye addresses ko subtract kara to 4 hua jo ki actual mai 24 ka gap tha par jaise add hua vaisa hi kaaaam hai.
// printf("%d %d\n", j-i, *j - *i);  // yaha value subtract ho gyi hai bas. 56 - 20.
// return 0;
// }

// // subtraction of a pointer from other pointer.
// int arr[] = {10, 20, 30, 45, 67, 56, 74};
// int *i, *j;
// i = &arr[1];
// j = &arr[5];
// printf("%d %d\n", i, j);  // ye addresses ko subtract kara to 4 hua jo ki actual mai 24 ka gap tha par jaise add hua vaisa hi kaaaam hai.
// printf("%d %d\n", j-i, *j - *i);  // yaha value subtract ho gyi hai bas. 56 - 20.
// return 0;

// // comparison of two pointers.
// int arr[] = {10, 20, 36, 72, 45, 36};
// int *j , *k;                  // you cant do product of a constant and a pointer., additon of two pointers, division ofa pointer with a constant.
// j = &arr[4];
// k = (arr + 4);
// if (j == k)        
// {
//     printf("The two pointers point to the same location.\n");
// }
// else{
//     printf("They do not.\n");
// }
// printf("%u", j + k);   // invalid operands to binary + (have 'int *' and 'int *') ye laggao tabhi. int printf(const char * restrict format, ... ); ye general hoti hai to change karke ho sakta hai.
// return 0;


// // two ways in which we can access the elements of this array.

//     // first way.
    
//     int num[] = {24, 34, 12, 44, 56, 17};
//     int i;
//     for (i = 0; i <= 5; i++)
//     {
//         printf("Address  = %u\n", &num[i]);
//         printf("Element is %d\n", num[i]);
//     }

//      // second way.      [using pointers]
//     int num[] = {24, 34, 12, 44, 56, 17};
//     int i, *j;
//     j = &num[0]; // assign address of zeroth element .
//     for (i = 0; i<= 5; i++)
//     {
//         printf("Address is %d\n", j);
//         printf("Element is %d\n", *j);
//         j++; // increment pointer to point to next location.
//     }

//     void display (int *, int);
// int main()
// {
//     //Passing an entire array to a function.
//     int num[] = {24, 34, 44, 12, 56, 17};
//     display(&num[0], 6);  // it is necessary to pass the total number of elements too varna would not know when to terminate the for loop.
//     return 0;
// }
// void display (int *j, int n)
// {
//     int i;
//     for (i = 0; i<= n-1; i++){
//         printf("element = %d\n", *j);
//         j++;
//     }
// }
//  // notation for array element to access.
//    /* num[i];
//     *(num+i);
//     *(i+num);
//     i[num];*/

//        int num[] = {24, 34, 12, 44, 56, 17};
//     int i;
//     for (i = 0; i <= 5; i++)
//     {
//         printf("Address  = %u\n", &num[i]);
//         printf("Element is %d %d ", num[i], *(num + i));
//         printf("%d %d\n", *(i + num), i[num]);
//     }
//     return 0;

// //int char mixed[100];  //  two or more data types in declaration specifiers
// int main()
// {
//     // mixed has some char and some int values.
//     int a[10], i;
//     for (i = 1; i<= 10; i++)
// {
//     scanf("%d", a[i]); // & nahi lagayaa.
//     printf("%d\n", a[i]);
// }
//   int size;
//     scanf("%d", &size); // input hi nahi le rha size error. 
//     int arr[size];
//     for (int i = 1; i <= 10; i++)
//     {
//         scanf("%d", &arr[i]);
//         printf("%d\n", arr[i]);
//     }

//      int i, a = 2, b = 3;
//   int arr[ 2 + 3 ];   // yaha ye sahi hai koi error nahi.
//   for (i = 0; i < a+b; i++)
//   {
//     scanf("%d", &arr[i]); // chal raha hai no error
//     printf("%d\n", arr[i]);
//   }

// int a = {0};          // warning: excess elements in scalar initializer
//                           //  int a = {0, 1, 2, 2, 3, 4, 5,89, 6};
//     for (int i = 0; i<= 10;i++)
//     {
//         a[] = i;
//         printf("%d", a[]);
//     }