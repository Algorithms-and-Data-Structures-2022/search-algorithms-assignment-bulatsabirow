#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& data, int search_element) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.
    int low = 0;
    int high = data.size() - 1;
    while (low <= high){
      if (data[low] == search_element){
        return low;
      }
      if (data[high] == search_element){
        return high;
      }
      low++;
      high--;
    }
    return std::nullopt;
  }

}  // namespace assignment