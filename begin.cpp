#include <iostream>

using namespace std;
int numSum(int num);

int main(){
    int num;
    cout<<"Hello Wordl!"<<endl;
    cin>>num;
    cout<<num+100<<endl;
    cout << "num의 곱연산: " + num * 200 << endl;
    cout << "num과 50의 합은: " + numSum(num) << endl;
    return 0;

}

int numSum(int num){
    num += 50;
    cout<< num << endl;
    return num;
}
