#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
const int N=6;
int i,j;
int A[N]={ 1, 4, -2, 3, 0, 9 };
void predefined (void)
{ 
    cout <<"The array elements are :\n";
    for(int i = 0; i<N; i++) 
        cout << A[i] << " ";
    cout <<endl;
    for (int i = 0; i < N-1; i++)
{
    int jMin = i;
    for (int j = i+1; j < N; j++)
    {
        if (A[j] < A[jMin])
        {
            jMin = j;
        }
    }
    if (jMin != i) 
    {
        swap(A[i], A[jMin]);
    }
}
    cout <<"The sorted array elements are :\n";
    for(int i = 0; i<N; i++) 
        cout << A[i] << " ";
}
void random (void)
{
    int a;
        srand(time(NULL));
            for (int i=0; i<N; i++)
    {
        a=rand() % 100;
        A[i]=a;
    }
        cout <<"The random array elements are :\n";
        for(int i = 0; i<N; i++) 
        cout << A[i] << " ";
        for (int i = 0; i < N-1; i++)
{
    int jMin = i;
    for (int j = i+1; j < N; j++)
    {
        if (A[j] < A[jMin])
        {
            jMin = j;
        }
    }
    if (jMin != i) 
    {
        swap(A[i], A[jMin]);
    }
}
    cout <<endl;
        cout <<"The sorted array elements are :\n";
            for(int i = 0; i<N; i++) 
        cout << A[i] << " ";
        
}

int main()
{
    cout <<"The predefined elements are :\n";
    for(int i = 0; i<N; i++) 
    cout << A[i] << " ";
    cout << endl;
    int a;
    cout << "Menu" <<endl;
    cout << "    1. Predefined array" <<endl;
    cout << "    2. Random array" <<endl;
        cin >> a;
    if (a==1)
        predefined();
    else if(a==2)
        random();
}
