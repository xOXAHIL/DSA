#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int main(){
    int arr[7] = {1,2,3,3,3,3,5};

    cout << "First occurance of 3 is : " << firstOcc(arr,7,3) <<endl;
    cout << "Last occurance of 3 is : " << lastOcc(arr,7,3) <<endl;

    //total occurance

}

// noOfTargetOccurences(vector<int> arr, ll target)
// {
//     ll s = arr.size();
//     ll l = 0;
//     ll r = s - 1;
//     while (l <= r)
//     {
//         int m = l + (r - 1) / 2;

//         if (arr[m] == target)
//         {
//             ll leftCount = m, rightcount = m;
//             int count = 1;

//             while (rightcount + 1 < arr.size() && arr[rightcount] == arr[rightcount + 1])
//             {
//                 rightcount++;
//                 count++;
//             }
//             while (leftCount - 1 >= 0 && arr[leftCount] == arr[leftCount - 1])
//             {
//                 leftCount--;
//                 count++;
//             }

//             return count;
//         }
//         if (arr[m] < target)
//         {
//             l = m + 1;
//         }
//         else
//         {
//             r = m - 1;
//         }
//     }
// }