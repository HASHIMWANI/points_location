//checking whether the point lies on the x axis y axis or the origin
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the x and y co-ordinates ");
	scanf("%d %d",&x,&y);
	if(x==0 && y==0)
	printf("point lies on the origin");
	else
	{
		if(x==0 && y!=0)
		printf("point lies on y axis ");
		else
		if(x!=0 && y==0)
		printf("the point lies on the x axis ");
	}return 0;
}
