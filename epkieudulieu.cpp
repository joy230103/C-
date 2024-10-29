#include <iostream>
using namespace std;

int main()
{
  // 1. Ép kiểu rộng: từ bé - lớn => Không lo mất dữ liệu
  short a = 9;
  cout << "a = " << a << endl;

  // Khai báo biến int và ép kiểu
  int b = a;
  cout << "b = " << b << endl;

  // 2. Ép kiểu hẹp: lớn --- bé => mất dữ liệu
  float c = 1.25f;
  cout << "c = " << c << endl;
  // ép kiểu từ int sang float
  int d = c;
  cout << "d = " << d << endl;
}
