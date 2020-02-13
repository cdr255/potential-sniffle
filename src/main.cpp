#include <iostream>
#include <string>
#include <vector>
#include "flagpole.h"
#include "cards.h"


int main(int argc, char * argv[])
{
  Flagpole flags(argc, argv);
  Card test("Hello World!");
  std::cout << test.get_name() << "\n";
}

