

#include "gtest/gtest.h"

class C{};

class B{

    C* ptr;

    public:

    B(C* addressOfObject): ptr{addressOfObject}{

 

    }

};

 

class A{

    B* ptr;

    public:

    A(B* addressOfObject): ptr{addressOfObject}{

 

    }

    bool  operation(){

        return true;

    }

};

 

/*TEST(TestFixtureTestSuite,OperationTrueTest){

    //Arrange

    C cObj;

    B bObj(&cObj);

    A obj(&bObj);

    //Act and Assert

    ASSERT_TRUE(obj.operation());

}

TEST(TestFixtureTestSuite,OperationFalseTest){

    //Arrange

    C cObj;

    B bObj(&cObj);

    A obj(&bObj);

    //Act and Assert

    ASSERT_FALSE(obj.operation());





}*/
class Testfixturetestsuit:public Testing::Test{
Protected:
A* aptr;
B* bptr;
C* cptr;
}
Testfixturetestsuite(){

}
~Testfixturetestsuite(){

}
void setup(){
    //ARRANGE
    this->*cptr=new C();
    this->*bptr=new B(CPtr);
     this->*aptr=new A(bPtr);

}
void Teardown(){
    delete cPtr;
    delete bPtr;
    delete aPtr;

};
Test_F(TestFixtureTestsuit, operationtruetest){
    //Act and Assert
    ASSERT_TRUE(aptr->operation());
}
Test_F(TestFixtureTestsuit, operationfalsetest){
    //Act and Assert
    ASSERT_FALSE(aptr->operation());

}