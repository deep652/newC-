 #include<iostream>
 #include<vector>

 using namespace std;

 class Vector_Demo
 {
    vector<int> vec;

    public:
        Vector_Demo(vector<int> nums):vec(nums){}
        Vector_Demo():vec(2,0){}
        void display()
        {
            cout<<"Vector is: "<<endl; 
            for(auto x : vec)
            {
                cout<<x<<" "<<endl;
            }
            cout<<endl;
        }
        
 };

 int main()
 {
    vector<int> nums = {1, 2};
    Vector_Demo obj;
    obj.display();

    Vector_Demo obj2(nums);
    obj2.display();

    Vector_Demo({1,3}).display();

    vector<int> res(5,0);
    cout<<"declaration of local normal vector not a class vector "<<endl;
    for(auto x: res)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;

 }