#include "cards.h"

#include <cstdio>

#include <vector>

int main(int argc, char *argv[]) {
  int N, K, Q;
  assert(scanf("%d %d %d", &N, &K, &Q) == 3);
  
  init_assistant(N, K);

  std::vector<std::vector<int>> queries;
  for (int i = 0; i < Q; ++i) {
    std::vector<int> cards(K);
    for (int j = 0; j < K; ++j) {
      assert(scanf("%d", &cards[j]));
    }

    queries.push_back(choose_cards(cards));

    if (static_cast<int>(queries.back().size()) != K - 1) {
      printf("Number of chosen cards does not equal to %d\n", K - 1);
      exit(0);
    }
    for (int card : queries.back()) {
      if (!binary_search(cards.begin(), cards.end(), card)) {
        printf("Card %d returned not found in given cards\n", card);
        exit(0);
      }
    }
    std::vector<int> sorted_cards = queries.back();
    std::sort(sorted_cards.begin(), sorted_cards.end());
    if (std::unique(sorted_cards.begin(), sorted_cards.end()) != sorted_cards.end()) {
      printf("Cards returned are not unique\n");
      exit(0);
    }
  }

  init_magician(N, K);

  std::vector<int> answers;
  for (int i = 0; i < Q; ++i) {
    answers.push_back(find_discarded_card(queries[i]));
  }

  for (int card : answers) {
    printf("%d\n", card);
  }
  return 0;
}
