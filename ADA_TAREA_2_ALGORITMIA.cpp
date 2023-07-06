#include <bits/stdc++.h>
using namespace std;
int func1(int N){//(n+2)+(n/2+1)=3n/2+3
  int counter=0;
  for(int i=0;i<=N;i++){
    if(i%2==0){
      cout<<i<<" ";
      counter++;
    }
    counter++;    
  }
  cout<<"\n";
  counter++;
  return counter;
}
int func2(int N){//(n+2)+((n+1)(n+2))=n^2/2+3n/2+1+2n+4=n^2+4n+4=(n+2)^2
  int counter=0;
  for(int i=0;i<=N;i++){
    for(int j=0;j<=N;j++){
      cout<<i<<","<<j<<" ";
      counter++;
    }
    counter+=2;
  }
  counter++;
  return counter;
}
int func3(vector<int> A,vector<int> B){//(A+2)+(A+1)*(B+2)=AB+3A+B+4
  int counter=0;
  for(int i=0;i<=A.size();i++){
    for(int j=0;j<=B.size();j++){
      cout<<A[i]<<"-"<<B[j]<<" ";
      counter++;
    }
    counter+=2;
  }
  cout<<"\n";
  counter++;
  return counter;
}
int func4(int N){//(n+2)+(n+1)+(n+1)(log2(n+1))+n=3n+3+(n+1)(log2(n+1))
  int counter=0;
  for(int i=0;i<=N;i++){
    int j=1;
    counter++;
    while(j<N){
      cout<<j<<" ";
      j=j*2;
      counter++;
    }
    counter+=2;
  }
  cout<<"\n";
  return counter++;
}
int main() {
  int a=15,b=3;
  cout<<"FUNCIÓN 1: \n";
  int aFunc1=func1(a);
  cout<<"Función 1 para el valor "<<a<<": "<<aFunc1<<"\n";
  cout<<"FUNCIÓN 2: \n";
  int bFunc2=func2(b);
  cout<<"Función 2 para el valor "<<b<<": "<<bFunc2<<"\n";
  vector<int> A={1,2,3,4,5,6,7,8,9,10};
  vector<int> B={20,30,40,50,60};
  cout<<"FUNCIÓN 3: \n";
  int ABFunc3=func3(A,B);
  cout<<"Función 3 para los vectores A y B"<<": "<<ABFunc3<<"\n";
  int c=4;
  cout<<"FUNCIÓN 4: \n";
  int cFunc4=func4(c);
  cout<<"Función 4 para el valor "<<c<<": "<<cFunc4<<"\n";
  
  
}