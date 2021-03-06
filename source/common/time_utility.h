/*
 * Tencent is pleased to support the open source community by making Pebble available.
 * Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
 * or implied. See the License for the specific language governing permissions and limitations under
 * the License.
 *
 */


#ifndef COMMON_TIME_UTILITY_H_
#define COMMON_TIME_UTILITY_H_

#include <stdint.h>
#include <string>

class TimeUtility {
public:
    // 得到当前的毫秒
    static int64_t GetCurremtMs();

    // 得到字符串形式的时间格式：2015-04-10 10:11:12
    static std::string GetStringTime();

    // 将字符串格式(2015-04-10 10:11:12)的时间，转为time_t
    static time_t ChangeTime(const std::string &time);

    // 取得两个时间戳字符串t1-t2的时间差，精确到秒,时间格式为2015-04-10 10:11:12
    static time_t GetTimeDiff(const std::string &t1, const std::string &t2);
};

#endif  // COMMON_TIME_UTILITY_H_
