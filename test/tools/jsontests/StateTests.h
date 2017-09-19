/*
This file is part of cpp-ethereum.

cpp-ethereum is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

cpp-ethereum is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with cpp-ethereum.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file StateTests.h
 * StateTests functions.
 */

#pragma once
#include <test/tools/libtesteth/TestSuite.h>


using namespace dev;

namespace dev
{
namespace test
{

class StateTestSuite: public TestSuite
{
public:
	json_spirit::mValue doTests(json_spirit::mValue const& _input, bool _fillin) const override;
	std::string suiteFolder() const override;
	std::string suiteFillerFolder() const override;
};

}
}
