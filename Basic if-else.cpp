//Basic if-else:
#include<iostream>
using namespace std;
int main(){
    int x = 6;
    if(x%2==0){
        cout << "Even\n";
    }
    else{
        cout << "Odd\n";
    }
    return 0;
}

//Tarnary operator:
#include<iostream>
using namespace std;
int main(){
    int x = 13;
    x%2==0 ? cout<<"Even\n" : cout<< "Odd\n";
    return 0;
}

