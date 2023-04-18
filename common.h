//
// Created by haven on 4/17/2023.
//
#ifndef DATATYPES_COMMON_H
#define DATATYPES_COMMON_H

void *allocate(int num, int size);
void deallocate(void *ptr);

void print_allocation_stats();

#endif //DATATYPES_COMMON_H
