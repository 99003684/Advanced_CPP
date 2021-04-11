#ifndef __MSG_Q_H
#define __MSG_Q_H
#include <mqueue.h>
#include <fcntl.h>
# include "CSV_store_to_Vector.cpp"

class MessageQueue 
{
    int mqfd;
    public :
    //const static int flags = O_WRONLY | O_CREAT;
    //const static mode_t mode = 0666;
    MessageQueue(const char* path)
    {
        struct mq_attr attr;
        attr.mq_maxmsg =256;
        attr.mq_msgsize = 3*sizeof(int ) + sizeof(unsigned int*);
        mqfd = mq_open (path, O_WRONLY | O_CREAT,0666 , &attr);
        if(mqfd<0)
        {
            perror("mq_open");
        }
    }

int msend(Gyroscope* packet)
{
    unsigned int ret;
    ret = mq_send (mqfd, reinterpret_cast<char*>(packet),sizeof(Gyroscope),0);
    if(ret<0)
    perror("mq_send");
    return ret;
}

int mrecv(Gyroscope* packet)
{
    unsigned int prio,ret;
    ret = mq_receive (mqfd, reinterpret_cast<char*>(packet),sizeof(Gyroscope),&prio);
    if(ret<0)
    perror("mq_receive");
    return ret;
}

// void munlink()
// {
    ~MessageQueue()
    {
        mq_close(mqfd);
    }
    
};
#endif