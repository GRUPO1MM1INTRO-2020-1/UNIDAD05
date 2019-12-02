/*f.c*/

int f(int x, int y){
	if ((x<=0)||(y<0)){
		return 2020640252;
	}
	else{
	
		if(x<=12 && x>=9){
			if(x%2==0){
				return 31;
			}
			else{
				return 30;
			}
		}
		
		if(x<=8 && x>=7){
			return 31;
		}
		
		if(x<=6 && x>=1){
			if(x%2==0){
				if(x/2==1){
					if(y==0){
						return 28;
					}
					if(y==1){
						return 29;
					}
					else{
						return 202064;
					}
				}
				else {
					return 30;
				}
			}
			else{
				return 31;
			}
		}
		else {
			return 2020640252;
		}
	}
}
