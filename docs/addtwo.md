## Adding Two Number In Binary

We want to add two numbers without using `+` or `-` operators, we do this by using binary operators.

## Example

This solution in C++

```c++
int addTwo(int a, int b) {
	while(b) {
		int dff = a ^ b, carry = (unsigned)(a & b) << 1;
		a = diff;
		b = carry;
	}
	return a;
}
```

bit math is the same in other languages though so essentially take the xor of two number if all bits are different we have no carry and the numbers can just be added by taking the xor of the numbers, like so: `010 + 101 = 111`. We run into a problem when there's a carry involved, so how we deal with the carry is we assign it to b, carry is where the bits are 1 `110 & 110 = 110` so then you carry values to the left, as so when you add number together in elementry school. `110 << 1 = 1100` when you take the xor of these two number you get `000` and now when you take the xor of the carry and `000` and when you take the xor of the carry and the current bit string `000` you just get the carry thus a is set to the result: `1100` when you take the & of these two, `1100 & 1100 = 1100`.
