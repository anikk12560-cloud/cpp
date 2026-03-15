#include<iostream>
using namespace std;
int main(){
    int day;
    cin >> day;
    switch(day){
        case 1: 
            cout << "Saturday\n";
            break;
        case 2:
            cout << "Sunday\n";
            break;
        case 3:
            cout << "Monday\n";
            break;
        case 4:
            cout << "Tuesday\n";
            break;
        case 5:
            cout << "wednesday\n";
            break;
        case 6:
            cout <<"Thursday\n";
            break;
        case 7:
            cout << "Friday\n";
            break;
        default:
            cout << : "wrong input";
    }
    return 0;
}


//Even & Odd:
#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    switch(x%2){
        case 0:
            cout << "Even\n";
            break;
        case 1:
            cout << "Odd\n";
            break;
    }
    return 0;
}

//Vowel & consonant:
#include<iostream>
using namespace std;
int main(){
   char c;
   cin >> c;
   switch(c){
        case 'a':
            cout << "vowel\n";
            break;
        case 'e':
            cout << "vowel\n";
            break;
        case 'i':
            cout << "vowel\n";
            break;
        case 'o':
            cout << "vowel\n";
            break;
        case 'u':
            cout << "vowel\n";
            break;
        default:
            cout << "consonant\n";
   }
    
    return 0;
}
