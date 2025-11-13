// 函数: sub_141d2cef0
// 地址: 0x141d2cef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x40)
int64_t* rcx = arg1 + 0x40
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = arg1 + 0xa0
*(arg1 + 0x60) = 0xffffffff
*(arg1 + 0x64) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
__builtin_memset(arg1 + 0x80, 0, 0x20)
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = arg1 + 0xf0
*(arg1 + 0xc0) = 0xffffffff
*(arg1 + 0xc4) = 0
*(arg1 + 0xd0) = 0
*(arg1 + 0xd8) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0xe8) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
*(arg1 + 0x110) = 0xffffffff
*(arg1 + 0x114) = 0
*(arg1 + 0x120) = 0
*(arg1 + 0x128) = 0
__builtin_memset(arg1 + 0x130, 0, 0x60)
float zmm1[0x4] = data_143f37410
*(arg1 + 0x1a0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x190) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x1b0) = __andps_xmmxud_memxud(data_143f37410, data_143f37420)
*(arg1 + 0x1c0) = 0
*(arg1 + 0x1c8) = 0
*(arg1 + 0x1d0) = 0
return arg1
