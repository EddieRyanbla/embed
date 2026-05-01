int count=999;
static int global_count = 0;
void fun0(){
    count++;
    printf("fun0 count: %d\n", count);
}
static void fun1(){
    int num=0;
    num++;
    printf("fun1 count: %d\n", num);
}