// 函数: sub_14281cdbc
// 地址: 0x14281cdbc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    int32_t rcx = *(arg1 + 0x10)
    
    if (rcx == 3)
        *(arg2 + 8) = *(arg1 + 0x68)
        *arg2 = 1
    else if (rcx != 4)
        *arg2 = 0
        __builtin_memset(&arg2[2], 0, 0x18)
    else
        int64_t rax_1 = *(arg1 + 0x88)
        *arg2 = 2
        *(arg2 + 8) = 0
        *(arg2 + 0x18) = rax_1
        *(arg2 + 0x10) = rax_1
else
    *arg2 = 0
    __builtin_memset(&arg2[2], 0, 0x18)

return arg2
