
#include <gtest/gtest.h>
class a(){
    b*ptr;
    public:
    a(b*adddressobject): ptr(addressofobject){

    }
Bool operation(){
    return true;
}
};
class b();
c*ptr;
    public:
    c(b*adddressobject): ptr(addressofobject){

    }

class c();
a*ptr;
    public:
    a(b*adddressobject): ptr(addressofobject){

    }
TEST("testfixturetestsuit", "operationtest"){
    c cobj;
    b bobj(&cobj);
    a obj(&bobj);
    ASSERT_FALSE(obj.operetion());
}