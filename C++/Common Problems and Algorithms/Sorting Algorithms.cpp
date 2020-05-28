#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

//function that uses bubble sort to sort the array and then prints the array
void bubbleSort(ll arr[], int n) {
	
	loop(i, n) {
		
		loop(j, n - 1) {
			
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
			
		
		}
		
	}
	cout<<"After Bubble Sort : \n";
	loop(i, n) {
		cout<<arr[i]<<" ";
	}
}

//function that uses selection sort to sort the array and then prints the array
void selectionSort(ll arr[], int n) {
	
	int min_index;
	loop(i, n - 1) {
		min_index = i;
		loopr(j, i + 1, n) {	
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
		
		
		swap(arr[min_index], arr[i]);
	}
	cout<<"After Selection Sort : \n";
	loop(i, n) {
		cout<<arr[i]<<" ";
	}
}

//function that uses insertion sort to sort the array and then prints the array
void insertionSort(ll arr[], int n) {  
    int key;
    loopr(i, 1, n) {
        key = arr[i];  
        int j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j--;
        }  
        loop(i, n) {
		cout<<arr[i]<<" ";
	}cout<<endl;
        arr[j + 1] = key;  
    }
	cout<<"After Insertion Sort : \n";
	loop(i, n) {
		cout<<arr[i]<<" ";
	}  
}

//function to merge sub-arrays
void merge(ll arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 

    int L[n1], R[n2]; 
  
    loop(i, n1) {
        L[i] = arr[l + i]; 
    }
    loop(j, n2) {
        R[j] = arr[m + 1 + j]; 
    }

    i = 0;
    j = 0;
    k = l;
    
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
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
    for (int ind = 0; ind < 10; ind++) {
	
        	cout<<arr[ind]<<" ";
		}
		cout<<endl;
} 

//utility function that does merge sort
void mergeSortUtil(ll arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        
        mergeSortUtil(arr, l, m); 
        mergeSortUtil(arr, m+1, r); 
        
        merge(arr, l, m, r); 
    }
}

//function that uses merge sort to sort the array and then prints the array
void mergeSort(ll arr[], int n) {
	
	mergeSortUtil(arr, 0, n - 1);
	cout<<"After Merge Sort : \n";
	loop(i, n) {
		cout<<arr[i]<<" ";
	}
}

//function that creates partition of array for quick sort
int partition(ll arr[], int low, int high)  
{  
    int pivot = arr[high];
    int i = (low - 1);
  
    for (int j = low; j <= high - 1; j++)  
    {  
        if (arr[j] < pivot)  
        {  
            i++;
            swap(arr[i], arr[j]);  
        }  
    }  
    swap(arr[i + 1], arr[high]);  
    return (i + 1);  
}

//utility function that does quick sort
void quickSortUtil(ll arr[], int low, int high) {
    if (low < high)  
    {
        int pi = partition(arr, low, high);  
		quickSortUtil(arr, low, pi - 1);  
        quickSortUtil(arr, pi + 1, high);  
    }
}

//function that uses quick sort to sort the array and then prints the array
void quickSort(ll arr[], int n) {
	quickSortUtil(arr, 0, n - 1);
	cout<<"After Quick Sort : \n";
	loop(i, n) {
		cout<<arr[i]<<" ";
	}
}

//function to store the array in a heap
void makeHeap(ll arr[], int n, int i) 
{ 
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
  
    if (l < n && arr[l] > arr[largest])  {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest])  {
        largest = r; 
    }
    if (largest != i) {
        swap(arr[i], arr[largest]); 
        makeHeap(arr, n, largest); 
    } 
} 

//function that uses heap sort to sort the array and then prints the array
void heapSort(ll arr[], int n) 
{ 

    for (int i = n / 2 - 1; i >= 0; i--)  {
        makeHeap(arr, n, i); 
    }
  
    for (int i=n-1; i>=0; i--) {
        swap(arr[0], arr[i]); 
        makeHeap(arr, i, 0); 
    }
    cout<<"After Heap Sort :\n";
    loop (i, n) {
    	cout<<arr[i]<<" ";
	}
} 

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n = 10;
    
    //cin>>n;
    
    ll arr[] = {40, -5, 45, 55, 1, 60, 15, 95, -85, 5};
    
    /*loop(i, n) {
    	cin>>arr[i];
	}*/
	
	//bubbleSort(arr, n);
	cout<<endl;
	//selectionSort(arr, n);
	cout<<endl;
	//insertionSort(arr, n);
	cout<<endl;
	mergeSort(arr, n);
	cout<<endl;
	quickSort(arr, n);
	cout<<endl;
	heapSort(arr, n);
}
