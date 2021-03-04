#include <stdlib.h>
#include <stdio.h>

// compile with an old glibc for extra top chunk fuckery 
int main(int argc, char* argv[]) {
  printf("here's a puts: %p", puts);
  char* ptr = malloc(0x69);
  printf("here's a heap: %p", ptr);
  
  gets(ptr);
  free(ptr);
  
  unsigned int size;
  scanf("%u", &size);
  ptr = malloc(size);
  gets(ptr);
  
  scanf("%u", &size);
  ptr = malloc(size);
  gets(ptr);
  free(ptr);
}
