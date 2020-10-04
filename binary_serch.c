#include<stdio.h>
binary_search(int a[],int n,int x,int l,int h)
{
    int m=l+h-1/2;

    if(l>=h)
    {
        printf("\nelement not found");
    }
    else
    {
        if(a[m]==x)
            printf("\n%d is found at %d index",x,m);
        else if(x<a[m])
            binary_search(a,n/2,x,l,m-1);
        else
            binary_search(a,n/2,x,m+1,h);
    }

}
int main()
{int n,i,j,x;
printf("enter total number of element:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    printf("enter element in ascending order:");
    scanf("%d",&a[i]);
}
printf("\nenter element you want to find:");
scanf("%d",&x);

binary_search(a,n,x,0,n-1);
}
