#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a = 1;       // 定义一个int型变量
  int *p = &a;     // 定义一个int型指针p，&a表示对a取地址，指针p的内容是a的地址
  printf("a address is %p\n", &a);      // 打印a的地址
  printf("point-p point address: %p\n", p);       // 打印指针p指向的地址
  printf("p point address's value: %i\n", *p);      // 打印指针p 指向的地址的值

  printf("========================================\n");
  printf("\n");

  char c[5] = {1, 2, 3, 4, 5};  // 定义一个char型数组，这里的c实质上是一个指针，指向这个数组的首元素c[0]的指针
  char *q = c;
  printf("%d\n", c[0]);      // 输出1 --> c[0]
  printf("%d\n", *q);        // 输出1 --> c[0]
  printf("%d\n", *(q + 1));  // 输出2 --> c[1]
  printf("%d\n", *q + 1);    // 输出2 --> c[0] + 1

  printf("========================================\n");
  printf("\n");

  int dd = 1;
  int const *pdd = &dd; // const 修饰 int，表示指针指向的值不能改，但是指针指向的地址可以改
  dd++;
  // (*pdd)++;  // error: read-only variable is not assignable
  int other = 888;
  pdd = &other; // 可以改指针指向的地址
  printf("&dd: %p\n", &dd);
  printf("pdd: %p\n", pdd);
  printf("*pdd: %i\n", *pdd);
  printf("dd: %i\n", dd);

  printf("========================================\n");
  printf("\n");

  int ee = 1;
  int* const r = &ee; // const 修饰 int*，表示指针指向的地址不能改，但是指针指向的值可以改
  (*r)++; // 可以修改指针指向的值
  int other2 = 888;
  // r = &other2; // error: assignment of read-only variable 'r' 不能改指针指向的地址
  printf("*r: %i\n", *r);  
  printf("ee: %i\n", ee);  
}