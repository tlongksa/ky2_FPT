/*#include <stdio.h>
 int main(){
 	int n,i;
 	printf ("\nso dong ");
 	scanf ("%d",&n);
 	  for (i=1;i<=n;i++){
 	  	for(int x=1;x<=i;x++){
 	  		printf ("  ");
		   }
	  	for (int j=10;j>=i;j--){
 	  	 printf (" *");
		}printf ("\n");
	   }
 	
 }*/
// tam giác rong
#include <stdio.h>
#include <conio.h>
int main ()
{
    int i, n, k, j;
    printf ("Nhap n: "); scanf ("%d", &n);
    for ( i = n; i > 0; i --)
    {
        printf ("\n");
        for (j = i - 1; j > 0; j --)
            printf (" ");
        for (k = i-j -1; k < n; k ++)
            printf ("*");
    }
    return 0;
} 
//
