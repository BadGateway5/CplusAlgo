hello

```cpp
void gcd(int a, int b) {

	while (a != 0 and b != 0)

	{

		if (a > b) a = a % b;

		else b = b % a;

	}

	cout << a + b << "\n";

}
```
