// first 99 scorer in array
#include<stdio.h>
int main()
{
    int n,i,count=-1;
    printf("Enter number of players : ");
    scanf("%d",&n);
    int score[n];
    printf("Enter scores of %d players:",n);
    for(i=0;i<n;i++)
    {  
        scanf("%d",&score[i]); 
    } 
    for(i=0;i<n;i++)
    {   if (score[i]==99)
       { count=i;  
        break; }   
    } 
     if(count!=-1)
     printf("First occurence of score 99 is at %dth position",count+=1);
    else
     printf("NO one got 99 score");
    return 0;

}
