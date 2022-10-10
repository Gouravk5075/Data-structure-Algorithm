#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
   cout<<"printing the array"<<endl;
    //print the array
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Printring Done";

}
int main()
{      
//first
    int number[15];

    cout<<number[0]<<endl;
    cout<<number[2]<<endl;
    

//second
    int second[3]={4,6,8};
    //accesing an array
    cout<<"Value of 0 index "<<second[0]<<endl;
    cout<<"Value of 1 index "<<second[1]<<endl;
    cout<<"Value of 2 index "<<second[2]<<endl;


//third  
    int third[15]={2,5,45};

    int n=15;
    printArray(third,15);

//four
    int fourth[10]={0};

     n=10;
    printArray(fourth,10);

//five
    
int fifth[10]={1};

     n=10;
    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0; i<n; i++)
    {
        cout<<fifth[i]<<" ";
    }

//Homework
int sixth[10]={1,1,1,1,1,1,1,1,1,1};

     n=10;
    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0; i<n; i++)
    {
        cout<<sixth[i]<<" ";
    }
//
int fifthsize = sizeof(fifth)/sizeof(int);
cout<<"\nsize of fifth is:"<<fifthsize<<endl;

char ch[5]={'a','b','c','g','H'};
cout<<ch[4]<<endl;

cout<<"Printing the array"<<endl;
//print array
for(int i=0;i<5;i++)
{
    cout<<ch[i]<<"  ";
}

cout<<"Printing Done"<<endl;
double firstdouble[4];
float firstfloat[7];
bool firstbool[5];


cout<<endl<<"everything is fine"<<endl;

}
