#include<stdio.h>
int main()
{
	int item_no,qty,amt;
	float r;
	printf("Enter item no and qty");
	printf("Enter rate");
	scanf("%f",&r);
	scanf("%d%d",&item_no,&qty);
	amt=r*qty;
	if(amt>100 && amt<=500)
	printf("Gift is a Key Ring");
	else if(amt<=1000)
	printf("Gift is a Leather Purse");
	else
	printf("Gift is a Calculator");
	getch();
}
