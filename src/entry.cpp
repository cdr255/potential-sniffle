#include"entry.h"

Entry::Entry()
  : items{"Hello", "World"}
{
}

std::string Entry::get_item(int n)
{
  return items[n];
}

bool Entry::add_item(std::string newitem)
{
  items.push_back(newitem);
  return 0;
}

bool Entry::del_item(int n)
{
  items.erase(items.begin() + n);
  return 0;
}
