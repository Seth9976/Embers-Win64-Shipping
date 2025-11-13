// 函数: sub_1406b5800
// 地址: 0x1406b5800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
*arg1 = &data_142d8db08
arg1[1] = &data_142d8db40
arg1[2] = &data_142d8dba8
void** rax = j_sub_140a82f30(0x10)
void** rdi = rax
void** arg_10 = rax
int64_t* lpCriticalSection_4

if (rax == 0)
    rdi = nullptr
else
    CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x60)
    CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection
    lpCriticalSection_4 = lpCriticalSection
    
    if (lpCriticalSection == 0)
        lpCriticalSection_2 = nullptr
    else
        InitializeCriticalSection(lpCriticalSection)
        SetCriticalSectionSpinCount(lpCriticalSection_2, 0xfa0)
        lpCriticalSection_2->__offset(0x28).q = 0
        lpCriticalSection_2->__offset(0x30).q = 0
        int64_t* lpCriticalSection_5 = j_sub_140a82f30(0x10)
        lpCriticalSection_4 = lpCriticalSection_5
        
        if (lpCriticalSection_5 == 0)
            lpCriticalSection_5 = nullptr
        else
            *lpCriticalSection_5 = 0
        
        lpCriticalSection_2->__offset(0x48).q = lpCriticalSection_5
        lpCriticalSection_2->__offset(0x40).q = lpCriticalSection_5
        lpCriticalSection_2->__offset(0x50).q = 0
    
    void*** rax_1 = j_sub_140a82f30(0x18)
    arg_10 = rax_1
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        rax_1[1].d = 1
        *(rax_1 + 0xc) = 1
        *rax_1 = &data_142d8e210
        rax_1[2] = lpCriticalSection_2
    
    *rdi = lpCriticalSection_2
    rdi[1] = rax_1

arg1[3] = rdi
arg_10 = &arg1[4]
arg1[4] = &data_142d5eeb0
arg1[5] = &data_142d5eed0
arg1[6] = 0
void** rax_2 = j_sub_140a82f30(0x18)
arg_10 = rax_2

if (rax_2 == 0)
    rax_2 = nullptr
else
    __builtin_memset(rax_2, 0, 0x18)

arg1[9] = rax_2
arg1[8] = rax_2
arg1[0xa] = 0
arg1[0xb] = 0
arg_10 = &arg1[0xc]
arg1[0xc] = &data_142d5eeb0
arg1[0xd] = &data_142d5eed0
arg1[0xe] = 0
void** rax_3 = j_sub_140a82f30(0x18)
arg_10 = rax_3

if (rax_3 == 0)
    rax_3 = nullptr
else
    __builtin_memset(rax_3, 0, 0x18)

arg1[0x11] = rax_3
arg1[0x10] = rax_3
arg1[0x12] = 0
arg1[0x13] = 0
InitializeCriticalSection(&arg1[0x14])
SetCriticalSectionSpinCount(&arg1[0x14], 0xfa0)
__builtin_memset(&arg1[0x19], 0, 0x29)
arg_10 = &arg1[0x20]
arg1[0x20] = &data_142d5eeb0
arg1[0x21] = &data_142d5eed0
arg1[0x22] = 0
void** rax_4 = j_sub_140a82f30(0x18)
arg_10 = rax_4

if (rax_4 == 0)
    rax_4 = nullptr
else
    __builtin_memset(rax_4, 0, 0x18)

arg1[0x25] = rax_4
arg1[0x24] = rax_4
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x28] = -1
arg1[0x29] = -1
arg1[0x2a].b = 0
void** rax_5 = j_sub_140a82f30(0x10)
void** rdi_1 = rax_5
arg_10 = rax_5

if (rax_5 == 0)
    rdi_1 = nullptr
