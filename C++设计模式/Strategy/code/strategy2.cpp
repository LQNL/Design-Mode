
/**
 * 
 * 
*/


//基类
class TaxStrategy{
public:
    virtual double Calculate(const Context& context) = 0;
    virtual ~TaxStrategy(){}
};


//中国税法
class CNTax : public TaxStrategy{
public:
    virtual double Calculate(const Context& context){
        //**********
    }
};

//美国税法
class USTax : public TaxStrategy{
public:
    virtual double Calculate(const Context& context){
        //**********
    }
};


//德国税法
class DETax : public TaxStrategy{
public:
    virtual double Calculate(const Context& context){
        //**********
    }
};


// 增加法国税法
class FRax : public TaxStrategy{
public:
    virtual double Calculate(const Context& context){
        //**********
    }
};



//不需要变化
class SalesOrder{
private:
    /**
     * 必须放一个指针（多态指针），不能是一个对象，
     * 一个对象不会呈现多态性（不同的子类）
    */
    TaxStrategy* strategy;   

public:
    SalesOrder(StrategyFactory* strategyFactory){
        this->strategy = strategyFactory->NewStrategy();
    }
    ~SalesOrder(){
        delete this->strategy;
    }

    double CalculateTax(){
        //....
        Context context();
        double val = strategy->Calculate(context); //多态调用
        //...
    }
};