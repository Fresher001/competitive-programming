#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>

using namespace std;
int main(){
    vector<double> vec;
    double n;
    while(cin>>n)
    {
        vec.push_back(n);
    }
    
    for(int i = vec.size()-1; i>=0; i--) 
    {
        double ans = sqrt(vec[i]);
        cout << setprecision(4) << fixed << ans << endl;
    }
    return 0;
}
