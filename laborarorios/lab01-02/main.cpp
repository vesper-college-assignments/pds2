#include <iostream>
#include <vector>
#include <string>
#include "estudante.h"
#include <algorithm>
#include <iomanip>


using namespace std;

vector<pair<Estudante, float>> read_input(){
    vector<pair<Estudante, float>> estudantes;

    for (int i=0; i<10; i++){
        Estudante aux;
        pair <Estudante, float> dupla = make_pair(aux, 0);
        estudantes.push_back(dupla);
        cin >> estudantes[i].first.matricula;
        cin >> estudantes[i].first.nome;
        for (int j = 0; j<5; j++)
            cin >> estudantes[i].first.notas[j];
    }
    return estudantes;
}

void print(vector<pair<Estudante, float>> estudantes){
    cout << "matricula  "<<"nome   "<< "notas        "<<"rsg  "<<endl;
    for (int i=0; i<10; i++){
        cout << estudantes[i].first.matricula << " ";
        cout << estudantes[i].first.nome << " ";
        for (int j = 0; j<5; j++)
            cout << estudantes[i].first.notas[j] << " ";
        cout << estudantes[i].second<< endl;
    }
}

void  fill_rsg(vector<pair<Estudante, float>> &estudantes){
    for(int i=0; i<10; i++){
        float count = 0;
        for(int j=0; j<5; j++)
            count += estudantes[i].first.notas[j];
        estudantes[i].second = count/5;
    }
}

bool sort_by_rsg ( pair<Estudante,float>&left, pair<Estudante,float>&right) {
    return (left.second > right.second);
}

bool sort_by_mat ( pair<Estudante,float>&left, pair<Estudante,float>&right) {
    return (left.first.matricula < right.first.matricula);
}

void print_ranking(vector<pair<Estudante, float>> estudantes){
    cout << fixed << showpoint;
    cout << setprecision(2);
    for (int i=0; i<3; i++){
        cout << estudantes[i].first.matricula << " ";
        cout << estudantes[i].first.nome << " ";
        cout << estudantes[i].second<< endl;
    }
}

int main(){

    vector<pair<Estudante, float>> estudantes;
    estudantes = read_input();
    fill_rsg(estudantes);
//    print(estudantes);
//    cout << endl;

    //ordenar pelo matricula
    sort(estudantes.begin(), estudantes.end(), sort_by_mat);
//    print(estudantes);
//    cout << endl;

    //ordenar pelo rsg
    sort(estudantes.begin(), estudantes.end(), sort_by_rsg);
//    print(estudantes);

    print_ranking(estudantes);
    return 0;
}

// Em seguida, ele deve escrever na saída a matrícula,
//nome e o RSG dos
// três melhores alunos de forma ordenada pelo RSG (do maior para o menor).
//O RSG deve ser escrito com precisão de 2 casas decimais*. Em caso de empate, selecione
//o que possuir a menor matrícula.


