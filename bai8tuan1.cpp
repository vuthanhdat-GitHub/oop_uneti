#include<iostream>
#include<stdio.h>

using namespace std;

struct NS{
	int ngay, thang, nam;
};
class KH{
	private: 
		char ht[30];
		NS ns;
		char cmt[12];
		char hk[50];
	public: 
		KH(){
			this->ht;
			this->ns;
			this->cmt;
			this->hk;
		}
		KH(char *hoten, int n, int t, int na, char *cmthu, char *hokhau){
			strcpy(ht,hoten);
			ns.ngay = n;
			ns.thang = t;
			ns.nam = na;
			strcpy(cmt,cmthu);
			strcpy(hk,hokhau);
		}
		~KH(){
		}
		void nhap(){
			cout<<"nhap ten kh: ";
			cin.getline(ht,30);
			cout<<"ngay thang nam sinh";
			cin>>ns.ngay;
			cin>>ns.thang;
			cin>>ns.nam;
			cin.ignore();
			cout<<"nhap so cmt: ";
			cin.getline(cmt,15);
			cout<<"nhap hk: ";
			cin.getline(hk,50);
		}
		void xuat(){
			cout<<"Ho ten khach hang: "<<ht<<endl;
			cout<<"ngay sinh khach hang: "<<ns.ngay<<"/"<<ns.thang<<"/"<<ns.nam<<endl;
			cout<<"chung minh thu: "<<cmt<<endl;
			cout<<"ho khau: "<<hk<<endl;
		}
};
	
int main(){
	KH kh("Vu Thanh Dat", 15, 11, 2001, "19103100198", "ThaiBinh");
	kh.xuat();
	KH kh1;
	kh1.nhap();
	kh1.xuat();
	return 0;
}