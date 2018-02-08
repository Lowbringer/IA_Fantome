File::File() {}
File::~File() {}

static void File::write(std::string &str) {
	std::ofstream file("example.txt");
	file << str << std::endl;
	file.close();
}

static std::string File::read() {
	std::ifstream file("exemple.txt");
	std::string line;

	if (file.is_open()) {
		while (getline(file, line)) {
	      cout << line << '\n';
	    }

	    return line;
	    file.close();
	}
	return "";
}