#include <stdio.h>

int main()
{
    // 用数组存 5 个学生成绩并排序输出
    int score[5],i,j,temp;
    for (int i = 0; i < 5; i++)
    {
        printf("请输入第%d个学生成绩:",i+1);
        scanf("%d",&score[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (score[j]>score[j+1])
            {
                temp=score[j];
                score[j]=score[j+1];
                score[j+1]=temp;
            }
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("第%d个学生成绩:%d\n",i+1,score[i]);
    }
    
    
    
    
    return 0;
}