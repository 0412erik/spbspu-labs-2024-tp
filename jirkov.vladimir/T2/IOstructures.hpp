#ifndef IOSTRUCTURES_HPP
#define IOSTRUCTURES_HPP
#include <string>
#include <iosfwd>

namespace jirkov
{
  struct DelimiterIO
  {
    char exp;
  };

  struct //key1
  {
    //key1
  };

  struct //key2
  {
    //key2
  };

  struct StringIO
  {
    std::string &str;
  };

  std::istream & operator>>(std::istream & in, DelimiterIO && value);
  std::istream & operator>>(std::istream & in, /*ke1*/ && value);
  std::istream & operator>>(std::istream & in, /*key2*/ && value);
  std::istream & operator>>(std::istream & in, StringIO && value);

  using Del = DelimiterIO;
  //key1
  //key2
  using Str = StringIO;
}

#endif
