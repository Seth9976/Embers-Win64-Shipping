// 函数: sub_142b280f0
// 地址: 0x142b280f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x188)
int32_t rax_1 = (*(rax + 0x48))(rax)
int64_t r9 = sx.q(rax_1)
*arg2 = r9.d

if (rax_1 s< 0)
    return 0xc0

int64_t* r8 = *(arg1 + 8)
return zx.q(*(r8[2] + (zx.q((r9.d & 0x1f) + (zx.d(*(*r8 + (r9 s>> 5 << 1))) << 2)) << 2)))
