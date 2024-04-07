#include <iostream>
#include <string>

using namespace std;

class Sach {
private:
    string id_sach;
    string ten_sach;
    string tac_gia;
    string trang_thai; 

public:
   
    Sach(string id, string ten, string tacgia, string trangthai) {
        id_sach = id;
        ten_sach = ten;
        tac_gia = tacgia;
        trang_thai = trangthai;
    }

    
    void setIdSach(string id) {
        id_sach = id;
    }

    string getIdSach() {
        return id_sach;
    }

    void setTenSach(string ten) {
        ten_sach = ten;
    }

    string getTenSach() {
        return ten_sach;
    }

    void setTacGia(string tacgia) {
        tac_gia = tacgia;
    }

    string getTacGia() {
        return tac_gia;
    }

    void setTrangThai(string trangthai) {
        trang_thai = trangthai;
    }

    string getTrangThai() {
        return trang_thai;
    }

   
    void inThongTinSach() {
        cout << "ID sach: " << id_sach << endl;
        cout << "Ten sach: " << ten_sach << endl;
        cout << "Tac gia: " << tac_gia << endl;
        cout << "Trang thai sach: " << trang_thai << endl;
    }
};

int main() {
   
    Sach sach1("001", "Harry Potter", "J.K. Rowling", "Co san");
    sach1.inThongTinSach();

    return 0;
}
