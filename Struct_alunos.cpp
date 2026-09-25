#include <iostream>
#include <string>

using namespace std;

struct aluno { // é como se eu tivesse criando um tipo de dado que guarda vários tipos de informações.
  string nome;
  int idade;
  float nota;
};

int main(){
    
    int N;

    cout << "Digite aqui quantos alunos tem na turma: ";
    cin >> N;
    cout << endl;
    cout << endl;

    //CRIANDO UMA ARRAY
// -> use o comando struct_nomeada* nome_da_Array = new struct_nomeada[N]

    aluno* Turma = new aluno[N]; // aqui estou criando uma lista chamada "Turma",
// que é um conjunto de espaços na mamória (variáveis), cada espaço 
// sendo um elemento da lista (variável) que guarda três tipos de dados
// diferentes. Neste caso, os dados: nome, idade e nota.
  
    for (int i = 0; i < N; i++){

  cout << "--------- Aluno " << (i + 1) << " ---------" << endl << endl;
      cout << "Digite o nome do aluno: ";
      getline(cin >> ws, Turma[i].nome); // <- O comando getline lê a linha inteira incluindo os espaços.
// Neste caso, é necessário o ">> ws", pois para voce ja tinha usado um cin >> N; antes... Que deixa um Enter sobrando que afeta o seu getline seguinte... fazendo o programa pular essa entrada. 
//
//
// OBS: nesta linha eu to falando "Vá no conjunto de espaços "Turma" e na posição "i" insira a entrada na parte de "nome"

//################################################################
//
      cout << endl;
    
      cout << "Digite a idade do aluno: ";
      cin >> Turma[i].idade;
      cout << endl;
    
      cout << "Digite a nota do aluno: ";
      cin >> Turma[i].nota;
      cout << endl;
    
      

}

cout << "======================== Turma ======================="<<endl << endl;

for (int j = 0; j < N; j++){
  cout << "--------- Aluno " << (j + 1) << " ---------" << endl;
  cout << "Aluno: " << Turma[j].nome << endl << endl;
  cout << "Idade: " << Turma[j].idade << endl << endl;
  cout << "Nota: " << Turma[j].nota <<endl << endl;

}

delete[] Turma;

return 0;
}
