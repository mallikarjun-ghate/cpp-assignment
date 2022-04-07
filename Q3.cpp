#include<iostream>
#include<algorithm>
using namespace std;
int  chocRectangle(int l,int w)
{   
    int min;
	int chocSquare = __gcd(l, w);
	min = (l * w) / (chocSquare * chocSquare);
    cout<<"Minimum chocolate squares made are: "<<min<<endl;
}

int main()
{
    int l;
    int w;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<endl;
    cout<<"Enter Width: ";
    cin>>w;
    cout<<endl;
	chocRectangle(l,w);
	return 0;
}
