// 函数: sub_142ac68a0
// 地址: 0x142ac68a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg3 + 8) & 1) == 0)
    *(arg3 + 8) &= 0x1f
else
    *(arg3 + 8) = 2

void* rax = sub_142ae72d0(*(arg1 + 8), arg2)

if (rax == 0 || *(rax + 0x4c) == 0)
    rax.b = 0
    return rax

sub_142a48aa0(arg3, rax + 8, 0)
void* rax_1
rax_1.b = 1
return rax_1
