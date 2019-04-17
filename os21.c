#include<stdio.h>
#include<conio.h>
int main()
{
	int t1,t2,mat,eat;
	float mpp,pfr;
	printf("Enter the time of page fault if any empty frame availabe or\nreplaced page is not modified\n");
	scanf("%d",&t1);
	printf("\nEnter the time of if the replaced page is modified\n");
	scanf("%d",&t2);
	printf("\nEnter Memory access time\n");
	scanf("%d",&mat);
	printf("\nEnter the value of \n""how many percante of the time is modified\nby the page which is to be replaced""\n");
	scanf("%f",&mpp);
	printf("\nEnter Effective access time\n");
	scanf("%d",&eat);
	printf("\nNow calculating "" Page Fault rate ""\n" );
	pfr=((eat-mat)/(((mpp/100)*t2)+(((100-mpp)/100)*t1)-mat));
	printf("the page fault rate is :- %f%%",pfr,"");
}
