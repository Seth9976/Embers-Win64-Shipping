// 函数: sub_1421295f0
// 地址: 0x1421295f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x2a0))(arg1, arg2, zx.q(arg4), 0, arg5, 0)
int64_t rsi = sx.q(*(arg2 + 8))
int64_t rbx_1 = sx.q(arg3[1].d)
int32_t rax_1 = (rbx_1 + rsi).d
arg3[1].d = rax_1

if (rax_1 s> *(arg3 + 0xc))
    sub_1405a4f90(arg3)

return memset((rbx_1 << 4) + *arg3, 0, rsi << 4) __tailcall
