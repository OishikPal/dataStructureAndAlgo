#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void vectors()
{
    //vectors are arrays having dynamic size
    vector<int> v; //vector v is created // an empty container is created
    v.push_back(1); //the empty container takes 1 //push_back basically creates a new vector, copies the old vector and then add the new element to it 
    v.emplace_back(2); //dynamically increase size of the vector and inserts 2 into it //emplace back is faster than push back

    vector<pair<int,int>> vec;//vectors with pair
    vec.push_back({1,2});
    vec.emplace_back(3,4);//notice the curly brackets
    vector<int> v1(5,100);//a vector is created having 5 instances of 100 => {100,100,100,100,100} //you can always increase the size of the vector even if the size is predefined
    vector<int> v2(5);//a vector with 5 garbage values or 5 0s is created 
    vector<int> v3(v2);//v2 is copied to v3
    
    //accessing elements in a vector is similar to that in an array
    cout<< v[0];
    
}

int main()
{
    printf("oishik pal\n");
    vectors();
    return 0;
}