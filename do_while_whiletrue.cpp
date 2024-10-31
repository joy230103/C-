#include <iostream>
using namespace std;

int main()
{
  // tính tong cac so tu 1 - 5
  int a = 6;
  int tong = 0;
  do
  {
    tong += a;
    a++;
  } while (a <= 5);
  cout << "Tong tu 1 - 5 la: " << tong << endl;

  // while true
  int x = 1;
  while (true)
  {
    cout << "x = " << x << endl;
    x++;
    if (x == 11)
      break;
  }
}