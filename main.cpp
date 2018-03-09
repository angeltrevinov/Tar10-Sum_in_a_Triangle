/*
  Angel Odiel Treviño Villanueva
  A01336559
  Tarea: 10 Fecha: 8/Marzo Materia: Analisis y Diseño de Algoritmos
*/

#include <iostream>
#include <vector>

using namespace std;

int MaxPath(int Triangulo[20][20], int N){ // to find the maximum posible path
  for(int i = N - 2, cont = 0; i >= 0; i--, cont++){ // we are going from bottom to top
    for(int j = 0; j < N - cont; j++){
        if(Triangulo[i+1][j] < Triangulo[i+1][j+1]){
          Triangulo[i][j] = Triangulo[i][j] + Triangulo[i+1][j+1];
        }else{
          Triangulo[i][j] = Triangulo[i][j] + Triangulo[i+1][j];
        }
    }
  }
  return Triangulo[0][0];
}

int main(){

  int Triangulo[20][20]; // to store the triangle that the user gives
  int Cases; // to store the number of cases;
  cin >> Cases;
  int N; //size of the matrix
  vector <int> Answers; //to store answers
  while(Cases > 0){ // do these cases
    cin >> N;
    for(int i = 0; i < N; i++){   //to go from top to bottom
      for(int j = 0; j < i+1; j++){ //to go from left to right
        cin >> Triangulo[i][j];
      }
    }
    Answers.push_back(MaxPath(Triangulo, N));
    Cases--;
  }

  for(int i = 0; i < Answers.size(); i++){
    cout << Answers[i] << endl;
  }

  return 0;
}
