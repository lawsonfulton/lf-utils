#ifndef LF_UTILS_H
#define LF_UTILS_H

#include <string>

namespace lf {
	namespace str {
		inline bool endswith (const std::string &fullString, const std::string &ending);
	}

	namespace path {
		inline std::string remove_extension(const std::string &filename);
		inline std::string base_name(const std::string &path, bool keep_extension = true);
		inline std::string join(const std::string &p1, const std::string &p2);
	}
}

#define IS_HEADER_ONLY
#ifdef IS_HEADER_ONLY	
#include "lf_utils.cpp"
#endif

#endif