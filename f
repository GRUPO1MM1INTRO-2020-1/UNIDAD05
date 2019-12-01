int f(int x,int y)
{
int A;
if ((x>=1) && (x<=6) && (x%2 != 0) && (x!=2)||(x==0))
        {
        A=31;
        }

else if ((x>=1) && (x<=6) && (x%2 == 0) && (x!=2))
        {
        A=30;
        }

else if ((x>=7) && (x<=8))
        {
        A=31;
        }

else if ((x>=9) && (x<=12) && (x%2 != 0))
        {
        A=30;
        }

else if ((x>=9) && (x<=12) && (x%2 == 0))
        {
        A=31;
        }

else if ((x==2) && (y==0))
        {
        A=28;
        }

else if ((x==2) && (y==1))
        {
        A=29;
        }

/*CASOS EXTERNOS A LOS SUGERIDOS POR EL PROFESOR*/
else if ((x==2) && (y>=2) && (y<=5))
        {
        A=(x*y)+y;
        }

else if ((x==2) && (y>=6) && (y<=8))
        {
        A=(x*2)+y;
        }

else if ((x==2) && (y>=9) && (y<=11))
        {
        A=15062001;
        }

else if ((x==2) && (y==12))
        {
        A=6012000;
        }

else
        {
        A=2020640221;
        }

return A;
}

