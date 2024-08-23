#include<bits/stdc++.h>

using namespace std;

struct Item
{
    string name;
    int price, weight,unitPrice;
};



int main()
{
    int n;
    cout << "Enter The Item Number: ";
    cin >> n;

    cout << "Enter The Tables: "<<endl;

    Item array[n];


    for(int i =0; i<n; i++)
    {
        cin >> array[i].name >> array[i].price >> array[i].weight;
        array[i].unitPrice = array[i].price / array[i].weight;
    }
    int capacity;
    cout << "Enter The Knapsack Capacity: ";
    cin >> capacity;
    for(int i =0; i<n; i++)
    {
        cout << "Items Name : " << array[i].name << " " << "Items Price : " << array[i].price << " " << "Items Weight : " << array[i].weight<<endl;

    }


    return 0;
}


