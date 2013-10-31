///*
// * test_cwd.cpp
// * Created on: Oct 25, 2013
// * Author: xieouye
// */
//#include <stdio.h>  /* defines FILENAME_MAX */
//#include <fstream>
//#include <iostream>
//#include <string>
//
//#ifdef WINDOWS
//    #include <direct.h>
//    #define GetCurrentDir _getcwd
//#else
//    #include <unistd.h>
//    #define GetCurrentDir getcwd
//#endif
//
//int main()
//{
//    //print current working directory
//	char cCurrentPath[FILENAME_MAX];
//	if (!GetCurrentDir(cCurrentPath, sizeof(cCurrentPath)))
//		{
//		return 1;
//		}
//
//	cCurrentPath[sizeof(cCurrentPath) - 1] = '\0'; /* not really required */
//
//	printf ("The current working directory is %s \n", cCurrentPath);
//
//
//	//open a file in current directory and see if it works
//	const char *File_stopwords = "src/stopwords";
//	std::fstream fStopWords(File_stopwords, std::ios_base::in);
//	if(!fStopWords)
//	{
//		std::cerr << "open stopwords file failed:[" << File_stopwords << "]" << std::endl;
//		return -2;
//	}
//	std::cout<<"open succeed"<<std::endl;
//	std::string line;
//	std::getline (fStopWords,line);
//	std::cout<<line<<std::endl;
//
//}
//
//
