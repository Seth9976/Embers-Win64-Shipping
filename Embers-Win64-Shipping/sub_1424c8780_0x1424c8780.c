// 函数: sub_1424c8780
// 地址: 0x1424c8780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eb5270(arg1)
int64_t* rdx = &arg1[0xd]
int64_t* rcx = &arg1[0x22]
*arg1 = &data_14309b408
arg1[0xb] = 0
arg1[0xc] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
*arg1 = &data_1433a9888
float zmm1[0x4] = data_143f64e10
*(arg1 + 0xc0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0xb0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0xd0) = __andps_xmmxud_memxud(data_143f64e10, data_143f64e20)
__builtin_memset(&arg1[0x1c], 0, 0x30)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
return arg1
