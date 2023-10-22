int main()
{
        int n;cin>>n;
        vLL v1;
        vLL v2;
        while(n--)
        {
                ll a;cin>>a;
                v1.pb(a);
                ll b;cin>>b;
                v2.pb(b);
        }
        ll count=0,flag=1;
        for(int i=0;i<v1.size();i++)
        {
                flag=1;
                for(int j=0;j<v2.size();j++)
                {
                        if(i!=j)
                        {
                                if(v1[i]==v2[j])
                                flag=0;
                        }
                }
                if(flag==1)
                count++;
                
        }
        cout<<count;
}
