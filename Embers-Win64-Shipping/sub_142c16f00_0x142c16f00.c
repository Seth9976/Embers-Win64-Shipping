// 函数: sub_142c16f00
// 地址: 0x142c16f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bf7510(arg2, arg1, 2)

if (rax == 0)
    return rax

uint32_t rcx_3 = (zx.d(*arg1) << 8) + zx.d(arg1[1])

if (rcx_3 == 1)
    return sub_142c15100(arg2, arg1) __tailcall

if (rcx_3 == 2)
    return sub_142c27ce0(arg1, arg2) __tailcall

if (rcx_3 == 3)
    return sub_142c27d70(arg1, arg2) __tailcall

uint32_t rax_1
rax_1.b = 1
return rax_1
