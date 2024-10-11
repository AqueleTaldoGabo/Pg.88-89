#include <iostream>
using namespace std;

typedef struct {
    string nome;
    int serie;
    float nota;
}Aluno;

void LeituraValor(Aluno *vP, int n);
float Media(Aluno *vP, int n);

int main(){
    int n;
    float media;
    Aluno *Alunos;
    cin >> n;
    if(!(Alunos=new(nothrow) Aluno[n])){
        cout << "Estorou memória" << endl;
        return -1;
    }
    LeituraValor(Alunos, n);
    media = Media(Alunos, n);
    cout << media << endl;

    delete[] Alunos;
    Alunos = NULL;

    return 0;
}

void LeituraValor(Aluno *vP, int n){
    for(int i=0; i<n; i++){
        cin >> (vP+i)->nome;
        cin >> (vP+i)->serie;
        cin >> (vP+i)->nota;
    }
}
float Media(Aluno *vP, int n){
    float total=0;
    for(int i=0; i<n; i++){
        total += (vP+i)->nota;
    }
    return total/n;
}