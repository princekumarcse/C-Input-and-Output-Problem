//4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format. 
#include<iostream>
using namespace std;
int main(){
    int radious;
    float area;
    cout<<"Enter Radious of Circle: "<<endl;
    cin>>radious;
    area=3.14*radious*radious;
    cout<<"Area of Circe is : "<<area<<endl;
    return 0;
}