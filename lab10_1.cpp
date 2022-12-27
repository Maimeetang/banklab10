#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double l,p,y;
	cout << "Enter initial loan: ";
	cin >> l;
	cout << "Enter interest rate per year (%): ";
	cin >> p;
	cout << "Enter amount you can pay per year: ";
	cin >> y;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	double eoy,pb,i,t,pay,nb;
	pb = l, eoy = 1;
	while(pb>0){
		cout << fixed << setprecision(0);
		cout << setw(13) << left << eoy;
		cout << fixed << setprecision(2);
		cout << setw(13) << left << pb;
		i = pb*(p/100.00);
		cout << setw(13) << left << i;
		t = pb+i;
		cout << setw(13) << left << t;
		if(t<y){
			cout << setw(13) << left << t;
			pay = t;
		}else{
			cout << setw(13) << left << y;
			pay = y;
		}
		nb = t-pay;
		cout << setw(13) << left << nb;
		pb = nb;
		cout << "\n";
		eoy++;
	}
	return 0;
}
