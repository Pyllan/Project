#include<iostream>
using namespace std;
struct SinhVien
{
    char ten[50];
    float toan,lop,ly;
};
SinhVien SV[100];
int dem =0;
void Nhap_bai3(SinhVien& s)
{
    cout<<"Ten sinh vien: ";
    cin.ignore();
    cin.getline(s.ten,50);
    cout<<"Diem toan: ";
    cin>>s.toan;
    cout<<"Diem ly: ";
    cin>>s.ly;
}
void ThemSV()
{
    char check;
    cout << "\n \t\t====== Moi ban nhap thong tin sinh vien ====== \n" ;
    do {
        cout << "Thong tin sinh vien thu " << dem+1<<endl;
        Nhap_bai3(SV[dem++]);
        cout << "Nhap phim 't' de tiep tuc hoac phim bat ki de quay lai Menu\n";
        cin >> check;
    } while (check == 't');
}
float TB_Toan()
{
    float tong=0;
    for(int i=0;i<dem;i++)
    {
        tong = tong + SV[i].toan;
    }
    return tong/dem;
}
float TB_Ly()
{
    float tong=0;
    for (int i=0;i<dem;i++)
    {
        tong = tong + SV[i].ly;
    }
    return tong/dem;
}
void XuatDS()
{
    if(dem ==0)
        cout<<"Danh sinh vien rong\n";
    else
    {
        cout<<"\t ===Xuat danh sach sinh vien===\n";
        for(int i=0;i<dem;i++)
        {
            cout<<"STT: "<<i+1<<"\tHoTen: ";
            cout<<SV[i].ten;
            cout<<"\t\t\t\t\t Diem Toan: "<<SV[i].toan;
            cout<<"\t\t\t\t\t Diem Ly: "<<SV[i].ly<<endl;
        }
        cout<<endl;
    }
    system("pause");
}
void XuatDTB()
{
    cout<<"\nDiem trung binh Toan cua lop: "<<TB_Toan()<< endl;
   if (TB_Toan() < 5) {
           cout << "Diem Toan cua lop xep loai Yeu" <<endl;
       }
       else
           if (TB_Toan() >=5 && TB_Toan() < 9)
           {
               cout << "Diem Toan cua lop xep loai Binh thuong"<<endl;
           }
           else
           {
               cout << "Diem Toan cua lop xep loai Xuat sac"<< endl;
           }
    cout<<"\nDiem trung binh Ly cua lop: "<<TB_Ly()<< endl;
    if (TB_Ly() < 5) {
        cout << "Diem Ly cua lop xep loai Yeu" <<endl;
    }
    else
        if (TB_Ly() >=5 && TB_Ly() < 9)
        {
            cout << "Diem Ly cua lop xep loai Binh thuong"<<endl;
        }
        else
        {
            cout << "Diem Ly cua lop xep loai Xuat sac"<< endl;
        }
    cout<<"\n";
    system("pause");
}
void menu_bai3()
{
    cout << "De bai: Viet chuong trinh phuc vu cho lop sinh vien bao gom ho ten, in ra si so lop, nhap diem cac mon hoc,\n";
    cout << "\t\tcho danh gia xep loai, tinh diem trung binh cua cac mon hoc theo lop.\n";
    cout << ("\n\t\t***********************************************************************************\n");
    cout<<"\n\t\t\t======MENU======";
    cout<<"\n\t\t\t1. Them sinh vien";
    cout<<"\n\t\t\t2. Xuat si so lop";
    cout<<"\n\t\t\t3. Xem diem trung binh, xep loai cua lop";
    cout<<"\n\t\t\t4. Xuat danh sach sinh vien";
    cout<<"\n\t\t\tNhap so lon hon 5 de thoat!!";
    cout<<"\nNhap lua chon cua ban: ";
}
void menu()
{
    int option=0;
    while(option < 5)
    {
        system("cls");
        menu_bai3();
        cin>>option;
        if(option == 1)
        {
            system("cls");
            ThemSV();
        }
        else if(option ==2)
        {
            cout<<"\nSi so lop la: "<<dem<<endl;
            system("pause");
        }
        else if(option ==3)
        {
            XuatDTB();
        }
        else if(option ==4)
        {
            XuatDS();
        }
    }
}
int main()
{
    menu();
}
