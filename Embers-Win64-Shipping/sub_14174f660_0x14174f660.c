// 函数: sub_14174f660
// 地址: 0x14174f660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x10))

if (arg2 s> rdi.d)
    int32_t rsi_2 = arg2 - rdi.d
    *(arg1 + 0x10) = arg2
    
    if (arg2 s> *(arg1 + 0x14))
        sub_1405a4cf0(arg1 + 8)
    
    if (rsi_2 != 0)
        __builtin_memset(*(arg1 + 8) + (rdi << 2), 0xffffffff, zx.q(rsi_2) << 2)
else if (arg2 s< rdi.d && arg2 != rdi.d)
    *(arg1 + 0x10) = arg2
    return sub_1405dac90(arg1 + 8) __tailcall
