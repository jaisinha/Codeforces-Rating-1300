// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int
// // // // int main()
// // // // {
// // // //     ll m;
// // // //     ll sum = 0, sum1 = 0, sum2 = 0;
// // // //     cin >> m;
// // // //     while (m--)
// // // //     {
// // // //         int a[3];
// // // //         for (int i = 0; i < 3; i++)
// // // //             cin >> a[i];
// // // //         for (int i = 0; i < 3; i++){
// // // //             if (i == 0)
// // // //             sum+=a[i];
// // // //             else if (i == 1)
// // // //             sum1+=a[i];
// // // //             else
// // // //             sum2+=a[i];}

// // // //     }
// // // //         if (sum == 0 && sum1 == 0 && sum2 == 0)
// // // //             cout << "YES" << endl;
// // // //         else
// // // //             cout << "NO" << endl;
// // // //     return 0;
// // // // // }
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int
// // // // int firstorder(int a[],int i,int n,int key)
// // // // {
// // // //     if(i==n)
// // // //     return -1;
// // // //     if(a[i]==key)
// // // //     return i;
// // // //     return firstorder(a,i+1,n,key);
// // // // }
// // // // int main(){
// // // // int a[]={4,2,1,2,5,2,7};
// // // // cout<<firstorder(a,0,7,2);
// // // // return 0;
// // // // }
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int
// // // // int main()
// // // // {
// // // //     ll a[5][5];
// // // //     for (int i = 0; i < 5; i++)
// // // //     {
// // // //         for (int j = 0; j < 5; j++)
// // // //             cin >> a[i][j];
// // // //     }
// // // //     ll count = 0;
// // // //     for (int i = 0; i < 5; i++)
// // // //     {
// // // //         for (int j = 0; j < 5; j++)
// // // //         {
// // // //             for (int k = 0; k < 5; k++)
// // // //             {
// // // //                 for (int l = 0; l < 5; l++)
// // // //                 {
// // // //                         if (a[i][j] < a[k][l])
// // // //                         {
// // // //                             if (a[2][2] == 1)
// // // //                             break;
// // // //                             else
// // // //                             {
// // // //                             int temp = a[i][j];
// // // //                             a[i][j] = a[k][l];
// // // //                             a[k][l] = temp;
// // // //                             }
// // // //                         }
// // // //                 }
// // // //             }
// // // //         }
// // // //     }
// // // //     cout<<count<<endl;
// // // //     return 0;
// // // // }
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int
// // // // int main(){
// // // // ll a[5][5];
// // // // for(int i=0;i<5;i++)
// // // // {
// // // //     for(int j=0;j<5;j++)
// // // //     cin>>a[i][j];
// // // // }
// // // // ll r,c;
// // // // for(int i=0;i<5;i++)
// // // // {
// // // //     for(int j=0;j<5;j++)
// // // //     {
// // // //         if(a[i][j]==1){
// // // //         r=i;
// // // //         c=j;
// // // //         }
// // // //     }
// // // // }
// // // // cout<<abs(3-r-1)+abs(3-c-1);
// // // // return 0;
// // // // }
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int
// // // // int main()
// // // // {
// // // //     ll m, t;
// // // //     cin >> m >> t;
// // // //     string s;
// // // //     cin >> s;
// // // //     while (t--)
// // // //     {
// // // //             for(int j=0;j<m;j++)
// // // //             {
// // // //                 if (s[j] == 'B' && s[j + 1] == 'G')
// // // //                 {
// // // //                     char temp = s[j];
// // // //                     s[j] = s[j + 1];
// // // //                     s[j + 1] = temp;
// // // //                     j += 1;
// // // //                 }
// // // //             }
// // // //     }
// // // //         cout<<s;
// // // //         return 0;
// // // // }
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int
// // // // int main(){
// // // // string s;
// // // // cin>>s;
// // // // for(int i=0;i<s.length();i++)
// // // // {
// // // //     if(s[i]=='.')
// // // //     cout<<0;
// // // //     else if(s[i]=='-'&&s[i+1]=='.'){
// // // //     cout<<1;
// // // //     i+=1;}
// // // //     else if(s[i]=='-'&&s[i+1]=='-'){
// // // //         cout<<2;
// // // //         i+=1;
// // // //     }
// // // // }
// // // // return 0;
// // // // }
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int
// // // // int main(){
// // // // string s;
// // // // set<string> s1;
// // // // ll count=0;
// // // // for(int i=0;i<4;i++)
// // // // {
// // // //     cin>>s[i];
// // // //     count++;
// // // //     char c=s[i];
// // // //     s1.insert(c);
// // // // }
// // // // if(count==s1.size())
// // // // return 0;
// // // // }
// // // // #include<bits/stdc++.h>
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int
// // // // int main(){
// // // // string s;
// // // // cin>>s;
// // // // ll count=1;
// // // // ll count1=1;
// // // // ll j=int(s)+1;
// // // // while(j>(int)s){
// // // // for(int i=0;i<s.length();i++)
// {
//     for(int j=i;j<s.length();j++)
//     {
//         if(s[i]!=s[j+1])
//         count++;
//     }
//     if(count=s.length()-i)
//     count1++;
// }
// if(count1==s.length()){
// cout<<s;
// break;}
// else
// j+=1;
// }
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     int m;
//     cin >> m;
//     while (true)
//     {
// ll flag = 1;
// int a[10];
// for (int i = 0; i < 10; i++)
//     a[i] = 0;
// m++;
// int n1 = m;
// do
// {
//     int digit = n1 % 10;
//     a[digit]++;
//     n1 /= 10;
// } while (n1 != 0);
//         for (int i = 0; i < 10; i++)
//         {
//             if (a[i] > 1)
//                 flag = 0;
//         }
//         if (flag == 1)
//         {
//             cout << m;
//             break;
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     string s;
//     cin >> s;
//     ll count = 0, count1 = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (isupper(s[i]))
//             count++;
//         else
//             count1++;
//     }
//     if (count > count1)
//     {
//         for (int i = 0; i < s.length(); i++)
//         {
//             int c=s[i];
//             if (islower(c))
//                 s[i]=toupper(s[i]);
//         }
//     }
//     else if (count < count1)
//     {
//         for (int i = 0; i < s.length(); i++)
//         {
//             int c=s[i];
//             if (isupper(c))
//               s[i]=tolower(s[i]);
//         }
//     }
//     else
//         for (int i = 0; i < s.length(); i++)
//         {
//             int c=s[i];
//             if (isupper(c))
//             s[i]=tolower(c);
//         }
//     cout << s;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// string s;
// cin>>s;
// int c=s[0];
// if(islower(c))
// s[0]=toupper(c);
// cout<<s;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll n1;cin>>n1;
//         int a[10];
//         for (int i = 1; i <= 10; i++)
//             a[i] = 0;
//         do
//         {
//             int digit = n1 % 10;
//             a[digit]++;
//             n1 /= 10;
//         } while (n1 != 0);
//     if(a[4]+a[7]==7||a[4]+a[7]==4)
//     cout<<"YES";
//     else
//     cout<<"NO";
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m;
// cin>>m;
// string s;
// cin>>s;
// ll count=0;
// for(int i=1;i<s.length();i++)
// {
//     if(s[i-1]==s[i])
//     count++;
// }
// cout<<count;
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//         ll m;
//         cin >> m;
//         while (m--)
//         {
//                 ll n1;
//                 cin >> n1;
//                 while (n1--)
//                 {
//                         ll A, n, C;
//                         cin >> A >> n >> C;
//                         int s[n] = {1};
//                         for (int j = 0; j < n; j++)
//                         {
//                                 for (int i = 0; i <= j; i++)
//                                 {
//                                         if (s[i] == 1)
//                                                 s[i] = 0;
//                                         else
//                                                 s[i] = 1;
//                                 }
//                         }
//                         ll count = 0, count1 = 0;
//                         for (int i = 0; i < n; j++)
//                         {
//                                 if (s[i] == 1)
//                                         count++;
//                                 else
//                                         count1++;
//                         }
//                         if (C == 1)
//                                 cout << count << endl;
//                         else
//                                 cout << count1 << endl;
//                 }
//         }
//         return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//         ll n, m;
//         cin >> n >> m;
//         ll flag = 1;
//         if (n == 0 || n == 1)
//                 cout << "NO";
//         else if (n == 0 || n == 1)
//                 cout << "NO";
//         else
//         {
//                 for (int i = 2; i < n; i++)
//                 {
//                         if (n % i == 0)
//                                 flag = 0;
//                 }
//                 for (int i = 2; i < m; i++)
//                 {
//                         if (m % i == 0)
//                                 flag = 0;
//                 }
//                 if(flag==1){
//                 for (int i = (n+1); i < m; i++)
//                 {
//                         for (int j = 2; j < i; j++)
//                         {
//                                 if (i % j == 0)
//                                         break;
//                                 else if(j==i-1)
//                                         flag=0;
//                         }
//                 }}
//                 if (flag == 0)
//                         cout << "NO";
//                 else
//                         cout << "YES";
//         }
//         return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// string s,s1;
// cin>>s>>s1;
// for(int i=0;i<s.length();i++)
// {
//         if(s[i]==s1[i])
//         cout<<0;
//         else
//         cout<<1;
// }
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//         ll n;
//         cin >> n;
//         if (n == 1 || n == 0)
//                 cout << "-1";
//         else
//         {
//                 ll a[n];
//                 for (int i = 1; i <= n; i++)
//                         a[i] = i;
//                 for (int i = 2; i <= n; i++)
//                 {

