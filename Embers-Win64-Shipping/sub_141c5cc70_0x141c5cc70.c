// 函数: sub_141c5cc70
// 地址: 0x141c5cc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 8 && arg3 s<= 8)
    if (arg1 != 0 && arg2 == 6)
        return sub_141c4c1f0(arg5, (sx.q(arg3 - 1) << 4) + data_143f34e10) __tailcall
    
    return sub_141c4c1f0(arg5, 
        (sx.q(((zx.q(arg3 + (zx.d(arg4) << 3)) << 3) + -fffffffffffffff7).d + arg2) << 4)
            + data_143f34e00) __tailcall

int32_t rbx_1 = arg2 * arg3
int64_t rsi = sx.q(arg5[1].d)
int32_t rax_6 = rsi.d + rbx_1
arg5[1].d = rax_6

if (rax_6 s> *(arg5 + 0xc))
    sub_140775270(arg5)

return memset(*arg5 + (rsi << 2), 0, sx.q(rbx_1) << 2) __tailcall
