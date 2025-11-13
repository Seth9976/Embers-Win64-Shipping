// 函数: sub_142c1d3c0
// 地址: 0x142c1d3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax_1 = **(*(arg1 + 0x88) + 0xc0)
int128_t* const r8_1 = &data_14369a5d0
int128_t* const rcx = &data_14369a5d0

if (rax_1 != 0)
    rcx = rax_1

if (*(rcx + 0x18) u>= 0xa)
    r8_1 = rcx[1].q

int128_t* rax_2 = sub_142c1f4d0(r8_1, arg2)
int32_t r14 = arg1[0x2f]
int32_t rbp = arg1[0x30]
arg1[0x2f] = arg2
uint32_t r8_4 = (zx.d(*(rax_2 + 2)) << 8) + zx.d(*(rax_2 + 3))

if ((r8_4.b & 0x10) != 0)
    uint64_t rcx_5 = (zx.q(*(rax_2 + 4)) << 8) + zx.q(*(rax_2 + 5))
    r8_4 += ((zx.d(*(rax_2 + (rcx_5 << 1) + 6)) << 8) + zx.d(*(rax_2 + (rcx_5 << 1) + 7))) << 0x10

arg1[0x30] = r8_4
sub_142c208d0(arg1)
char rax_5 = sub_142c16200(rax_2, arg1)
arg1[0x2f] = r14
arg1[0x30] = rbp
sub_142c208d0(arg1)
return zx.q(rax_5)
