#include <iostream>
#include <string>
#include <vector>
#include "flagpole.h"

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
  bool add_card(Card);
  bool remove_card(Card);
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
  Flagpole flags(argc, argv);
  Card test;
  std::cout << test.get_name() << "\n";
  test.set_name("Hello World!");
  std::cout << test.get_name() << "\n";
}

