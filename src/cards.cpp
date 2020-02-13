#include "cards.h"

Card::Card(std::string n) :
  name(n)
{
}

std::string Card::get_name()
{
  return name;
}

bool Card::set_name(std::string newname)
{
  name = newname;
  return true;
}
