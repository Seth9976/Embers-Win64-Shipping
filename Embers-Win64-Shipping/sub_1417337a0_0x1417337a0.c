// 函数: sub_1417337a0
// 地址: 0x1417337a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x60)
int32_t r10_1

if (arg2.d s< r10)
    r10_1 = arg2.d
    
    if (arg2.d s< 0)
        r10_1 = 0
else
    r10_1 = r10 - 1

int32_t rax = *(arg1 + 0x64)
int32_t rcx = arg2:4.d
int32_t rax_1

if (rcx s< rax)
    rax_1 = rcx
    
    if (rcx s< 0)
        rax_1 = 0
else
    rax_1 = rax - 1

if (arg2.d != r10_1 || rcx != rax_1)
    rax_1.b = 0
    return rax_1

int32_t rbp_2 = zx.d(*(arg1 + 0x46)) * rcx + arg2.d
TEB* gsbase

if (data_143ef76c8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef76c8)
    
    if (data_143ef76c8 == 0xffffffff)
        atexit(sub_142ce9be0)
        _Init_thread_footer(&data_143ef76c8)

int64_t r9 = *(arg1 + 0x10)
float zmm1[0x4] = *(arg1 + 0x4c)
uint32_t r8 = zx.d(*(arg1 + 0x46))
float zmm2[0x4] = *(arg1 + 0x3c)
int64_t r10_2 = sx.q(rbp_2)
int64_t rdx = sx.q(r8 + rbp_2)
uint32_t rcx_4 = zx.d(*(r9 + (rdx << 1)))
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp_2)
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(*(r9 + (r10_2 << 1) + 2))).d f* zmm1[0]
uint128_t zmm8 = zx.o(*(r9 + (rdx << 1) + 2))
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rcx_4))
zmm6.d = zmm6.d f+ zmm2[0]
uint32_t rax_8 = zx.d(*(r9 + (r10_2 << 1)))
zmm7.d = zmm7.d f* zmm1[0]
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(divs.dp.d(temp2:temp3, r8)))
zmm7.d = zmm7.d f+ zmm2[0]
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_8))
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm0.d = zmm0.d f* zmm1[0]
zmm8.d = zmm8.d f* zmm1[0]
zmm0.d = zmm0.d f+ zmm2[0]
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp2:temp3, r8)))
int32_t var_44 = zmm0.d
zmm8.d = zmm8.d f+ zmm2[0]
zmm2 = zmm3
zmm2[0] = zmm2[0] + 1f
data_143ef76a0 = var_44
float temp0_7[0x4] = _mm_unpacklo_ps(zmm3, zmm4.q)
data_143ef7698 = temp0_7.q
data_143ef76ac = zmm6.d
zmm0 = _mm_unpacklo_ps(zmm2, zmm4.q)
zmm4.d = zmm4.d f+ 1f
data_143ef76a4 = zmm0.q
data_143ef76b8 = zmm7.d
data_143ef76b0 = (_mm_unpacklo_ps(zmm3, zmm4.q)).q
data_143ef76bc = (_mm_unpacklo_ps(zmm2, zmm4.q)).q
data_143ef76c4 = zmm8.d
*arg4 = temp0_7.q
arg4[2] = var_44
*arg3 = temp0_7.q
arg3[2] = var_44
float temp0_11[0x4] = __minss_xmmss_memss((*arg3)[0], data_143ef76a4.d)
float temp0_12[0x4] = __minss_xmmss_memss(arg3[1][0], data_143ef76a4:4.d)
zmm0 = __minss_xmmss_memss(arg3[2].d, data_143ef76ac)
*arg3 = (_mm_unpacklo_ps(temp0_11, temp0_12[0].q)).q
arg3[2] = zmm0.d
zmm2 = data_143ef76a4:4.d
float temp0_15[0x4] = __maxss_xmmss_memss((*arg4)[0], data_143ef76a4.d)
float temp0_16[0x4] = __maxss_xmmss_memss(zmm2[0], arg4[1])
zmm0 = __maxss_xmmss_memss(arg4[2].d, data_143ef76ac)
*arg4 = (_mm_unpacklo_ps(temp0_15, temp0_16[0].q)).q
arg4[2] = zmm0.d
float temp0_19[0x4] = __minss_xmmss_memss((*arg3)[0], data_143ef76b0.d)
float temp0_20[0x4] = __minss_xmmss_memss(arg3[1][0], data_143ef76b0:4.d)
zmm0 = __minss_xmmss_memss(arg3[2].d, data_143ef76b8)
*arg3 = (_mm_unpacklo_ps(temp0_19, temp0_20[0].q)).q
arg3[2] = zmm0.d
float temp0_23[0x4] = __maxss_xmmss_memss((*arg4)[0], data_143ef76b0.d)
float temp0_24[0x4] = __maxss_xmmss_memss(data_143ef76b0:4.d[0], arg4[1])
zmm0 = __maxss_xmmss_memss(arg4[2].d, data_143ef76b8)
*arg4 = (_mm_unpacklo_ps(temp0_23, temp0_24[0].q)).q
arg4[2] = zmm0.d
float temp0_27[0x4] = __minss_xmmss_memss((*arg3)[0], data_143ef76bc.d)
float temp0_28[0x4] = __minss_xmmss_memss(arg3[1][0], data_143ef76bc:4.d)
zmm0 = __minss_xmmss_memss(arg3[2].d, data_143ef76c4)
*arg3 = (_mm_unpacklo_ps(temp0_27, temp0_28[0].q)).q
arg3[2] = zmm0.d
float temp0_31[0x4] = __maxss_xmmss_memss((*arg4)[0], data_143ef76bc.d)
zmm0 = __maxss_xmmss_memss(data_143ef76c4.d, arg4[2])
*arg4 = (_mm_unpacklo_ps(temp0_31, __maxss_xmmss_memss(data_143ef76bc:4.d[0], arg4[1])[0].q)).q
arg4[2] = zmm0.d
zmm1 = arg3[2]
zmm0.d = (*arg3).d f- *arg5
*arg3 = zmm0.d
zmm0.d = arg3[1].d f- arg5[1]
arg3[1] = zmm0.d
zmm1[0] = zmm1[0] f- arg5[2]
arg3[2] = zmm1[0]
zmm0.d = (*arg4).d f+ *arg5
*arg4 = zmm0.d
zmm1 = arg5[1]
zmm0 = arg4[2]
zmm1[0] = zmm1[0] f+ arg4[1]
arg4[1] = zmm1[0]
zmm0.d = zmm0.d f+ arg5[2]
int32_t* rax_18
rax_18.b = 1
arg4[2] = zmm0.d
return rax_18
