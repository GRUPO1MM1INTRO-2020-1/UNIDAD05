int f(int x, int y){
if(x>=1 && x<=12 && y==0 || y==1){
        if(x == 2 && y == 0){
        return 28;
        }else if(x == 2 && y == 1){
        return 29;
        }else if(x == 7 || x == 8){
        return 31;
        }else{
                if (x%2==0){
                        if (x!=2 && x>=1 && x<=6){
                        return 30;
                        }else if(x>=9 && x<=12){
                        return 31;
                        }
                }else{
                        if (x>=1 && x<=6){
                        return 31;
                        }
                        if (x>=9 && x<=12){
                        return 30;
                        }
        }
}
}else{
printf("Los datos de x ^ y no corresponden\n al intervalo establecido\n");
printf("\nCreadora: Laura Giselle\n");
return 0;
}
}
