#include "impl.h"
#include <set>

struct Range
{
    size_t lowRange;
    size_t upRange;
};

std::map<Range, size_t> rangeMapping {
        {Range{0, 29}, 1},
        {Range{30, 49}, 2},
        {Range{50, 69}, 3},
        {Range{70, 89}, 4},
        {Range{90, 100}, 5}
};

size_t convertMarkTo5PointSystem(size_t markIn100Point) {
    std::set<size_t> rangesSet{0, 29, 30, 49, 50, 69, 70, 89, 90};
    auto value = rangesSet.equal_range(markIn100Point);
    auto findRange({value.first, value.second});
    auto it = rangeMapping.find(findRange);
    return it->second;
}
