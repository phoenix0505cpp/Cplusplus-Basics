    #include <iostream>
    #include <vector>
    using namespace std;
    int main(){
        vector<int>v;
    cout<<" Capacity for vector:"<<endl;
    v.push_back(8);
    cout<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.capacity()<<endl;
    v.push_back(23);
    cout<<v.capacity()<<endl;
    v.push_back(84);
    cout<<v.capacity()<<endl;
    v.push_back(82);
    cout<<v.capacity()<<endl;
    v.push_back(74);
    cout<<v.capacity()<<endl;
    v.push_back(73);
    cout<<v.capacity()<<endl;
    v.push_back(83);
    cout<<v.capacity()<<endl;
}
