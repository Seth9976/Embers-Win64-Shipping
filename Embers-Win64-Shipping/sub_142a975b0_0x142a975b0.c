// 函数: sub_142a975b0
// 地址: 0x142a975b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x1e8)
int32_t rax = *(r8 + 0x1c)

if (rax != *(r8 + 0x14))
    void* rcx_1 = *(r8 + 8)
    int32_t rax_2 = (rax + 1) & 0x7f
    *(r8 + 0x1c) = rax_2
    *(rcx_1 + 0x1e0) = *(r8 + (sx.q(rax_2) << 2) + 0x20)
    void* rdx_1 = *(r8 + 8)
    *(r8 + 0x18) = *(rdx_1 + 0x1e0)
    *(rdx_1 + 0x1e4) = zx.d(*(r8 + (sx.q(*(r8 + 0x1c)) << 1) + 0x220))
else
    sub_142b0f150(r8, arg2)

if (*(arg1 + 0x278) == 0)
    return zx.q(*(arg1 + 0x1e0))

return 0xffffffff
