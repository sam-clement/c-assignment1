//* NAME: EFFIONG SAMUEL CLEMENT
//* DEPARTMENT: COMPUTER SCIENCE
//* MATRIC NUMBER: PDS/2013/0045
#include<iostream>

using namespace std;

int main()
{
    double feet;
    double inches;
    double height;
    double weight;
    double bmi;
    
    cout<<"== BMI Calculator =="<<endl;
    cout<<"step 1:Enter height"<<endl;
    
    cout<<"feet:"<<endl;
    cin>>feet;
    
    cout<<"inches:"<<endl;
    cin>>inches;
    
    cout<<"step 2:Enter weight"<<endl;
    cout<<"pounds:"<<endl;
    cin>>weight;
    
    height =(feet * 12) + inches;
    bmi= (weight*703) / (height * height);
    
    cout<<"BMI:"<<bmi<<endl;
}
