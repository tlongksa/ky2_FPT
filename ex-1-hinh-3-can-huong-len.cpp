#include <stdio.h>
 int main(){
 	int n,i;
 	printf ("\nso dong ");
 	scanf ("%d",&n);
 	  for (i=1;i<=n;i++){
 	  	for(int x=10;x>=i;x--){
 	  		printf (" ");
		   }
	  	for (int j=1;j<=i;j++){
 	  	 printf (" *");
		}printf ("\n");
	   }
 	
 }
