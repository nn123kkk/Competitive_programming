#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void merge(ll arr[], ll l, ll m, ll r) 
{ 
    ll i, j, k; 
    //ll count=0;
    ll n1 = m - l + 1; 
    ll n2 =  r - m; 
  
    /* create temp arrays */
    ll L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
    //cout<<ans<<" ";
    //return count;
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(ll arr[], ll l, ll r) 
{ 
    if (l < r) 
    { 
        
        ll m = l+(r-l)/2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
}
int main()
 {
    ll t,n,m,k,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    mergeSort(a,0,n-1);
	    for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
