#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void algo(vector<int>& k,int number,int n) {
    int b=n; 
    int l=2*n+1; 
    int r=2*n+2;
    if (l<number&&k[l]>k[b])b=l;
    if (r<number&&k[r]>k[b])b=r;
    if (b!=n){swap(k[n],k[b]);
        algo(k,number,b);}}
void sorting(vector<int>& k){
    int s = k.size();
    for (int i=s/2-1;i>=0;i--)algo(k, s, i);
    for (int i=s-1;i>0;i--){
        swap(k[0],k[i]);
        algo(k,i,0);}}
int main(){
    int input;
    cin>>input; 
    vector<int> k(input);
    for (int i=0;i<input;i++) {
        cin>>k[i];}
    sorting(k);
    cout << "[";
    for (int i=0;i<input;i++) {
        cout<<k[i];
        if (i !=input-1) {
            cout<<",";}}
    cout<<"]"<<endl;
    return 0;}

