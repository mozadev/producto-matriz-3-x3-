#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int nfil = 3, ncol = 3;
	float determinante = 0;
	
	float matriz[nfil][ncol];
	
	
	for (int i = 0; i < nfil; ++i) {
		
		for (int j = 0; j < ncol; ++j) {
			cout << "ingresa valor [" << i << "][" << j << "]: " ;
			cin >> matriz[i][j];
			
		}
		
	}
	
	determinante = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[2][1] * matriz[1][2]) +
		matriz[1][0] * (matriz[2][1] * matriz[0][2] - matriz[0][1] * matriz[2][2]) +
			matriz[2][0] * (matriz[0][1] * matriz[1][2] - matriz[1][1] * matriz[0][2]);
			
			
cout<<"la determinante es: "<<determinante<<endl;
			return 0;
}

