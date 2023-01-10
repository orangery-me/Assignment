#include <iostream>
#include <algorithm>
using namespace std;

class info{
private:
    string maNV;
    string chuc_vu;
    string name;
    string DOB;
    int ngay_cong;
    int luong;
    int thu_nhap;
public:
    void input(){
        cin >>maNV;
        cin.ignore();
        getline(cin,name);
        cin>>DOB;
        cin>>ngay_cong;
        cin >>luong;
    }
    
    string getmaNV(){
        return maNV;
    }
    
    string getDOB(){
        if (DOB[1] =='/')
            DOB= "0"+DOB;
        if (DOB[4] =='/')
            DOB.insert(3,"0");
        return DOB;
    }
    
    int getthu_nhap(){
        
        int luong_cung= luong*ngay_cong;
        int thuong=0,phu_cap=0;
        
        int i=0;
        string s="";
        // tach ma nhan vien
        while (maNV[i] != '-'){
            s += maNV[i];
            i++;
        }
        // dua vao ma nv -> xac dinh chuc vu va phu cap
        if (s=="GD"){
            phu_cap=2000000;
            chuc_vu="Giam doc";
        }
        if (s=="PGD"){
            phu_cap=1000000;
            chuc_vu="Pho giam doc";
        }
        if (s=="TP"){
            phu_cap=500000;
            chuc_vu="Truong phong";
        }
        if (s=="NV"){
            phu_cap=200000;
            chuc_vu="Nhan vien";
        }
        // tinh luong thuong
        if (ngay_cong >= 27 && ngay_cong <=31)
            thuong=(20*luong_cung)/100;
        if (25<= ngay_cong && ngay_cong <27 )
            thuong=(10*luong_cung)/100;
        
        // tinh tong thu nhap
        thu_nhap=luong_cung + phu_cap + thuong;
        return thu_nhap;
    }
    void output(){
        cout <<maNV<<" "<<name<<" "<<chuc_vu<<" "<<getDOB()<<" "<<ngay_cong<<" "<<luong<<" "<<thu_nhap<<endl;
    }
    
};

bool cmp(info a, info b){
    if (a.getthu_nhap() != b.getthu_nhap() )
        return a.getthu_nhap() > b.getthu_nhap();
    return a.getmaNV() <b.getmaNV();
}

int main() {
    int n; cin>>n;
    info ds[1000];
    
    for (int i=0; i<n; ++i){
        ds[i].input();
        ds[i].getmaNV();
        ds[i].getthu_nhap();
    }
    
    sort(ds,ds+n, cmp);
    for (int i=0; i<n; ++i)
        ds[i].output();
    
}
