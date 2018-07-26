#include <iostream>

//C++14
auto f() noexcept {
  return "Hello world\n";
}

int main() 
{
  int a[3] = { 0, 1, 2 };
  a[3] = 0; // Access violation!
  std::cout << a[0] << f() << '\n';
}
