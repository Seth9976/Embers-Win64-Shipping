// 函数: sub_142a720a0
// 地址: 0x142a720a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = *(arg1 + 0xc)
int32_t rcx = *(arg1 + 0x10)

if (r9_1 s<= rcx)
    return 0xffff

int64_t r10 = *(arg1 + 0x18)
*(arg1 + 0xc) = r9_1 - 1
uint32_t r8 = zx.d(*(r10 + (sx.q(r9_1 - 1) << 1)))

if ((r8 & 0xfffffc00) == 0xdc00 && r9_1 - 1 s> rcx)
    uint32_t rax_4 = zx.d(*(r10 + (sx.q(r9_1 - 2) << 1)))
    
    if ((rax_4 & 0xfffffc00) == 0xd800)
        *(arg1 + 0xc) = r9_1 - 2
        r8 += (rax_4 - 0xd7f7) << 0xa

return zx.q(r8)
