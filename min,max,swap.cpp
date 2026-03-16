//1.minimum function & maximum function:
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  cout << min(a,b) << endl;
  cout << max(a,b> << endl;
  cout << min({5,8,90,87,89}) << endl;
  cout << max({67,8,7856,56}) << endl;
  return 0;
}

//Swap:
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    swap(a,b);
    cout << a << "  " << b << endl;
    return 0;
}
