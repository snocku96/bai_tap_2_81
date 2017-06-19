#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello OngHuy!" << endl;
    string a;

    while(1){
        cout <<"Please select one of four list: enter from 1-->4"<<endl;
        cout <<"1: book"<<endl;
        cout <<"2: dictionary"<<endl;
        cout <<"3: diary"<<endl;
        cout <<"4: pen"<<endl;
        cin >>a;
        if(a == "1"||a=="2"||a=="3"||a=="4"){
        break;
        }
    }
    if(a=="1"){
        cout<<"You chose book";
    }
    else if(a=="2"){
        cout<<"you chose dictionary";
    }
    else if(a=="3"){
        cout<<"You chose diary";
    }
    else
        cout<<"You chose pen";

    return 0;
}
