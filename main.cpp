#include <QtGlobal>
#include <iostream>
using namespace std;

class Geeks
{
    // Access specifier
    public:
 
    // Data Members
    string geekname;
 
    // Member Functions()
    void printname( int a)
    {
        cout<< a;
       cout << "Geekname is: " << geekname;
    }
};

qint16 testQt() {
    qint16 a = 6;
    return a;
}

int count(int a, int b) {
    if(a>3&&b<7) {
        return 1;
    } else 
    {
        return 3;
    }
       
}
int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    return 0;
}
