#include<iostream>
#include<math.h>
using namespace std;
class  Distance{
    int a,b;
    friend void get_Dis_Bw_Point();
    public:
        Distance(int x1,int x2){
            a=x1;
            b=x2;
        }
        int get_A(){
            return a;
        }
        int get_B(){
            return b;
        }
};
void get_Dis_Bw_Point(Distance c1,Distance c2){
    int x1=c1.get_A()-c2.get_A();
    int x2=c1.get_B()-c2.get_B();
    float dis=x1*x1+x2*x2;
    float distance=sqrt(dis);
    cout<<"Distance between two point = "<<distance;
}
int main(){
    Distance d1(1,0);
    Distance d2(70,0);
    get_Dis_Bw_Point(d1,d2);
    // cout<<"Distance between two point = "<<distance;
    return 0;
}