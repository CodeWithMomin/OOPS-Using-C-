// this is the example of tail recursion 
//it iteratiuve version of loop  treal recursion 
#include <iostream>

using namespace std;
/*int func(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
         func(n-1);
    }
   return 0;
    
}
int main(){
    func(5);
}
*/
int
func (int n)
{
  while (n > 0)
    {
      cout << n << endl;
      n--;
    }

}

int
main ()
{
  func (5);
}
