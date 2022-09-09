// void selectionSort(vector<int>& arr, int n)
// {   
//     // Write your code here.
//     for(int i=0;i<n-1;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[min]>arr[j]){
//                 min=j;
//             }
//         }
//         swap(arr[min],arr[i]);
//     }
// }
// if array size is small
// stable or unstable
// Informally, stability means that equivalent elements (10,10)retain their relative positions, after sorting.
// inplce or not
// An in-place algorithm is an algorithm that does not need an extra space and produces an output in the same memory that contains the data by transforming the input ‘in-place’.