#include <iostream>
#include <climits>
using namespace std;

int main()
{
  // Xuất giới hạn các kiểu dữ liệu
  cout << "Max cua kieu short la: " << SHRT_MAX << endl;
  cout << "Min cua kieu short la: " << SHRT_MIN << endl;

  // Khai báo (không có gán): Kieu_du_lieu + Ten_bien + ;
  int tuoi;
  float diem_trung_binh;
  double tienThuong;

  // Khởi tạo biến (Có gán biến vào rồi)
  bool tien = true;
  char kyTu = 'b';      // ky tu thi dau nhay don
  float diemTin = 9.6f; // chỉ định rõ kiểu float thêm "f" vào. Nếu không sẽ là kiểu double

  // Kiểm tra kiểu dữ liệu của biến
  cout << typeid(diemTin).name();
}