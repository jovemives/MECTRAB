#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  const int N = 1e4 + 10;
  int v[N];

  int n, cor = 0;
  cin >>n;

  for(int i = 0; i < n; i++){
    cin >>v[i];
  }

  for(int i = 0; i < 10; i++){
    for(int j = 0; j < n; j++){
      if(v[j] == cor and v[j] != 9){
        if(v[j-1] == -1){
          v[j-1] = cor + 1;
        }
        if(v[j+1] == -1){
          v[j+1] = cor + 1;
        }
      }
    }
    if(cor < 10)
      cor++;
  }

  for(int i = 0; i < n; i++){
    if(v[i] == -1){
      v[i] = 9;
    }
  }

  for(int i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  return 0;
}