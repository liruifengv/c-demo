#include <stdio.h>

int main(void) {
  // 文件指针
  FILE* fp;
  char c;

  fp = fopen("hello.txt", "r");

  if (fp == NULL) {
    printf("打开文件失败\n");
    puts("打开文件失败\n");
    return -1;
  }

  c = fgetc(fp);
  printf("%c\n", c);

  fclose(fp);
}