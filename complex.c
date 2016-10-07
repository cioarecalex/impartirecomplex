#include "complex.h"
#include <stdio.h>
#include <stdlib.h>

cmx impartire(cmx x,cmx y){
    cmx z;
    if(y.re==0 && y.im == 0){
        z.re=0;
        z.im=0;
        printf("Error : division by 0 \n");
        return z;
    }
    else{
        z.re = (x.re*y.re + x.im*y.im)/(y.re*y.re+y.im*y.im);
        z.im = (x.im*y.re - x.re*y.im)/(y.re*y.re + y.im*y.im);
        return z;
    }
}
