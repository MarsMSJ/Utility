#include <iostream>
#include "StringExt.hpp"
#include <string>

std::string ToUpperStr(const std::string str)
{
  std::string strUpper;
  int len = str.length();

  for(int idx = 0; idx < len; idx++)
  {
    strUpper+= std::toupper(str[idx]);
  }

  std::cout << "\nWorking...\n";
  return strUpper;


}
