#include <iostream>
#include <string>
#include <vector>
#include "flagpole.h"
#include "cards.h"
#include "entry.h"


// class CSVfile {
// public:
//   std::string get_row(int);
// private:
//   std::vector<std::reference_wrapper <Entry>> rows;
// };


int main(int argc, char * argv[])
{
  Flagpole flags(argc, argv);
  Entry test;
  //Card test("Hello World!");
  test.add_item("Again");
  test.del_item(1);
  std::cout << test.get_item(0) << " " << test.get_item(1) << " "
	    << test.get_item(2) << "\n";
  
}

