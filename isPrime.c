#include <stdio.h>
// 判断 101-200 有多少个素数
// 是否是素数
int isPrime(int num) {
  int flag = 0;
  for (int i = 2; i <= num/2; i++) {
    if(num % i == 0) {
      flag = 1;
      break;
    }
  }
  return flag;
}

int main(void) {
  int tt = 0;
  for (int i = 101; i <= 200; i++) {
    int res = isPrime(i);
    if (res == 0) {
      tt++;
      printf("%i是素数\n", i);
    }
  }
  // int arrLen = sizeof(result) / sizeof(result[0]);
  printf("一共有:%i个素数", tt);
}