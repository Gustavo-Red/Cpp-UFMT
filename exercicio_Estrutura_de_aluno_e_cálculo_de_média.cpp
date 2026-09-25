//Crie uma estrutura Aluno contendo nome, matrícula e três notas. Implemente uma função
//que receba um objeto dessa estrutura e retorne a média das três notas. Exiba todos os
//dados e a média.
//
//
#include <iostream>
#include <string>

using namespace std;

struct aluno {
  string nome;
  long long int matricula;
  float nota01;
  float nota02;
  float nota03;
  float media;
};

float calculo_media(aluno a){
  return(a.nota01 + a.nota02 + a.nota03)/3;
}

int main(){
  
  int N;
  cout << "Digite quantos alunos tem a turma: ";
  cin >> N;
  cout << endl << endl;
  
  aluno* Turma = new aluno[N];

  for (int i = 0; i < N; i++){

      cout << "--------- Aluno " << (i + 1) << " ---------" << endl << endl;
      cout << "Digite o nome do aluno: ";
      getline(cin >> ws, Turma[i].nome);
      cout << endl;
    
      cout << "Digite o número de matricula do aluno: ";
      cin >> Turma[i].matricula;
      cout << endl;
    
      cout << "Digite a primeira nota do aluno: ";
      cin >> Turma[i].nota01;
      cout << endl;
    
      cout << "Digite a segunda nota do aluno: ";
      cin >> Turma[i].nota02;
      cout << endl;
    
      cout << "Digite a terceira nota do aluno: ";
      cin >> Turma[i].nota03;
      cout << endl;
    
      Turma[i].media = calculo_media(Turma[i]);  
}

cout << "======================== Turma ======================="<<endl << endl;

for (int j = 0; j < N; j++){
  cout << "--------- Aluno " << (j + 1) << " ---------" << endl;
  cout << "Aluno: " << Turma[j].nome << endl << endl;
  cout << "Matrícula: " << Turma[j].matricula << endl << endl;
  cout << "Nota 01: " << Turma[j].nota01 <<endl << endl;
  cout << "Nota 02: " << Turma[j].nota02 <<endl << endl;
  cout << "Nota 03: " << Turma[j].nota03 <<endl << endl;
  cout << "Nota Final: " << Turma[j].media <<endl << endl;

}

delete[] Turma;







return 0;
}
