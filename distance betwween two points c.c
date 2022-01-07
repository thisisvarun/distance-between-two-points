/*A C Program to calculate the distance between two points*/
#include <stdio.h> 
#include <math.h>
int main( )
{
	int x1,x2,y1,y2;
	float distance; 
	printf("enter values of x1,x2,y1,y2");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("the distance between two points is%f",distance);
	return 0;
}
