#include <stdio.h>
#include <stdlib.h>

int main()
{

int n,k;
scanf("%d %d",&n,&k);
int array[n];
int myarr[k];
int i;
for(i=0;i<n;i++)
    scanf("%d",&array[i]);

for(i=0;i<k;i++)
    scanf("%d",&myarr[i]);

for(i=0;i<k;i++)
{
 int sum=0;
 int j=0;
 for(j;j<myarr[i];j++)
 {
  sum+=array[j];
 }
printf("%d\n",sum);

}


return 0;
}
