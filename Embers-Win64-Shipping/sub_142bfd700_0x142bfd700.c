// 函数: sub_142bfd700
// 地址: 0x142bfd700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x24))
void* rcx = *(arg1 + 0x18)
uint32_t r8 = *(rcx + 0x2c)

if (r8 == 0)
    r8 = sub_142bf7870(rcx)

int64_t rcx_2 = rdi * sx.q(arg2)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8)
int32_t rax_6 = (temp3 - temp2) s>> 1

if (rcx_2 s< 0)
    rax_6 = neg.d(rax_6)

return divs.dp.q(sx.o(sx.q(rax_6) + rcx_2), sx.q(r8))
