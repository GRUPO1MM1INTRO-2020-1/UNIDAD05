int x,z,i=2,y=1;
int mcd (int a,int b)
{
    if (a<b)
    {
        x=a;
        z=b;
    }
    else
    {
        x=b;
        z=a;
    }
    do
    {
        if (x%i==0 && z%i==0)
            {
                y=y*i;
                x=x/i;
                z=z/i;
                i=2;
            }
        else i++;

    }while(i<=x);
        printf("el MCD es:%d\n",y);
}
