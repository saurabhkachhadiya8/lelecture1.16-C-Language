#include<stdio.h>
main(){
	
	int len;
	char name[20];
	
	printf("Enter your name : ");
	gets(name);
	
	len=strlen(name);
	printf("%d",len);
	
}
