#include<iostream>
using namespace std;

class DaThuc3{
	private:
		int a,b,c;
	public : 
		DaThuc3(){
			
		}
		DaThuc3(int a, int b, int c){
			a = 0;
			b = 0;
			c = 0;
		}
		~DaThuc3(){
			
		}
		void display()
		{
			cout << "Tong 2 da thuc: " << a << "x2 + "<< b <<"x + "<< c;
		}
		void nhap(int a, int b, int c){
			this-> a = a;
			this-> b = b;
			this-> c = c;
		}
		DaThuc3 tong(DaThuc3 dt){
			DaThuc3 tong;
			tong.a = this -> a + dt.a;
			tong.b = this -> b + dt.b;
			tong.c = this -> c + dt.c;
			return tong;
		}
};
int main(){
	DaThuc3 dt1;
	dt1.nhap(3,4,5);
	DaThuc3 dt2;
	dt2.nhap(4,5,6);
	DaThuc3 tong;
	tong = dt1.tong(dt2);
	tong.display();
	cout<<endl;
	return 0;
}