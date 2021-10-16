class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> arr;
        int x=a[n-1];
        arr.push_back(x);
        
        for(int i=n-2;i>=0;i--)
        {
            if(x<=a[i])
            {
                x=a[i];
                arr.push_back(x);
            }
        }
        
        reverse(arr.begin(),arr.end());
        return arr;
        
    }
};