// 函数: sub_14174f5c0
// 地址: 0x14174f5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x10))

if (arg2 s> rdi.d)
    int32_t rsi_2 = arg2 - rdi.d
    *(arg1 + 0x10) = arg2
    
    if (arg2 s> *(arg1 + 0x14))
        sub_1405a4d70(arg1 + 8)
    
    if (rsi_2 != 0)
        __builtin_memset(*(arg1 + 8) + (rdi << 3), 0, zx.q(rsi_2) << 3)
else if (arg2 s< rdi.d && arg2 != rdi.d)
    *(arg1 + 0x10) = arg2
    return sub_1405c53d0(arg1 + 8) __tailcall
