#include <iostream>
using namespace std;

int main()
{
  // Kiem tra chan le
  int n;
  cout << "Moi nhap so ban thich: " << endl;
  cin >> n;
  string traloi = (n % 2 == 0) ? "Chan" : "Le";
  cout << traloi << endl;

  // Nhap diem trung binh
  float dtb;
  cout << "Nhap dtb: " << endl;
  cin >> dtb;
  string xl = (dtb >= 8) ? "Gioi" : ((dtb < 8 && dtb >= 6.5) ? "Kha" : ((dtb < 6.5 && dtb >= 5) ? "Trung binh" : "Yeu"));
  cout << xl << endl;
}