#include<stdio.h>
int tongUoc(int n){
	int s = 0;
	for(int i = 1 ; i < n; i++){
		if(n%i == 0)
		s +=i;
	}		
	return s;
}
int main(){
	int n;
	printf("Input n:");
	scanf("%d",&n);
	printf("\nThe Perfect Number are: ");
	for (int i = 1 ; i <= n; i++){
	    if(tongUoc(i) == i)
		printf("%d ",i);
	}
	
	return 0;	
}
