// 函数: sub_142b29ee0
// 地址: 0x142b29ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x190)
int64_t r9 = *(arg1 + 0x188)

if (rcx == r9)
    return 0xffffffff

*(arg1 + 0x190) = rcx - 2
uint32_t r8 = zx.d(*(rcx - 2))

if ((r8 & 0xfffffc00) == 0xdc00 && rcx - 2 != r9)
    uint32_t r9_1 = zx.d(*(rcx - 4))
    
    if ((r9_1 & 0xfffffc00) == 0xd800)
        *(arg1 + 0x190) = rcx - 4
        return zx.q(((r9_1 - 0xd7f7) << 0xa) + r8)

return zx.q(r8)
