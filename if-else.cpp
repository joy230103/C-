#include <iostream>
#include <cmath>
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
  // float cao, nang, BMI;
  // cout << "Nhap chieu cao: ";
  // cin >> cao;
  // cout << "Nhap can nang: ";
  // cin >> nang;
  // BMI = nang / (cao * 2);
  // cout << "BMI của bạn = " << BMI << endl;
  // if (BMI < 15)
  // {
  //   cout << "Than hinh qua gay";
  // }
  // else if (BMI >= 15 && BMI < 16)
  // {
  //   cout << "Than hinh gay";
  // }
  // else if (BMI >= 15 && BMI < 16)
  // {
  //   cout << "Than hinh gay";
  // }
  // else if (BMI >= 16 && BMI < 18.5)
  // {
  //   cout << "Than hinh hoi gay";
  // }
  // else if (BMI >= 18.5 && BMI < 25)
  // {
  //   cout << "Than hinh binh thuong";
  // }
  // else if (BMI >= 25 && BMI < 30)
  // {
  //   cout << "Than hinh hoi beo";
  // }
  // else if (BMI >= 30 && BMI < 35)
  // {
  //   cout << "Than hinh beo";
  // }
  // else
  // {
  //   cout << "Than hinh qua beo";
  // }

  // 3.Kiem tra nam nhuan
  // int nam;
  // cout << "Nhap vao nam ban muon kiem tra: ";
  // cin >> nam;
  // if ((nam % 4 == 0) && (nam % 100 != 0) || (nam % 400 == 0))
  // {
  //   cout << "Nam " << nam << " la nam nhuan" << endl;
  //   ;
  // }
  // else
  // {
  //   cout << "Nam " << nam << " khong la nam nhuan" << endl;
  // }

  // 4. Nhap thang de biet co bao nhieu ngay
  // int thang, ngay, nam;
  // cout << "Nhap vao thang ban muon biet: ";
  // cin >> thang;
  // if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12))
  // {
  //   cout << "Thang có 31 ngay" << endl;
  // }

  // else if (thang == 2)
  // {
  //   cout << "Nhap them nam: ";
  //   cin >> nam;
  //   if ((nam % 4 == 0) && (nam % 100 != 0) || (nam % 400 == 0))
  //   {
  //     cout << "Thang co 29 ngay";
  //   }
  //   else
  //   {
  //     cout << "Thang co 28 ngay";
  //   }
  // }

  // else
  // {
  //   cout << "Thang co 30 ngay";
  // }

  // 5. Giai phuong trinh
  // int a, b, c, delta;
  // cout << "Nhap a: ";
  // cin >> a;
  // cout << "Nhap b: ";
  // cin >> b;
  // cout << "Nhap c: ";
  // cin >> c;
  // delta = b * b - 4 * a * c;
  // if (delta < 0)
  // {
  //   cout << "Phuong trinh vo nghiem" << endl;
  // }
  // else if (delta == 0)
  // {
  //   cout << "Phuong trinh co nghiem kep " << "x1 = x2 = " << -b / 2 * a << endl;
  // }
  // else
  // {
  //   cout << "Co 2 nghiem phan biet " << "x1 = " << (-b + sqrt(delta)) / 2 * a << "," << " x2 = " << (-b - sqrt(delta)) / 2 * a << endl;
  // }

  // 6. Nhap vao thang de biet la quy may
  int thang;
  cout << "Moi ban nhap thang: ";
  cin >> thang;
  if (thang == 1 || thang == 2 || thang == 3)
  {
    cout << "Quy 1" << endl;
  }
  else if (thang == 4 || thang == 5 || thang == 6)
  {
    cout << "Quy 2" << endl;
  }
  else if (thang == 7 || thang == 8 || thang == 9)
  {
    cout << "Quy 3" << endl;
  }
  else if (thang == 10 || thang == 11 || thang == 12)
  {
    cout << "Quy 4" << endl;
  }
  else
  {
    cout << "Nhap thang tao lao, gion mat ha ma" << endl;
  }
}
