#include <iostream>
#include <string>

std::string reverter(const std::string& palavra) {
  std::string stringRevertida{};
  for (int i = palavra.length() - 1; i >= 0; i--) {
    stringRevertida += palavra[i];
  }
  return stringRevertida;
}

auto main (int argc, char *argv[]) -> int {
  std::string palavra{};
  std::cout << "Digite uma palavra qualquer: ";
  std::cin >> palavra;
  std::string palavraRevertida = reverter(palavra);
  std::cout << "palavra revertida: " << palavraRevertida << std::endl;
  return 0;
}
