#include <iostream>
using namespace std;

int main()
{
  int x = 0;
  while (x >= 5)
  {
    cout << "x = " << x << endl;
    x++;
  }

  // Nhap n tu 1 -99 neu khong thoa man thi bat nguoi dung nhap lai dung moi thoi
  int n;
  cout << "Moi ban chon 1 so tu 1 -99: ";
  cin >> n;
  while (n < 1 || n > 99)
  {
    cout << "Chi duoc nhap tu 1 - 99 thoi, moi ban nhap lai: " << endl;
    cin >> n;
  }
  cout << "Chuc mung ban da nhap thanh cong" << endl;
}