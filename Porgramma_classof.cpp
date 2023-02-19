#include <iostream>
#include <string>
using namespace std;
class pinf
{
	string i, f, v, ves;
public:
	void inf();
	void inf_back();
};
void pinf::inf()
{
	cout << "Name - "; cin >> i; cout <<endl;
	cout << "Surname - "; cin >> f; cout << endl;
	cout << "Age - "; cin >> v; cout << endl;
	cout << "Weight - "; cin >> ves; cout << endl;
}
void pinf::inf_back()
{
	cout << "Name - " << i << endl<< "Surname - " << f << endl<< "Age - " << v << endl << "Weight - " << ves << endl;	
}
void main()
{
	pinf inf1, inf2;
	cout << "first" << endl;
	inf1.inf();
	inf1.inf_back();
	cout << endl;
	cout << "second" << endl;
	inf2.inf();
	inf2.inf_back();
}