#include<stdio.h>
main()

{
	
	int a=1;
	int n;
	
	printf("enter the valu : ");
	scanf("%d",&n);
	
	while(a<=10) {
		
		printf("%d*%d=%d\n",n,a,n*a);
	
		a++;	
	}
	
}
