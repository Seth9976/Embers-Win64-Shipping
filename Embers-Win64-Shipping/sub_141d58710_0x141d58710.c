// 函数: sub_141d58710
// 地址: 0x141d58710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x30)

if (rcx s<= 0)
    *arg2 = 0xffffffff
    return 0

int32_t rax = *arg2

if (rax s< 0)
    rcx = 0
else if (rax s< rcx)
    rcx = rax

*arg2 = rcx - 1
int32_t rax_2 = *(arg1 + 0x30) + rcx - 1
*arg2 = rax_2
int32_t temp1 = mods.dp.d(sx.q(rax_2), *(arg1 + 0x30))
*arg2 = temp1
return *(*(arg1 + 0x28) + (sx.q(temp1) << 3))
