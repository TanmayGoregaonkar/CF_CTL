#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
//string -> U & u function
//transform(s.begin(), s.end(), s.begin(), ::toupper);


class Parent{
    public :
        void greet(){
            cout<<"Hello \n";
        }
        void greet(int age){
            cout<<"Hello \n"<<age<<endl;
        }
};
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
Parent p ;
p.greet();
p.greet(20);
return 0;
}