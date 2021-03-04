// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main() {
	int a, b;
	cout << "enter 2 numbers: " << endl;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}

