#include <iostream>
#include <cmath>
using namespace std;

//standard deviation
//template <class identifier> function_declaration;

template <class T> 
T average(T a, T b, T c){
	T av;
	av = (a+b+c)/3;
	return av;
}

template <class T>
T stanDev(T a, T b, T c){
    float av = average<float>(a , b , c);
	T sumDifSquare = pow((a - av), 2) + pow((b - av), 2) + pow((c - av), 2);
	T res = sqrt(sumDifSquare/2);
	return res;
}

int main(){
	int a = 5;
	int b = 7;
	int c = 12;
	//function_name <type> (parameters);
	float res = stanDev<float>(a, b, c);
	cout << res << endl;
	
}
