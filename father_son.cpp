
#include<iostream>
using namespace std;

class Father{
    private:
        double amount;
        float area;
        bool pass=false;
        char ch;

        public:
            void setData()
            {
                cout<<"\nFather's earned amount:";
                cin>>amount;
                cout<<"\nfather earned property:";
                cin>>area;
            }
            void displayF()
            {
                cout<<"\nFather earned:"<<amount;
                cout<<"\nFather area:"<<area; 
            }
           
            void Mypass()
            {
               cout<<"does father want to give it to son?";
               cin>>ch;
               if(ch=='y')
                {
                    pass=true;
                }
              else
               {
                pass=false;  
               }   
            }
            bool getpass()
            {
                return pass;
            }
            double getAmount()
            { 
                if (pass ==true)
                {
                return amount;
                }
                else
                {
                    return 0;
                } 
            }
            float getArea() 
            {
                if(pass == true)
                {
                 return area;
                }
                else
				{
                    return 0;
                } 
            }

};

class Son : private Father {
private:
    double amt, total, tot_areas;
    float son_area;

public:
    void setson() 
	{
        setData();
        Mypass();
        cout << "\nSon earned:";
        cin >> amt;
        cout << "\nSon area purchased:";
        cin >> son_area;
    }

    void displayS()
    {
        
        cout<<"\nson earned:"<<amt;
        cout<<"\nson property:"<<son_area;
        
         getpass();
         if(getpass()==true)
       
        {
        	cout<<"\nGot permission";
            total = getAmount() + amt;
            tot_areas = getAreas() + son_area;
            cout<<"\ntotal son earned:"<<total;
            cout<<"\ntotal areas owned by son:"<<tot_areas;
        } 
        else{
            cout<<"\nno permission";
        }    
    }
    double getA()
    { 
        return total; 
    }
    float getAreas() 
    {
        return tot_areas; 
    }
};

//class grandson:private  Son{
//    protected:
//    double b,sum,sum_area;
//    float c;
//    public:
//    void setG(){
//        setson();
//        cout<<"\nEnter grand son earned:";
//        cin>>b;
//        cout<<"\nEnter grandson property:";
//        cin>>c;
//    }
//
//    void displayG()
//    {
//        displayS();
//        cout<<"\nGrand son earned:"<<b;
//        cout<<"\nProperty of grandson:"<<c;
//        
//        sum=getA()+b;
//        sum_area=getAreas()+c;
//        cout<<"\nGrand son total"<<sum;
//        cout<<"\nGrand son total properties"<<sum_area;
//    }
//
//};


int main()
{
    Son p1;
    p1.setson();
    p1.displayS();

    return 0;
}
