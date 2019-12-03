#include <stdio.h>
#include <stdlib.h>
int f(int x, int y)
{
    int n,k;
    if(x%2==0)
    {
        n=1; //par
    }
    else{
        n=0; //inpar
    }


    if ((x>=1)&&(x<=6))
    {
        if(n==1)
        {
            if (x!=2)
            {
                k=30;
            }
            else
            {
                if (y==0)
                {
                    k=28;
                }
                else if (y==1)
                {
                    k=29;
                }
                else{k=30;}
            }
        }
        else if (n==0)
        {
            k=31;
        }
    }
    else if ((x>=7)&&(x<=8))
    {
        k=31;
    }
    else if ((x>=9)&&(x<=12))
    {
        if (n==1)
        {
            k=31;
        }
        else if (n==0)
        {
            k=30;
        }
    }
    else
    {
        k=2020640302;
    }
    return k;

}
