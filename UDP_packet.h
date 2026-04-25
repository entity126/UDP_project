#ifndef UDP_PACKET_H
#define UDP_PACKET_H

#include <string>
using namespace std;

struct UDP_packet {
    int source_port;
    int desination_port;
    int text_lenght;
    string text;
};

#endif
