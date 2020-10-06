#include<iostream>
#include<string>
#include<regex>

using namespace std;

int main (){
  int num[3][4];
  int result[3];
  int i=0,j=0;
  while(i<3){
    j=0;
    string s;
    smatch m;
    getline(cin,s);
    regex e ("\\((\\d+)\\+(\\d+)\\)x\\((\\d+)-(\\d+)\\)");
    while (regex_search (s,m,e)) {
      for (auto x:m){
        if(j>0){
          num[i][j-1] = stoi(x);
        }
        j++;
      }
      s = m.suffix().str();
    }
    result[i]=(num[i][0]+num[i][1])*(num[i][2]-num[i][3]);
    i++;
  }
  for(i=0;i<3;i++){
    if(i==2) cout << result[i] << endl;
    else cout << result[i] << ' ';
  }
  return 0;
}