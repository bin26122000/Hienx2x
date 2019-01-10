#include <iostream>
using namespace std;
int main()
{
	float Stbd; // so tien ban dau
	float LX;   // lai xuat gui tiet kiem
	float Stkv; // so tien ki vong
	 int sn;    // so nam de dat duoc so tien ki vong
	 
	 cout<<"nhap vao so tien gui ban dau , lai xuat , so tien ki vong";
	 cin>>Stbd>>Lx>>Stkv;
	 
	 while (Stbd<0||Lx<0||Stkv<0||Stkv<Stbd)
	 {
	 	cout<<"nhap sai xin vui long nhap lai"<<endl;
	 	cout<<"nhap vao so tien gui ban dau , lai xuat , so tien ki vong";
	 	cin>>Stbd>>Lx>>Stkv;
	 }

while ( Stbd < Stkv)
{
	Stbd = Stbd + (Stbd * LX) /100;
	sn++;
	
}

cout<<"Sau" << sn << "nam thi nhan duoc so tien ki vong la"<<Stkv<<endl;
return 0;
}
