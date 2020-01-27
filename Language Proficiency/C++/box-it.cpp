#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
        int l; // length
        int b; // breadth
        int h; // height
    public:
        Box(){
            this->l = 0;
            this->b = 0;
            this->h = 0;
        }
        Box(int &a, int &d, int &c){
            this->l = a;
            this->b = d;
            this->h = c;
        }
        Box(Box &c){
            this->l = c.l;
            this->b = c.b;
            this->h = c.h;
        }
        int getLength(){
            return this->l;
        }
        int getBreadth(){
            return this->b;
        }
        int getHeight(){
            return this->h;
        }
        long long CalculateVolume(){
            return (long long) l*b*h;
        }
        bool operator<(Box& k){
            if(this->l < k.l){
                return true;
            } else if (this->b < k.b && this->l == k.l){
                return true;
            } else if (this->h < k.h && this->l == k.l && this->b == k.b){
                return true;
            } else {
                return false;
            }
        }
        friend std::ostream& operator<<(ostream& out, const Box& B){
            out << B.l << " " << B.b << " " << B.h;
            return out;
        }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}