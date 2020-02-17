#ifndef _ENTRY_H_
#define _ENTRY_H_

#include<string>
#include<vector>

class Entry {
public:
  std::string get_item(int);
  bool add_item(std::string);
  bool del_item(int);
  Entry();
private:
  std::vector<std::string> items;
};

#endif
