#include<stdio.h>
void main()
{
	int a[50],i,j,n,c,temp;
	printf("Enter the Capacity of ship :: ");
	scanf("%d", &c);
	printf("Enter the no. of containers you wish to load:: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        printf("Enter the weight of container %d ::",i+1);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                temp =  a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }int count=0;
    while(i<n&&c>=a[i])
    {
	c=c-a[i];
    count=count+1;
    }
    printf("\n possible no. of containers that can be loaded are :: %d",count);
}
