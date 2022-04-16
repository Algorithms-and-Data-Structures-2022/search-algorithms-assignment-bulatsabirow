#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    for (int i = 0;i < data.size() - 1;i++){
      for (int j = i; j < data.size();j++){
        if (data[i] + data[j] == sum){
          return std::make_pair(i, j);
        }
      }
    }
    return std::nullopt;
  }

}  // namespace assignment