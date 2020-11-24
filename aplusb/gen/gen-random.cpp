#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

void gen(int maxA, int maxB) {
  printf("%d %d\n", rnd.next(0, maxA), rnd.next(0, maxB));
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 0);
  int maxA = atoi(argv[1]);
  int maxB = atoi(argv[2]);
  gen(maxA, maxB);
}
