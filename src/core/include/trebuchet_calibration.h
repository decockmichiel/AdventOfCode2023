#pragma once
#include <map>
#include <string>
#include <vector>

namespace core
{

std::map<std::string, size_t> textNumberMap();

std::vector<size_t> extractNumbers(const std::vector<std::string>& strings);

} // namespace core
