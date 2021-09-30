#include<iostream.h>
#include<math.h>

using namespace std;
class PS{
	int ts , ms ;	
	public : 
	PS(){
		ts= 0;ms=1;
	}
	~PS(){
	}
	void nhap(int ts, int ms){
		this->ts=ts;
		this->ms=ms;
	}
	void in(){
		cout<<"phan so: "<<ts<<"/"<<ms;
	}
	//uoc chung lon nhat
	int  ucln(int a ,int b){
 		a = abs(a);
 		b = abs(b);
 		if(a==0||b==0){
		 	return a + b;
		 }
		 while(a!=b){
 			if(a>b){
			 	a = a -b;
			 }
			 else{
 				b = b -a;
 			}
 		}
 		return a;
  	}
  	PS tong(PS p1){
		PS p;
		p.ts = ts*p1.ms+(ms*p1.ts);
		p.ms=ms*p1.ms;
		int k = ucln(p.ts,p.ms);
		p.ts=p.ts/k;
		p.ms=p.ms/k;
		return p;
	}
	PS hieu(PS p1){
		PS p;
		p.ts = ts*p1.ms-(ms*p1.ts);
		p.ms=ms*p1.ms;
		int k = ucln(p.ts,p.ms);
		p.ts=p.ts/k;
		p.ms=p.ms/k;
		return p;
	}
};
int main(){
	PS p;
	p.nhap(3,5);
	PS p1;
	p1.nhap(6,12);
	PS p2 = p.tong(p1);//11/10
	cout<<"tong 2 pso: ";
  	p2.in();
  	cout<<endl;
  	PS p3 = p.hieu(p1);
  	cout<<"hieu 2 so: ";
  	p3.in();
  	cout<<endl;
	return 0;
}