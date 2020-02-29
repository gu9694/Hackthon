int maxsub(vector<int>& arr)
{
    int n=arr.size();
    int i, j;
    vector <int> res(n);  

    for (i=0; i<n; i++)
        res[i] = arr[i];

    for (i=1; i<n; i++)
        for (j=0; j<i; j++)
        {
            if (arr[i]>arr[j]&&res[i]<res[j]+arr[i])
                {
                    res[i]=res[j]+arr[i];
                }
        }
    
    return *max_element(res.begin(), res.end());
}
 

int main()
{
    vector<int> A1 {1,101,2,3,100,4,5};
    vector<int> A2 {137,48,118,193,68,196};
    vector<int> A3 {38,141,73,138,134,80,193};
    vector<int> A4 {169,16};
    vector<int> A5 {100,190,119,145,74};
    vector<int> A6 {176,197,26,68,152,105,93,186,143};
    vector<int> A7 {127,93,127,183,57,151,126,66};
    vector<int> A8 {139,107,110,80};
    vector<int> A9 {195,85,106,134,137};
    vector<int> A10 {123,175,184,198};
    cout<<maxsub(A1)<<endl;
    cout<<maxsub(A2)<<endl;
    cout<<maxsub(A3)<<endl;
    cout<<maxsub(A4)<<endl;
    cout<<maxsub(A5)<<endl;
    cout<<maxsub(A6)<<endl;
    cout<<maxsub(A7)<<endl;
    cout<<maxsub(A8)<<endl;
    cout<<maxsub(A9)<<endl;
    cout<<maxsub(A10)<<endl;
    //cout<<maxSubArray(A2)<<endl;
}