#include <iostream>
using namespace std;

void GeraVet(int *vP, int n);
void MostraVet(int *vP, int n);

int main(){
    int *v;
    int n;
    cin >> n;
    if(!(v=new(nothrow) int[n])){
        cout << "Estourou a memória" << endl;
        return -1;
    }
    GeraVet(v, n);
    MostraVet(v, n);

    delete[] v;
    v = NULL;

    return 0;
}

void GeraVet(int *vP, int n){
    for(int i=0; i<n; i++){
        *(vP+i) = i;
    }
}
void MostraVet(int *vP, int n){
    for(int i=0; i<n; i++){
        cout << *(vP+i) << endl;
    }
}