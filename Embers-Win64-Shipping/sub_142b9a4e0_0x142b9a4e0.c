// 函数: sub_142b9a4e0
// 地址: 0x142b9a4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_10 = *(arg1 + 0xc)
int32_t r9 = arg2
uint64_t r8 = zx.q(*(arg1 + 4))

if (rax_10 s>= 0)
    if (rax_10 s> 0)
        r8 = zx.q(r8.d - rax_10)
else if (r8.d s< rax_10)
    r8 = zx.q(rax_10)

if (arg2 == 0)
    r9 = ((r8 * 3).d << 2) s/ 0xa

int32_t rcx_2 = *(arg1 + 8)
int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(*(arg1 + 0x10))
*(arg1 + 0x1c) = r9
*(arg1 + 0x14) = rcx_2 - ((temp2 - temp1) s>> 1)
int32_t temp3
int32_t temp4
temp3:temp4 = sx.q(r9 - r8.d)
int32_t result = (temp4 - temp3) s>> 1
*(arg1 + 0x18) = result
return result
