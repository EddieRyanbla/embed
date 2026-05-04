#ifndef SYSTEM_H
#define SYSTEM_H
typedef struct info
{
    int id;
    char name[20];
    char status;
    float num;
}info;
typedef struct {
    info *data;
    int count;
    int capacity;
} DeviceList;

void add_info(DeviceList *list);
void print_info(DeviceList *list);
void find_info(DeviceList *list);
void find_num_m(DeviceList *list);
void init_list(DeviceList *list, int cap);


#endif