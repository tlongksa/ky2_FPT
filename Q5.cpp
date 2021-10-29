#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  
  
  	int *a;
	int n;
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int k=1;
	for(int i=0; i<n; i++){
		if(a[i]%2==1){
			k=0;
			break;
		}
	}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:



	if(k==0) printf("0");
	else printf("1");




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
