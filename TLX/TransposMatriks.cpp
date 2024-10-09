#include <bits/stdc++.h>
using namespace std;

int main (){
    int matriks[3][3];
    int i, j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cin >> matriks[i][j];
        }
    }
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout << matriks[j][i] << " ";
        }
        cout << endl;
    }
}
