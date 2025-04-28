#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int key;
  int value;
} HashItem;

typedef struct
{
  HashItem *item;
  int size;
} HashTable;

HashTable *createTable(int size)
{
  HashTable *table = (HashTable *)malloc(sizeof(HashTable));
  table->size = size;
  table->item = (HashItem *)calloc(size, sizeof(HashItem));
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
}