#include <iostream>
using namespace std;

void update(int n){
    n++;
}
void updateRef(int& n){
    n++;
}

int main(){
    // int i =5; //normal value
    // int &j = i; // ref vallue

    // cout << i <<endl;
    // i++;
    // cout << i <<endl;
    // j++;
    // cout << j <<endl;
    // cout << i <<endl;

    int n =5; 
    cout << "Before " << n << endl;
    update(n);
    updateRef(n);
    cout <<"After " << n <<endl;
}