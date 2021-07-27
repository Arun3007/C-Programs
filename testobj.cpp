#include<iostream>
using namespace std;
class biggest
{
   private:
        int a,b;
        String n1, n2;
        public:
                void input();
                void display();
        
                
};
void biggest::input()
{
        cout<<"Enter a 1st age and name";
        cin>>a>>n1;
        cout<<"Enter a 2nd age and name";
        cin>>b>>n2;
}
void biggest::display()
{
        if(a>b)
        cout<<"Biggest no.:"<<a<<" "<<n1;
        else
        cout<<"Biggest no.:"<<b<<" "<<n2;
}
int main()
{
        biggest b;
        b.input();
        b.display();
        
}
