#include <iostream>
#include <vector>

std::vector<int> sequenciaFibonacci(int n) {
  std::vector<int> fibonacci = {0, 1};
  while (fibonacci.back() < n) {
    fibonacci.push_back(fibonacci[fibonacci.size() - 1] + fibonacci[fibonacci.size() - 2]);
  }
  return fibonacci;
}

bool verificaPertence(int n, std::vector<int>& sequencia) {
  std::vector<int>::iterator iterador = sequencia.begin();
  for (; iterador != sequencia.end(); ++iterador) {
    if (n == *iterador) {
      return true;
    }
  }
  return false;
}

auto main (int argc, char *argv[]) -> int {

  int numero;
  std::cout << "Informe um número para verificar se pertence à sequência de fibonacci: ";
  std::cin >> numero;

  std::vector<int> sequencia = sequenciaFibonacci(numero);

  std::cout << "sequência gerada: ";
  for (const auto& item : sequencia) {
    std::cout << item << ", ";
  }
  std::cout << std::endl;

  if (verificaPertence(numero, sequencia)) {
    std::cout << "Numero " << numero << " pertence à sequência de fibonacci" << std::endl;
  } else {
    std::cout << "Numero " << numero << " NÃO pertence à sequência de fibonacci" << std::endl;
  }
  
  return 0;
}
