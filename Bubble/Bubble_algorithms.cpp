#include <iostream>
using namespace std;

float bubble(const int);

int main(){
  bubble(20);
  return 0;
}

float bubble(const int N){
  int array_Bu = new int array_Bu[N];
  int array_BuN = new int array_BuN[N];
  int down = 5;
  for(int i=0; i<N; i++){ //Заполнение Массива.
    array_Bu[i] = rand() %100 + 10;
    cout<< " "<< array_Bu[i];
    if(i>N){
      cout<<endl;
      down=+5;
    }
    down = 5;
    max = 0;
    for(int i=0;i<N;i++){
      if(array_Bu[i]>array_Bu[i+1]){
        array_Bu[i] = array_BuN[i+1];
        array_Bu[i+1] = array_BuN[i];
      }
      else {
        array_Bu[i] = array_BuN[i];
        array_Bu[i+1] = array_BuN[i+1];
      }
    }
    for(int i=0; i<N;i++){
      cout<<" "<< array_BuN[i];
      if(i>down){
        cout<<endl;
        down=+5;
      }
    
  }
