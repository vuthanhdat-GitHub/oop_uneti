#include<iostream>
using namespace std;
class SP{
	private:
		int pt,pa;
	public:
		SP(){
			pa =0;
			pt=0;
		}
		SP(int pt,int pa){
			this->pt = pt;
			this->pa = pa;
		}
		~SP(){
		}
		void in(){
			if(pa>0){	
				cout << "So phuc la: " << pt <<" + " << pa << "*j";
			}
			else{
				cout<<"So phuc la: "<<pt<<"-"<<abs(pa)<<"*j";
			}
		}
		SP Tong(SP p){
			SP Tong;
			Tong.pt = pt + p.pt;
			Tong.pa = pa + p.pa;
			return Tong;
		}
};
int main(){
	SP p1(5, -8);
	SP p2(-7, 3);
	SP p3(6, -9);
	SP p4 = p1.Tong(p2);
	SP p5 = p4.Tong(p3);
	cout<<"Tong 3 so phuc vua tao la : ";
	p5.in();
	cout<<endl;
	return 0;
}