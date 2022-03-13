#include <iostream>
using namespace std;

// Function to find all permutations of a given string `str[i…n-1]`
// containing all distinct characters
void permutations(string str, int i, int n)
{
    // base condition
    if (i == n - 1)
    {
        cout << str << endl;
        return;
    }

    // process each character of the remaining string
    for (int j = i; j < n; j++)
    {
        // swap character at index `i` with the current character
        swap(str[i], str[j]);        // STL `swap()` used

        // recur for substring `str[i+1, n-1]`
        permutations(str, i + 1, n);
        // i+1 will help it run

        // backtrack (restore the string to its original state)
        swap(str[i], str[j]);
    }
}

int main()
{
    string a;
    cin >> a;

    permutations(a, 0, a.length());

    return 0;
}