else
    int64_t* lpCriticalSection_1 = j_sub_140a82f30(0x60)
    CRITICAL_SECTION* lpCriticalSection_3 = lpCriticalSection_1
    lpCriticalSection_4 = lpCriticalSection_1
    
    if (lpCriticalSection_1 == 0)
        lpCriticalSection_3 = nullptr
    else
        InitializeCriticalSection(lpCriticalSection_1)
        SetCriticalSectionSpinCount(lpCriticalSection_3, 0xfa0)
        lpCriticalSection_3->__offset(0x28).q = 0
        lpCriticalSection_3->__offset(0x30).q = 0
        int64_t* lpCriticalSection_6 = j_sub_140a82f30(0x10)
        lpCriticalSection_4 = lpCriticalSection_6
        
        if (lpCriticalSection_6 == 0)
            lpCriticalSection_6 = nullptr
        else
            *lpCriticalSection_6 = 0
        
        lpCriticalSection_3->__offset(0x48).q = lpCriticalSection_6
        lpCriticalSection_3->__offset(0x40).q = lpCriticalSection_6
        lpCriticalSection_3->__offset(0x50).q = 0
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    arg_10 = rax_6
    
    if (rax_6 == 0)
        rax_6 = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rax_6 = &data_142d8e220
        rax_6[2] = lpCriticalSection_3
    
    *rdi_1 = lpCriticalSection_3
    rdi_1[1] = rax_6

arg1[0x2b] = rdi_1
arg_10 = &arg1[0x2c]
arg1[0x2c] = &data_142d5eeb0
arg1[0x2d] = &data_142d5eed0
arg1[0x2e] = 0
void** rax_7 = j_sub_140a82f30(0x18)
arg_10 = rax_7

if (rax_7 == 0)
    rax_7 = nullptr
else
    __builtin_memset(rax_7, 0, 0x18)

arg1[0x31] = rax_7
arg1[0x30] = rax_7
__builtin_memset(&arg1[0x32], 0, 0x14)
void** rax_8 = j_sub_140a82f30(0x10)
arg_10 = rax_8

if (rax_8 == 0)
    rax_8 = nullptr
else
    *rax_8 = nullptr

arg1[0x37] = rax_8
arg1[0x36] = rax_8
__builtin_memset(&arg1[0x38], 0, 0x18)
arg1[0x3c].w = 0
__builtin_memset(&arg1[0x3d], 0, 0x30)
__builtin_memset(&arg1[0x44], 0, 0x30)
sub_1406b5f70(&arg1[0x4a])
sub_1406b5f70(&arg1[0x64])
sub_1406b5f70(&arg1[0x7e])
arg_10 = &arg1[0x98]
InitializeCriticalSection(&arg1[0x9d])
SetCriticalSectionSpinCount(&arg1[0x9d], 0xfa0)
arg1[0xa2] = sub_140a491d0(0)
__builtin_memset(&arg1[0x98], 0, 0x20)
arg1[0x9c].b = 1
*(arg1 + 0x4e4) = 0
arg_10 = &arg1[0xa3]
InitializeCriticalSection(&arg1[0xa8])
SetCriticalSectionSpinCount(&arg1[0xa8], 0xfa0)
arg1[0xad] = sub_140a491d0(0)
__builtin_memset(&arg1[0xa3], 0, 0x20)
arg1[0xa7].b = 1
*(arg1 + 0x53c) = 0
arg_10 = &arg1[0xae]
InitializeCriticalSection(&arg1[0xb3])
SetCriticalSectionSpinCount(&arg1[0xb3], 0xfa0)
arg1[0xb8] = sub_140a491d0(0)
__builtin_memset(&arg1[0xae], 0, 0x20)
arg1[0xb2].b = 1
*(arg1 + 0x594) = 0
__builtin_memset(&arg1[0xb9], 0, 0x25)
__builtin_memset(&arg1[0xbe], 0, 0x2d)
__builtin_memset(&arg1[0xc4], 0, 0x2d)
arg1[0xca] = 0
arg1[0xcb] = 0
arg1[0xcc] = sub_140a491d0(0)
__builtin_memset(&arg1[0xcd], 0, 0x32)
arg1[0xd4].w = 0
__builtin_memset(&arg1[0xd5], 0, 0x15)
*(arg1 + 0x6c4) = -1
*(arg1 + 0x6cc) = 0xffffffff
arg1[0xda].b = 0
*(arg1 + 0x6d4) = 0
__builtin_memset(&arg1[0xdc], 0, 0x11)
arg1[0xdf] = 0
arg1[0xe0] = 0
__builtin_memset(&arg1[0xec], 0, 0x1c)
__builtin_memset(&arg1[0xf0], 0, 0x24)
arg1[0xf5] = 0
arg1[0xf6] = 0
arg1[0xfe] = 0
arg1[0xff].d = 0xffffffff
*(arg1 + 0x7fc) = 0
return arg1
