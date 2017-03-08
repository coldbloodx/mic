#include "configparser.h"
#include "exception.h"
#include <iostream>
#include <cstdlib>
#include "unistd.h"
#include <stdio.h>
using namespace std;

int main()
{
    cout<<"config parser with param"<<endl;
    LAConfigParser* parser = NULL ;
    try 
    {
        parser = LAConfigParser::create_instance("etc/nonexit");
    }
    catch (LAException &e)
    {
        cout << e.info << endl;
        delete parser;
    }
    parser = NULL;


    cout<<"config parser with default param"<<endl;
    try
    {
        parser = LAConfigParser::create_instance("etc/ladaemon.conf");
        cout<<parser->read_plugin_dir()<<endl;
        cout<<parser->read_value("loglevel")<<endl;
        cout<<parser->read_value("plugindir")<<endl;

    }
    catch (LAException &e)
    {
        cout << e.info << endl;
        delete parser;
    }
    
    try
    {
        parser = LAConfigParser::create_instance("/proc/cpuinfo", ":");

        parser->dump();

        std::string dummy_key = parser->read_value("none exists key"); 
        cout<< dummy_key <<endl;
    }
    catch(LAException &e)
    {
        cout << e.info << endl;
        delete parser;
    }

    return 0;
}
