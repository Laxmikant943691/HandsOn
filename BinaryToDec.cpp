# include <iostream>
using namespace std;

int BinToDec(int BinNum)
{
  int pow = 1,ans = 0;
  while(BinNum>0)
  {
    int rem = BinNum%10;
    BinNum/=10;
    ans += rem*pow;
    pow *= 2;
  }
  return ans;
}
int main() {
    int BinNum = 110010;
    cout << BinToDec(BinNum) <<endl;
    return 0;
}