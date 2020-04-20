#include<iostream>
using namespace std;

int main(){
    int i;
    int &j=i;
    int k;
    i=100;
    j=i++;
    printf("%d,%d",i,j);
    printf("\n");
    k=i;
    printf("%d,%d,%d",i,j,k);
    return 0;

}