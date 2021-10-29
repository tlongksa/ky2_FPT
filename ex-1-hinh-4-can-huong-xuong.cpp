#include <stdio.h>
 int main(){
 	int n,i;
 	printf ("\nso dong ");
 	scanf ("%d",&n);
 	  for (i=1;i<=n;i++){
 	  	for(int x=1;x<=i;x++){
 	  		printf (" ");
		   }
	  	for (int j=10;j>=i;j--){
 	  	 printf (" *");
		}printf ("\n");
	   }
 	
 }
