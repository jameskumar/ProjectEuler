/* Project Euler Problem 6: Sum square difference
 * The sum of the squares of the first ten natural numbers is,
 * 1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)^2 = 55^2 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ans=0,n=100;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    ans*=ans;
    for(int i=1;i<=n;i++){
        ans-=i*i;
    }
    cout<<ans<<endl;
return 0;
}
