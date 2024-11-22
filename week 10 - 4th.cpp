#include<iostream>
#include<cstring>
using namespace std;

union Address{
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[100];
    char state[100];
    int zip;
};

int main(){
    Address address;
    address.name;
    address.home_address;
    address.hostel_address;
    address.city;
    address.zip;

    cout<<"Enter the name of a Person: ";
    cin.getline(address.name,100);
    cout<<"\nEnter the home address: ";
    cin.getline(address.home_address,100);
    cout<<"\nEnter the hostel address: ";
    cin.getline(address.hostel_address,100);
    cout<<"\nEnter the city: ";
    cin.getline(address.city,100);
    cout<<"\nEnter the Zip code: ";
    cin>>address.zip;

    cout<<"Infromation Enter by the User"<<endl;
    cout<<"Name: "<<address.name;
    cout<<"\nHome Address: "<<address.home_address<<endl;
    cout<<"Hostel Address: "<<address.hostel_address<<endl;
    cout<<"city: "<<address.city<<endl;
    cout<<"Zip: "<<address.zip<<endl;

    return 0;
}