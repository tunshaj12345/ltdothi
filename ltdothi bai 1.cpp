#include <bits/stdc++.h>
#include <fstream>
using namespace std;
const int MAX = 100;
struct GRAPH{
int a[MAX][MAX];
int sodinh;
};
void readGRAPH(string fn,GRAPH &g){
ifstream f;
f.open(fn);
  if(f.is_open()){
  f>>g.sodinh;
    for(int i=0;i<g.sodinh;i++){
     for(int j=0;j<g.sodinh;j++){
      f>>g.a[i][j];
     }
    }
    f.close()
  }
  else{
  cout<<"Khong doc duoc file";
  }
}
int KiemTraMaTranHopLe(GRAPH &g){
for(int i=0;i<g.sodinh;i++){
 if(g.a[i][i] != 0){
  return 0;
 }
}
  return 1;
}
void printGRAPH(GRAPH &g){
cout<<"So dinh cua do thi"<<g.sodinh<<endl;
  for(int i=0;i<g.sodinh;i++){
   for(int j=0;j<g.sodinh;j++){
    cout<<g.a[i][j]<<" ";
   }
    cout<<endl;
  }
}
void BacCuaDinh(GRAPH &g){
for(int i=0;i<g.sodinh;i++){
  int bac = 0;
  for(int j=0;j<g.sodinh;j++){
    if(g.a[i][j]>0){
      bac = bac + 1;
    }
  }
  cout<<"Bac cua dinh"<<i+1<<"la"<<bac;
}
}
