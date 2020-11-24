#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

void gen(int a) {
  printf("%d 0\n", rnd.next(0, a));
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 0);
  int maxA = atoi(argv[1]);
  gen(maxA);
}
