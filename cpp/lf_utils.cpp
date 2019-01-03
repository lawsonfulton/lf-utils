#include "lf_utils.h"

using std::string;

bool lf::str::endswith (const string &fullString, const string &ending) {
	if (fullString.length() >= ending.length()) {
		return (0 == fullString.compare (fullString.length() - ending.length(), ending.length(), ending));
	} else {
		return false;
	}
}


string lf::path::remove_extension(const string & filename) {
	const size_t p = filename.find_last_of('.');
	return p > 0 && p != string::npos ? filename.substr(0, p) : filename;
}

string lf::path::base_name(const string & path, bool keep_extension) {
	string basename = path.substr(path.find_last_of("/\\") + 1);

	if(keep_extension) {
		return basename;
	} else {
		return remove_extension(basename);
	}
}

string lf::path::join(const string& p1, const string& p2) {
	char sep = '/';
	string tmp = p1;

	#ifdef _WIN32
	sep = '\\';
	#endif

	if (p1[p1.length()] != sep) { // Need to add a
		tmp += sep;               // path separator
		return(tmp + p2);
	} else {
		return(p1 + p2);
	}
}
