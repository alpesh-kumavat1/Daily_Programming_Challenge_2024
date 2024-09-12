#include<iostream>
using namespace std;


void merge_sorted_arr(int arr1[] , int arr2[] , int size){
    int a = size;
    int b = size; 
    int c = a+b-1;

    while(a>=0 && b>=0){
        if(arr1[a] > arr2[b]){
            arr1[c--] = arr1[a--];
        }
        else{
            arr1[c--] = arr2[b--]; 
        }
    }
    while (a>=0)
    {
        arr1[c--] = arr1[a--];
    }
    
    while (b>=0)
    {
       arr1[c--] = arr2[b--];
    }
}

int main(){
    int num1[6] = {1,3,5};
    int num2[] = {2,4,6};
    int size = sizeof(num2)/sizeof(num2[0]);
    merge_sorted_arr(num1 , num2 , size);

    return 0;
}