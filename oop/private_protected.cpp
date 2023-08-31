#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// string -> U & u function
// transform(s.begin(), s.end(), s.begin(), ::toupper);
class parent{
    protected:
        int p_id;
};

class child : public parent{
    public:
        child(){
            cout<<"Child is here\n";
        }
        void setId(int id){
            p_id = id;
        }
        void displayid(){
            cout<<p_id<<endl;
        }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    child c;
    c.setId(50);
    c.displayid();
    return 0;
}