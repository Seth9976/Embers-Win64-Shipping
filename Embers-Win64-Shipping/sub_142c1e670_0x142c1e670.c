// 函数: sub_142c1e670
// 地址: 0x142c1e670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg5 = 0

if (arg2 u>= (zx.d(*arg1) << 8) + zx.d(arg1[1]) || arg3 u>= arg4)
    return &data_14369a5d0

int128_t* const r8 = &data_14369a5d0
uint64_t r9 = zx.q(arg2 * arg4 + arg3) * 2
void* rax_1 = &arg1[2 + r9]

if (rax_1 u>= &arg1[2])
    r8 = rax_1

int128_t* const rcx = &data_14369a5d0
uint16_t rax_2
rax_2.b = 0 != zx.w(*r8) * 0x100 + zx.w(*(r8 + 1))
*arg5 = rax_2.b
void* rax_3 = &arg1[2 + r9]

if (rax_3 u>= &arg1[2])
    rcx = rax_3

uint16_t rdx_4 = zx.w(*rcx)
uint64_t r8_1 = zx.q(*(rcx + 1))

if (0 == rdx_4 * 0x100 + r8_1.w)
    return &data_14369a5d0

return &arg1[(zx.q(rdx_4.b) << 8) + r8_1]
