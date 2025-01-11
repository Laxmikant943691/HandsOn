# include <iostream>
using namespace std;

int decToBinary(int decNum)
{
  int pow = 1,ans = 0;
  while(decNum>0)
  {
    int rem = decNum%2;
    decNum/=2;
    ans += rem*pow;
    pow *= 10;
  }
  return ans;
}
int main() {
    for (int i= 1;i<=10;i++)
    {
        cout << decToBinary(i) <<endl;
        
    }
    cout <<"From Main"<<endl;
    return 0;
}