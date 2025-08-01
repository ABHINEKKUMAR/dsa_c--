#include <iostream>
using namespace std;

int linearSearch(int arr[],int n ,int key ){

    for( int i=0;i<n;i++){ //   i to n loop 
        if(arr[i]==key){ //searching for the key 
            return i; // element found
        }
    }
    return -1;//element not found 

}

int main(){
    int n , key;

    cout<<"eneter the element"; // first we ask no of element
    cin>>n;

    int arr[n]; // declare the array size in n 

    cout<<"enter   :"<<n<<"element:\n";
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"eneter element  to be search";
    cin>>key;

    int result = linearSearch(arr,n,key);

    if(result== -1){
        cout<<"element not found in the array "<<endl;

    } else {
    cout<<"element found in the element in the array "<<endl;
}
return 0;


}


