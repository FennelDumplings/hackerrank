#include <vector>
#include <unordered_map>

using namespace std;

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar)
{
    unordered_map<int, int> mapping;
    int ans = 0;
    for(int x: ar)
    {
        if(mapping.count(x) > 0 && (mapping[x] & 1))
            ++ans;
        ++mapping[x];
    }
    return ans;
}
