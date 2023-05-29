#include<iostream>
using namespace std;
void chuyen(int n, char cn, char ctg, char cd) 
{
	if (n == 1) 
	{
		cout << cn << "---->" << cd << endl;
	}
	else
	{
		chuyen(n - 1, cn, cd, ctg);
		chuyen(1, cn, ctg, cd);
		chuyen(n - 1, ctg, cn, cd);
	}
}

int main() 
{
	int n;
	cout << "NHAP SO DIA: ";
	cin >> n;
	chuyen(n, 'A', 'B', 'C');
	return 0;
}