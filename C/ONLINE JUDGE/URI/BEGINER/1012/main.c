/*



Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.
Input

The input file contains three double values with one digit after the decimal point.
Output

The output file must contain 5 lines of data. Each line corresponds to one of the areas

 described above, always with a corresponding message (in Portuguese) and one space between
 the two points and the value. The value calculated must be presented with 3 digits after the decimal point.


*/


#include<stdio.h>
int main()
{

    double a,b,c,pi;
    pi=3.14159;
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("TRIANGULO: %0.3lf\n",(1.0/2.0)*a*c);
    printf("CIRCULO: %0.3lf\n",pi*c*c);
    printf("TRAPEZIO: %0.3lf\n",(1.0/2.0)*(a+b)*c);
    printf("QUADRADO: %0.3lf\n",b*b);
    printf("RETANGULO: %0.3lf\n",a*b);
    return 0;
}
