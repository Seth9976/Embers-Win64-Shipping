// 函数: sub_1405ebde0
// 地址: 0x1405ebde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
int64_t var_28 = -2
*arg1 = &data_142d5eef0
arg1[1] = &data_142d5ef28
void*** rax = j_sub_140a82f30(0x10)
void** r14 = rax
void*** arg_10 = rax

if (rax == 0)
    r14 = nullptr
else
    CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x60)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    int64_t* lpCriticalSection_2 = lpCriticalSection
    
    if (lpCriticalSection == 0)
        lpCriticalSection_1 = nullptr
    else
        InitializeCriticalSection(lpCriticalSection)
        SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)
        lpCriticalSection_1->__offset(0x28).q = 0
        lpCriticalSection_1->__offset(0x30).q = 0
        int64_t* lpCriticalSection_3 = j_sub_140a82f30(0x10)
        lpCriticalSection_2 = lpCriticalSection_3
        
        if (lpCriticalSection_3 == 0)
            lpCriticalSection_3 = nullptr
        else
            *lpCriticalSection_3 = 0
        
        lpCriticalSection_1->__offset(0x48).q = lpCriticalSection_3
        lpCriticalSection_1->__offset(0x40).q = lpCriticalSection_3
        lpCriticalSection_1->__offset(0x50).q = 0
    
    void*** rax_1 = j_sub_140a82f30(0x18)
    arg_10 = rax_1
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        rax_1[1].d = 1
        *(rax_1 + 0xc) = 1
        *rax_1 = &data_142d62cd0
        rax_1[2] = lpCriticalSection_1
    
    *r14 = lpCriticalSection_1
    r14[1] = rax_1

arg1[2] = r14
arg_10 = &arg1[4]
arg1[4] = &data_142d5eeb0
arg1[5] = &data_142d5eed0
arg1[6] = 0
void*** rax_2 = j_sub_140a82f30(0x18)
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
void*** rax_3 = j_sub_140a82f30(0x18)
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
void*** rax_4 = j_sub_140a82f30(0x18)
arg_10 = rax_4

if (rax_4 == 0)
    rax_4 = nullptr
else
    __builtin_memset(rax_4, 0, 0x18)

arg1[0x25] = rax_4
arg1[0x24] = rax_4
__builtin_memset(&arg1[0x26], 0, 0x18)
arg1[0x29] = -1
arg1[0x2a] = -1
arg1[0x2b].w = 0
__builtin_memset(&arg1[0x2c], 0, 0x18)
arg_10 = &arg1[0x30]
arg1[0x30] = &data_142d5eeb0
arg1[0x31] = &data_142d5eed0
arg1[0x32] = 0
void*** rax_5 = j_sub_140a82f30(0x18)
arg_8 = rax_5

if (rax_5 == 0)
    rax_5 = nullptr
else
    __builtin_memset(rax_5, 0, 0x18)

arg1[0x35] = rax_5
arg1[0x34] = rax_5
arg1[0x36] = 0
arg1[0x37] = 0
return arg1
