#include<iostream.h>
using namespace std;
class GV{
	private:
		char ht[30];
		int tuoi;
		char bc[15];
		char cn[20];
		float bl;
	public:
		GV(){
			this->ht;
			this->tuoi=0;
			this->bc;
			this->cn;
			this->bl=0;
		}	
		~GV(){
		}
		void nhap(){
			cout<<"ten gv: ";
			cin.getline(ht,30);
			cout<<"tuoi: ";
			cin>>tuoi;
			cin.ignore();
			cout<<"bang cap? :";
			cin.getline(bc,15);
			cout<<"chuyen nganh: ";
			cin.getline(cn,20);
			cout<<"bac luong: ";
			cin>>bl;
		}
		void xuat(){
			cout<<"ten gv: "<<ht<<endl;
			cout<<"tuoi: "<<tuoi;
			cout<<"\nbang cap: "<<bc;
			cout<<"\nchuyen nganh: "<<cn;
			cout<<"\nbac luong: "<<bl<<endl;
		}
		float tl(){
			float luong;
			luong = this->bl*1490;
			return luong;
		}
};
int main(){
	GV gv;
	gv.nhap();
	gv.xuat();
	cout<<"luong cua gv: "<<gv.tl()<<endl;
	return 0;
}
