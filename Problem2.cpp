int find_max(int l,int r,int len, string s)
{
    while(l>=0&&r<len&&s[l]==s[r])
        {
            l--;
            r++;
        }
        int max_l=r-l-1;
        return max_l;
}

string longest(string s) {
    int len=s.length();
    
    auto find_max11=[&](int l, int r)
    {
        while(l>=0&&r<len&&s[l]==s[r])
        {
            l--;
            r++;
        }
        int max_l=r-l-1;
        return max_l;
    };
    
    int start=0;
    int pd_len=0;
    
    for (int i=0;i<len;i++)
    {
        int tmp=max(find_max(i,i+1,len,s),find_max(i,i,len,s));
        
        if(tmp>pd_len)
        {
            start=i-(tmp-1)/2;
            pd_len=tmp;
        }
    }
    return s.substr(start,pd_len);
}

int main()
{
    string s1="babad";
    cout<<longest(s1).length()<<endl;
    
    string s2="fox";
    cout<<longest(s2).length()<<endl;
    
    string s3="amaury";
    cout<<longest(s3).length()<<endl;
    
    string s4="hatee";
    cout<<longest(s4).length()<<endl;
    
    string s5="wibisono";
    cout<<longest(s5).length()<<endl;
    
    string s6="neveroddoreven";
    cout<<longest(s6).length()<<endl;
    
    string s7="derekchen";
    cout<<longest(s7).length()<<endl;
    
    string s8="programming";
    cout<<longest(s8).length()<<endl;
    
    string s9="akusukarajawalibilawajarakusuka";
    cout<<longest(s9).length()<<endl;
    
    string s10="wapapapapapapow";
    cout<<longest(s10).length()<<endl;
}














