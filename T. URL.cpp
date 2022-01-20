//Link Problem==>https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
int counter[1000001] = {};
void printArray(long long arr[], long long n)
{
    for (long long i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
long long decToBinary(long long n)
{
    int num1s = 0;

    while (n > 0) {
        if ((n % 2) == 1)
            num1s++;
        n = n / 2;
    }

    return num1s;
}
long long sumDigits(long long n) {
    long long sum = 0;
    while (n != 0) {
        long long digit = n % 10;
        n /= 10;
        sum += digit;
    }
    return sum;
}

bool isLucky(long long n) {
    long long lucky_num = 0, num = 0;
    while (n != 0) {
        long long digit = n % 10;
        if (digit == 4 || digit == 7)
            lucky_num++;
        num++;
        n /= 10;
    }
    return (lucky_num == num);
}
long long reverseNum(long long n) {
    long long reverse = 0;
    while (n != 0) {
        long long digit = n % 10;
        reverse = (reverse * 10) + digit;
        n /= 10;
    }
    return reverse;
}
bool isPrime(long long n) {
    bool _isPrime = true;
    for (long long i = 2; i < n; i++)
    {
        if (n % i == 0)
            _isPrime = false;
    }
    return _isPrime;
}
string insertion_sort(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (s[j] == s[j + 1])
            {
                swap(s[j], s[j - 1]);
            }
        }
    }
    return s;
}
int main()
{
    ahmed;
    string s, resnam,respass,resprof,resrole,resmang; cin >> s;
    ll i = 0;
    ll orgnam = i;
    while (s[i] != '=') {
        i++;
        orgnam = i;
    }orgnam++;
    while (s[orgnam] != '&') {
        resnam += s[orgnam];
            orgnam++;
    }
     cout <<"username: "<< resnam << endl;
    ll orgpass = orgnam;
    while (s[orgpass] != '=') {
        orgpass++;
    }orgpass++;
    while (s[orgpass] != '&') {
        respass += s[orgpass];
        orgpass++;
    }
    cout <<"pwd: "<< respass << endl;
    ll orgprof = orgpass;
    while (s[orgprof] != '=') {
        orgprof++;
    }orgprof++;
    while (s[orgprof] != '&') {
        resprof += s[orgprof];
        orgprof++;
    }
    cout << "profile: " << resprof << endl;
    ll orgrole = orgprof;
    while (s[orgrole] != '=') {
        orgrole++;
    }orgrole++;
    while (s[orgrole] != '&') {
        resrole += s[orgrole];
        orgrole++;
    }
    cout << "role: " << resrole << endl;
    ll orgkey = orgrole;
    while (s[orgkey] != '=') {
        orgkey++;
    }orgkey++;
    s.erase(0, orgkey);
    cout <<"key: "<< s << endl;
}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف