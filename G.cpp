#include <bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> efficiencies(n - 1);
      int sum_of_efficiencies = 0;
      for (int i = 0; i < n - 1; ++i)
      {
         cin >> efficiencies[i];
         sum_of_efficiencies += efficiencies[i];
      }

      int missing_efficiency = -sum_of_efficiencies;
      cout << missing_efficiency << "\n";
   }
   return 0;
}
