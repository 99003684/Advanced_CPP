#include "Gyroscope.h"
#include "msg_queue.h"
# include "CSV_store_to_Vector.cpp"

int main()
{
    vector<Gyroscope> obj;
    MessageQueue m1("/sample");
    m1.msend(&obj);
    return 0;
}