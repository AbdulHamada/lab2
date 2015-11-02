/*
The Logistic map
Lab 2
28.10.2015
*/
#include <iostream>,
using namespace std;
int main(){
	int x;
	int i;
	int N;
	int r;
	r = 2;
	N = 100;
	for (double i = 1; i <= N; i++);
	x = r*x*(1 - x);
	cout << "= x" << x << ",= i" << i << endl;
	
	return 0;

}
