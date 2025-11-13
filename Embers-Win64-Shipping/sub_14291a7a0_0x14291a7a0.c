// 函数: sub_14291a7a0
// 地址: 0x14291a7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint32_t count = (*(*(arg3 + 0x78) + 0x10))()

if (count s<= 0)
    return zx.q(count)

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(sub_142890560(*(arg3 + 8)) + 7)
int32_t rax_6 = (temp1 + (temp0 & 7)) s>> 3
int32_t count_2 = rax_6 - count

if (count_2 s> 0)
    int64_t count_1 = sx.q(count_2)
    memmove(count_1 + arg1, arg1, count)
    memset(arg1, 0, count_1)

return zx.q(rax_6)
