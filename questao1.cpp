#include <iostream>

auto main (int argc, char *argv[]) -> int {
  int INDICE{13};
  int SOMA{0};
  int K{0};

  while (K < INDICE) {
    K = K + 1;
    SOMA = SOMA + K;
  }

  std::cout << "Resultado: " << SOMA << std::endl;

  return 0;
}
