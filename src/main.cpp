#include <iostream>

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
}

