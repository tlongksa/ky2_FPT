#include<stdio.h>
#include<conio.h>

int main() {
	/*
	con tro
	*/
	int a;
	printf("\n a= ");
	scanf("%d", &a);
	printf("\n value  a = %d \t address of a : %ld ", a,&a);
	/*
	laf mot bien : bien con tro - pointer variable 
	con tro chua di chi bien khac
	dataType *pointerName; int *p
	note : con tro chi chua dia chi cac bien co cung kieu 
	double *px,int 
	
	*/
	int *p;
	p = &a;// p la con tro chua dia chi bien a hya con dc goi la p tro den a
			//-->p ~ &a; *p ~ a
		// p tro vao a thi se dieu khien ddk a dung p thay cho a
		//	
	return 0;
}

