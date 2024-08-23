#include<bits/stdc++.h>
using namespace std;

int euclid(int a,int b){
    if(b==0) return a;
    else return euclid(b,a%b);
}


int main(){
    int m,n;
    cout <<"Enter size of array number: ";
    cin >> n;
    int array1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }
    cout <<"Enter size of array number: ";
    cin >> m;
    int array2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> array2[i];
    }
    
      int array1Min=array1[0],array1Max=array1[0];
      for (int i = 1; i < n; i++)
      {
        // Finding the minimum number
        if(array1Min>array1[i]){
                array1Min=array1[i];
        }
        // Finding the maximun number
        if(array1Max<array1[i]){
                array1Max=array1[i];
        }
      }

    //   Array 2
    int array2Min=array2[0],array2Max=array2[0];
    for (int i = 1; i < m; i++)
      {
        // Finding the minimum number
        if(array2Min>array2[i]){
                array2Min=array2[i];
        }
        // Finding the maximun number
        if(array2Max<array2[i]){
                array2Max=array2[i];
        }
      }
        
    cout << "The Minimum Number of Array1 is: "<<array1Min;
    cout << endl;
    cout << "The Minimum Number of Array2 is: "<<array2Min;
    cout << endl;
    cout << "The Maximum Number of Array1 is: "<<array1Max;
    cout << endl;
    cout << "The Maximum Number of Array2 is: "<<array2Max;
    cout << endl;

    cout << "The GCD is: " << euclid(array1Max,array2Max);
    cout << endl;
    cout << "The LCM is: " << (array1Min*array2Min)/euclid(array1Min,array2Min);
    cout << endl;

}