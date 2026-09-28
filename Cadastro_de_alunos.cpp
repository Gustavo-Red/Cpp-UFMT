
//Crie uma estrutura Aluno contendo nome, matrícula e três notas. Implemente uma função
//que receba um objeto dessa estrutura e retorne a média das três notas. Exiba todos os
//dados e a média.
//
//
#include <iostream>
#include <string>

using namespace std;

struct aluno { // é como se eu tivesse criando um tipo de dado que guarda vários tipos de informações.
  string nome;
  long long int matricula;
  float nota[3];
  float media;
  string situacao;
};

float calculo_media(aluno a, int n){
 float soma = 0;
 for (int y = 0; y < n; y++){
  soma = soma + a.nota[y];
}
return soma/n;
}

int main(){
  int N;
  cout << "Digite quantos alunos tem a turma: ";
  cin >> N;
  cout << endl << endl;

//CRIANDO UMA ARRAY
// -> use o comando struct_nomeada* nome_do_ponteiro = new struct_nomeada[N]

  
  aluno* Turma = new aluno[N];  // aqui estou criando um ponteiro chamado "Turma",
// que é um espaço na memória (variável) que aponta para o espaço de memória que está o primeiro elemento do vetor criado pelo new, e o new aluno[N] reserva o espaço do vetor com N elementos do tipo "aluno".


  float soma_media = 0;
  float maior_media = 0;
  
  for (int i = 0; i < N; i++){

      cout << "--------- Aluno " << (i + 1) << " ---------" << endl << endl;
      cout << "Digite o nome do aluno: ";
      getline(cin >> ws, Turma[i].nome); // <- O comando getline lê a linha inteira incluindo os espaços.
// Neste caso, é necessário o ">> ws", pois tinha sobrado um ENTER do último cin...
// Fazendo o programa pular essa entrada. 
//
//
// OBS: nesta linha eu to falando "Vá no conjunto de espaços "Turma" e na posição "i" insira a entrada na parte de "nome"

// O ws (de whitespace, "espaço em branco") é um manipulador de entrada da biblioteca padrão, da mesma família do endl,
// só que para leitura.
// Quando você faz cin >> ws, ele vai tirando do buffer de entrada todos os caracteres em branco (espaço, tab, Enter) e para assim que encontra o primeiro caractere que não é branco, sem consumir esse caractere.



      cout << endl;
    
      cout << "Digite o número de matricula do aluno: ";
      cin >> Turma[i].matricula;
      cout << endl;
    
      cout << "Digite a primeira nota do aluno: ";
      cin >> Turma[i].nota[0];
      cout << endl;
    
      cout << "Digite a segunda nota do aluno: ";
      cin >> Turma[i].nota[1];
      cout << endl;
    
      cout << "Digite a terceira nota do aluno: ";
      cin >> Turma[i].nota[2];
      cout << endl;
    
      Turma[i].media = calculo_media(Turma[i], 3);

      soma_media = soma_media + Turma[i].media;

      if (maior_media < Turma[i].media) {
        maior_media = Turma[i].media;
}

}

cout << "======================== Turma ======================="<<endl << endl;
int aprovados = 0;

for (int j = 0; j < N; j++){
  cout << "--------- Aluno " << (j + 1) << " ---------" << endl;
  cout << "Aluno: " << Turma[j].nome << endl << endl;
  cout << "Matrícula: " << Turma[j].matricula << endl << endl;
  cout << "Nota 01: " << Turma[j].nota[0] <<endl << endl;
  cout << "Nota 02: " << Turma[j].nota[1] <<endl << endl;
  cout << "Nota 03: " << Turma[j].nota[2] <<endl << endl;
  cout << "Nota Final: " << Turma[j].media <<endl << endl;
  if (Turma[j].media < 5){
    Turma[j].situacao = "REPROVADO";
} else {
    Turma[j].situacao = "APROVADO";
    aprovados = aprovados + 1;
}
  cout << "Situação: " << Turma[j].situacao << endl;

}
cout << "------------------- RESUMO -------------------" << endl << endl;
cout << "Total de alunos: " << N << endl;
cout << "Média geral da turma: " << (soma_media/N) << endl;
cout << "Aprovados: " << aprovados << endl;
cout << "Reprovados: " << (N - aprovados) << endl;
cout << "Maior média: " << maior_media << endl;








delete[] Turma;


cout << endl << "Fim do programa..." << endl << endl;





return 0;
}

