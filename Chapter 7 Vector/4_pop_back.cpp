    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        vector<int>v;
        // cout<<" Capacity for vector:";
        v.push_back(8);
        v.push_back(7);
        v.push_back(23);
        v.push_back(84);
        v.push_back(82);
        v.push_back(74);
        v.push_back(73);
        v.push_back(83);
        v.push_back(10);
        v.push_back(20);
        v.push_back(63);
        v.push_back(4);
        v.push_back(2);
        v.push_back(4);
        v.push_back(7);
        v.push_back(8);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
            cout<<endl;
            cout<<"Size1: "<<v.size()<<endl;
            cout<<"Capacity1: "<<v.capacity()<<endl<<endl;;
            cout<<endl;

            v.pop_back();//remove last element
            v.pop_back();//remove second last element
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";}
                cout<<endl;
                cout<<"Size2: "<<v.size()<<endl;
                cout<<"Capacity2: "<<v.capacity();
        }

