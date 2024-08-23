#include<bits/stdc++.h>

using namespace std;

struct Item
{
    string name;
    float price, weight,unitPrice;
};

bool comp(Item i1,Item i2)
{

    return(i1.unitPrice>i2.unitPrice);

}



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
        array[i].unitPrice=array[i].price/array[i].weight;
    }

    int capacity;
    cout << "Enter The Knapsack Capacity: ";
    cin >> capacity;

    sort(array,array+n,comp);

    for(int i =0; i<n; i++)
    {
        cout << " " << array[i].name << " " << array[i].price << " " << array[i].weight<<endl;

    }

    double profit = 0;

    for(int i =0; i<n; i++)
    {

        if(capacity>=array[i].weight)
        {
            profit+=array[i].price;
            capacity-=array[i].weight;
        }
        else
        {
            profit=profit+array[i].unitPrice*capacity;
            break;
        }

    }

    cout<<"Total Price : " << profit <<endl;


    cout << endl;

    return 0;
}


