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
	float j,M;
	int N;
	float r;
	M = 4;
	N = 100;
	for ( i = 0; i < N; i++);
	{
	  for ( j=0,5 ; j< M; j++);
	{  
	  r=j;
	  x = r*x*(1 - x);
	
	}
	cout << " x =" << x << ", i =" << i << ", j =" << j <<endl;
        }
	
	return 0;

}
