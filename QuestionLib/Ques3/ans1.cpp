class Solution {
public:
int lengthOfLongestSubstring(string s) {
	int arr[255] = {0};
	int maxlen = 0;
	int index = 0;
	int i = index;
	for (i = index; i < s.size(); i++)
	{
		if (arr[(int)s[i]] == 0)
		{
			arr[(int)s[i]] = i + 1;
		}
		else
		{
			arr[(int)s[index]] = 0;
			maxlen = max(maxlen, i - index);
			index++;
			i--;
		}
	}
	maxlen = max(maxlen, i - index);
	return maxlen;
}
};