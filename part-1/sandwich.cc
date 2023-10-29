// Eric Tran
// ericxtran77@csu.fullerton.edu
// @ericxtran77
// Partners: @marianaranki

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return -1;
  }

  std::string protein;
  protein = {arguments.at(1)};
  std::string bread;
  bread = {arguments.at(2)};
  std::string condiment;
  condiment = {arguments.at(3)};

  std::cout << "Your order: \n"
            << "A " << protein << " sandwich on " << bread << " with "
            << condiment << ".";

  return 0;
}
