#include <vector>

long long sum(std::vector<int> &a) {
	long long ans = 0;
    int i = 0;
    while(i != a.size()){
        ans += a[i];
        i++;
    }
	return ans;
}

