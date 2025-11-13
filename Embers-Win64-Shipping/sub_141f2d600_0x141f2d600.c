// 函数: sub_141f2d600
// 地址: 0x141f2d600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xbc) = 0x3f800000
arg1[2] = 0
arg1[0x16] = 0
arg1[0x17].d = 0
arg1[1].d = 0xffffffff
*(arg1 + 0x4c) = 0xffffffff
arg1[8] = arg2[0x42]
arg1[9].d = arg2[0x43].d
void* rax_1 = sub_1425a1f70()
void* rdx = arg2[2]
int64_t rax_2 = sx.q(*(rax_1 + 0x38))
int64_t* rbp_1

if (rax_2.d s<= *(rdx + 0x38))
    rbp_1 = arg2

if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbp_1 = nullptr

void* rax_4 = sub_142484ab0()
void* rdx_1 = arg2[2]
int64_t rax_5 = sx.q(*(rax_4 + 0x38))
int64_t* rsi_1

if (rax_5.d s<= *(rdx_1 + 0x38))
    rsi_1 = arg2

if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
    rsi_1 = nullptr

void* rax_7 = sub_142564970()
void* rdx_2 = arg2[2]
int64_t rax_8 = sx.q(*(rax_7 + 0x38))
int64_t* rcx_3

if (rax_8.d s<= *(rdx_2 + 0x38))
    rcx_3 = arg2

if (rax_8.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
    rcx_3 = nullptr

*(arg1 + 0x24) = 3
*(arg1 + 0x9c) = 0

if (rbp_1 != 0)
    *(arg1 + 0x24) = 0
else if (rsi_1 == 0)
    int32_t rax_11 = *(arg1 + 0x24)
    
    if (rcx_3 != 0)
        rax_11 = 2
    
    *(arg1 + 0x24) = rax_11
else
    *(arg1 + 0x24) = 1
    *(arg1 + 0x9c) = rsi_1[0x4d].d

*arg1 = arg2
arg1[3] = arg2[0x48]
int32_t* rax_13 = sub_141f3c970(arg2)
float zmm0_1[0x4]

if (rax_13 == 0)
    zmm0_1 = 0x3f800000
else
    zmm0_1 = rax_13[1]

arg1[4].d = zmm0_1[0]
float zmm1[0x4] = *(arg2 + 0x1c0)
float temp0[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_3[0x4] = _mm_mul_ps(zmm1, temp0)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0, temp0, 0x29), temp0_1)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0, temp0, 0x12), temp0_2)
zmm1 = *(arg2 + 0x1e0)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
float temp0_9[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_3, temp0_3, 1))
float zmm4[0x4] = data_143f3b4b0
float temp0_12[0x4] = _mm_add_ps(temp0_7, temp0_5)
float temp0_13[0x4] = _mm_sub_ps(temp0_5, temp0_7)
float temp0_14[0x4] = _mm_sub_ps(zmm4, temp0_11)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm1)
float temp0_16[0x4] = _mm_mul_ps(temp0_9, temp0_13)
float zmm3[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_14, zmm1), data_143f3b4c0)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x32)
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm3, 0), temp0_19, 0x82)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_15, zmm3, 0x31)
float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0x10), temp0_22, 0x88)
zmm0_1 = *(arg2 + 0x1d0)
zmm4[0].q = zmm0_1 u>> 0x40
float temp0_25[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
float temp0_26[0x4] = _mm_shuffle_ps(zmm0_1, zmm4, 0xc4)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, zmm3, 0xe8)
float var_28[0x4] = temp0_26
float var_58[0x4] = temp0_21
float var_48[0x4] = temp0_24
float var_38[0x4] = temp0_27
int32_t zmm0_2 = sub_141f49500(arg1, &var_58)
(*(*arg2 + 0x528))(arg2)
int64_t* rcx_7 = *arg1
*(arg1 + 0x34) = zmm0_2
arg1[7].d = *(arg2 + 0x20c)
int64_t var_68
int64_t* rax_16 = sub_140d21e10(rcx_7, &var_68, 0)
int32_t r8_3 = rax_16[1].d
int16_t* rdx_5

if (r8_3 == 0)
    rdx_5 = &data_142d40450
else
    rdx_5 = *rax_16

int32_t rcx_8 = r8_3 - 1

if (r8_3 == 0)
    rcx_8 = 0

int32_t rax_17 = sub_1405969c0(rcx_8, rdx_5)
int64_t rcx_9 = var_68
*(arg1 + 0x3c) = rax_17

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

rax_17.b = rax_13 == 0
arg1[0x18].b = rax_17.b
return arg1
