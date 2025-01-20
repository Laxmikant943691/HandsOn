# include <iostream>
using namespace std;

int main() 
    {   
        cout << "1234 Sqr pattern:" <<endl;
        cout << endl;
        for (int i=1;i<5;i++)
            {
              for (int j=1;j<5;j++){
                cout << j;
              }
              cout << endl;
            } 
        
        cout << endl;
        cout << "ABCD Sqr pattern:" <<endl;
        cout << endl;
        
        for (int i=1;i<5;i++)
            { 
              char  k = 'A';
              for (int j=1;j<5;j++){
                cout << k;
                k++;
              }
              cout << endl;
            }
        cout << endl;
        cout << "* Reverse trngle pattern:" <<endl;
        cout << endl;
        for (int i=4;i>0;i--)
            { 
              for (int j=0;j<i;j++){
                cout << "*";
              }
              cout << endl;
            }

        cout << endl;
        cout << "* trngle pattern:" <<endl;
        cout << endl;
        for (int i=0;i<5;i++)
            { 
              for (int j=0;j<i;j++){
                cout << "*";
              }
              cout << endl;
            }
        
        cout << endl;
        cout << "Num trngle pattern:" <<endl;
        cout << endl;
        int nm=1;
        for (int i=0;i<5;i++)
            { 
              for (int j=0;j<i;j++){
                cout << nm <<" ";
                nm++;
              }
              cout << endl;
            }
        
        cout << endl;
        cout << "* 1,21,321,4321 trngle pattern:" <<endl;
        cout << endl;
        for (int i=0;i<5;i++)
            { 
              for (int j=i+1;j>0;j--){
                cout << j <<" "; 
              }
              cout << endl;
            }
    }