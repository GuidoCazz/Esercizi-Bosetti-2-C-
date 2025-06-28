#include <iostream>
#include <string>

int strjoin(const std::string& s1, const std::string& s2, std::string& join) {
  join = s1 + s2;

  return(join.length());
}