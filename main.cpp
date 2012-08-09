#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

void foo(unsigned int nb)
{

  double res=0.;

  std::cout << "nb: " << nb << std::endl;

  for(int i=0; i<nb; ++i)
    {
      res+= i+res*res;
    }
  std::cout << "res: " << res << std::endl;
}

void foo2()
{
  std::cout << "Fini" << std::endl;
}

int main(int argc, char* argv[])
{
  int nb = 10;
  if(argc > 1)
    {
      std::string nbString = argv[1];
      std::istringstream ss(nbString);
      ss >> nb;
    }

  foo(nb);
  foo2();

  return 0;
}
