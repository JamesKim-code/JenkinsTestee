#include<stdio.h>

struct S {
  int x;
};

void f(struct S s){
}

void test() {
  struct S s;
  f(s); // warn: passed-by-value arg contain uninitialized data
}

int main(){
  struct S a;
  test();

  printf ( "%d\n", a.x);
  return 0;
}
