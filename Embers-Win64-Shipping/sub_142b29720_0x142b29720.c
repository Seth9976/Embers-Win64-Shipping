// 函数: sub_142b29720
// 地址: 0x142b29720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_5 = *(arg1 + 0x190)

if (rax_5 == *(arg1 + 0x198))
    *arg2 = 0xffffffff
    return 0xc0

*arg2 = zx.d(*rax_5)
*(arg1 + 0x190) += 2
int64_t* r9 = *(arg1 + 8)
int64_t r8 = sx.q(*arg2)
return zx.q(*(r9[2] + (zx.q((r8.d & 0x1f) + (zx.d(*(*r9 + (r8 s>> 5 << 1))) << 2)) << 2)))
