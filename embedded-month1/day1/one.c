#include <stdio.h>

int main()
{
    int n,num,min,max,sum;
    double avg;
    printf("请输入数字个数：");
    scanf("%d",&n);
    printf("输入第一个数字：");
scanf("%d", &num);
    max = num;
    min = num;
    sum=num;
for (int i = 2; i <= n; i++)
{
    printf("输入第%d个数字:", i);
scanf("%d", &num);
    if (num > max) {
    max = num;
}
if (num < min) {
    min = num;
}
    sum += num;
}
avg=(double)sum/n;
printf("sum为:%d,max=%d,min=%d,avg=%.2f",sum,max,min,avg);
    
    return 0;
}