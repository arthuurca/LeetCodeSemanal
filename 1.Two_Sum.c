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

int hash(int key, int size)
{
  if (key < 0)
    key = -key;
  return key % size;
}

void insert(HashTable *table, int key, int value)
{
  int index = hash(key, table->size);

  while (table->item[index].key != 0 || table->item[index].value != 0)
  {
    index = (index + 1) % table->size;
  }

  table->item[index].key = key
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
}