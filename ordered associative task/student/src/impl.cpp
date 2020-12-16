#include "impl.h"

size_t convertMarkTo5PointSystem(size_t markIn100Point) {
    std::map <size_t, size_t> rangeMapping {
        {29, 1}
        , {49, 2}
        , {69, 3}
        , {89, 4}
        , {90, 5}
    };
    auto result = rangeMapping.lower_bound(markIn100Point);
    if (rangeMapping.end() != result) {
        return result->second;
    }
}
