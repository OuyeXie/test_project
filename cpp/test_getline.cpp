// extract to string
#include <iostream>
#include <string>
#include <sstream>

int main ()
{
  std::string name;

  std::stringstream str;
  str << "Please_enter_your_full_name_xxx_";
  std::getline(str, name, '_');
  std::cout  << name << std::endl;

  std::getline(str, name, '_');
  std::cout  << name << std::endl;

  std::getline(str, name, '_');
  std::cout  << name << std::endl;

  std::getline(str, name, '_');
  std::cout  << name << std::endl;

  std::getline(str, name, '_');
  std::cout  << name << std::endl;

  std::getline(str, name, '_');
  std::cout  << name << std::endl;

  std::getline(str, name, '_');
  std::cout  << name << std::endl;

/////////////////////////////////////////////////

  std::stringstream ss;
  ss.str("");
  ss << "test_";

  std::getline(ss, name, '_');
  std::cout  << name << std::endl;

  ss.str("");
  ss << "test1";
  std::cout << ss.str() << std::endl;

/////////////////////////////////////////////////

  std::stringstream sss;
  sss.str("");
  sss << "test_test1";
  std::cout << sss.str() << std::endl;

  name = "a";
  std::string name1;
  std::getline(sss, name, '_');
  std::cout  << name << std::endl;
  std::getline(sss, name1, '_');
  std::cout  << name1 << std::endl;

  return 0;
}
