#include <iostream>
using namespace std;


bool symple(int num);
int number(int num) ;


int main()
{

    cout<<number(40)<<endl;
}



int number(int num) {
      int i;
    for (i = 1; i <= num; ++i)
    {
        if(symple(i)){
            cout<< i << endl;
        }
    }
    return i;
  }


bool symple(int num)
{
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}