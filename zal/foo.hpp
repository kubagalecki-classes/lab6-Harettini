#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::transform(people.crbegin(), people.crend(), ret_v.begin(), [](const Human& HU) {
        return HU.isMonster() ? 'n' : 'y';
    });
    std::for_each(people.begin(), people.end(), [](Human& HU) { HU.birthday(); });
    //   std::reverse(ret_v.begin(), ret_v.end());
    // Twoja implementacja tutaj

    return ret_v;
}
