class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      int n = arr.size();
      int arr1[n];
	for (int i = 0; i < arr.size(); i++)
	{
		int flag = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				flag++;
			}
		}
		arr1[i] = flag ;

	}
	bool qwe = true ;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i] == arr1[j]  && arr[i] != arr[j])
			{
				qwe = false;


			}
		}


	}

	return qwe;
    }
};
