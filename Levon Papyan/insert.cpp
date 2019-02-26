#include <iostream>
#include <string>
using namespace std;

string my_insert(string, string, int);



int main(){

    cout<<my_insert("Stepanavan", "Barev", 3)<<endl;
    return 0;
}

string my_insert(string str1, string str2, int index){
    
    int size = str1.size() + str2.size();
    string str3(size, ' ');
    int j = 0;
    for(int i = 0; i < size; ++i){
        if(i == index){
            
            for(j = 0; j < str2.size(); ++j ){
                str3[i + j] = str2[j];
            }
        } 
        str3[i+j] = str1[i];
    }

    return str3;
}
