#include<iostream>
using namespace std;
class VecTor3{
	private:
		int a, b, c;
	public: 
		VecTor3()
		{
			a = 0;
			b = 0;
			c = 0;
		}
		~VecTor3(){	
		}
		void nhap(int a, int b,int c){
			this -> a = a;
			this -> b = b;
			this -> c = c;
		}
		void in(){
			cout<<"Toa do : "<<a<<","<<b<<","<<c<<endl;
		}
		VecTor3 tong(VecTor3 vt){
			VecTor3 tong;
			tong.a = this -> a + vt.a;
			tong.b = this -> b + vt.b;
			tong.c = this -> c + vt.c;
			return tong;
		}
};
int main(){
	VecTor3 vt1;
	vt1.nhap(3,4,5);
	VecTor3 vt2;
	vt2.nhap(4,5,6);
	VecTor3 tong = vt1.tong(vt2); 
	cout<<"tong 2 vector la : ";
	tong.in();
	cout<<endl;
	return 0;
}