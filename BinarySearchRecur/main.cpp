#include "iostream"
using namespace std;

int binarySearchRecur(int nums[],int low,int high,int key){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(key==nums[mid]){
        return mid;
    }
    else if(key<nums[mid]){
        return binarySearchRecur(nums,low,mid-1,key);
    }
    else{
        return binarySearchRecur(nums,mid+1,high,key);
    }
}
int main(){

    int nums[]={2,5,10,11,15,16,17,19,25,30,40};
    int key=0;
    cout<<"Please enter a number to find:";
    cin>>key;

    int arrSize=sizeof(nums)/sizeof(nums[0]);
    int low=0;
    int high=arrSize-1;
    int foundIndex=binarySearchRecur(nums,low,high,key);

    if(foundIndex != -1){
        cout<<"We found data at index :"<<foundIndex;
    } else{
        cout<<"We cannot found";
    }
    return 0;
}