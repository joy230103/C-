#include <iostream>
using namespace std;

int main()
{
  // Kiem tra so chan/le
  // int n;
  // cout << "Nhap so n can kiem tra: ";
  // cin >> n;
  // int div = n % 2;
  // switch (div)
  // {
  // case 0:
  //   cout << n << " La so chan" << endl;
  //   break;

  // default:
  //   cout << n << " La so le" << endl;
  //   break;
  // }

  // Kiem tra thang co bao nhieu ngay
  //

  // 1. Cho chon so de hien thị => tong dai
  int so;
  cout << "Moi bam so de chon: " << endl;
  cout << "1. Tim theo ten" << endl;
  cout << "2. Tim theo tac gia" << endl;
  cout << "3. Tim theo nha xuat ban" << endl;
  cout << "4. Tim theo tieu de" << endl;
  cin >> so;
  switch (so)
  {
  case 1:
    cout << "Tim theo ten" << endl;
    break;

  case 2:
    cout << "Tim theo tac gia" << endl;
    break;

  case 3:
    cout << "Tim theo nha xuat ban" << endl;
    break;

  case 4:
    cout << "Tim theo tieu de" << endl;
    break;

  default:
    cout << "Phim bam khong hop le";
    break;
  }
}