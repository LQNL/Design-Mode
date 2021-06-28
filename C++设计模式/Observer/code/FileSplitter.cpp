



class IProcess{
    public:
        virtual void DoProgress(float value) = 0;
        virtual ~IProcess(){}
};


class FileSplitter{
    string m_filePath;
    int m_fileNumber;

    #if 0
    ProgressBar* m_progressBar;     // 通知
    #endif
    IProcess*  m_iprogress;   // 抽象通知机制

public:
#if 0
    FileSplitter(const string& filePath, int fileNumber, ProgressBar* progressBar) : 
        m_filePath(filePath),
        m_fileNumber(fileNumber),
        m_progressBar(progressBar){

        }
#endif 
    FileSplitter(const string& filePath, int fileNumber, IProcess* iprogress) : 
        m_filePath(filePath),
        m_fileNumber(fileNumber),
        m_iprogress(iprogress){

        }
    void split(){
        //1. 读取大文件
        //2. 分批次向小文件中写入

        for(int i = 0; i < m_fileNumber ; i++){
            //...
            #if 0
            if(m_progressBar != nullptr){
                m_progressBar->setValue((i+1)/m_fileNumber);    // 更新进度条
            }
            #endif
            if(m_iprogress != nullptr){
                m_iprogress->DoProgress((i+1)/m_fileNumber);    // 更新进度条
            }
        }
    }

};