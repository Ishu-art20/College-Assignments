// coordinates in array
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Coordinates(x,y): ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0)
      printf("Point lies at origin");
    else if(x==0) 
      printf("Point lies on Y-axis");
    else if(y==0) 
      printf("Point lies on X-axis");
    else if(x>0 && y>0) 
      printf("Point lies in FIRST Quadrant");
    else if(x<0 && y>0) 
      printf("Point lies in SECOND Quadrant");
    else if(x<0 && y<0) 
      printf("Point lies in THIRD Quadrant");
    else 
      printf("Point lies in FOURTH Quadrant");

    return 0;

}
