// 函数: sub_1420d8e50
// 地址: 0x1420d8e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432c24d8
arg1[9] = 0
arg1[5].d = 0xffffffff
*(arg1 + 0x2c) = 0
__builtin_memset(&arg1[7], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x4c) s<= 0xffffffff)
    sub_1405947f0(&arg1[8], 0)

int16_t* rax = arg1[8]

if (rax != 0)
    *rax = 0

arg1[6].d = 0
__builtin_memset(&arg1[0xa], 0, 0x28)
float zmm1[0x4] = data_143f48200
*(arg1 + 0x90) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x80) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0xa0) = __andps_xmmxud_memxud(data_143f48200, data_143f481e0)
*(arg1 + 0xba) &= 0xbf
arg1[0x1a] = 0
arg1[0x1b] = 0
__builtin_memset(&arg1[0x1d], 0, 0x40)
arg1[0x27] = 0
arg1[0x28] = 0
*(arg1 + 0xbc) = data_14399f5c0
*(arg1 + 0x80) = data_143dbb0c0
*(arg1 + 0x90) = data_143dbb0d0
*(arg1 + 0xa0) = data_143dbb0e0
*(arg1 + 0xbb) |= 4
arg1[0x17].b = 0
arg1[0x1c].d = 0x40000000
arg1[0x16].d = 0xffffffff
return arg1
