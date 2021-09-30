#include<iostream>
using namespace std;
class CN{
	char ht[30];
	int t;
	char q[10];
	float bl;
	public: 
	CN(){
		this->ht;
		this->t=0;
		this->q;
		this->bl=0;
	}
	~CN(){
	}
	void nhap(){
		cout<<"nhap ten: ";
		cin.getline(ht,30);
		cout<<"nhap tuoi: ";
		cin>>t;
		cin.ignore();
		cout<<"nhap que : ";
		cin.getline(q,10);
		cout<<"nhap bac luong: ";
		cin>>bl;
	}
	void xuat(){
		cout<<"ten: "<<ht<<endl;
		cout<<"tuoi: "<<t<<endl;
		cout<<"que : "<<q<<endl;
		cout<<"bl: "<<bl<<endl;
	}
	float tl(){
		float luong;
		luong = (2500*this->bl*20/100)+(2500*this->bl);
		return luong;
	}
};
int main(){
	CN cn;
	cn.nhap();
	cn.xuat();
	cout<<"luong: "<<cn.tl()<<endl;
	return 0;
}
//tran xuan hiep tin13a2