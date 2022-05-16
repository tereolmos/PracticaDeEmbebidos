#include "funcion.h"


int running (int a)
{
    int b=100;
    int e=2;
    long c=0;
    float d=0;

    c=add(a,f);
    printf("Add: %ld\n",c);

    c=subs(c,b);
    printf("Subs: %ld\n",c);

    c=multip(c,e);
    printf("Multip: %ld\n",c);

    d=division(c,b);
    printf("Division: %f\n",d);

    e=(int)d;
    return e;
}