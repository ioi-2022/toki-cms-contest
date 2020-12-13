#include "partition.h"

#include <cassert>
#include <cstdio>
// BEGIN SECRET

#include <string>
// END SECRET

int main() {
  // BEGIN SECRET
  {
    std::string in_secret = "ini-adalah-masukan-rahasia";
    std::string out_secret = "ini-adalah-keluaran-rahasia";
    char secret[1000];
    assert(1 == scanf("%s", secret));
    if (std::string(secret) != in_secret) {
      printf("%s\n", out_secret.c_str());
      printf("SV\n");
      fclose(stdout);
      return 0;
    }
  }
  // END SECRET
  int N, Q;
  assert(2 == scanf("%d %d", &N, &Q));
  std::vector<int> A(N), B(N);
  for (int i = 0; i < N; ++i) {
    assert(1 == scanf("%d", &A[i]));
  }
  for (int i = 0; i < N; ++i) {
    assert(1 == scanf("%d", &B[i]));
  }
  init(N, A, B);

  // BEGIN SECRET
  {
    std::string out_secret = "ini-adalah-keluaran-rahasia";
    printf("%s\n", out_secret.c_str());
    printf("OK\n");
  }
  // END SECRET
  for (int i = 0; i < Q; ++i) {
    int X, Y;
    assert(2 == scanf("%d %d", &X, &Y));
    printf("%d\n", count_partition(X, Y));
  }
  return 0;
}
