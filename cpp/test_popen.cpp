#include <string>
#include <iostream>
#include <stdio.h>

std::string exec(const char* cmd) {
    FILE* pipe = popen(cmd, "r");
    if (!pipe) return "ERROR";
    char buffer[128];
    std::string result = "";
    while(!feof(pipe)) {
    	if(fgets(buffer, 128, pipe) != NULL)
    		result += buffer;
    }
    pclose(pipe);
    return result;
}

int main()
{
	std::string cmd = "df -h";
	std::cout << "result: " << exec(cmd.c_str()) << std::endl;
	return 0;
}
