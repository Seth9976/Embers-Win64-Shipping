// 函数: sub_142c1dfd0
// 地址: 0x142c1dfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const r8 = &data_14369a5d0
void* rax_5

if (arg2 u< (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
        + zx.d(*(arg1 + 7)))
    rax_5 = arg1 + ((zx.q(arg2) + 1) << 3)
else
    rax_5 = &data_14369a5d0

uint64_t rdx = zx.q(*(rax_5 + 4))
uint64_t r11 = zx.q(*(rax_5 + 7))
uint64_t r10 = zx.q(*(rax_5 + 6))
uint64_t r9_5 = zx.q(*(rax_5 + 5))

if ((rdx.d << 0x18) + (r10.d << 8) + (r9_5.d << 0x10) != neg.d(r11.d))
    r8 = ((((r9_5 + (rdx << 8)) << 8) + r10) << 8) + arg1 + r11

return sub_142c1df20(r8, arg3) __tailcall
