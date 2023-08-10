#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 释放内存
void myFree(int** ppMem) {
  printf("ppMem: %p\n", ppMem);
  if (ppMem == NULL) {
    return;
  }
  if (*ppMem != NULL) {
    free(*ppMem);
    *ppMem = NULL;
  }
}

int main(void) {
  int* p = malloc(sizeof(int));
  *p = 12;
  printf("p: %p\n", p);
  printf("*p: %d\n", *p); // 12
    // 释放内存
  free(p);
  printf("p: %p\n", p);
  printf("*p: %d\n", *p);
  printf("========================================\n");
  printf("\n");

  int* mem = malloc(sizeof(int));
  *mem = 555;
  printf("%p, %d, %p\n", mem, *mem, &mem);
  // 释放二级指针
  myFree(&mem);

  printf("%p\n", mem);
  // printf("%p, %d\n", mem, *mem /** use after free */);

  printf("========================================\n");
  printf("\n");

  // 使用 malloc 来创建数组
  int* arr = (int*) malloc(sizeof(int) * 10);

  for (int i = 0; i < 10; i++) {
    arr[i] = i * 5;
  }

  printf("arr: %p\n", arr);
  printf("arr[1]: %d\n", arr[1]);
  // 循环 arr 
  for (int i = 0; i < 10; i++) {
    printf("%d\n", arr[i]);
  }

  // 可以通过变量来创建动态长度的数组
  // int* arr2 = (int*) malloc(n * sizeof(int));


  printf("========================================\n");
  printf("\n");
  
  // strcpy()将字符串“abc”拷贝放入这段内存，完成了这段内存的初始化。
  char* str = malloc(4);
  strcpy(str, "abc");
  printf("%s\n", str);
  free(str);
  printf("%s\n", str);

  printf("========================================\n");
  printf("\n");

  int* ww;

  ww = malloc(sizeof(int) * 10);
  // 使用 realloc() 来重新分配内存
  ww = realloc(b, sizeof(int) * 2000);

}
