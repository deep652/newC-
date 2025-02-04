#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

class MapDemo
{
    map<int,int> mp;

    public:
    //MapDemo():mp(3,0){}
    MapDemo(){}
    MapDemo(vector<int> nums)
    {
        for(auto x: nums)
        {
            mp[x]++;
        }
    }
    void display()
    {
        for(auto x: mp)
        {
            cout<<"Key: "<<x.first<<"Value: "<<x.second<<endl;
        }
    }
    void sort(string order)
    {
        transform(order.begin(), order.end(), order.begin(),[](char c){return toupper(c);});
        if(order == "ASC" )
        {
            // sort(mp.begin(), mp.end(),[](pair<int,int> p1, pair<int,int> p2){
            //     return(p1.first<p2.first);
            // } );

            vector<pair<int,int> > mp_vec;
            for(auto x: mp)
            {
                mp_vec.push_back(x);
            }

            std::sort(mp_vec.begin(), mp_vec.end(),[](const pair<int,int> &p1,const pair<int,int> &p2){
                return (p1.first<p2.first);
            });

            map<int,int> mp_copied;

            for(auto x: mp_vec)
            {
                mp_copied.insert(x);
            }

            cout<<"New map after sorting"<<endl;
            for(auto x: mp_copied)
            {
                cout<<"key: "<<x.first<<"Value: "<<x.second<<endl;
            }

            
        }
        else
        {
            // sort(mp.begin(), mp.end(),[](pair<int,int> p1, pair<int,int> p2){
            //     return(p1.first<p2.first);
            // } );

            vector<pair<int,int> > mp_vec;
            for(auto x: mp)
            {
                mp_vec.push_back(x);
            }

            std::sort(mp_vec.begin(), mp_vec.end(),[](const pair<int,int> &p1,const pair<int,int> &p2){
                return (p1.second<p2.second);
            });

            map<int,int> mp_copied;

            for(auto x: mp_vec)
            {
                mp_copied.insert(x);
            }

            cout<<"New map after sorting"<<endl;
            for(auto x: mp_copied)
            {
                cout<<"key: "<<x.first<<"Value: "<<x.second<<endl;
            }
        }


        //   std::equal(str1.begin(), str1.end(), str2.begin(),
        //               [](unsigned char c1, unsigned char c2) {
        //                   return std::tolower(c1) == std::tolower(c2);
        //               });
    }

};

int main()
{
    vector<int> nums{1, 2, 3, 1, 1, 4, 4, 4, 8,8, 9, 9, 9 };
    MapDemo mpdemo;
    mpdemo.display();
    MapDemo mpdemo1(nums);
    mpdemo1.display();
    mpdemo1.sort("DESC");

    return 0;
}