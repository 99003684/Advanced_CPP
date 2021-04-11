#include "Gyroscope.h"
#include "msg_queue.h"
    
# include "CSV_store_to_Vector.cpp"

int main()
{
    vector<Gyroscope> obj;
    obj=V1;
    MessageQueue m1("/sample");
    m1.mrecv(&obj);
    obj.display();
    return 0;
}