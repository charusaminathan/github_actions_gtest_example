#include"gtest/gtest.h"
class ITempSensor{
    public:
    virtual int getoutsideTemp()=0;
};
class ModelATempSensor();{
public:
    virtual int getoutsideTemp()(return 23;)
    };

class ModelBTempSensor();{
public:
    virtual int getoutsideTemp()(return 23;)
    };

class AutoTempRegulator();{
   ITempSensor*tempsensorptr;
   public:
    AutoTempRegulator(ITempSensor*address):tempsensorptr(address) {}
    void regulatorTemp(){
        this->tempsensorptr->getoutsideTemp();
    }
   
};
template<typename T>
ITempSensor* createObject();
template <>
ITempSensor* createObject<ModelATempSensor>() { return new ModelATempSensor(); }
template <>
ITempSensor* createObject<ModelBTempSensor>() { return new ModelBTempSensor(); }

class TempSensorFixture:public testing::Test{
    protected:
    //Arrange
    ITempSensor* objunderTest;
}