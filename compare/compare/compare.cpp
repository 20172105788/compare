// compare.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double Max(double f1, double f2)
{
	if (f1 > f2)
		return f1;
	else
		return f2;
}
int Max(int n1, int n2 = 20)
{
	if (n1 > n2)
		return n1;
	else
		return n2;
}
int Max(int n1, int n2, int n3)
{
	int temp;
	if (n1 > n2)
		temp = n1;
	else
		temp = n2;
	if (n3 > temp)
		return n3;
	else
		return temp;
}
double Max(double n1, double n2, double n3)
{
	double temp;
	if (n1 > n2)
		temp = n1;
	else
		temp = n2;
	if (n3 > temp)
		return n3;
	else
		return temp;
}

int main()
{
	cout << Max(13, 56) << endl;
	cout << Max(13.0, 56.0) << endl;
	cout << Max(2.5, 5.0, 8.5) << endl;
	cout << Max(30) << endl;
    return 0;
}