//                         if (a[i] == i)
//                         {
//                                 int temp = a[i];
//                                 a[i] = a[i - 1];
//                                 a[i - 1] = temp;
//                         }
//                         i += 1;
//                 }
//                 ll flag = 0;

//                 for (int i = 1; i <= n; i++)
//                 {
//                         if (a[i] == i)
//                                 flag = 1;
//                 }
//                 if (flag == 1)
//                         cout << "-1";
//                 else
//                 {
//                         for (int i = 1; i <= n; i++)
//                                 cout << a[i] << " ";
//                 }
//         }
//         return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m;
// cin>>m;
// vector<int> a;
// int ans=-1,ans1=100;
// for(int i=0;i<m;i++)
// {
//         ll ele;cin>>ele;
//         a.push_back(ele);
//         ans=max(ans,a[i]);
//         ans1=min(ans1,a[i]);
// }
// for(int i=0;i<m;i++)
// {
//  for(int j=i+1;i<m;i++)
//  {
//          if(a[i]==a[j])
//                  a.erase(a.begin()+j);
//  }
// }
// for(int i=0;i<a.size();i++)
// cout<<a[i]<<" ";
// ll count=0;
// for(int i=0;i<a.size();i++)
// {
//         for(int j=i+1;j<a.size();j++)
//         {
//                 if(a[i]<a[j])
//                 {

