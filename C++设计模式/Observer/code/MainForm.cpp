
#if 0
class MainFrom : public From{
    TextBox* txtFilePath;
    textBox* txtFileNumber;

    ProgressBar* progressBar;
public:
    void Button1_Click(){

        string filePath = txtFilePath->getText();
        int number = atoi(txtFileNumber->getText().c_str());

        FileSplitter splitter(filePath, number, progressBar);

        splitter.split();
    }
};
#endif

/**
 * 多继承一般使用法则 单继承一个父类，其他都是接口
*/

class MainFrom : public From, public IProgress{
    TextBox* txtFilePath;
    textBox* txtFileNumber;

    ProgressBar* progressBar;
public:
    void Button1_Click(){

        string filePath = txtFilePath->getText();
        int number = atoi(txtFileNumber->getText().c_str());

        FileSplitter splitter(filePath, number, this);

        splitter.split();
    }

    void DoProgress(float value){
        progressBar->setValue(value);
    }
};