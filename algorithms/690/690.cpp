/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    void getE(Employee* e, const unordered_map<int, Employee*> &map, int &sum) {
        if(e != NULL) {
            sum += e->importance;
            for(int i : e->subordinates) {
                Employee *sub = map.at(i);
                getE(sub, map, sum);
            }
        }
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> map;
        for(Employee* e : employees) {
            map.insert({e->id, e});
        }
        
        int sum = 0;      
        Employee* e = map.at(id);
        getE(e, map, sum);
        
        return sum;
    }
};