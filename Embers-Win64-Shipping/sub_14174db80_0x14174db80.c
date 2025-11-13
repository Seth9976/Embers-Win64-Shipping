// 函数: sub_14174db80
// 地址: 0x14174db80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x10)
int64_t r10 = sx.q(arg2)
uint32_t count = r9 - r10.d - 1

if (count s>= 1)
    count = 1

if (count != 0)
    memcpy(r10 + *(arg1 + 8), sx.q(r9 - count) + *(arg1 + 8), count)
    r9 = *(arg1 + 0x10)

*(arg1 + 0x10) = r9 - 1
return sub_1405dac10(arg1 + 8) __tailcall
