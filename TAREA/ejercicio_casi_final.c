int f(int x, int y)
{
    int n,K;
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
                K=30;
            }
            else
            {
                if (y==0)
                {
                    K=28;
                }
                else if (y==1)
                {
                    K=29;
                }
                else{K=30;}
            }
        }
        else if (n==0)
        {
            K=31;
        }
    }
    else if ((x>=7)&&(x<=8))
    {
        K=31;
    }
    else if ((x>=9)&&(x<=12))
    {
        if (n==1)
        {
            K=31;
        }
        else if (n==0)
        {
            K=30;
        }
    }
    else
    {
        K=2020640302;
    }
    return K;

}
