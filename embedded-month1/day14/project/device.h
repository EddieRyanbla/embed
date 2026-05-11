#ifndef DEVICE_H
#define DEVICE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "device.h"
typedef struct {
    int id;
    char name[20];
    char status[10];
    float num;
} Device;

typedef struct {
    Device *data;
    int count;
    int capacity;
} DeviceList;

void init_device_list(DeviceList *list, int cap);
void add_device(DeviceList *list);
void delete_device(DeviceList *list, int id);
void find_device(DeviceList *list);
void reset_status(DeviceList *list, int id, const char *new_status);
void sort_devices(DeviceList *list);
void save_log(DeviceList *list, const char *filename);



#endif