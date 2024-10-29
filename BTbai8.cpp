#include <iostream>
using namespace std;
// dung PI
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip> //Làm tròn số thập phân
int main()
{
  //   float r;
  //   cout << "Nhap vao ban kinh r: ";
  //   cin >> r;
  //   cout << "Dien tich hinh tron la: " << M_PI * r * r << endl;
  //   cout << "Chu vi hinh tron la: " << M_PI * r * 2 << endl;

  // HCN
  // float a, b;
  // cout << "Nhap chieu dai a: ";
  // cin >> a;
  // cout << "Nhap chieu rong b: ";
  // cin >> b;
  // cout << "Chu vi HCN la: " << (a + b) * 2 << endl;
  // cout << "Dien tich HCN la: " << a * b << endl;

  // Nhap diem tính dtb
  float t, v, anh;
  cout << "Moi ban nhap diem toan: ";
  cin >> t;
  cout << "Moi ban nhap diem van: ";
  cin >> v;
  cout << "Moi ban nhap diem anh: ";
  cin >> anh;
  cout << "Diem trung binh cua ban la: " << (t + v + anh) / 3 << endl;
  cout << "Ket qua lam tron: " << setprecision(3) << (t + v + anh) / 3 << endl;
}