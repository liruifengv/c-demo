#include <stdio.h>

#define LIMIT 400

enum colors {RED, GREEN, BLUE};

int main(void) {
  printf("%d\n", RED); // 0
  printf("%d\n", GREEN);  // 1
  printf("%d\n", BLUE);  // 2

  printf("%d\n", LIMIT); // 400

  printf("This function: %s\n", __func__);
  printf("This file: %s\n", __FILE__);
  printf("This line: %d\n", __LINE__);
  printf("Compiled on: %s %s\n", __DATE__, __TIME__);
  printf("C Version: %ld\n", __STDC_VERSION__);

  #if __STDC_VERSION__ != 201112L
    #error Not C11
  #endif
  
}