//                         int temp=a[i];
//                         a[i]=a[j];
//                         a[j]=temp;
//                         count++;
//                 }
//         }
//                 if(a[0]==ans&&a[m-1]==ans1)
//                 break;
// }
// cout<<count;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define lld long double
// int main(){
// lld m;
// cin>>m;
// vector<lld> v;
// lld sum=0;
// for(int i=0;i<m;i++)
// {
//         lld ele;cin>>ele;
//         v.push_back(ele);
//         sum+=ele;
// }
// sum/=100;
// sum/=m;
// sum*=100;
// cout<<fixed<<setprecision(12)<<sum;
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll m;
//     cin >> m;
//     ll A[m] = {0}, B[m] = {0};
//     ll i = 0;
//     ll count = 0, count1 = 0, count2=0, count3 = 0;
//     do
//     {
//         ll a, b;
//         cin >> a;
//         A[i] = a;
//         {
//             if (A[i] == 0)
//                 count++;
//             else
//                 count1++;
//         }
//         cin >> b;
//         B[i] = b;
//         {
//             if (B[i] == 0)
//                 count2++;
//             else
//                 count3++;
//         }
//         i++;
//     } while (i < m);
//     ll s=0;
//     if (count1 > count)
//       s+=count;
//     else
//      s+=count1;
//     if(count2 > count3)
//         s+=count3;
//     else
//         s+=count2;
//     cout << s << endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m,d;
// cin>>m;
// while(m--)
// {
//     int n=2,i=0,ans=-1;
//     while(n--)
//     {
//         ll a,b,c;
//         cin>>a>>b>>c;
//         d=a+b+c;
//         if(ans<d){
//             ans=d;
//             i++;
//         }
//     }
//     cout<<i<<endl;
// }
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m;
// cin>>m;
// while(m--)
// {
//     vector<ll> v;
//     ll count=0;
//     for(int i=0;i<4;i++)
//     {
//         ll ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
//     // sort(v.begin(),v.end());
//     for(int i=1;i<v.size();i++)
//     {
//         if(v[i]!=v[i-1])
//         {
//             count++;
//             v.erase(v.begin()+i);
//             v.erase(v.begin()+(i-1));
//             i-=1;
//         }
//     }
//     cout<<count<<endl;
// }
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll m;
//     cin >> m;
//     ll a[m];
//     ll ans = -1, ans1 = 100, n1, n2;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a[i];
//         ans1 = min(ans1, a[i]);
//         ans = max(ans, a[i]);
//     }
//     for (int i = m-1; i >= 0; i--)
//     {
//         if (a[i] == ans1)
//         {
//             n1 = i;
//             break;
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         if (a[i] == ans)
//         {
//             n2 = i;
//             break;
//         }
//     }
//     ll b;
//     b = n2 + (m - 1 - n1);
//     if (n1 < n2)--b;
//         cout << b;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m;
// cin>>m;
// ll a[m];
// for(int i=1;i<=m;i++)
// cin>>a[i];
// ll count=0,flag=1;
// for(int i=2;i<=m;i++)
// {
//     for(int j=i;j>1;j--)
//     {
//         if(a[i]>a[j-1])
//         {
//             if(j==2)
//                 count++;
//         }
//         else
//         break;
//     }
//     for(int j=i;j>1;j--)
//     {
//         if(a[i]<a[j-1])
//         {
//             if(j==2)
//                 count++;
//         }
//         else
//         break;
//     }
// }
// cout<<count<<endl;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// vector<ll> v;
// for(int i=0;i<4;i++)
// {
//     ll ele;
//     cin>>ele;
//     v.push_back(ele);
// }
// ll m;cin>>m;
// vector<ll> v1;
// for(int i=0;i<m;i++)
// v1.push_back(i+1);
// ll j=0,count=0;
// do{
// for(int i=0;i<v1.size();i++)
// {
//     if(v1[i]%v[j]==0){
//     count++;
//     v1.erase(v1.begin()+i);
//     i-=1;}
//     else
//     j++;
// }
// }while(j<4);
// cout<<count;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll a,b,c,d,m;
// cin>>a>>b>>c>>d>>m;
// ll count=0;
// for(int i=1;i<=m;i++)
// {
//   if(i%a==0||i%b==0||i%c==0||i%d==0)
//   count++;
// }
// cout<<count;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// string s;
// getline(cin,s);
// int flag=0;
// for(int i=0;i<s.length();i++)
// {
//     if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
//         flag=1;
//         break;}
// }
// if(flag==1)
// cout<<"YES";
// else
// cout<<"NO";
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// string s;
// cin>>s;
// for(int i=0;i<s.length();i++){
// if(s[i]=="">')
// s[i]=(int)1000;
// if(s[i]=='<')
// s[i]=(int)1001;
// if(s[i]=='+')
// s[i]=(int)1010;
// if(s[i]=='-')
// s[i]=(int)1011;
// if(s[i]=='.')
// s[i]=(int)1100;
// if(s[i]==',')
// s[i]=(int)1101;
// if(s[i]=='[')
// s[i]=(int)1110;
// if(s[i]==']')
// s[i]=(int)1111;}

