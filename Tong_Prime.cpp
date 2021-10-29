#include <stdio.h>
int main(){
	int n, i , j , k, s=0;
	printf("Input n: "); scanf("%d",&n);
	for(i=2;i<=n;i++){
		k=0;
		for(j=2;j<i;j++){
			if(i%j==0)
			k=1;			
		}
//		if(k==0)
//	    	s+=i;
	}
	printf("Total all prime numbers from 1 to %d = %d",n, k);
	return 0;
}
