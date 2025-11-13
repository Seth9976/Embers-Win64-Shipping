// 函数: sub_142a71fd0
// 地址: 0x142a71fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9_1 = sx.q(*(arg1 + 0xc))
int32_t rcx = *(arg1 + 0x14)

if (r9_1.d s>= rcx)
    return 0xffff

int64_t r10 = *(arg1 + 0x18)
uint32_t rdx = zx.d(*(r10 + (r9_1 << 1)))
*(arg1 + 0xc) = r9_1.d + 1

if ((rdx & 0xfffffc00) == 0xd800 && r9_1.d + 1 != rcx)
    uint32_t r10_1 = zx.d(*(r10 + (sx.q(r9_1.d + 1) << 1)))
    
    if ((r10_1 & 0xfffffc00) == 0xdc00)
        rdx = ((rdx - 0xd7f7) << 0xa) + r10_1
        *(arg1 + 0xc) = r9_1.d + 2

return zx.q(rdx)
