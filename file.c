#include <stdio.h>

int main(void) {
  // �ļ�ָ��
  FILE* fp;
  char c;

  fp = fopen("hello.txt", "r");

  if (fp == NULL) {
    printf("���ļ�ʧ��\n");
    puts("���ļ�ʧ��\n");
    return -1;
  }

  c = fgetc(fp);
  printf("%c\n", c);

  fclose(fp);
}