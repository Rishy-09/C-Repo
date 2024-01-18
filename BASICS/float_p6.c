# include <stdio.h>
int main()

{
    float x = 1.1;
    // comparing float value for exact equality is a bad idea as precision alters upto 6 decimalplaces.
    // so using 'f' before 1.1 below to ensure you are working with same datatype everywhere.
    while (x == 1.1f)
    {
        printf("%f\n", x);
        x = x - 0.1;
    }
    return 0;
}