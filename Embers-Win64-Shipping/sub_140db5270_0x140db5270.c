// 函数: sub_140db5270
// 地址: 0x140db5270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax

if (*(arg1 + 0x3c) == 0)
    if (*(arg1 + 0x34) == 0)
        *arg2 = 0
        __builtin_memset(&arg2[8], 0, 0x30)
        *(arg2 + 0x38) = 1
        return arg2
    
    rax = *(arg1 + 0x30)
else
    rax = *(arg1 + 0x38)

*arg2 = 1
__builtin_memset(&arg2[8], 0, 0x30)
*(arg2 + 0x38) = rax
return arg2
