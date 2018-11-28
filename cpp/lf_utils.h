#ifndef LF_UTILS_H
#define LF_UTILS_H

#include <string>

namespace lf {
	namespace str {
		bool endswith (const std::string &fullString, const std::string &ending);
	}

	namespace path {
		std::string base_name(const std::string &path, bool keep_extension = true);
	}
}

#define IS_HEADER_ONLY
#ifdef IS_HEADER_ONLY
#include "lf_utils.cpp"
#endif

#endif