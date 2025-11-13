// 函数: sub_140da4470
// 地址: 0x140da4470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0xb0))
int32_t rdx

if (rax.d s<= 0)
    rdx = -1
else
    rdx = *(*(arg1 + 0xa8) + (rax << 2) - 4)

if (rdx == 0xffffffff)
    arg2[8].b = 0
    return arg2

sub_140d92d60(arg2, (sx.q(rdx) << 6) + *(arg1 + 0xb8))
arg2[8].b = 1
return arg2