// string s1=(string)s;
// for(int i=1;i<s.length();i++)
// s1+=s[i];
// int n=stoi(s1);
// ll i=0,sum=0;
// do{
//     int digit=n%10;
//     sum+=digit*pow(2,i);
//     i++;
//     n/=10;
// }while(n!=0);
// cout<<sum<<endl;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// string s;
// cin>>s;
// for(int i=0;i<s.length();i++)
// {
//     for(int j=i;j<s.length();j++)
//     {
//         if((int)s[j]>(int)s[j+2])
//         {
//             int temp=(int)s[j];
//             (int)s[j]=(int)s[j+2];
//             (int)s[j+2]=temp;
//             j+=1;
//         }
//         if(j==s.length()-1)
//         break;
//     }
// }
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll m;
//     cin >> m;
//     int a[7];
//     for (int i = 0; i < 7; i++)
//         cin >> a[i];
//     ll count = 0;
//     do
//     {
//         count = 0;
//         for (int i = 0; i < 7; i++)
//         {
//             if (a[i] > 0)
//             {
//                 if (m > 0)
//                 {
//                     m = m - a[i];
//                     count++;
//                 }
//                 else
//                  break;
//             }
//         }
//     } while (m > 0);
//     cout << count;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m;
// cin>>m;
// while(m--)
// {
//     string s;
//     cin>>s;
//     ll count=0;
//     if(s.length()<=10)
//     cout<<s<<endl;
//     else
//     {
//         for(int i=1;i<s.length()-1;i++)
//         count++;
//     cout<<s[0]<<count<<s[s.length()-1]<<endl;
//     }
// }
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// map<char,int> s;
// string s1;
// cin>>s1;
// // s.push_back(s1);
// for(int i=0;i<s1.length();i++)
//     s[s1[i]]++;

