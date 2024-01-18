# include <stdio.h>
int main()

{
    float r, g, b, c, m, y, k, w = 0;
    printf("Enter the values of RGB: \n");
    scanf("%f %f %f", &r, &g, &b);


    //changing values of r,g,b to :
    r /= 255;
    g /= 255;
    b /= 255;

    // finding the max. value among three.
    if (r > w){
        w = r;
    }
    if ( g > w){
        w = g;
    }
    if ( b > w){
        w = b;
    }


    c = (w - r)/ w;
    m = (w - g)/ w;
    y = (w - b)/ w;
    k = 1 - w;


    printf("The values of cmyk format are %f, %f, %f\nAnd that of k = %0.2f",c, m, y, k);

}