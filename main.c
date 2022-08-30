#include <stdio.h>

int main(void) {
  // int a = 1;       // 定义一个int型变量
  // int *p = &a;     // 定义一个int型指针p，&a表示对a取地址，指针p的内容是a的地址
  // printf("%p\n", &a);      // 打印a的地址
  // printf("%p\n", p);       // 打印指针p指向的地址
  // printf("%i\n", *p);      // 打印指针p 指向的地址的值

  // char c[5] = {1, 2, 3, 4, 5};  // 定义一个char型数组，这里的a实质上是一个指针，指向这个数组的首元素a[0]的指针
  // char *q = c;
  // printf("%d\n", *q);        // 输出1 --> a[0]
  // printf("%d\n", *(q + 1));  // 输出2 --> a[1]
  // printf("%d\n", *q + 1);

// 常量指针是你不想别人通过你的指针去改指针指向的值
  int a = 1;
  int const *p = &a;
  a++;
  printf("*p: %i\n", *p);  
  printf("a: %i\n", a);  

// 指针常量是你不想别人改你的指针里的值
  int a = 1;
  int * const p = &a;
  (*p)++;
  printf("*p: %i\n", *p);  
  printf("a: %i\n", a);  
}