    #include <iostream>
    #include <set>
    using namespace std;
     
    int main(){
        std::set<float> myset;
        std::ios::sync_with_stdio(false);
     
        int i, n;
        float x;
        cin >> x;
        while(x!=-9){
            myset.insert(x);
            cin >> x;
        }
        cin >> n;
        for(i=0; i<n; i++){
            cin >> x;
            if(myset.count(x)!=0)
            cout<< x << " ada" << endl;
            else cout<< x <<" tidak ada" << endl;
        }
        return 0;
    }
