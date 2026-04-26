#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include "../site connection/transport_line.h"

using namespace std;

class extract{
    public:
        
        string extract_text;
        int desination_port, source_port, text_lenght;
        
        
        void read_text(){
            ifstream myfile2;
            myfile2.open("user_1_end.txt", ios::in);
            int count;
            if(myfile2.is_open()){
                getline(myfile2, extract_text);
            }

        }
};

class inject{
    public:

    void write_text(){
        ofstream myfile;
        myfile.open("user_1_archive.txt", ios::app);
        if(myfile.is_open()){
            
            myfile.close();
        }
    }


};

class split_text{
    public:
    UDP_packet packet1;
    UDP_packet packet2;
    UDP_packet packet3;

    void split(extract& ext){
        string text = ext.extract_text; 
        int destination = ext.desination_port;
        int source = ext.source_port;
        int len = text.length() / 3;

        string p1 = text.substr(0, len);
        string p2 = text.substr(len, len);
        string p3 = text.substr(2 * len);

        packet1.text = p1;
        packet1.text_lenght = p1.length();

        packet2.text = p2;
        packet2.text_lenght = p2.length();

        packet3.text = p3;
        packet3.text_lenght = p3.length();
        
    }
};
int main(){
    extract ext;
    ext.read_text();
    
    split_text splitter;
    splitter.split(ext);

    transport t;
    t.receive_packets(splitter.packet1, splitter.packet2, splitter.packet3);
    
    return 0;
}