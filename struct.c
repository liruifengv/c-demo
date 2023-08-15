#include <stdio.h>
#include <string.h>

struct fraction {
  int numerator;
  int denominator;
};

struct car {
  char* name;
  float price;
  int speed;
};

struct turtle {
  char* name;
  char* species;
  int age;
};

void happy(struct turtle* t) {
  // (*t).age = (*t).age + 1;
  t->age = t->age + 1;
};

int main(void) {
  struct fraction f1;

  f1.numerator = 22;
  f1.denominator = 7;

  printf("The fraction is %d/%d\n", f1.numerator, f1.denominator);

  printf("========================================\n");
  printf("\n");

  // 直接复制，成员属性数量和顺序必须一致 
  struct car saturn = {"Saturn SL/2", 16000.99, 175};

  // 否则就需要指定成员属性的名字
  struct car saturn2 = {.speed=172, .name="Saturn SL/2"};

  // 可以同时定义 struct 和声明变量
  struct book {
    char title[500];
    char author[100];
    float value;
  } b1;

  // 如果此 struct 只会被用到一次，可以省略类型名，直接声明变量
  struct {
    char title[500];
    char author[100];
    float value;
  } b2;

  printf("========================================\n");
  printf("\n");

  struct book2 {
    char title[500];
    char author[100];
    float value;
  };
  // struct 也可以定义指针，p1 指针，指向 struct book2 类型的实例
  struct book2* p1;

  printf("========================================\n");
  printf("\n");

  // struct 有内存对齐，int 是4, char 是 1, char* 是 8，所以 struct 的大小是 8 * 3 = 24
  // 多出来的空间采用空位填充。
  struct foo {
    int a;
    char* b;
    char c;
  };
  printf("%d\n", sizeof(struct foo)); // 24

  // 按照顺序，char 是 1, int 是 4, char* 是 8，char + int + padding 是 8, 加上 char* 是 16
  struct bar {
    char c;
    int a;
    char* b;
  };
  printf("%d\n", sizeof(struct bar)); // 16

  printf("========================================\n");
  printf("\n");

  // struct 的复制 
  struct cat { char name[30]; short age; } a, b;

  strcpy(a.name, "Hula");
  a.age = 3;

  b = a;
  b.name[0] = 'M';

  printf("%s\n", a.name); // Hula
  printf("%s\n", b.name); // Mula

  printf("========================================\n");
  printf("\n");

  struct cat2 { char* name; short age; } a2, b3;

  a2.name = "Hula";
  a2.age = 3;

  printf("%s\n", a2.name); // Hula

  b3 = a2;
  b3.name = "Mula";
  printf("%s\n", b3.name);
  printf("%s\n", a2.name);

  printf("========================================\n");
  printf("\n");


  struct turtle myTurtle = {"MyTurtle", "sea turtle", 99};
  happy(&myTurtle);
  printf("Age is %i\n", myTurtle.age);

}

