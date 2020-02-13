#ifndef _CARDS_H_
#define _CARDS_H_
#include <iostream>
#include <vector>
#include <string>

class Card
{
public:
  Card(std::string);
  std::string get_name();
  bool set_name(std::string);
private:
  std::string name;
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

#endif