// // cout<<s1;
// if(s.size()%2==0)
// cout<<"CHAT WITH HER!";
// else
// cout<<"IGNORE HIM!";
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m;
// cin>>m;
// ll i=0,sum=0,ans=-1;
// while(i<m)
// {
//     ll a,b;
//     cin>>a;
//     sum-=a;
//     ans=max(ans,sum);
//     cin>>b;
//     sum+=b;
//     ans=max(ans,sum);
//     i++;
// }
// cout<<ans;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// string a;
// cin>>a;
// for(int i=0;i<a.length();i++)
// {
//     i=0;
//     for(int j=0;j<a.length();j++)
//     {
//         j+=1;
//         if((int)a[i]>(int)a[j+1])
//         {
//             int temp=(int)a[i];
//             (int)a[i]=(int)a[j+1];
//             (int)a[j+1]=(int)a[i]
//         }
//     }
// }
// cout<<a;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// set<ll> m;
// ll a;
// for(ll i=0;i<4;i++)
// {
//     cin>>a;
//     m.insert(a);
// }
// cout<<4-m.size();
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll n,k,l,c,d,p,L,P;
// cin>>n>>k>>l>>c>>d>>p>>L>>P;
// k=k*l;
// ll k1=k/;
// ll c1=c*d;
// ll p1=p/P;
// cout<<min(k1,min(c1,p1))/n;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// // #define INT_MAX +2147483647
// int main(){
// ll m,n;
// cin>>m;
// if(m<3)
// cout<<"-1";
// else if(m==3)
// cout<<"210";
// else{
// for(ll i=1;i<1e5;i++)
// {
//     ll count=0,flag=0;
//     if(i%210==0)
//     {
//         n=i;
//       do{
//            int digit=i%10;
//            count++;
//            i/=10;
//       }while(count<=m&&i!=0);
//     if(count==m)
//     flag=1;
//     }
//     if(flag==1){
//     cout<<n;
//     break;}
// }
// }
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// string s1;
// cin>>s1;
// for(int i=0;i<s1.length();i++)
// {
//     if(s1[i]!='+')
//         sort(s1,s1+(s1.length()-1))
// }
// cout<<s1;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// vector<char> s;
// string s1;
// cin>>s1;
// int n=s1.length();
// for(int i=0;i<s1.length();i++)
// {
//     if(s1[i]!='+')
//     s.push_back(s1[i]-0);
// }
// sort(s.begin(),s.end());
// for(int i=0;i<s.size();i++)
// {if(i<s.size()-1)
// cout<<s[i]<<"+";
// else
// cout<<s[i];}
// return 0;
// }
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define cint const int
#define fo(number1, number2, number3) for (int number1 = number2; number1 < number3; ++number1)
#define rfo(number1, number2, number3) for (int number1 = number2 - 1; number1 >= number3; --number1)
#define pi pair<int, int>
#define vLL vector<ll>
#define vi vector<int>
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define lbd lower_bound
#define ubd upper_bound
#define mp make_pair
#define cps CLOCKS_PER_SEC
#define decimal(k) fixed << setprecision(k)
#define PI 3.14159265359
#define fastio                            \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL);
#define ff first
#define ss second
#define all(V) (V).begin(), (V).end()
#define alla(a, n) a, a + n
#define sz(v) (ll) v.size()
#define SORT(v) sort(all(v))
#define REV reverse
#define SUM(v) accumulate(v.begin(), v.end(), 0)
#define MAX max_element
#define MIN min_element
#define UNIQUE(v) \
        SORT(v);  \
        v.erase(unique(v.begin(), v.end()), v.end())
