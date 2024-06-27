#include "iostream"
using namespace std;

int binarySearchIter(int nums[],int arrSize,int key){
    int low=0;
    int high=arrSize-1;

    while(low <= high){
        int mid=(low+high)/2;

        if(key==nums[mid]){
            return mid;
        }
        else if(key<nums[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int nums[]={2,5,10,11,15,16,17,19,25,30,40};
    int key=0;

    cout<<"Please enter a number to find:";
    cin>>key;

    int arrSize=sizeof(nums)/sizeof(nums[0]);

    int foundIndex= binarySearchIter(nums,arrSize,key);
    if(foundIndex!=-1){
        cout<<"We found data at index : "<<foundIndex;
    } else{
        cout<<"We cannot found";
    }
    return 0;
}