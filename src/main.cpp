#include <torch/torch.h>
#include <iostream>

int main() {
  torch::Tensor tensor = torch::rand({1});
  std::cout << tensor << std::endl;
}