#define UNIQUEA(a, n) unique(a, a + n) - a
#define MAXA(a, n) max_element(a, a + n)
#define MINA(a, n) min_element(a, a + n)
#define SORTA(a, n) sort(alla(a, n))
#define REVA(a, n) reverse(alla(a, n))
#define mem1(a) memset(a, -1, sizeof(a));
#define mem0(a) memset(a, 0, sizeof(a));
#define mymax 1000000000000000100
#define mymin -1000000001
#define bitcount __builtin_popcount
#define gcd __gcd
#define MOD (ll)1000000007
#define TEST(t)    \
        int tc;    \
        cin >> tc; \
        fo(t, 1, tc)
#define VECT(v, n) \
        ll n;      \
        cin >> n;  \
        vLL v(n);  \
        fo(i, 0, n - 1) cin >> v[i];
#define NUM(n) \
        ll n;  \
        cin >> n;
#define STRING(s) \
        string s; \
        cin >> s;
#define TS to_string
#define len(s) (s).length()
#define line cout << "\n";
#define el "\n"
#define clkstart auto start = high_resolution_clock::now();
#define clkend                                    \
        auto stop = high_resolution_clock::now(); \
        auto duration = duration_cast<microseconds>(stop - start);
#define TIME  \
        line; \
        line; \
        cout << "Time taken by function: " << duration.count() / 1e6 << " seconds" << endl;
