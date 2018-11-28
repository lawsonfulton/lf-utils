#include "lf_utils.h"

bool lf::str::endswith (const std::string &fullString, const std::string &ending) {
	if (fullString.length() >= ending.length()) {
		return (0 == fullString.compare (fullString.length() - ending.length(), ending.length(), ending));
	} else {
		return false;
	}
}


std::string remove_extension(const std::string & filename) {
	const size_t p = filename.find_last_of('.');
	return p > 0 && p != std::string::npos ? filename.substr(0, p) : filename;
}

std::string lf::path::base_name(const std::string & path, bool keep_extension) {
	std::string basename = path.substr(path.find_last_of("/\\") + 1);

	if(keep_extension) {
		return basename;
	} else {
		return remove_extension(basename);
	}
}
