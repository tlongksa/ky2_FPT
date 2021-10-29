#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
    int n=0 , s=0 ;
    printf("gia tri dau vao : "); 
    scanf ("%d", &n ); 
    for (int i= 1; i<=n;i++ ){
        s=s+i;
    }
    printf ("so nguyen duong dau ra : %d",n,s);
     return 0;
}
