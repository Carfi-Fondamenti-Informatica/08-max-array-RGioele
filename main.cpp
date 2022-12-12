#include <iostream>

int main(){
      int x;
 cin >> x;
    float array[x];
    for (int i = 0; i < x; i++) {


        cin >> array[i];
    }


    cout << max(array, x);

  return 0;
}
