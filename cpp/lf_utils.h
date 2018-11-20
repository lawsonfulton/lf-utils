#ifdef LF_UTILS_H
#define LF_UTILS_H

#include <string>

namespace lf {
	namespace str {
		bool endsWith (std::string const &fullString, std::string const &ending);
	}
}

#define IS_HEADER_ONLY
#ifdef IS_HEADER_ONLY
#include "lf_utils.cpp"
#endif

#endif