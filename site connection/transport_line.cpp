#include <iostream>
#include "../UDP_packet.h"

using namespace std;

class transport {
    public:
    void receive_packets(UDP_packet packet1 , UDP_packet packet2, UDP_packet packet3) {
        cout << "\n--- Packets received at transport_line ---" << endl;
        cout << "Received Packet 1: " << packet1.text <<endl;
        cout << "Received Packet 2: " << packet2.text <<endl;
        cout << "Received Packet 3: " << packet3.text << endl;
     
    }

    void send_packets(UDP_packet packet1 , UDP_packet packet2, UDP_packet packet3) {
       
    }
  
};

int main() {
    transport t;
    UDP_packet packet1, packet2, packet3;

    t.receive_packets(packet1, packet2, packet3);

    return 0;
}
