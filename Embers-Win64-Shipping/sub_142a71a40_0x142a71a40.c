// 函数: sub_142a71a40
// 地址: 0x142a71a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = sx.q(*(arg1 + 0x10))
int32_t r9 = *(arg1 + 0x14)
*(arg1 + 0xc) = r8_1.d

if (r8_1.d s>= r9)
    return 0xffff

int64_t r10 = *(arg1 + 0x18)
uint32_t rdx = zx.d(*(r10 + (r8_1 << 1)))

if ((rdx & 0xfffffc00) == 0xd800 && r8_1.d + 1 != r9)
    uint32_t rax_2 = zx.d(*(r10 + (sx.q(r8_1.d + 1) << 1)))
    
    if ((rax_2 & 0xfffffc00) == 0xdc00)
        rdx = ((rdx - 0xd7f7) << 0xa) + rax_2

return zx.q(rdx)
