// 函数: sub_142a71c20
// 地址: 0x142a71c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_6 = *(arg1 + 0x14)
*(arg1 + 0xc) = rax_6
int32_t rcx = *(arg1 + 0x10)

if (rax_6 s<= rcx)
    return 0xffff

int64_t r10 = *(arg1 + 0x18)
*(arg1 + 0xc) = rax_6 - 1
uint32_t r8 = zx.d(*(r10 + (sx.q(rax_6 - 1) << 1)))

if ((r8 & 0xfffffc00) == 0xdc00 && rax_6 - 1 s> rcx)
    uint32_t r10_1 = zx.d(*(r10 + (sx.q(rax_6 - 2) << 1)))
    
    if ((r10_1 & 0xfffffc00) == 0xd800)
        *(arg1 + 0xc) = rax_6 - 2
        r8 += (r10_1 - 0xd7f7) << 0xa

return zx.q(r8)
