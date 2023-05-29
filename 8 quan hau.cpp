
#include <iostream>
#include<stdio.h>

#define size 8
using namespace std;

int queen[size] = { 0 };

void out()
{
	for (int i = 0; i < size; i++)//duyet theo dong
	{
		for (int j = 0; j < size; j++)//duyet theo cot
		{
			if (queen[i] == j)//neu queen o dong i =(trung) dong j
			{
				cout << "Queen    ";
			}
			else
			{
				cout << "No     ";
			}
		}
		cout << endl;
	}
	if (getchar() == 'y')
	{
		cin.ignore(1);
		cout << "====================";
	}
	else
	{
		exit(1);
	}

}
bool DKQueen(int i, int j)
{
	for (int k = 0; k < i; k++)
		if (queen[k] == j || abs(k - i) == abs(queen[k] - j))//check co queen trung dong hay trung cot || chack trung duong cheo chinh va duong cheo phu
			return false;
	return true;
}

void YesQueen(int ix)//tai dong i
{
	for (int j = 0; j < size; j++)//duyet cot j tai dong thu i
	{
		if (DKQueen(ix,j) == true)//neu dk dung
		{
			queen[ix] = j;//dat queen tai j
			if (ix == size -1)//dk cho ix neu duyet 0 --> 7 
			{
				out();//true dat queen
			}
			else
			{
				YesQueen(ix + 1);//float qua dong thu i + 1 xet tiep tuc	
			}
			queen[ix] = 0;
		}
	}
}

int main()
{
	YesQueen(0);
	return 0;
}