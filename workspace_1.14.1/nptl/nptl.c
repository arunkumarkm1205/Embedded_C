#include<stdio.h>

void main()
{
   int a[100];
  int c=0,z=0,j;
  for(int i=0;i<100;i++)
  {
       scanf("%d",&a[i]);
        if(a[i]==-1)
           break;
  }
  printf("\n");
  for(int i=0;a[i]!=-1;i++)
       printf("%d ",a[i]);

  for(int i=0;a[i]!=-1;i++)
  {
     if(a[i]==1)
     {
       for( j=i;a[j]!=-1;j++)
       {
         if(a[j]==0)
           c++;
       }
    printf(" \n hello %d\n",c);
     }
     printf(" \n hello %d\n",c);
       for(int k=j;a[k]!=1;k--)
         if(a[k]==0)
           c--;
    break;
  }

  printf("hi %d",c);
}
