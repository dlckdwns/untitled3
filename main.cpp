#include <iostream>
#pragma once
#include <vector>
#include <functional>


using namespace std;

class First
        {
    public:
            virtual void Myfunc()
            {
                cout<<"FF"<<endl;}
        };


class Second: public First
{
public:
    void Myfunc()
    {
        cout<<"SF"<<endl;}
};


class Third: public Second
        {
public:
    void Myfunc()
    {
        cout<<"TF"<<endl;}
};



int main() {
    Third * tptr = new Third();
    Second *sptr = tptr;
    First *fptr = sptr;

    fptr->Myfunc();
    sptr->Myfunc();
    tptr->Myfunc();
    delete tptr;
    return 0;



}