#define open {
#define close }
#define goog(tno) cout << "Case #" << tno << ": "
#define deb(x) cout << #x << " = " << x << el;
#define deb2(x, y) cout << #x << " = " << x << " : " << #y << " = " << y << el;
// #ifndef SEGMENTTREE_H
#define SEGMENTTREE_H
#define left(i) (2 * i + 1)
#define right(i) (2 * i + 2)
#define parent(i) ((i - 1) / 2)
// using namespace std;
// // int main()
// // {
// //     map<int,int> v;
// //     ll n;
// //     cin>>n;
// //     // ll n1=n;
// //     ll count=0;
// //     while(n--)
// //     {
// //         ll ele;
// //    v[ele]=0;
// //         for(int i=0;i<3;i++)
// //         {
// //             ele;cin>>ele;
// //             if(ele==1)
// //             v[ele]++;
// //         }
// //         if(v[ele]>1)
// //         count++;
// //         v[ele]=0;
// //     }
// //     cout<<count;
// //     return 0;
// // }
// // using namespace std;
// // int main()
// // {
// //         ll n;cin>>n;
// //         ll X=0;
// //         while(n--)
// //         {
// //         string s;
// //         cin>>s;
// //         ll flag=1;
// //         for(int i=0;i<s.length();i++)
// //         {
// //                 if(s[i]=='+')
// //                 flag=0;
// //         }
// //         if(flag==0)
// //         X+=1;
// //         else
// //         X-=1;
// //         }
// //         cout<<X;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // int main(){
// // // fastio
// // ll m;
// // cin>>m;
// // ll a[m];
// // for(int i=0;i<m;i++)
// // cin>>a[i];
// // ll n;cin>>n;
// // ll sum=0,sum1=0;
// // while(n--){
// //         ll key;cin>>key;
// //         ll count=1;
// // int bin(int a[],int number){
// //    int first=1,last=5,mid;
// //    do{
// //       mid=(first+last)/2;
// //       if(a[mid]==number)
// //       return mid;
// //       if(a[mid]>number){
// //       last=mid-1;
// //       count++;
// //       sum+=count;}
// //       else if(a[mid]<number){
// //       first=mid+1;
// //       count++;
// //       sum+=count;}
// //    }while(first<=last);
// //       return mid;
// //         count++;
// //         sum+=count;
// //         count=1;
// //         for(int i=m-1;i>=0;i--)
// //         {if(key!=a[i])
// //         count++;
// //         else
// //         break;}
// //         sum1+=count;
// // }
// // cout<<sum<<" "<<sum1;
// // return 0;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // int main(){
// // ll m;
// // cin>>m;
// // while(m--)
// // {
// //         ll m1,c,d,ans=INT_MAX;cin>>m1;
// //         int a[m1];
// //         for(int i=0;i<m1;i++)
// //         {
// //                 for(int j=i;j<m1;j++)
// //                 {
// //                         if(a[i]+2*a[j]==m1)
// //                                 if(ans>(abs(a[i]-a[j])))
// //                                 {
// //                                         ans=abs(a[i]-a[j]);
// //                                         c=a[i];
// //                                         d=a[j];
// //                                 }
// //                 }
// //         }
// //         cout<<c<<" "<<d<<endl;
// // }
// // return 0;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // int main(){
// // fastio
// // ll m;
// // cin>>m;
// // vLL a;
// // for(ll i=0;i<m;i++)
// // {ll ele;cin>>ele;
// // a.pb(ele);
// // }
// // ll n;cin>>n;
// // ll sum=0,sum1=0;
// // while(n--){
// //         ll key;cin>>key;
// //         ll count=1;
// //         for(ll i=0;i<m;i++)
// //         {if(key!=a[i])
// //         count++;
// //         else
// //         break;}
// //         sum+=count;
// //         count=1;
// //         for(ll i=m-1;i>=0;i--)
// //         {if(key!=a[i])
// //         count++;
// //         else
// //         break;}
// //         sum1+=count;
// // }
// // cout<<sum<<" "<<sum1;
// // return 0;
// // }
// #include <bits/stdc++.h>
// #define ll long long int
// int main()
// {
//         ll m, k;
//         cin >> m >> k;
//         vLL a;
//         vLL b;
//         for (ll i = 1; i <= m; i++)
//         {
//                 ll ele;
//                 cin >> ele;
//                 a.pb(ele);
//         }
//         if(m==1)
//         cout<<"1";
//         else{
//         for (ll i = 1; i <= m; i++)
//                 b.pb(i);
//         ll i=1;
//         do{
//                  if ((a[i] - k) <= 0)
//                 {
//                         a.erase(a.begin() + (i - 1));
//                         b.erase(b.begin() + (i - 1));
//                 }
//                 else
//                 {
//                         ll c, d;
//                         a[i] = a[i] - k;
//                         c = a[i];
//                         d = b[i];
//                         a.erase(a.begin() + (i - 1));
//                         b.erase(b.begin() + (i - 1));
//                         a.pb(c);
//                         b.pb(d);
//                 }
//         }while(a.size()!=1);
//         if(m==2)
//         cout<<b[1]-1;
//         else
//         cout<<b[1];}
//         return 0;
// }
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // int main(){
// // fastio
// // ll m;
// // cin>>m;
// // int a[100040];
// // for(ll i=0;i<m;i++)
// // {
// //         ll ele;cin>>ele;
// //         a[ele]=i+1;
// // }
// // ll n;cin>>n;
// // ll sum=0,sum1=0;
// // while(n--){
// //         ll key;cin>>key;
// //         sum+=a[key];
// //         sum1+=m-a[key]+1;
// // }
// // cout<<sum<<" "<<sum1;
// // return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// int a,b,c;
// cin>>a>>b>>c;
// int x=(sqrt(a*b)/c);
// int y=(sqrt(b*c)/a);
// int z=(sqrt(a*c)/b);
// cout<<4*(x+y+z);
// return 0;
// }
// #include<bits/stdc++.h>
using namespace std;
// #define ll long long int
// int main(){
// vector<char> v;
// string s;
// cin>>s;
// for(int i=0;i<s.length();i++)
//         v.push_back(s[i]);
// for(int i=0;i<v.size();i++)
// {
//         if(v[i]=='A'||v[i]=='a'||v[i]=='E'||v[i]=='e'||v[i]=='I'||v[i]=='i'||v[i]=='O'||v[i]=='o'||v[i]=='U'||v[i]=='u'||v[i]=='Y'||v[i]=='y'){
//         v.erase(v.begin()+i);
//         i-=1;}
// }
// vector<char> v1;
// int i=0,j=0;
// ll c;
// while(true)
// {
//   if(j==v.size()){
//   for(int i=0;i<v1.size();i++)
//   cout<<v1[i];
//   break;}
//   else if(i%2==0){
//   v1.push_back('.');
//   i++;
//   }
//   else if(i%2!=0){
//   c=v[j];
//   if(isupper(c))
//   v[j]=tolower(c);
//   v1.push_back(v[j]);
//   j++;i++;}
// }
// return 0;
// }
// using namespace std;
// int main()
// {
//         ll n,m;
//         cin>>n>>m;
//         ll count=0;
//         for(int i=0;i<=n||i<=m;i++)
//         {
//                 for(int j=0;j<=n||j<=m;j++)
//                 if(i*i+j==n&&i+j*j==m)
//                 count++;
//         }
//         cout<<count;
// }
// int main()
// {
//         vLL v;
//         ll n, d, e;
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//                 ll ele;
//                 cin >> ele;
//                 v.pb(ele);
//         }
//         vLL v1=v;
//         sort(v.begin(), v.end());
//             ll ans = 100;
//         for (int i = 1; i <= v.size(); i++)
//         {
//                 ll c = v[i] - v[i - 1];
//                 if (ans > c)
//                 {
//                         ans = c;
//                         d = i;
//                         e = i - 1;
//                 }
//         }
//         for (int i = 1; i <= v1.size(); i++)
//         {
//                 if(v[e]==v1[i]){
//                 cout<<i;
//                 break;}
//                 // v1.erasv1.begin()+(i-1));
//         }
//         for (int i = e; i <= v1.size(); i++)
//         {
//         if(v[d]==v1[i])
//                 cout<<" "<<i;
//         }
//         return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     long long n,k; cin>> n >> k;
//     long long aux=n/2,aux2=(n+1)/2;
//     if(k<=aux2){
//         cout<<((k)*2)-1<<endl;
//     }else cout<<(k-aux2)*2<<endl;
//         return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m;
// cin>>m;
// vLL v;
// for(int i=0;i<m;i++)
// {
//         ll ele;
//         cin>>ele;
//         v.pb(ele);
// }
// vLL v1=v;
// ll ans=1e6,d,e,c;
// sort(v.begin(),v.end());
// for(int i=1;i<=v.size();i++)
// {
//         c=abs(v[i]-v[i-1]);
//         if(ans>c)
//         {
//                 ans=c;
//                 d=v[i];
//                 e=v[i-1];
//         }
// }
// // ll flag=1;
// for(int i=1;i<=v.size();i++)
// {
//         if(v[e]==v1[i]){
//         cout<<i;
//         v.erase(v.begin()+(i-1));
//         i-=1;}
//         else if(v[d]=v1[i])
//         cout<<i+1;
// }

// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m;
// cin>>m;
// ll a[m];
// ll ans=INT_MAX;
// for(int i=0;i<m;i++){
// cin>>a[i];
// ans=min(ans,a[i]);}
// ll count=0;
// for(int i=0;i<m;i++)
// {
//         if(ans==a[i])
//         count++;
// }
// if(count>1)
// cout<<"Still Rozdil";
// else
// cout<<ans;
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//         ll m;
//         cin >> m;
//         ll a[m];
//         for (int i = 1; i <= m; i++)
//                 cin >> a[i];
//         if (a[1] % 2 != 0)
//         {
//                 cout<<"3";
//         }
//         else
//         {
//                 cout<<"2";
//         }

//         return 0;
// }
using namespace std;
int main()
{
        vLL v1;
        vLL v2;
        ll i=0;
        ll m;cin>>m;
        do{
        ll a;
        cin>>a;
        v1.pb(a);
        ll b;cin>>b;
        v2.pb(b);
        i++;
        }while(i!=m);
        ll flag=1,flag1=1,flag2=1,flag3=1,count=0;
        for(int i=0;i<v1.size();i++)
        {
                flag=1,flag1=1,flag2=1,flag3=1;
                for(int j=0;j<v2.size();j++)
                {
                        if(i!=j)
                        {
                        if(v1[i]<=v1[j]&&v2[i]==v2[j])
                        flag=0;
                        if(v1[i]>=v1[j]&&v2[i]==v2[j])
                        flag1=0;
                        if(v1[i]==v1[j]&&v2[i]<=v2[j])
                        flag2=0;
                        if(v1[i]==v1[j]&&v2[i]>=v2[j])
                        flag3=0;}
                }
                if(flag==0&&flag1==0&&flag2==0&&flag3==0)
                count++;
        }
        cout<<count;
}
