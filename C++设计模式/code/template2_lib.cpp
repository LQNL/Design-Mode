//程序库开发人员
class Library{
public:
    /**
     * 稳定 template method 
     * 注意：稳定中有变化
     * 
     * template method 设计模式使用的前提是：
     *      Run(骨架) 必须稳定
    */ 

     void Run(){
        Step1();
        if (Step2()) {  // 支持变换 ==> 虚函数的多态调用
            Step3(); 
        }
        for (int i = 0; i < 4; i++){
            Step4();// 支持变换 ==> 虚函数的多态调用
        }
        Step5();

    }
	virtual ~Library(){ }

protected:
    void Step1() { //稳定
        //.....
    }
	void Step3() { //稳定
        //.....
    }
	void Step5() { //稳定
		//.....
	}

	virtual bool Step2() = 0; //变化
    virtual void Step4() =0; //变化
};
