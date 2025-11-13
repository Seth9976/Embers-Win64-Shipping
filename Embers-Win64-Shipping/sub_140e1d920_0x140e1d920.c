// 函数: sub_140e1d920
// 地址: 0x140e1d920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x779)

if ((r8 & 0x21) != 0x21 && (r8 & 0x20) != 0)
    int32_t rcx = *(arg1 + 0x858)
    
    if (((rcx - 1) & 0xfffffff7) == 0)
        *arg2 = 1
        __builtin_memset(&arg2[8], 0, 0x30)
        *(arg2 + 0x38) = 5
        return arg2
    
    if (((rcx - 3) & 0xfffffffb) == 0)
        *arg2 = 1
        __builtin_memset(&arg2[8], 0, 0x30)
        *(arg2 + 0x38) = 6
        return arg2
    
    if (rcx == 2 || rcx == 8)
        *arg2 = 1
        __builtin_memset(&arg2[8], 0, 0x30)
        *(arg2 + 0x38) = 4
        return arg2
    
    if (((rcx - 4) & 0xfffffffd) == 0)
        *arg2 = 1
        __builtin_memset(&arg2[8], 0, 0x30)
        *(arg2 + 0x38) = 3
        return arg2

*arg2 = 0
__builtin_memset(&arg2[8], 0, 0x30)
*(arg2 + 0x38) = 1
return arg2
