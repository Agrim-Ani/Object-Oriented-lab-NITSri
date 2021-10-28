#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Base {
private:
    string private_base_string = "Private Base String";
protected:
    string protected_base_string = "Protected Base String";
public:
    string public_base_string = "Public Base String";

    string get_private_base_string() {
        return private_base_string;
} 
};
class Derived_Private: private Base {
public:
// No Inherited Data Member/Member Function // ...is accesible outside the class
string get_private_base_string() {
        return Base::get_private_base_string();
    }
    string get_protected_base_string() {
        return Base::protected_base_string;
    }
    string get_public_base_string() {
        return Base::public_base_string;
    }
};

class Derived_Protected: protected Base {
    public:
// Protected and Public Inherited
// ...Data Members/Member Functions are // ...accesible to child classes only 
        string get_private_base_string() {
        return Base::get_private_base_string();
    }
    string get_protected_base_string() {
       return Base::protected_base_string;
    }
    string get_public_base_string() {
        return Base::public_base_string;
} 
};

class Derived_Public: public Base {
public:
// Protected Inherited Data Members/Member Functions
// ...are accesible to child classes only while
// ...as Public Inherited Data Members/Member Functions
// ...are accesible to child classes as well as outside the class 
    string get_private_base_string() {
        return Base::get_private_base_string();
    }
    string get_protected_base_string() {
        return Base::protected_base_string;
} 
};
class Child_of_Derived_Private: public Base {
public:
    // No Data Member/Member Function
    // ... of Base class is accesible
    // ... without Member Functions of Derived Class
};

class Child_of_Derived_Protected: public Base {
    public:
// Protected and Public Data Member/Member Function
// ... of Base class are accesible but inside Child class only 
        string get_protected_base_string() {
        return Base::protected_base_string;
    }
    string get_public_base_string() {
        return Base::public_base_string;
}
};

class Child_of_Derived_Public: public Base {
public:
    // Protected Data Members/Member Functions of Base class
    // ...are accesible but inside Child class only while
    // ...as Public Data Members/Member Functions of Base class
    // ...are accesible inside Child class as well as outside the class
    string get_protected_base_string() {
        return Base::protected_base_string;
} 
};

int main() {
    Derived_Private o1;
    cout<<"Derived_Private:"<<endl;
    cout<<o1.get_private_base_string()<<endl;
    cout<<o1.get_protected_base_string()<<endl;
    cout<<o1.get_public_base_string()<<endl;
    
    Derived_Protected o2;
    cout<<endl<<"Derived_Protected:"<<endl;
    cout<<o2.get_private_base_string()<<endl;
    cout<<o2.get_protected_base_string()<<endl;
    cout<<o2.get_public_base_string()<<endl;

    Derived_Public o3;
    cout<<endl<<"Derived_Public:"<<endl;
    cout<<o3.get_private_base_string()<<endl;
    cout<<o3.get_protected_base_string()<<endl;
    cout<<o3.public_base_string<<endl;

    Child_of_Derived_Private o4;
    cout<<endl<<"Child_of_Derived_Private:"<<endl;

     Child_of_Derived_Protected o5;
    cout<<endl<<"Child_of_Derived_Protected:"<<endl;
    cout<<o5.get_protected_base_string()<<endl;
    cout<<o5.get_public_base_string()<<endl;

    Child_of_Derived_Public o6;
    cout<<endl<<"Child_of_Derived_Public:"<<endl;
    cout<<o6.get_protected_base_string()<<endl;
    cout<<o6.public_base_string<<endl;
  
  return 0;
}


