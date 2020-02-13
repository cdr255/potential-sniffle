#include "flagpole.h"

Flagpole::Flagpole(int argc, char * argv[]) :
  in(""),
  out("")
{
  for(int i=1;i<argc;++i)
    {
      if(std::string(argv[i]) == "--")
	{
	  break;
	}
      if(std::string(argv[i]) == "-h" ||
	 std::string(argv[i]) == "-H" ||
	 std::string(argv[i]) == "--help")
	{
	  sethelp();
	}
      
      if(std::string(argv[i]) == "-V" ||
	 std::string(argv[i]) == "--version")
	{
	  setversion();
	}
      
      if(std::string(argv[i]) == "-v" ||
	 std::string(argv[i]) == "--verbose")
	{
	  setverbose();
	}
      
      if(std::string(argv[i]) == "-d" ||
	 std::string(argv[i]) == "--debug")
	{
	  setdebug();
	}
      
      if(std::string(argv[i]) == "-i" ||
	 std::string(argv[i]) == "--input")
	{
	  setinput();
	  in = argv[i+1];
	}
      
      if(std::string(argv[i]) == "-o" ||
	 std::string(argv[i]) == "--output")
	{
	  setoutput();
	  out = argv[i+1];
	}
    }
  if(debug())
    {
      std::cout << "====================\n"
		<< "Current Flags Are:\n"
		<< "====================\n"
		<< "Help:             " << help()
		<< "\nVersion:          " << version()
		<< "\nVerbose:          " << verbose()
		<< "\nDebug:            " << debug()
		<< "\nInput:            " << input()
		<< "\nOutput:           " << output()
		<< "\n====================\n\n"
		<< "====================\n"
		<< "Current Values Are:\n"
		<< "====================\n"
		<< "In:  \"" << getin() << "\"\n"
		<< "Out: \"" << getout() << "\"\n"
		<< "====================\n\n";
	}
}

void Flagpole::sethelp()
{
  flags[0]=true;
}
bool Flagpole::help()
{
  return flags[0];
}
void Flagpole::setversion()
{
  flags[1]=true;
}
bool Flagpole::version()
{
  return flags[1];
}
void Flagpole::setverbose()
{
  flags[2]=true;
}
bool Flagpole::verbose()
{
  return flags[2];
}
void Flagpole::setdebug()
{
  flags[3]=true;
}
bool Flagpole::debug()
{
  return flags[3];
}
void Flagpole::setinput()
{
  flags[4]=true;
}
bool Flagpole::input()
{
  return flags[4];
}
std::string Flagpole::getin()
{
  return in;
}
void Flagpole::setoutput()
{
  flags[5]=true;
}
bool Flagpole::output()
{
  return flags[5];
}
std::string Flagpole::getout()
{
  return out;
}
