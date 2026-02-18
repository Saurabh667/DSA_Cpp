#include <iostream>
using namespace std;

int binarySearch(int arr[], int size,int key){
    int start=0;
    int end=size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if (key > arr[mid])
        {
            start=mid+1;
            end=size-1;
        }
        else{
            start=0;
            end=mid-1;
        }
        mid=(start+end)/2;
        

    }
    return false;
}
int firstOccur(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid = (start+end)/2;
    int position=-1;
    while(start<=end){
        if(arr[mid]==key){
            position=mid;
            end=mid-1;
        }
        else if (key > arr[mid])
        {
            start=mid+1;
            end=size-1;
        }
        else{
            start=0;
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return position;


}
int lastOccur(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid = (start+end)/2;
    int position=-1;
    while(start<=end){
        if(arr[mid]==key){
            position=mid;
            start=mid+1;
        }
        else if (key > arr[mid])
        {
            start=mid+1;
            // end=size-1;
        }
        else{
            // start=0;
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return position;

}

int main(){
    int even[6]={1,5,6,8,9,71};
    int odd[5]={5,7,16,18,19};
    int arr[7]={5,5,5,7,8,9,10};
    int input;
    cout << "enter the number ";
    cin >> input;

    switch (input)
    {
    case 1:{
        int check=binarySearch(even,6,8);
        cout << "the index of number is= " << check;
        break;
    }
    case 2:{
        int first=firstOccur(arr,7,5);
        int last=lastOccur(arr,7,5);
        cout << "the first occurance of a nuber is at" << first <<endl;
        cout << "the last occurance of a nuber is at" << last;
        break;
    }
    default:
        cout << "enter a valid number";
        break;
    }
}