#ifndef _FLAGS_H_
#define _FLAGS_H_
#include<iostream>
#include<string>


class Flagpole
{
public:
  Flagpole(int, char**);
  void sethelp();
  bool help();
  void setversion();
  bool version();
  void setverbose();
  bool verbose();
  void setdebug();
  bool debug();
  void setinput();
  bool input();
  std::string getin();
  std::string getout();
  void setoutput();
  bool output();
private:
  bool flags[8] = {};
  std::string in;
  std::string out;
};


#endif
