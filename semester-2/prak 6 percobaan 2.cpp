#include <iostream> 
using namespace std; 
int fibonacci(int m) { 
	if (m == 0 || m ==1) 
	{ 
		return m; 
	} 
	else 
	{ 
		return (fibonacci(m-1) + fibonacci(m-2)); 
	} 
} 
int main() { 
	int n, m= 0; 
	cout << "Masukan Batas Deret Bilangan Fibonacci : "; 
	cin >> n;
	cout << "Deret Fibonacci: "; 
	for (int i = 1; i <= n; i++){ 
		cout << fibonacci(m) <<" "; 
		m++; 
	} 
	return 0; 
}
