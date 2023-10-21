
#include <iostream>
using namespace std;
int main(){
//Q1  Write a program to count the minimum number of notes in a given amount using the switch statement.
// Input 1: 510
int n;
int r;
cout<<"enter the amount"<<endl;
cin>>n;
 switch(n>=2000){
  case 1: 
  cout<<"2000 rs notes is "<<n/2000 <<endl;
  n=n%2000;
  break;


 }
 switch (n>=500){
  case 1: 
   cout<<"500 rs note is "<<n/500 <<endl;
   n=n%500;
    break;
 }
 switch(n>=200){
  case 1: 
  cout<<"200 rs note is "<<n/200 <<endl;
   n=n%200;
    break;
 }
 switch(n>=100){
  case 1: 
  cout<<"100 rs note is "<<n/100 <<endl;
   n=n%100;
    break;
 }
  switch(n>=50){
  case 1: 
  cout<<"50 rs note is "<<n/50<<endl ;
   n=n%50;
    break;
 }
  switch(n>=20){
  case 1: 
  cout<<"20 rs note is "<<n/20<<endl ;
   n=n%20;
    break;
 }
  switch(n>=10){
  case 1: 
  cout<<"10 rs note is "<<n/10 <<endl;
   n=n%10;
    break;
 }
 switch(n>=5){
  case 1: 
  cout<<"5 rs note is "<<n/5 <<endl;
   n=n%5;
    break;
 }
 switch(n>=2){
  case 1: 
  cout<<"2 rs note is "<<n/2 <<endl;
   n=n%2;
    break;
 }
 switch(n>=1){
  case 1: 
  cout<<"1 rs note is "<<n/1 <<endl;
   n=n%1;
    break;
 }


}

