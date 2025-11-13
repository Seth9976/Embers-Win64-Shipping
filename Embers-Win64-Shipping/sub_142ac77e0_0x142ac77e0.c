// 函数: sub_142ac77e0
// 地址: 0x142ac77e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
rax.b = arg3 s>= 0xa
int32_t i_2 = zx.d(arg4) - (rax + 1)

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        sub_142a48580(arg2, *(arg1 + 0x400))
        i = i_1
        i_1 -= 1
    while (i != 1)

if (arg3 s>= 0xa)
    sub_142a48580(arg2, *(arg1 + (sx.q(arg3 s/ 0xa) << 2) + 0x400))

return sub_142a48580(arg2, *(arg1 + (sx.q(arg3 s% 0xa) << 2) + 0x400)) __tailcall
