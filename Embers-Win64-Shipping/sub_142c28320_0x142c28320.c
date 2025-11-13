// 函数: sub_142c28320
// 地址: 0x142c28320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bf7510(arg2, &arg1[4], 2)

if (rax == 0)
    return rax

uint32_t rax_1 = zx.d(arg1[5])
uint32_t rcx_2 = zx.d(arg1[4]) << 8
uint32_t rcx_3 = rcx_2 + rax_1

if (rcx_2 != neg.d(rax_1))
    if (rcx_3 u<= 3)
        return sub_142c289c0(arg1, arg2) __tailcall
    
    if (rcx_3 == 0x8000)
        return sub_142bf7510(arg2, arg1, 6) __tailcall

rax_1.b = 1
return rax_1
