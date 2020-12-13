#include "testlib.h"

#include <algorithm>
#include <vector>

const int kMaxN = 10000;
const int kMaxK = 8;
const int kMaxQ = 100000;

int main() {
  registerValidation();

  int N = inf.readInt(1, kMaxN, "N");
  inf.readSpace();
  int K = inf.readInt(1, std::min(N, kMaxK), "K");
  inf.readSpace();
  int Q = inf.readInt(1, kMaxQ, "Q");
  inf.readEoln();

  for (int i = 0; i < Q; ++i) {
    std::vector<int> cards(K);
    for (int j = 0; j < K; ++j) {
      cards[j] = inf.readInt(1, kMaxN, "card");
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
