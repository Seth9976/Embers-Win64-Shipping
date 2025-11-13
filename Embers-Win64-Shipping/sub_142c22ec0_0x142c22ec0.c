// 函数: sub_142c22ec0
// 地址: 0x142c22ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x90)
int16_t rdi_4 =
    (((*(*(r10 + 0x70) + zx.q(*(r10 + 0x5c)) * 0x14 + 0xc) & 0x60) | 0x10) & 0xffbf) | 0x20

if (*(arg1 + 0xcc) != 0)
    *(*(r10 + 0x70) + zx.q(*(r10 + 0x5c)) * 0x14 + 0xc) =
        sub_142c1ed90(*(arg1 + 0xa0), arg2) | rdi_4
else if (arg3 != 0)
    arg3.w |= rdi_4
    *(*(r10 + 0x70) + zx.q(*(r10 + 0x5c)) * 0x14 + 0xc) = arg3.w

return sub_142c22d20(*(arg1 + 0x90), arg2) __tailcall
