#include "gensser.hpp"

struct GenderDataSet : public torch::data::Dataset<GenderDataSet> {
  const Data data;

  torch::data::Example<> get(size_t index) override {
    std::string path = "data/" + data[index].first;

    cv::Mat image = cv::imread(path, cv::IMREAD_COLOR);

    cv::resize(image, image, cv::Size(64, 64));
  }  
};

int main() {
  torch::Tensor tensor = torch::rand({1});
  std::cout << tensor << std::endl;
}