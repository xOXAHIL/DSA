#include <iostream>
using namespace std;

//searching
bool isPresent(int arr[][4], int target, int row, int col){
    for (int row = 0 ;row<3;row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target){
                return true;
            }
        }
    }
    return false;
}

void printSum(int arr[][4], int row, int col){
    cout << "Printig Sum -> ";
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
//largest sum in a row
int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i =0; i< 3; i++){
        for(int j =0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Element to be search : " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3,4)){
        cout <<"Element is Present" <<endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    printSum(arr,3,4);
}