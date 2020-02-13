#include <iostream>
#include <string>
#include <vector>

class Card
{
public:
  std::string get_name();
  bool set_name(std::string);
private:
  std::string name = "";
};

class Deck
{
public:
  std::string print_decklist();
  bool add_card();
  bool remove_card();
private:
  std::vector<std::reference_wrapper <Card>> list_of_cards;
};

std::string Card::get_name()
{
  return name;
}

bool Card::set_name(std::string newname)
{
    name = newname;
    return true;
}
  


int main(int argc, char * argv[])
{
  std::cout << "Hello World!\nArgC: " << argc << " ArgV:";
  for(int i=0;i<argc;++i )
    {
      if(i!=0)
	{
	  std::cout << ", ";
	}
      std::cout << "\"" << argv[i] << "\"";
    }
  std::cout << ".\n";

  Card test;
  std::cout << test.get_name() << "\n";
  test.set_name("Hello World!");
  std::cout << test.get_name() << "\n";
}

