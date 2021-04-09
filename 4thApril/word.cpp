#include <iostream>
using namespace std;

int main() {
    string a;
    int cntU=0,cntL=0;
    cin >> a;
    for(int i=0; a[i]!='\0'; i++){
      if(a[i]>='A'&& a[i]<='Z'){
        cntU++;
      }else{
       cntL++;
      }
    }
  if(cntL>=cntU){
    for(int i=0; a[i]!='\0'; i++){
      if(a[i]>='A'&& a[i]<='Z'){
        a[i] = a[i] +32;
      }
    }
  }else{
    for(int i=0; a[i]!='\0'; i++){
      if(a[i]>='a'&& a[i]<='z'){
        a[i] = a[i] - 32;
      }
    }
  }
  cout <<a << endl;
}
