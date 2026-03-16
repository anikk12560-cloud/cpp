#include<iostream>
using namspace std;
int main(){
  char s[100];
  cin >> s;
  cout << s << endl;
  return 0;
}

//For space stirng:
#include<iostream>
using namspace std;
int main(){
  char s[100];
  cin.getline(s,100);
  cout << s << endl;
  return 0;
}

#include<iostream>
using namspace std;
int main(){
  int x;
  cin >> x;
  cin.ignor();
  char s[100];
  cin.getline(s,100);
  cout << x << endl << s << endl;
  return 0;
}

//build in function:
#include<iostream>
using namspace std;
int main(){
  string s;
  cin >> s ;
  cout << s;
  return 0;
}
