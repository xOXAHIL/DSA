#include <iostream>
using namespace std;

int wavePrint(int arr[][4], int row, int col){
    for(int col = 0; col < 4; col++){
        if(col % 2 == 1){
            for(int row = row - 1; row > 0; row--){
                cout << arr[row][col] << " ";
            }
        }
        else {
            for(int row = 0; row < 3; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}
void spiralPrint(int arr[][3], int row, int col){
    int topRow = 0, bottomRow = row -1;
    int leftCol = 0, rightCol = col -1;

    while (topRow <= bottomRow && leftCol <= rightCol){
        //print top row
        for(int i=leftCol ;i<=rightCol; i++){
            cout<<arr[topRow][i]<<" ";
        }
        topRow++;

        //print right col
        for(int i = topRow; i <= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        //print bottom row
        for(int i = rightCol; i >= leftCol; i--){
            cout << arr[bottomRow][i] <<" ";
        }
        bottomRow--;
        //print left col
        for(int i = bottomRow; i >= topRow; i--){
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
    }
}

int main(){
    int a[3][3]={{5,6,7},{8,9,10},{11,12,13}};
}