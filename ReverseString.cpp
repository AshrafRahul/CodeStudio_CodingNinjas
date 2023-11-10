void reverse(string& str, int i, int j){
    //cout << "Call receive for: " << str << endl;
    //base case
    if(i > j) return;

    swap(str[i], str[j]);
    i++;
    j--;

    //recursive call
    reverse(str, i, j);
}

#include <bits/stdc++.h> 
string reverseString(string str)
{
	reverse(str, 0, str.length()-1);
	return str;
}