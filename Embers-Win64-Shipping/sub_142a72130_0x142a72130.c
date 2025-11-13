// 函数: sub_142a72130
// 地址: 0x142a72130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2
int32_t rdx = *(arg1 + 0x10)

if (r8 s< rdx)
    r8 = rdx
else if (r8 s> *(arg1 + 0x14))
    r8 = *(arg1 + 0x14)

int32_t r10 = *(arg1 + 0x14)

if (r8 s>= r10)
    *(arg1 + 0xc) = r8
    return 0xffff

int64_t r11 = *(arg1 + 0x18)

if ((zx.d(*(r11 + (sx.q(r8) << 1))) & 0xfffffc00) == 0xdc00 && r8 s> rdx
        && (zx.d(*(r11 + (sx.q(r8 - 1) << 1))) & 0xfffffc00) == 0xd800)
    r8 -= 1

*(arg1 + 0xc) = r8
uint32_t rdx_2 = zx.d(*(r11 + (sx.q(r8) << 1)))

if ((rdx_2 & 0xfffffc00) == 0xd800 && r8 + 1 != r10)
    uint32_t rax_5 = zx.d(*(r11 + (sx.q(r8 + 1) << 1)))
    
    if ((rax_5 & 0xfffffc00) == 0xdc00)
        rdx_2 = ((rdx_2 - 0xd7f7) << 0xa) + rax_5

return zx.q(rdx_2)
