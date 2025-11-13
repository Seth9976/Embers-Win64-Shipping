// 函数: sub_142181f00
// 地址: 0x142181f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_1432e6080
arg1[5] = &data_1432e6a40
arg1[0x3e] = &data_1432e6a70
__builtin_memset(&arg1[0x82], 0, 0x20)
__builtin_memset(&arg1[0x88], 0, 0x50)
__builtin_memset(&arg1[0x9a], 0, 0x20)
__builtin_memset(&arg1[0xa0], 0, 0x50)
arg1[0xaa].d = 0xffffffff
*(arg1 + 0x554) = 0
*(arg1 + 0x55c) = 0
__builtin_memset(&arg1[0xb1], 0, 0x48)
__builtin_memset(&arg1[0xbf], 0, 0x20)
float zmm1[0x4] = data_143f4d4a0
*(arg1 + 0x630) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x620) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x640) = __andps_xmmxud_memxud(data_143f4d4a0, data_143f4d4b0)
arg1[0xca] = 0
char rax = *(arg1 + 0x3a)
*(arg1 + 0x89) |= 0x88
*(arg1 + 0x431) &= 0xfe
*(arg1 + 0x3a) = (rax & 0xf7) | 2
arg1[7].b = 2
arg1[0x98].d = 0x40a00000
arg1[0x92].b = 0
*(arg1 + 0x494) = data_143dbb1f8.q
*(arg1 + 0x49c) = data_143dbb200
int64_t rax_2

if (data_143dbb3b4 == 0)
    int32_t arg_8 = 0
    rax_2 = 0
    int64_t arg_18 = 0
else
    rax_2 = arg1[3]

int64_t arg_20 = rax_2
int32_t rcx
rcx.b = sub_140b5b8a0(rax_2.d, 0) == 0

if ((arg_20:4.d != 0 | rcx.b) == 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    arg1[0xc2].d = performanceCount.d
else
    int64_t var_18
    int64_t* rax_4 = sub_140b63b70(&arg_20, &var_18)
    int32_t rdx_1 = rax_4[1].d
    int16_t* r8_1
    
    if (rdx_1 == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_4
    
    int32_t rcx_2 = rdx_1 - 1
    
    if (rdx_1 == 0)
        rcx_2 = 0
    
    int32_t rax_5 = sub_1405969c0(rcx_2, r8_1)
    int64_t rcx_3 = var_18
    arg1[0xc2].d = rax_5
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

*(arg1 + 0x614) = arg1[0xc2].d
arg1[0x94] = data_143dbb1f8.q
int32_t rax_8 = data_143dbb200
*(arg1 + 0x432) &= 0xf7
*(arg1 + 0x432) |= 0x40
*(arg1 + 0x433) &= 0xfe
*(arg1 + 0x89) |= 0x20
arg1[0x86].b &= 0xdf
arg1[0x95].d = rax_8
*(arg1 + 0x4ac) = 0
arg1[0x97].d = 0x3f800000
arg1[0x9f].d = 0x3f800000
*(arg1 + 0x434) = 0
*(arg1 + 0x43c) = 0
sub_1422ac390(arg1, data_143f3a590, 1)
sub_141f256b0(arg1, 0)
*(arg1 + 0x20c) |= 1
*(arg1 + 0x20a) &= 0xf7
*(arg1 + 0x14d) &= 0xbf
*(arg1 + 0x431) &= 0x7f
*(arg1 + 0x432) &= 0xfe
*(arg1 + 0x20d) |= 2
*(arg1 + 0x57c) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
int32_t var_20 = 0x3f800000
*(arg1 + 0x584) = 0x3f800000
*(arg1 + 0x664) = 0
*(arg1 + 0x43e) = 0
arg1[0x99].d = 0
arg1[0x87].d = 0x3fffffff
return arg1
