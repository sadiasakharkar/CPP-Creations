//Important
#include<iostream>
using namespace std;
const int len=80;

class doctor{
    private:
    char name;
    char degree;

    public:
     void getdata(){
        cout<<"Enter Doctor's name:"<<endl;
        cin>>name;
        cout<<"Enter Doctor's Degree:";
        cin>>degree;
    }

    void setdata(){
        cout<<"Doctor's Name:"<<name<<endl;
        cout<<"Doctor's degree:"<<degree<<endl;
    }

};

class patient{
    private:
    char name;
    int bedno;
    

    public:
    void getdata(){
        cout<<"Enter patient's name:"<<endl;
        cin>>name;
        cout<<"Enter bed no:"<<endl;
        cin>>bedno;  
    }
    
    void setdata(){
        cout<<"Patient's Name:"<<name<<endl;
        cout<<"Bed no:"<<bedno<<endl;
       
    }
};

class department{
    private:
    char ward;

    public:
    void getdata(){
        cout<<"Enter ward:"<<endl;
        cin>>ward;
    }
    void setdata(){
         cout<<"Ward no:"<<ward<<endl;
    }
};

class amount{
    private:
    int fees;
    patient pat;
    department dep;
    doctor doc;

    public:
    
    void A(){
        pat.getdata();
        dep.getdata();
        doc.getdata();
        cout<<"Enter fees:"<<endl;
        cin>>fees;
    }

    void B(){
        pat.setdata();
        dep.setdata();
        doc.setdata();
        cout<<"fees:"<<fees<<endl;
    }

};

int main(){
    amount obj;
    


}