bool solve()
{		
	int n;
	scanf("%d", &n);
 
	vec< pair<int, int> > a(n);
 
	for(int x, y, i(0);i < n;i++) {
		scanf("%d %d", &x, &y);
		a[i] = mp(x, y);
	}
 
	sort(ALL(a));
 
	int c1 = 0, c2 = 0;
 
	for(int i(0);i < n;i++) {
		if(a[i].first < 0) c1++;
		else c2++;
	}
 
	int ans = 0;
 
	if(c1 < c2) {
		int i = 0;
		for(;i < n;i++) {
			if(a[i].first < 0) ans += a[i].second;
			else break;
		}
		c2 = c1 + 1;
		for(;i < n && c2;i++, c2--) ans += a[i].second;
	}else if(c1 > c2) {
		int i = n - 1;
		for(;i >= 0;i--) {
			if(a[i].first > 0) ans += a[i].second;
			else break;
		}
		c1 = c2 + 1;
		for(;i >= 0 && c1;i--, c1--) ans += a[i].second;
	}else {
		for(int i(0);i < n;i++) {
			ans += a[i].second;
		}
	}
 
	printf("%d\n", ans);
 
	return true;
}   