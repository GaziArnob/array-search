#include <iostream>
using namespace std;
int findtosearch(int n, int key,int arr[] ){
    int e=0;
    int f=n;
    while(e<=f){
        int mid=(e+f)/2;
        if(arr[mid]==key){
       return mid;

        }else if(arr[mid]>key){
         f=mid-1;
        }else{
            e=mid+1;
        }
    }
  return arr[key];
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
cout<< findtosearch(n,key,arr) <<endl;
return 0;

}