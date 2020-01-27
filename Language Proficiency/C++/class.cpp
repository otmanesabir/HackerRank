#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student {
    private:
        int age;
        int standard;
        string first_name;
        string last_name;
    public:
    // Setters
        void set_first_name(string &fname){
            this->first_name = fname;
        }
        void set_last_name(string &lname){
            this->last_name = lname;
        }
        void set_age(int &nage){
            this->age = nage;
        }
        void set_standard(int &nstd){
            this->standard = nstd;
        }
    // Getters
        string get_first_name(){
            return this->first_name;
        }
        string get_last_name(){
            return this->last_name;
        }
        int get_age(){
            return this->age;
        }
        int get_standard(){
            return this->standard;
        }
        string to_string(){
            string ans = std::to_string(age) + ',' + first_name + ',' + last_name + ',' + std::to_string(standard);
            return ans;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

