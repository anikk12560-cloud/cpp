//Basic syntex:
#include<iostream>
int main(){
  std::cout<<"Anik chakma";
  return 0;
}

//print:
#include<iostream>
int main(){
  cout<<"Hello ! Anik";
  return 0;
}

//variable decliar:
#include<iostream>
int main(){
  int x = 10;
  std:: cout<< x;
  return 0;
}

#include<iostream>
int main(){
  int x = 10;
  char c ='Anik';
  double d = 34.34; 
  std:: cout<< x <<" "<< c << std::endl<< d << std::endl;
  return 0;
}

//input & Typecasting:
#include<iostream>
int main(){
  int x;
  std:: cin>>x;
  std:: cout << x << std::endl;
  return 0;
}

#include<iostream>
using namespace std;
int main(){
  int x;
  char c;
  double d;
  cin >> x >> c >> d;
  cout << x << c << d endl;
  return 0;
}

#include<iostream>
using namespace std;
int main(){
  int x;
  cin >> x;
  cout << x << endl;
  char c = 'A';
  int ascci = c;
  cout << ascci << endl;
  return 0;
}

//typecasting:
#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x ;
    cout << x;
    char c = 'a';
    cout << (int)c << endl;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
  int x;
  Cin >> x;
  cout << x << endl;
  int y = 65;
  cout << (char)y << endl;
  reuturn 0;
}

// EOF and Setprecision :
#include<iostream>
using namespace std;
int main(){
  int x;
  while (cin >> x){
      cout << x << endl;
  }
return 0;
}


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double d = 23.4564;
  cout << fixed << setprecision(4) << d << endl;
  return 0;
}




















  

