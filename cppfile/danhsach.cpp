//Sinh viên (mã – string, tên – string, năm sinh – int , gt - string
             // địa chỉ - string, số điện thoại – string, điểm TB - float)
//Viết chương trình xử lý:
//1.	Nhập danh sách n sinh viên
//2.	Hiện danh sách n sinh viên
//3.	Sắp xếp danh sách n sinh viên theo tăng dân của điểm,
// nếu điểm bằng nhau phải giảm dần của năm sinh.
//4.	Tìm kiếm sinh viên là nữ tên X với X nhập từ bàn phím
//5.	Tìm kiếm sinh viên là nam tên Y với Y nhập từ bàn phím
//6.	Xóa sinh viên có mã Z với Z nhập bàn phím
//7.	Đưa danh sách các sinh viên có điểm TB lớn nhất
//8.	Đưa danh sách các sinh viên có điểm TB nhỏ nhất
//Phải đảm bảo n sinh viên có mã ID là duy nhất


#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien {
    string ma, ten, dc, sdt, gt;
    int tuoi;
    float diem;
}SV;

int n;
vector<SV> ans;
set<string> ID;

void nhap1SV(SV &x)
{
    cout << "Ma: "; cin >> x.ma;
    cout << "Ten: ";
    fflush(stdin);
    getline(cin,x.ten);
    cout << "Dia chi: ";
    fflush(stdin);
    getline(cin,x.dc);
    cout << "SDT: ";
    fflush(stdin);
    getline(cin,x.sdt);
    cout << "Gioi Tinh: ";
    fflush(stdin);
    getline(cin,x.gt);
    cout << "Tuoi: ";
    cin >> x.tuoi;
    cout << "Diem: ";
    cin >> x.diem;
}

void hien1SV(SV x)
{
    cout << "Ma: " << x.ma << '\n'
         << "Ten: " << x.ten << '\n'
         << "Dia chi: " << x.dc << '\n'
         << "SDT: " << x.sdt << '\n'
         << "Gioi tinh: " << x.gt << '\n'
         << "Tuoi: " << x.tuoi << '\n'
         << "Diem: " << x.diem << '\n';
}

void nhapDS()
{
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for(int i=0;i<n;++i){
        SV x;
        nhap1SV(x);
        if(ID.find(x.ten)==ID.end()){
            ID.insert(x.ten);
            ans.push_back(x);
        }
        else{
            cout << "Ma da ton tai nhap lai\n";
            i--;
        }
    }
}

void hienDS()
{
    if(n==0){
        cout << "danh sach rong!.";
        return ;
    }
    cout << "Danh sach sinh vien la\n";
    for(auto i:ans){
        hien1SV(i);
    }
}

bool cmp(SV a, SV b){
    if(a.diem == b.diem){
        return a.tuoi > b.tuoi;
    }
    return a.diem < b.diem;
}

void sortDS()
{
    sort(ans.begin(),ans.end(),cmp);
    cout << "Sap xep thanh cong!\n";
}

void search_ten_nu()
{
    if(n==0){
        cout << "danh sach rong!.";
        return ;
    }
    string x;
    cout << "Nhap ten muon tim: "; getline(cin,x);
    for(auto i:ans){
        if((i.gt=="nu" || i.gt == "Nu") && (i.ten == x)){
            cout << "Thong tin sv can tim: \n";
            hien1SV(i);
            return ;
        }
    }
    cout << "Khong ton tai !\n";
}

void search_ten_nam()
{
    if(n==0){
        cout << "danh sach rong!.";
        return ;
    }
    string x;
    cout << "Nhap ten muon tim: "; getline(cin,x);
    for(auto i:ans){
        if((i.gt=="nam" || i.gt == "Nam") && (i.ten == x)){
            cout << "Thong tin sv can tim: \n";
            hien1SV(i);
            return ;
        }
    }
    cout << "Khong ton tai !\n";
}

void xoa_sv()
{
    if(n==0){
        cout << "danh sach rong!.";
        return ;
    }
    string x;
    cout << "Nhap ten muon xoa: ";
    getline(cin,x);
    for(int i=0;i<n;++i){
        if(ans[i].ten == x){
            ans.erase(ans.begin()+i);
            n = ans.size();
            return;
        }
    }
}

void DS_diem_max()
{
    if(n==0){
        cout << "danh sach rong!.";
        return ;
    }
    float ma_diem = ans[0].diem;
    for(auto i:ans){
        if(i.diem > ma_diem) ma_diem = i.diem;
    }
    cout << "Danh sach sv co diem lon nhat la \n";
    for(auto i:ans){
        if(i.diem == ma_diem){
            hien1SV(i);
        }
    }
}


void DS_diem_min()
{
    if(n==0){
        cout << "danh sach rong!.";
        return ;
    }
    float mi_diem = ans[0].diem;
    for(auto i:ans){
        if(i.diem < mi_diem) mi_diem = i.diem;
    }
    cout << "Danh sach sv co diem nho nhat la \n";
    for(auto i:ans){
        if(i.diem == mi_diem){
            hien1SV(i);
        }
    }
}

int main()
{
    int option;
    do{
        system("cls");
        cout << "1. Nhap DS\n"
             << "2. Hien DS\n"
             << "3. Sap xep\n"
             << "4. Tim SV Nam\n"
             << "5. Tim SV Nu\n"
             << "6. Xoa SV\n"
             << "7. SV Diem Cao\n"
             << "8. SV Diem Thap\n"
             << "9. Thoat\n";
        cout << "ban chon: ";
        cin >> option;
        switch(option){
    case 1:
        nhapDS();
        break;
    case 2:
        hienDS();
        break;
    case 3:
        sortDS();
        break;
    case 4:
        search_ten_nam();
        break;
    case 5:
        search_ten_nu();
        break;
    case 6:
        xoa_sv();
        break;
    case 7:
        DS_diem_max();
        break;
    case 8:
        DS_diem_min();
        break;
    case 9:
        cout << "Thank!";
        return 0;
        }
    system("pause");
    }while(true);
    return 0;
}


