// 应用程序开发人员

class Appplication
{
public:
    bool Step2(){
        //....
    }
    bool Step4(){
        //...
    }
};


// 应用程序使用库 template1_lib.cpp
int main()
{
    Library lib();
	Application app();

	lib.Step1();

	if (app.Step2()){
		lib.Step3();
	}

	for (int i = 0; i < 4; i++){
		app.Step4();
	}

	lib.Step5();
}




