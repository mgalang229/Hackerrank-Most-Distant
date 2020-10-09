#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	double max_x=0, max_y=0, min_x=INT_MAX, min_y=INT_MAX;
	for(int i=0; i<n; ++i) {
		double x, y;
		cin >> x >> y;
		if(x==0) {
			max_y=max(max_y, y);
			min_y=min(min_y, y);
		} else {
			max_x=max(max_x, x);
			min_x=min(min_x, x);
		}
	}
	double ans=max(max_x-min_x, max_y-min_y);
	double n1=max(max_x, -min_x);
	double n2=max(max_y, -min_y);
	double tmp=sqrt(n1*n1+n2*n2);
	ans=max(ans, tmp);
	cout << fixed << setprecision(6) << ans << "\n";
}
