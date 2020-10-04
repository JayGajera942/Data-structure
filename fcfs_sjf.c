#include<stdio.h>
#include<conio.h>
float awtf,attf,atts,awts;
int swt,stt;
struct 
{
    int st;
    int et;
    int bt;
    int wt;
}typedef s;

cp(s p[],int n)
{
int i;
swt=0,stt=0;
p[0].st=0;
p[0].et=p[0].bt;
p[0].wt=0;
for(i=1;i<n;i++)
{   p[i].st=p[i-1].et;
    p[i].et=p[i].st+p[i].bt;
    p[i].wt=p[i].st;
    swt+=p[i].wt;
}
stt=swt+p[n-1].et;
}

fcfs(s p[],int n)
{awtf=0;attf=0;
    cp(p,n);
awtf=(float)swt/n;
attf=(float)stt/n;

}
sjf(s p[],int n)
{awts=0;atts=0;
    int i,j;
    s t;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(p[j].bt>p[j+1].bt)
            {
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;

            }
        }
        
    }
cp(p,n);
awts=swt/(float)n;
atts=stt/(float)n;

}

int main()
{
    int n,i;
    printf("enter number of process:");
    scanf("%d",&n);
    s q[n];
    for(i=0;i<n;i++)

    {
        printf("enter brusttime for %d process:",i+1);
        scanf("%d",&q[i].bt);
    }
    
    fcfs(q,n);
    sjf(q,n);
    printf("awt of fcfs:%f\natt of fcfs:%f\nawt of sjf:%f\natt of sjf:%f",awtf,attf,awts,atts);
    if(awtf>awts)
    {
        printf("\nSjf is good");
    }
    else
    {
        printf("\nFcfs is good");
    }
    
    return 0;
}
