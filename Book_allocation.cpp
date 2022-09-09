// bool isPossible(vector<int> arr, int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;
//     //cout << "checking for mid "<< mid <<endl;
    
//     for(int i = 0; i<n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid ) {
//             return false;
//         }
//             pageSum = arr[i];
//         }
//         if(studentCount > m) {
//             return false;
//         }
//         //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
//     }
//     return true;
// }

// int allocateBooks(vector<int> arr, int n, int m) {
//     int s = 0;
//     int sum = 0;
    
//     for(int i = 0; i<n; i++) {
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// painter's partition
// bool isPossible(vector<int> arr, int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;
//     //cout << "checking for mid "<< mid <<endl;
    
//     for(int i = 0; i<n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid ) {
//             return false;
//         }
//             pageSum = arr[i];
//         }
//         if(studentCount > m) {
//             return false;
//         }
//         //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
//     }
//     return true;
// }
// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     //    Write your code here.
//     int s = 0;
//     int sum = 0;
    
//     for(int i = 0; i<boards.size(); i++) {
//         sum += boards[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossible(boards,boards.size(),k,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }


// aggressive cows
// bool isPossible(vector<int> &stalls, int n,int k,int mid){
//     int cowc=1;
//     int lastpos=stalls[0];
//     for(int i=0;i<n;i++){
//         if(stalls[i]-lastpos>=mid){
//             cowc++;
//             if(cowc==k){
//                 return true;
//             }
//             lastpos=stalls[i];
//         }
//     }
//     return false;
// }
// int aggressiveCows(vector<int> &stalls, int k)
// {
//     sort(stalls.begin(),stalls.end());
//     //    Write your code here.
//         //    Write your code here.
//     int s = 0;
//     int maxi = 0;
    
//     for(int i = 0; i<stalls.size(); i++) {
//         maxi=max(maxi,stalls[i]);
//     }
//     int e = maxi;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossible(stalls,stalls.size(),k,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }



// why bin search
// if largest then we will go to right part
// otherwise to left part