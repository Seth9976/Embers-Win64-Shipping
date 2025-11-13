// 函数: sub_141d585d0
// 地址: 0x141d585d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_6 = *(arg1 + 0x30)

if (rax_6 s<= 0)
    *arg2 = 0xffffffff
    return 0

int32_t rdx = *arg2
int32_t rax = rax_6 - 1

if (rdx s< 0xffffffff)
    rax = -1
else if (rdx s< rax)
    rax = rdx

*arg2 = rax + 1
int32_t temp1 = mods.dp.d(sx.q(rax + 1), *(arg1 + 0x30))
*arg2 = temp1
return *(*(arg1 + 0x28) + (sx.q(temp1) << 3))
