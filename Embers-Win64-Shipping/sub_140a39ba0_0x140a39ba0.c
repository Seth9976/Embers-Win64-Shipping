// 函数: sub_140a39ba0
// 地址: 0x140a39ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (arg2 s> rdi.d)
    int32_t rsi_2 = arg2 - rdi.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405a4cf0(arg1)
    
    if (rsi_2 != 0)
        __builtin_memset(*arg1 + (rdi << 2), 0xffffffff, zx.q(rsi_2) << 2)
else if (arg2 s< rdi.d)
    return sub_140908e30(arg1, arg2, rdi.d - arg2, arg3) __tailcall
