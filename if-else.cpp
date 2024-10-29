#include <iostream>
using namespace std;

int main()
{
  // 1. Tim x, y biết tổng, hiệu 2 số
  // float tong, h, x, y;
  // cout << "Nhap vao tong 2 so: ";
  // cin >> tong;
  // cout << "Nhap vao hieu 2 so: ";
  // cin >> h;
  // cout << "Gia tri x can tim la: " << (tong + h) / 2 << endl;
  // cout << "Gia tri y can tim la: " << (tong - h) / 2 << endl;

  // 2. Tinh BMI
  float cao, nang, BMI;
  cout << "Nhap chieu cao: ";
  cin >> cao;
  cout << "Nhap can nang: ";
  cin >> nang;
  BMI = nang / (cao * 2);
  cout << "BMI của bạn = " << BMI << endl;
  if (BMI < 15)
  {
    cout << "Than hinh qua gay";
  }
  else if (BMI >= 15 && BMI < 16)
  {
    cout << "Than hinh gay";
  }
  else if (BMI >= 15 && BMI < 16)
  {
    cout << "Than hinh gay";
  }
  else if (BMI >= 16 && BMI < 18.5)
  {
    cout << "Than hinh hoi gay";
  }
  else if (BMI >= 18.5 && BMI < 25)
  {
    cout << "Than hinh binh thuong";
  }
  else if (BMI >= 25 && BMI < 30)
  {
    cout << "Than hinh hoi beo";
  }
  else if (BMI >= 30 && BMI < 35)
  {
    cout << "Than hinh beo";
  }
  else
  {
    cout << "Than hinh qua beo";
  }
}