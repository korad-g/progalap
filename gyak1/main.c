#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("int : %d\n",6);
    printf("float : %lf\n",9.6);
    printf("double : %f\n",6.3);
    printf("float.3 %.3f\n",6.5578);
    printf("character : %c\n",'d');
    printf("string : %s\n","pelda szoveg");

    int a=3;
    int b=9;
    int c;
    c=a+b;
    printf("sum of %d and %d = %d\n",a,b,c);
    //különbség, négyzetük összege, összegük négyzete szorzat

    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("Negyzet osszeg %d\n",a*a + b*b);
    printf("osszeg negyzete %d\n",(a+b)*(a+b));

    return 0;
}
