#include "testlib.h"

const int kMaxVal = 100;

int main() {
  registerValidation();
  std::string secret = inf.readLine();
  ensuref(secret == (std::string)"ini-adalah-masukan-rahasia", "Secret not found!");
  inf.readInt(0, kMaxVal, "A");
  inf.readSpace();
  inf.readInt(0, 0, "B");
  inf.readEoln();
  inf.readEof();
  return 0;
}
