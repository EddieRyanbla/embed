#include <stdio.h>
#include <stdlib.h>
// 1. 动态创建二维数组（简化版）
// 用：
// - malloc
// - 二级指针
void createArray(int ***arr,int row,int col){
    *arr=(int**)malloc(row*sizeof(int*));
    if (*arr == NULL)
    {
        printf("内存分配失败！\n");
        exit(1);
    }
    for(int i=0;i<row;i++){
        (*arr)[i]=(int*)malloc(col*sizeof(int));
        if ((*arr)[i] == NULL)
        {
            printf("内存分配失败！\n");
            exit(1);
        }
    }
}
void freeArray(int **arr,int row){
    for(int i=0;i<row;i++){
        free(arr[i]);
    }
    free(arr);
}
int main()
{
    int **arr;
    int row=3,col=4;
    createArray(&arr,row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=i*col+j+1;
        }
    }
    printf("动态创建的二维数组：\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}