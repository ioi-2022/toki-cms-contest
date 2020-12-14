#include "testlib.h"

#include <algorithm>
#include <vector>

const int kMaxN = 10000;
const int kMaxK = 8;
const int kMaxQ = 50000;

int main(int, char *argv[]) {
  registerValidation();

  int maxN = kMaxN, minK = 1, maxK = kMaxK, maxQ = kMaxQ;
  if (strcmp(argv[1], "k2") == 0) {
    maxN = 3;
    minK = maxK = 2;
  } else if (strcmp(argv[1], "k3") == 0) {
    maxN = 5;
    minK = maxK = 3;
  } else if (strcmp(argv[1], "k6") == 0) {
    maxN = 12;
    minK = maxK = 6;
  } else if (strcmp(argv[1], "full") == 0) {
    minK = maxK;
  }


  int N = inf.readInt(1, maxN, "N");
  inf.readSpace();
  int K = inf.readInt(minK, maxK, "K");
  inf.readSpace();
  int Q = inf.readInt(1, maxQ, "Q");
  inf.readEoln();

  for (int i = 0; i < Q; ++i) {
    std::vector<int> cards(K);
    for (int j = 0; j < K; ++j) {
      cards[j] = inf.readInt(1, N, "card");
      if (j < K - 1) inf.readSpace();
      else inf.readEoln();
    }
    std::sort(cards.begin(), cards.end());
    ensuref(std::unique(cards.begin(), cards.end()) == cards.end(),
            "Given cards are not unique.");
  }
  inf.readEof();
  return 0;
}
