# include <stdio.h>
# include <math.h>
int main()
// practice.
{
    int rs, a, b, c, d, e, f, g;
    printf("Enter the amount: \n");
    scanf("%d", &rs);

    if (rs >= 500){

        a = rs / 500;
        rs = rs % 500;
        printf("No. of notes of 500 are: %d\n", a);
        
    }

    if (rs >= 100){

        b = rs / 100;
        rs = rs % 100;
        printf("No. of notes of 100 are: %d\n", b);
        
    }
     
    if (rs >= 50){

        c = rs / 50;
        rs = rs % 50;
        printf("No. of notes of 50 are: %d\n", c);
        

     }

     

    if (rs >= 10){
            
        d = rs / 10;
        rs = rs % 10;
        printf("NO. of notes of 10 are: %d\n", d);
        
    }

    if (rs >= 5){

        e = rs / 5;
        rs = rs % 5;
        printf("NO. of notes of 5 are: %d\n", e);
        
    }

    if (rs >= 2){

        f = rs / 2;
        rs = rs % 2;
        printf("NO. of notes of 2 are: %d\n", f);
            
    }

    if ( rs >= 1){

        g = rs / 1;
            printf("No. of notes of 1 are: %d", g);
    }

     
     return 0;
}   