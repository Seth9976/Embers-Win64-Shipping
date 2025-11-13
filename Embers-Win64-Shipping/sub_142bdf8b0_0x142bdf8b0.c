// 函数: sub_142bdf8b0
// 地址: 0x142bdf8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x18)
uint32_t r9 = 0
uint32_t rcx_6 =
    ((zx.d(*(r8 + 0xc)) << 8 | zx.d(*(r8 + 0xd))) << 8 | zx.d(*(r8 + 0xe))) << 8 | zx.d(*(r8 + 0xf))

if (arg2 u< rcx_6)
    return 0

int32_t rdx = arg2 - rcx_6

if (rdx u< (((zx.d(*(r8 + 0x10)) << 8 | zx.d(*(r8 + 0x11))) << 8 | zx.d(*(r8 + 0x12))) << 8
        | zx.d(*(r8 + 0x13))))
    uint64_t rax_7 = zx.q(rdx * 2)
    r9 = zx.d(*(r8 + rax_7 + 0x14)) << 8 | zx.d(*(r8 + rax_7 + 0x15))

return zx.q(r9)
