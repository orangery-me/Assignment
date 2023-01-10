#include <iostream>
using namespace std;

class SV{
private:
    int id;
    string name;
    string gender;
    int age;
    float diemtb;
    string hocluc;
public:
    void input(int id, int n){
        cout <<"Nhap ten: ";
        cin.ignore();
        getline(cin,name);
        
        cout <<"Nhap gioi tinh: ";
        cin >>gender;
        
        cout <<"Nhap tuoi: ";
        cin >>age;
        
        cout <<"Nhap diem TB: ";
        cin >>diemtb;
        this->id=id;
    }
    
    void capNhat(int id){
        cout <<"Nhap ten: ";
        cin.ignore();
        getline(cin,name);
        
        cout <<"Nhap gioi tinh: ";
        cin>>gender;
        
        cout <<"Nhap tuoi: ";
        cin >>age;
        
        cout <<"Nhap diem TB: ";
        cin >>diemtb;
    }
    
    void xoaSV(SV a[], int id, int &n){
        
        for (int i=0; i<n; ++i){
            if (a[i].id==id){
                for (int j=i; j<n-1; ++j){
                    a[j]=a[j+1];
                }
                break;
            }
        }
        n--;
    }
    
    void output(){
        cout <<"id: "<<id<<endl;
        cout <<"ten: "<<name<<endl;
        cout <<"gioi tinh: "<<gender<<endl;
        cout <<"tuoi: "<<age<<endl;
        cout <<"diem TB: "<<diemtb<<endl;
        
    }
    
    float Getdiemtb(){
        return diemtb;
    }
    
    string Getname(){
        return name;
    }
    
};

bool cmp_diem(SV person1, SV person2){
    return (person1.Getdiemtb() > person2.Getdiemtb());
}

bool cmp_ten(SV person1, SV person2){
    return (person1.Getname() > person2.Getname());
}

int main(int argc, const char * argv[]) {
    SV dsSV[50];
    int idcount=0,key,soluongSV=0,value;
    
    while(true) {
        cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++\n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Them sinh vien.                               **\n";
        cout << "**  2. Cap nhat thong tin sinh vien boi ID.          **\n";
        cout << "**  3. Xoa sinh vien boi ID.                         **\n";
        cout << "**  4. Tim kiem sinh vien theo ten.                  **\n";
        cout << "**  5. Sap xep sinh vien theo diem trung binh (GPA). **\n";
        cout << "**  6. Sap xep sinh vien theo ten.                   **\n";
        cout << "**  7. Hien thi danh sach sinh vien.                 **\n";
        cout << "**  8. Ghi danh sach sinh vien vao file.             **\n";
        cout << "**  0. Thoat                                         **\n";
        cout << "*******************************************************\n";
        cout << "Nhap tuy chon: ";
        cin >> key;
        
        switch(key){
            case 1:
                idcount++;
                soluongSV++;
                dsSV[idcount].input(idcount,soluongSV);
                break;
            case 2:
                cout<<"Nhap id sinh vien can cap nhat: ";
                cin >>value;
                dsSV[value].capNhat(value);
                break;
            case 3:
                cout <<"Nhap id sinh vien can xoa: ";
                cin>>value;
                dsSV[value].xoaSV(dsSV, value, soluongSV);
                break;
            case 5:
                sort(dsSV+1,dsSV+soluongSV, cmp_diem);
                break;
            case 6:
                sort(dsSV+1, dsSV+soluongSV, cmp_ten);
                break;
            case 7:
                cout<<"Danh sach sinh vien: "<<endl;
                for (int i=1; i<=soluongSV; ++i){
                    dsSV[i].output();
                    cout <<"---------------"<<endl;
                }
                break;
        }
    }
}
