// Copyright (C) 2023 neverlosecc
// See end of file for extended copyright information.

#pragma once

#ifdef _WIN32
typedef std::uint32_t ThreadId_t;
#else
typedef std::uint64_t ThreadId_t;
#endif

class CThreadSpinMutex {
public:
    CThreadSpinMutex(const char* pDebugName = NULL): m_ownerID(0), m_depth(0) { }

private:
    volatile ThreadId_t m_ownerID;
    int m_depth;
};

using CThreadFastMutex = CThreadSpinMutex;

// source2gen - Source2 games SDK generator
// Copyright 2023 neverlosecc
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//