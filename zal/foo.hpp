#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.rbegin(), people.rend(), [&](Human& HU) {
        HU.birthday();
        ret_v.push_back(HU.isMonster() ? 'n' : 'y');
    });
    // std::for_each(people.begin(), people.end(), [](Human& HU) {  });
    //   std::reverse(ret_v.begin(), ret_v.end());
    // Twoja implementacja tutaj

    return ret_v;
}
