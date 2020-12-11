#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.cend(), people.cbegin(), [&](const Human& HU) {
        ret_v.push_back(HU.isMonster() ? 'n' : 'y');
    });
    std::transform(
        people.cbegin(), people.cend(), people.cbegin(), [](Human& HU) { HU.birthday(); });
    //   std::reverse(ret_v.begin(), ret_v.end());
    // Twoja implementacja tutaj

    return ret_v;
}
