//area calculator

//this is for github practice
#include<stdio.h>
int main()
{

	char choice;
	int hight,width,side,radious,base,length;
	printf("enter s for squre \nenter t for triangle \nenter r for rectengle \nenter c for circle ");
	scanf("%c",&choice);
	switch(choice)
	{
	case 's':
	printf("enter side of squre");
	scanf("%d",&side);
	printf("area of squre is %d",side*side);
	break;
	case 't':
	printf("enter hight  of triangle");
	scanf("%d",&hight);
	printf("enter base of triangle");
	scanf("%d",&base); 
	printf("area of triangle is %d",hight*base*0.5);
	break;
	case 'r':
	printf("enter width of rectengle");
	scanf("%d",&width);
	printf("enter length of rectangle");
	scanf("%d",&length);
	printf("area of rectengle is %d",width*length);
	break;
	case 'c':
	printf("enter redious of circle");
	scanf("%d",&radious);
	printf("area of circle is %d",radious*radious*3.14);
	break;
    }
    return 0;
}
