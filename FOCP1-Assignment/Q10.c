#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter number of students : ");
    scanf("%d",&n);
    int score[n];
    printf("Enter scores of %d students:",n);
    for(i=0;i<n;i++)
    {  
        scanf("%d",&score[i]); 
    } 
    for(i=0;i<n;i++)
    {   if (score[i]==99)
       {  count++; 
          printf("Student%d scored 99\n",i+1);
       }   
    } 
     if(count>0)
     printf("Number of Students scored 99: %d",count);
    else
     printf("NO Player scored 99");
    return 0;
}