#include<iostream>
 using namespace std;
 int main() {
    int a,b,i;
    cout<< "\t\tTabla de la verdad\n\n";
    cout<< " A\tB\tA.B\tA+B\t!A\t!B\n";
    for(i = 0;i <= 3;i++)
    {
        a = i / 2;
        b = i % 2;
        cout<<" "<<a<<"\t"<<b<<"\t"<<(a&&b)<<"\t"<<(a||b)<<"\t"<<!a<<"\t"<<!b<<endl;
    }
}
