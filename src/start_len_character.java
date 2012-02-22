public class start_len_character {
	static char[] f(char a[], int start, int len) {
		if (len <= 0)
			return "null".toCharArray();
		int lenA = a.length;
		int aIndex = 0;
		char[] result = new char[len];
		if (start + len > lenA || start < 0)
			return "null".toCharArray();
		for (int i = 0; i < start; i++)
			aIndex++;
		for (int i = 0; i < len; i++)
			result[i] = a[aIndex++];
		return result;
	}

	public static void main(String args[]) {
		char a[] = { 'a', 'b', 'c' };// null
		System.out.println(f(a, 0, 4));

		char b[] = { 'a', 'b', 'c' };// {'a', 'b', 'c'}
		System.out.println(f(b, 0, 3));

		char c[] = { 'a', 'b', 'c' };// {'a', 'b'}
		System.out.println(f(c, 0, 2));

		char d[] = { 'a', 'b', 'c' };// {'a'}
		System.out.println(f(d, 0, 1));

		char e[] = { 'a', 'b', 'c' };// null
		System.out.println(f(e, 1, 3));

		char h[] = { 'a', 'b', 'c' };// {'b', 'c'}
		System.out.println(f(h, 1, 2));

		char g[] = { 'a', 'b', 'c' };// {'b'}
		System.out.println(f(g, 1, 1));

		char j[] = { 'a', 'b', 'c' };// null
		System.out.println(f(j, 2, 2));

		char i[] = { 'a', 'b', 'c' };// {'c'}
		System.out.println(f(i, 2, 1));

		char p[] = { 'a', 'b', 'c' };// null
		System.out.println(f(p, 3, 1));

		char k[] = { 'a', 'b', 'c' };// null
		System.out.println(f(k, 1, 0));

		char l[] = { 'a', 'b', 'c' };// null
		System.out.println(f(l, -1, 2));

		char m[] = { 'a', 'b', 'c' };// null
		System.out.println(f(m, -1, -2));

		char n[] = {};// null
		System.out.println(f(n, 0, 1));

		// null
		// abc
		// ab
		// a
		// null
		// bc
		// b
		// null
		// c

	}
}
