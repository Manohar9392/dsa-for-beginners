#..................................  largest element in array.......................................................!
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
   int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}




#..................................SECOND LARGEST ELEMENT and SECOND SMALLEST........................................................!
int secondlargest(vector<int> &arr,int n)
{
    int largest=arr[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
    }
    return slargest;

}
int secondsmallest(vector<int> &arr,int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
     int slargest=secondlargest(a,n);
     int ssmallest=secondsmallest(a,n);
     return {slargest,ssmallest};
}





..........................................is sorted array.....................!
int isSorted(int n, vector<int> a) {
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            return 0;
        }
        else{

        }
    }
    return 1;
}







.............................remove duplicates from sorted array.....................................!
int removeDuplicates(vector<int> &arr, int n) {
	int ind=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[ind])
		{
			ind++;
			arr[ind]=arr[i];
		}
		else{

		}
	}
	return ind+1;
}






............................... left rotate array by one place.................!
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int b=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=b;
    return arr;
}






......................left rotate array byy d places...............!
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int p;
    cout<<"enter the places to rotate: ";
    cin>>p;
    int p1=p%n;
    reverse(arr,arr+p);
    reverse(arr+p,arr+n);
    reverse(arr,arr+n);
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}



...............................union of two sorted arrays..........................!
#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0;
    int j=0;
    vector<int> unionarr;
    int n1=a.size();
    int n2=b.size();
    while(i<n1&&j<n2)
    {
        if(a[i]<=b[j])
        {
            if(unionarr.size()==0||unionarr.back()!=a[i])
            {
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0||unionarr.back()!=b[j])
            {
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1)
    {
         if(unionarr.size()==0||unionarr.back()!=a[i])
            {
                unionarr.push_back(a[i]);
            }
            i++;

    }
    while(j<n2)
    {
        if(unionarr.size()==0||unionarr.back()!=b[j])
            {
                unionarr.push_back(b[j]);
            }
            j++;
    }
    return unionarr;
}









