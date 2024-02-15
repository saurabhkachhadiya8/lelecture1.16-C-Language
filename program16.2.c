#include<stdio.h>
main(){
	
	int length,j,a=0;
	char e[25];
	
	printf("============================= Signup hear =============================\n\n");
	// Email Address
	printf("Enter your Email address : ");
	gets(e);
	
	length=strlen(e);
	
	for(j=0;j<=length;j++){
		if(e[j]=='@'){
			if(e[j+1]=='g'&&e[j+2]=='m'&&e[j+3]=='a'&&e[j+4]=='i'&&e[j+5]=='l'&&e[j+6]=='.'&&e[j+7]=='c'&&e[j+8]=='o'&&e[j+9]=='m') a=1;
		}
	}
	
	if(a>0&&length>12){
		printf("Valid email address.");
	}else{
		printf("Invalid email address.");
	}
	
	// Password
	int len,i,u=0,l=0,n=0,s=0;
	char p[20];
	
	printf("\n\nEnter your Password : ");
	gets(p);
	
	len=strlen(p);
	
	for(i=0;i<=len;i++){
		
		if(p[i]>=65&&p[i]<=90) u++;
		if(p[i]>=97&&p[i]<=122) i++;
		if(p[i]>=48&&p[i]<=57) n++;
		if(p[i]>=33&&p[i]<=47||p[i]=='@') s++;
		
	}
	
	if(u>0&&i>0&&n>0&&s>0){
		printf("Your password is strong");
	}else{
		printf("Your password is weak");
	}
	
	char email[25],pas[20];
	
	if(a>0&&length>12&&u>0&&i>0&&n>0&&s>0){
		printf("\n\n============================= Login hear =============================\n\n");
		printf("Enter your Email address : ");
		gets(email);
		
		if(strcmp(email, e) == 0){
        	printf("Your Email address is right.\n");
        	printf("\nEnter your Password : ");
        	gets(pas);
        
        	if(strcmp(pas, p) == 0){
            	printf("Your password is right.\n");
            	printf("\nLogin successfull...\n");
        	} else {
            	printf("Your password is wrong.\n");
            	printf("\nLogin failed...\n");
        	}
    	} else {
        	printf("Your Email address is wrong.\n");
        	printf("\nLogin failed...\n");
    	}
	}
	
	
}
