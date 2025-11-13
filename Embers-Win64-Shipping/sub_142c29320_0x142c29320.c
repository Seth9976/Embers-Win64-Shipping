// 函数: sub_142c29320
// 地址: 0x142c29320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bf7510(arg2, arg1, 4)

if (rax == 0)
    return rax

uint32_t rax_1 = zx.d(arg1[1])
uint32_t rcx_2 = zx.d(*arg1) << 8

if (rcx_2 == neg.d(rax_1))
    return sub_142c252f0(arg1, arg2) __tailcall

if (rcx_2 + rax_1 == 1)
    return sub_142c25170(arg1, arg2) __tailcall

rax_1.b = 1
return rax_1
