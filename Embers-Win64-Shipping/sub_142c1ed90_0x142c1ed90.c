// 函数: sub_142c1ed90
// 地址: 0x142c1ed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbx = &data_14369a5d0
uint16_t rcx = zx.w(*(arg1 + 4))
uint64_t rdx = zx.q(*(arg1 + 5))
int128_t* const rcx_1

if (0 != rcx * 0x100 + rdx.w)
    rcx_1 = (zx.q(rcx.b) << 8) + arg1 + rdx
else
    rcx_1 = &data_14369a5d0

int32_t rax = sub_142c1e750(rcx_1, arg2)

if (rax == 1)
    return 2

if (rax == 2)
    return 4

if (rax != 3)
    return 0

uint16_t rdx_2 = zx.w(*(arg1 + 0xa))
uint64_t r8_2 = zx.q(*(arg1 + 0xb))

if (0 != rdx_2 * 0x100 + r8_2.w)
    rbx = (zx.q(rdx_2.b) << 8) + arg1 + r8_2

return zx.q(sub_142c1e750(rbx, arg2) << 8) | 8
