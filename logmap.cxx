 /*
 The Logistic map
 Lab 2
 28.10.2015
 */
 // Lab2 28.10.2015

#include <iostream>

using namespace std;

int main(){
	
  
	for(double r=0; r <= 4; r += 0.1){
	   
	  double x=0.5;
	  
	   for(int i=1; i < 100; i++){
		   x = r*x*(1-x);
		   
	  cout << r << "\t" << x << endl;
   	   }
	}


	return 0;
}


}
