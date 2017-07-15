#include <iostream>
#include <vector>
#include<iomanip>
using namespace std;


int main ()
{
    int sz;
    float elmnt;
    cout<<"Enter the size of quadratic 2D matrix  :  ";
    cin >> sz;
    vector<vector<float> >matric;
    vector<vector<float> >gaelmatr; // Gauss elimination matrix

    for (int i=0; i<sz; i++)
    {
        vector<float>temp;
        for (int j=0; j<sz; j++)
        {
            cout<<"Enter the "<< i+1 << " row  "<< j+1 <<" column element :   ";
            cin >> elmnt;
            temp.push_back(elmnt);
        }
        matric.push_back(temp);
    }


cout<<endl;
cout<<"////////////////////////////////////////////////////////////////////////////////"<<endl;
cout<<endl;

for (int i=0; i < matric.size(); i++)
{
    for(int j=0; j < matric.size(); j++)
    {
        cout<<setw(4) << matric[i][j] ;
    }
    cout<<endl;

}



for (int i=0; i<sz; i++)
    {
        vector<float>temp;
        for (int j=0; j<sz; j++)
        {
           
            temp.push_back(matric[i][j]);
        }
        gaelmatr.push_back(temp);
    }





for (int i=0; i < gaelmatr.size(); i++)
{

    float temp = gaelmatr[i][0];
    
    for(int j=0; j < gaelmatr.size(); j++)
    {


        gaelmatr[i][j] = ( (gaelmatr[i][j])/ (temp));
        
        
    }
}







cout<<endl;
cout<<"////////////////////////////////////////////////////////////////////////////////"<<endl;
cout<<endl;

for (int i=0; i < gaelmatr.size(); i++)
{
    for(int j=0; j < gaelmatr.size(); j++)
    {
        cout<<setprecision(2)<<setw(6) << gaelmatr[i][j] ;
    }
    cout<<endl;

}
}
