#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B, jumlahA, jumlahB;
    cin >> N >> A >> B;

    jumlahA, jumlahB = 0;
    while (jumlahA <= N && jumlahB <= N){
        jumlahA += 1;
        while (jumlahA*A == jumlahB*B){
            cout << jumlahA + jumlahB << endl;
        }
        jumlahB += 1;
        while (jumlahA*A == jumlahB*B){
            cout << jumlahA + jumlahB << endl;
        }
    }
    return 0;
}