// Eric Tran
// ericxtran77@csu.fullerton.edu
// @ericxtran77
// Partners: @marianaranki

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() == 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum = 0.0;
  bool first = true;
  for (std::string& add : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(add);
  }

  double average = sum / (static_cast<int>(arguments.size()) - 1);

  std::cout << "Average = " << average << "\n";

  return 0;
}
