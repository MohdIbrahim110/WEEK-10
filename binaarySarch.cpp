#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end )/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        return -1;
    
    }
}






int main(){
    int even[6]={2,4,6,8,10,18};
    int odd[5]={3,5,7,9,11};

    int evenIndex = binarySearch(even,6,18);
    cout<<"index of 18 is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,11);
    cout<<"Index of 11 is "<<oddIndex<<endl;
    return 0;
}