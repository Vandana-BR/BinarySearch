#include <stdio.h>

int main()
{
    int i,n,a[25],low,mid=0,high,key;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);}
    printf("enter key element to be search:");
    scanf("%d",&key);
    low=0;high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
            {
            printf("succesfull search and is found in the position %d:",mid+1);

             return;}
        else if (key<a[mid])
            high=mid-1;
        else if(key>a[mid])
             low=mid+1;
    }
    printf("unsuccesfull");
    return 0;
}
