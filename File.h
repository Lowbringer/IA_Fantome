#ifndef FILE_H
# define FILE_H

# include <iostream>
# include <fstream>
# include <string>

class File
{
public:
	File();
	~File();

	static void write(std::string &str);
	static std::string read();
};

#endif // ! FILE_H