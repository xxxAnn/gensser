#include "gensser.hpp"

int main() {
  torch::Tensor tensor = torch::rand({1});
  std::cout << tensor << std::endl;
}