double side[3];
cin >> side[0] >> side[1] >> side[2];
int n = sizeof(side)/sizeof(side[0]);
sort(side, side+n, greater<int>());
