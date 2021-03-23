#include <bits/stdc++.h>
#include <array>
using namespace std;

int main()
{
    array<int, 5> ar = {1, 2, 3, 4, 5};
    array<int, 5> arr = {6, 7, 8, 9, 10};

    // print array element using at()
    cout<<"using at(): "<<ar.at(2)<<endl;

    // print array element using get()
    cout<<"using get(): "<< get<4>(ar)<<endl;

    // print array element using operator[]
    cout<<"using operator[]: "<<ar[0]<<endl;

    // print 1st element
    cout<<"using front(): "<<ar.front()<<endl;

    // print last element
    cout<<"using back(): "<<ar.back()<<endl;

    // print size of array
    cout<<"using size(): "<<ar.size()<<endl;

    // print max-size()
    cout<<"using max_size(): "<<ar.max_size()<<endl;

    // swap array
    ar.swap(arr);
    cout<<"Swap: ";
    for(int i=0; i<ar.size(); i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    // is empty
    ar.empty() ? cout<<"empty": cout<<"Not empty"<<endl;

    // fill
    ar.fill(9);
    cout<<"fill: ";
    for(int i=0; i<6; i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}