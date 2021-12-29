## Filtering Strings

You can either do this with if / else loops, modern C++ methods exist or using regex.

## Example

The easiest way to do this is with a loop and construct a string this way makes the most sense to use and is easy to explain but might not be the best aproach but it's the one I'm going to use.

```c++
string old_string = "hello, woRld!";
string new_string = "";

for (char c : old_string) {
	if (isalnum(c)) {
		new_string += tolower(c);
	}
}
```
