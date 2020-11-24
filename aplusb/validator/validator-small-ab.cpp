#include "testlib.h"

const int kMaxVal = 10;

int main() {
  registerValidation();
  std::string secret = inf.readLine();
  ensuref(secret == (std::string)"ini-adalah-masukan-rahasia", "Secret not found!");
  inf.readInt(0, kMaxVal, "A");
  inf.readSpace();
  inf.readInt(0, kMaxVal, "B");
  inf.readEoln();
  inf.readEof();
  return 0;
}
