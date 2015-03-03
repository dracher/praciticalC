//c语言用数组实现约瑟夫环
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int y(int n,int m);
    int p,q,r;
    printf("请输入参选人的个数p和开始的位置q：\n");
    scanf("%d%d",&p,&q);
    r=y(p,q);
    printf("最后那个人的初始位置是：%d\n",r);
}
int y(int n,int m)
{
    int i,j=0,s=0,l;
    int *a=(int *)malloc(sizeof(int));
    int *b=(int *)malloc(sizeof(int));
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    a[n]=-1;
    for(i=0;j!=n;i++)
    {
        if(a[i]==-1) 
            i=0;
        if(a[i]!=0 && a[i]!=-1)
            s++;
        if(s==m)
        {
            b[j]=a[i];
            a[i]=0;
            j++;
            s=0;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%5d",b[i]);
    }
    printf("\n");
    l=b[n-1];
    return l;
}