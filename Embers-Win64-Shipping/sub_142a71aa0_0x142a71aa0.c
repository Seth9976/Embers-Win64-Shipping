// 函数: sub_142a71aa0
// 地址: 0x142a71aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x10))
int32_t r10 = *(arg1 + 0x14)
*(arg1 + 0xc) = rcx.d

if (rcx.d s>= r10)
    return 0xffff

int64_t r11 = *(arg1 + 0x18)
int32_t r9 = (rcx + 1).d
uint32_t rdx = zx.d(*(r11 + (rcx << 1)))
*(arg1 + 0xc) = r9

if ((rdx & 0xfffffc00) == 0xd800 && r9 != r10)
    uint32_t r10_1 = zx.d(*(r11 + (sx.q(r9) << 1)))
    
    if ((r10_1 & 0xfffffc00) == 0xdc00)
        rdx = ((rdx - 0xd7f7) << 0xa) + r10_1
        *(arg1 + 0xc) = r9 + 1

return zx.q(rdx)
