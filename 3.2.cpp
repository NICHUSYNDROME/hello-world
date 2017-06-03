//3.2.cpp
#include <iostream>
#include "Employee.h"
#define AMOUNT 10

using namespace std;
int main(){
	Employee myEmployee[AMOUNT];
	int i = 0;
	for(;i<AMOUNT;i++){
		cout << myEmployee[i].Display() << endl;
	}
	return 0;
}
