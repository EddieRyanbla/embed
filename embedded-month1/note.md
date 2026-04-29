# day1

### 今天写的代码

写 3 个小程序：

1. 输入一组整数，求最大值、最小值、平均值

   ```c
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
   ```

   ​

2. 用数组存 5 个学生成绩并排序输出

   ```
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
       
       return 0;
   }
   ```

   ​

3. 用指针遍历数组并输出

   ```
   #include <stdio.h>

   int main()
   {
       // 用指针遍历数组并输出
       int arr[5]={10,20,30,40,50};
       int *p=arr;
       for (int i = 0; i < 5; i++)
       {
           printf("第%d个元素:%d\n",i+1,*(p+i));
       }
       
       return 0;
   }
   ```

   ​

### 今天验收标准

你要做到：

- 会用 gcc 编译单个 `.c` 文件
- 会运行程序
- 会把代码提交一次 git
- `bug_and_notes.md` 里写下今天遇到的问题

### 今天记录什么

在笔记里写：

- gcc 最基础命令怎么用
- 数组名和指针遍历有什么区别
- 今天出过什么错，怎么解决的

# day2

会把代码提交一次 git（安好，上传）

复盘这些知识点：

- 字符数组和字符串
- `strlen / strcpy / strcmp / strcat`
- 指针和数组的关系
- 一级指针的基本使用

### 今天写的代码

写 4 个小程序：

1. 自己实现 `my_strlen`
2. 自己实现 `my_strcpy`
3. 自己实现 `my_strcmp`
4. 输入一行字符串，统计字母、数字、空格数量

### 要求

不要直接抄库函数代码，先自己写，再对照改。

### 今天验收标准

你要能口头讲清：

- `sizeof` 和 `strlen` 的区别
- 字符数组和字符串常量的区别
- 为什么字符串处理容易越界