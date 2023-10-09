 #include<bits/stdc++.h>
using namespace std; 
struct studentInfoTable{
    string name; 
    int ID; 
    string section, semester; 
    double cgpa; 
}; 
int main(){
    int n; 
    cin >> n; 
    struct studentInfoTable data[n]; 

    for(int i = 0; i < n; ++i){
        cin >> data[i].name >> data[i].ID >> data[i].section >> data[i].semester >> data[i].cgpa; 
    }

    cout << endl; 
     
    for(auto it : data){
        cout << it.name << " " << it.ID << " " << it.section << " " << it.semester << " " << it.cgpa << endl << endl; 
    }
}