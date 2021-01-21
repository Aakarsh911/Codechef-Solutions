#include <iostream>
using namespace std;

int main() {
    int t, n, k, v, num[200], curr_sum, actual_sum;
	cin >> t;
	while(t--){
	    cin >> n >> k >> v;
	    for(int i = 0; i < n; i++){
	        cin >> num[i];
	    }
	    curr_sum = 0;
	    actual_sum = 0;
	    for(int i = 0; i < n; i++){
	        curr_sum += num[i];
	    }
	    actual_sum = (n + k)*v;
	    int ans = (actual_sum - curr_sum)/k;
	    if((actual_sum - curr_sum)<=0)
        cout << -1 << endl;
        else
        {
            if((actual_sum - curr_sum) % k == 0)
            cout << (actual_sum - curr_sum) / k << endl;
            else
            cout << -1 << endl;
        }
	}
	return 0;
}
