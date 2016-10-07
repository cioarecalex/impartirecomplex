#include <stdio.h>
#include <stdlib.h>
#include "complex.h"
int main()
{
    cmx a;
    a.re=1;
    a.im=1;
    cmx b;
    b.re=1;
    b.im=-1;
    cmx c = impartire(a,b);
    printf("%f  + i * %f \n",c.re,c.im);
    return 0;
}
