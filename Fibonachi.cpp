#include <iostream>
#include <stdlib.h>
using namespace std;
double* fibonachi(int f2)
{
	double* F;
	F = new double[f2];
	F[0] = 0;
	F[1] = 1;
	for (int i = 2; i < f2 + 2; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	return F;
}
void main()
{
	double* f;
	int f2;
	cin >> f2;
	f = new double(f2);
	f = fibonachi(f2);
	for (int i=0;i<f2;i++)
	{
		cout << f[i]<<" ";
	}
}