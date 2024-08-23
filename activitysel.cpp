#include<bits/stdc++.h>

using namespace std;

struct Activity
{
    string activity;
    int start,end;
};

bool comp(Activity i1, Activity i2)
{

    return(i1.end<i2.end);

}



int main()
{
    int n;
    cout << "Enter The Item Activities: ";
    cin >> n;


    cout << "Enter The Tables: "<<endl;

    Activity array[n];


    for(int i =0; i<n; i++)
    {
        cin >> array[i].activity >> array[i].start >> array[i].end;
    }

    sort(array,array+n,comp);

    for(int i =0; i<n; i++)
    {
        cout << "Activity: "<<" " << array[i].activity<<  " " << "Start"<< " " << array[i].start<<  " " <<"End"<<  " " << array[i].end <<endl;

    }
    int c=1;
    int i=0;

    for(int j =1; j<n; j++)
    {

        if(array[j].start>=array[i].end)
        {
            c++;
            i=j;
        }


    }


    cout<<"Total Activities : " << c <<endl;

    cout << endl;

    return 0;
}



