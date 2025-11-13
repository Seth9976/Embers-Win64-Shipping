// 函数: sub_142c0fd70
// 地址: 0x142c0fd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const r9 = &data_14369a5d0
void* rax_1

if (arg2 u< (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7)))
    rax_1 = arg1 + ((zx.q(arg2) + 2) << 2)
else
    rax_1 = &data_14369a5d0

uint32_t r11 = zx.d(*rax_1)
uint64_t rbx = zx.q(*(rax_1 + 3))
uint64_t r8_3 = zx.q(*(rax_1 + 2))
uint64_t rdx = zx.q(*(rax_1 + 1))

if ((r11 << 0x18) + (r8_3.d << 8) + (rdx.d << 0x10) != neg.d(rbx.d))
    r9 = (((((zx.q(r11) << 8) + rdx) << 8) + r8_3) << 8) + arg1 + rbx

return zx.q((zx.d(*(r9 + 4)) << 8) + zx.d(*(r9 + 5)))
