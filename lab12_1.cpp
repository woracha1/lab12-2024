#include<iostream>
using namespace std;

int fibonacci(int) ;

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int num){
    if(num > 1){
        return fibonacci(num-1) + fibonacci(num-2) ;
    }else if(num == 1){
       return 1 ;
    }else{
        return  0;
    }
    return 0 ;
}
