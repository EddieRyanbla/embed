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

会把代码提交一次 git

复盘这些知识点：

- 字符数组和字符串
- `strlen / strcpy / strcmp / strcat`
- 指针和数组的关系
- 一级指针的基本使用

### 今天写的代码

写 4 个小程序：

1. 自己实现 `my_strlen`

   ```
       int my_strlen(const char *str){
           int len=0;
           while (*str != '\0')
           {
               len++;
               str++;
           }
           return len;
       }
   int main()
   {
       char arr[]="HELLO WORLD";
       int len=my_strlen(arr);
       printf("字符串长度:%d\n",len);

       return 0;
   }
   ```

   ​

2. 自己实现 `my_strcpy`

   ```
   void my_strcpy(char *one,char *two){
       // // 第二个位置的指针赋值给第一个
       // *one = *two;
       
       // 依次复制two里的每一个值知道遇到‘\0’（包括‘\0’）
       while (*two != '\0')
       {
           *one = *two;
           one++;
           two++;
           
       }
       *one = '\0';
       
   }

   int main()
   {
       char three[]="123";
       char four[]="456";
       my_strcpy(three,four);
       printf("第一个字符串为：%s",three);
       return 0;
   }
   ```

3. 自己实现 `my_strcmp`

   ```c
   #include <stdio.h>
   // 自己实现 my_strcmp
   int my_strcmp(const char *str1, const char *str2){
       while (*str1 !='\0' && *str2 != '\0')
       {
           if (*str1 != *str2)
           {
               return *str1-*str2;
           }
           str1++;
           str2++;
       }
       return *str1-*str2;
   }
   int main()
   {
        char str1[] = "apple";
       char str2[] = "banana";
       char str3[] = "apple";

       printf("str1 vs str2: %d\n", my_strcmp(str1, str2));
       printf("str1 vs str3: %d\n", my_strcmp(str1, str3));
       return 0;
   }
   ```

   ​

4. 输入一行字符串，统计字母、数字、空格数量

   ```c
   #include <stdio.h>
   // 输入一行字符串，统计字母、数字、空格数量
   int main()
   {
       char arr[30];
       // printf("请输入字符串：%s",arr);
       // scanf("%s",arr);
       printf("请输入字符串：");
       // 用fgets读取带空格的整行输入
       fgets(arr, sizeof(arr), stdin);
       int zimu = 0;   // 字母数量
       int shuzi = 0;  // 数字数量
       int kongge = 0; // 空格数量
       int i = 0;
        printf("其中的字母为：");
      
       // 定义指针，指向字符串的开头
       char *p = arr;

       // 用指针遍历字符串，直到遇到 '\0'
       while (*p != '\0')
       {
           if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
           {
               printf("%c", *p);  // 输出当前字母
           }
           else if (*p >= '0' && *p <= '9')
           {
               shuzi++;
           }
           else if (*p == ' ')
           {
               kongge++;
           }
           // 指针向后移动，指向下一个字符
           p++;
       }

       printf("其中的数字为：%d\n", shuzi);
       printf("其中的空格数量为：%d\n", kongge);

       return 0;
   }
   ```

   ​

### 要求

不要直接抄库函数代码，先自己写，再对照改。

### 今天验收标准

你要能口头讲清：

- `sizeof` 和 `strlen` 的区别

  ````
  sizeof是算 “占了多少内存”，strlen` 是算 “字符串有多长”。
  ````

- 字符数组和字符串常量的区别

  ```
  // 字符数组
  char arr[] = "hello";
  // 字符串常量（指针指向）
  char *p = "hello";
  存储位置不同
  字符数组：存储在栈区，内容是可以修改的，比如 arr[0] = 'H';
  字符串常量：存储在只读数据段，内容是不能修改的，强行修改会直接崩溃。
  可修改性不同
  字符数组：arr[0] = 'H'; 合法，数组内容可以修改
  字符串常量：p[0] = 'H'; 非法，会触发段错误
  sizeof 结果不同
  sizeof(arr) 得到数组的总大小，比如 "hello" 会得到 6（含'\0'）
  sizeof(p) 得到指针本身的大小，32 位系统是 4 字节，64 位是 8 字节
  一句话总结：
  字符数组是 “可以改的字符串”，字符串常量是 “只读的字符串”。
  ```

- 为什么字符串处理容易越界

```
字符串以'\0'结尾，处理时依赖它来判断结束
	如果字符串里没有'\0'，strlen、strcpy 这些函数就会一直往后读 / 写，直到遇到内存里随机的'\0'，导致越界。
数组本身不检查边界
	C 语言数组不会自动检查下标是否越界，比如 char arr[5] = "1234";，你写 arr[10] = 'a'; 编译器不会报错，但会直接篡改其他内存的数据，造成程序崩溃或 bug。
scanf("%s")、gets 等函数不限制输入长度
	比如 char arr[5]; scanf("%s", arr);，如果用户输入超过 4 个字符，就会直接把多余的数据写到数组外面，导致缓冲区溢出，这也是很多安全漏洞的根源。
一句话总结：
	字符串处理靠'\0'判断结束，数组又不检查边界，一旦没控制好长度或结束符，就很容易越界访问。
```

