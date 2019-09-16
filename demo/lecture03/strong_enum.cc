#include <iostream>

using namespace std;

int main()
{
#if 1
  // Check this code. Does it work??
  enum IOResult {
    Error,
    Ok
  };

  enum ParseResult {
    Error,
    Ok
  };
#else
  enum class IOResult {
    Error,
    Ok
  };

  enum class ParseResult {
    Error,
    Ok
  };
#endif

  IOResult io_return_code = IOResult::Ok;

  switch(io_return_code) {
    case IOResult::Ok:
      cout << "IO done" << endl;
      break;
    case IOResult::Error:
      cout << "IO Error" << endl;
  }

  ParseResult parse_return_code = ParseResult::Error;
  switch(parse_return_code) {
    case ParseResult::Ok:
      cout << "Parse done" << endl;
      break;
    case ParseResult::Error:
      cout << "Parse Error" << endl;
  }

}
