#include <iostream>
using namespace std;

int main(){
	
	int sum,n,i;
	int a[n];
	
	cout << "jumlah bilangan = ";
	cin >> n;
	
	
	for (i=0;i<n;i++){
		cin >> a[i];
	}
	for (i=0;i<n;i++){
		sum = sum + a[i];
}
	cout << "Hasil Penjumlahan = "<<sum;
}
