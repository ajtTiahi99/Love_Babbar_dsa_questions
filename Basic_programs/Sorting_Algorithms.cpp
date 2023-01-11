#include <iostream>
using namespace std;


//Selection Sort
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
//Bubble Sort Iterative
void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        } 
    }
    
}
//Bubble Sort Recurssive
void BubbleSortRec(int arr[],int n){
    if(n==1)return;
    for(int j=0;j<n;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    BubbleSortRec(arr,n-1);
}
//Insertion Sort Iterative
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int hole = i;
        int temp = arr[i];
        while(hole>0 && temp<arr[hole-1]){
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole]=temp;
    }
}
//Insertion Sort Recussive
void InsertionSortRec(int arr[],int n){
    if(n<=1)return;
    InsertionSortRec(arr,n-1);
    int temp = arr[n-1];
    int hole = n-1;
    while(hole>0 && temp<arr[hole-1]){
        arr[hole]=arr[hole-1];
        hole--;
    }
    arr[hole] = temp;
}
// Merge Sort
int merge(int l[],int r[],int arr[]){
    int i=0,j=0,k=0;
    int lenL = sizeof(l)/sizeof(l[0]);
    int lenR = sizeof(r)/sizeof(r[0]);
    while(i<lenL && j<lenR){
        if(l[i]<=r[j]){
            arr[k]=l[i];
            i++;
        }
        else{
            arr[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<lenL){
        arr[k++]=l[i++];
    }
    while(j<lenR){
        arr[k++]=r[j++];
    }
    return arr;
}
void MergeSort(int arr[],int n){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    if(s>=e)return;
    int Left[mid+1];
    int Right[e-mid];
    for(int i=0;i<=mid;i++){
        Left[i]=arr[i];
    }
    for(int i=mid+1;i<=e;i++){
        Right[i]=arr[i];
    }
    MergeSort(Left,mid+1);
    MergeSort(Right,e-mid);
    merge(Left,Right,arr);
}

// Quick Sort

//Printing the array
void printArray(int arr[],int n){
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    // int arr[] = {8,3,4,6,10,1,9,12,6,7,7};
    int arr[] = {6,3,9,5,2,8,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"n: "<<n<<endl;
    
    // SelectionSort(arr,n);
    // BubbleSort(arr,n);
    // BubbleSortRec(arr,n);
    // InsertionSort(arr,n);
    // InsertionSortRec(arr,n);
    MergeSort(arr,n);
    // QuickSort(arr,n);
    
    printArray(arr,n);
    return 0;
}
