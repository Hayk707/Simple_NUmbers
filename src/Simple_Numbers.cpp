#include "simple.hpp"
void SIM()
{
	int N;
	cin >> N;	
	for (int i = 2; i < N; i++) { 

		bool isPrime = true ;

	for (int j = 2; j < i; j++) {

		if (i % j == 0) {

			isPrime = false ;
			break;

		}
	}
		if (isPrime) {			
			cout << i << endl;
		}
  	}

}
