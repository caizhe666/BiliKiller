/****************************************************************************
**
** Copyright (C) 2019 BlackINT3
** Contact: https://github.com/BlackINT3/none
**
** GNU Lesser General Public License Usage (LGPL)
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
****************************************************************************/
#pragma once
#include <string>

namespace UNONE {
namespace Plugins {
namespace Cryptor {
	
#define SHA1_HASH_SIZE 20

void GetSHA1ByData(__in const char *buf, __in unsigned int size, __out char *hash);
std::string GetSHA1ByData(__in const std::string &buf);
std::string GetSHA1ByFile(__in const std::string &file);

} // namespace Cryptor
} // namespace Plugins
} // namespace UNONE