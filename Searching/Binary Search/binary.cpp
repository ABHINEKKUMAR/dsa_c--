#include<iostream>
using namespace std;

int  binarySerach(int arr[],int n,int key){
    int low =0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;

     if(arr[mid]==key){
        return mid;
     }else if(arr[mid]<key){
        low= mid+1;
     }else{
        high= mid-1;
     }

    }
    return -1;
}





int main(){


    int  n , key ;
    cout<<"enter number of element";
    cin>>n;

    int arr[n];
    cout<<"enter" << n << "sorted element:\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
    cout<<"enter the element to search";
    cin>>key;
    int result = binarySerach(arr,n,key);

    if(result== -1){
        cout<<"element found in the array "<<endl;

    }else{
        cout<<"element  not found in the array"<<endl;
    }
    return 0;
}