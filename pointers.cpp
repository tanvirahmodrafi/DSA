#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int key,int size){
    
    int start = 0;
    int end = size -1;
    int mid;
    while(start <= end){
        mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(void){

    int arr[7] = {1,3,4,6,8,9,11};
    int key = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    //binary(arr,key,size);
    cout<<binary(arr,key,size);

}
    