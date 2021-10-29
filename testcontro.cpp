#include<stdio.h>
#include<conio.h>

int main() {
	/*
	con tro va mang 1 chieu
	*/
	int n = 0;
	printf("Input array n : ");
	scanf("%d",&n);
	while (n <= 0){
		printf("Please input array n again !");
		printf("Input array n : ");
		scanf("%d",&n);
	}
	int a[n];
	for (int i = 0; i < n; i ++){
		printf("array[%d] : ",i);
		scanf("%d", &a[i]);
		
	}
	/*
	bo nho cap nhat cho mang la lien tuc a[0].... laf lien tuc nhau
	int *p;
	p+0 tro vao a[0]
	p+1 tro vao a[1]
	...................
	p+i tro vao a[i]
	--> p = &a thi (p+i) return address of a[i] (&a[i])
	
		*/
	int *p;
	p=&a[0];
	for (int i =0; i<n;i++){
		printf("\na[i] = %d   *(p+%d) = %d",i, a[i],i,*(p+i));
	}
	// input array again
	printf("\ninput array again");
	for (int i = 0; i < n; i ++){
		printf("array[%d] : ",i);
		scanf("%d", a+i);
	}
	printf("\ninput array again a");
	for (int i =0; i<n;i++){
		printf("\na[i] = %d   ",i, a[i],*(a+i));
	}
	/*
	trong c ten mang cung ching la con tro vao ptu cua mang
	int a[100] thi a cung la con tro tro vao a[0]
	--> (a+i) ~ &a[i]
	*(a+i) = a[i]
	
	*/
	
	return 0;
}

