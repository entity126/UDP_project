#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

class extract{
    public:
        //class variables

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
    struct UDP_packet
    {
        int source_port;
        int desination_port;
        int text_lenght;
        string text;
    };
    
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

        cout << "Packet 1: " << packet1.text << " Length: " << packet1.text_lenght << endl;
        cout << "Packet 2: " << packet2.text << " Length: " << packet2.text_lenght << endl;
        cout << "Packet 3: " << packet3.text << " Length: " << packet3.text_lenght << endl;
        
    }
};
int main(){
    extract ext;
    ext.read_text();
    
    split_text splitter;
    splitter.split(ext); 
    
    return 0;
}