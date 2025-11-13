// 函数: sub_142c94120
// 地址: 0x142c94120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143ccb970 s< 2)
    return __sse2_expf4@@16(arg1) __tailcall

float temp0[0x4] = _mm_mul_ps(data_144281100, arg1)
float zmm4[0x4] = data_144281110
float zmm1[0x4] = data_144281120
int32_t temp0_1[0x4] = _mm_cvtps_epi32(temp0)
int32_t zmm2[0x4]

if (_mm_movemask_ps(__pcmpgtd_xmmdq_memdq(data_144281130 & arg1, data_144281140)) == 0)
    float temp0_4[0x4] = _mm_round_ps(temp0, 0)
    int32_t rax_1 = temp0_1[0]
    float temp0_5[0x4] = _mm_mul_ps(zmm4, temp0_4)
    uint32_t temp0_6 = _mm_extract_epi16(temp0_1, 2)
    float temp0_7[0x4] = __mulps_xmmps_memps(temp0_4, data_144281150)
    zmm1 = _mm_add_epi32(zmm1, temp0_1)
    float temp0_9[0x4] = _mm_sub_ps(arg1, temp0_5)
    zmm4 = zx.o(*(&data_144280e00 + ((zx.q(rax_1) & 0x3f) << 3)))
    uint32_t temp0_10 = _mm_extract_epi16(temp0_1, 4)
    zmm4 = zmm4[0].q | *(&data_144280e00 + ((zx.q(temp0_6) & 0x3f) << 3)) << 0x40
    uint32_t temp0_11 = _mm_extract_epi16(temp0_1, 6)
    float temp0_12[0x4] = _mm_sub_ps(temp0_9, temp0_7)
    zmm1 = _mm_srli_epi32(zmm1, 6)
    zmm2 = zx.o(*(&data_144280e00 + ((zx.q(temp0_10) & 0x3f) << 3)))[0].q
        | *(&data_144280e00 + ((zx.q(temp0_11) & 0x3f) << 3)) << 0x40
    float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_15[0x4] = _mm_mul_ps(temp0_12, temp0_12)
    float temp0_16[0x4] = __addps_xmmps_memps(temp0_14, data_144281160)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm2, 0x88)
    zmm1 = _mm_slli_epi32(zmm1, 0x17)
    return _mm_mul_ps(_mm_add_ps(temp0_16, temp0_15), zmm1 | temp0_17)

int32_t zmm5[0x4] = arg1
float temp0_21[0x4] = _mm_round_ps(temp0, 0)
int32_t rcx_3 = temp0_1[0]
float temp0_22[0x4] = _mm_mul_ps(zmm4, temp0_21)
uint32_t temp0_23 = _mm_extract_epi16(temp0_1, 2)
float temp0_24[0x4] = __mulps_xmmps_memps(temp0_21, data_144281150)
zmm1 = _mm_add_epi32(zmm1, temp0_1)
float temp0_26[0x4] = _mm_sub_ps(arg1, temp0_22)
zmm4 = zx.o(*(&data_144280e00 + ((zx.q(rcx_3) & 0x3f) << 3)))
uint32_t temp0_27 = _mm_extract_epi16(temp0_1, 4)
zmm4 = zmm4[0].q | *(&data_144280e00 + ((zx.q(temp0_23) & 0x3f) << 3)) << 0x40
uint32_t temp0_28 = _mm_extract_epi16(temp0_1, 6)
float temp0_29[0x4] = _mm_sub_ps(temp0_26, temp0_24)
zmm1 = _mm_srli_epi32(zmm1, 6)
float temp0_31[0x4] = _mm_shuffle_ps(zmm4, 
    zx.o(*(&data_144280e00 + ((zx.q(temp0_27) & 0x3f) << 3)))[0].q
        | *(&data_144280e00 + ((zx.q(temp0_28) & 0x3f) << 3)) << 0x40, 
    0x88)
float temp0_32[0x4] = _mm_add_ps(temp0_29, temp0_29)
float temp0_33[0x4] = _mm_mul_ps(temp0_29, temp0_29)
float temp0_34[0x4] = __addps_xmmps_memps(temp0_32, data_144281160)
zmm1 = _mm_slli_epi32(zmm1, 0x17)
float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_33)
float temp0_37[0x4] = _mm_mul_ps(zmm1 | temp0_31, temp0_36)
float temp0_38[0x4] = __cmpps_xmmps_memps_immb(data_144281130 & zmm5, data_144281140, 1)
float zmm3[0x4] =
    temp0_38 & not.o(__cmpps_xmmps_memps_immb(data_144281130 & zmm5, data_144281170, 1))
uint32_t temp0_40 = _mm_movemask_ps(zmm5)
uint64_t rdx_6 = zx.q(temp0_40) & 0xc
uint64_t rax_6 = zx.q((3 & temp0_40) * 2)
float temp0_48[0x4] = _mm_mul_ps(temp0_36 & zmm3, 
    _mm_slli_epi32(
        _mm_add_epi32(
            _mm_srli_epi32(
                __paddd_xmmdq_memdq(
                    __subps_xmmps_memps(_mm_mul_ps(data_144281100, zmm5), data_144281180) & zmm3, 
                    data_144281120), 
                6), 
            __shufps_xmmps_memps_immb(*((rax_6 << 3) + 0x144281040), *((rdx_6 << 2) + 0x144281040), 
            0x88)), 
        0x17) | (temp0_31 & zmm3))
arg1 = _mm_mul_ps(temp0_48, 
    __shufps_xmmps_memps_immb(*((rax_6 << 3) + 0x144281000), *((rdx_6 << 2) + 0x144281000), 0x88))
    | (temp0_37 & temp0_38)
float temp0_51[0x4] = __cmpps_xmmps_memps_immb(data_144281130 & zmm5, data_144281190, 1)
zmm2 = __cmpps_xmmps_memps_immb(data_144281130 & zmm5, data_144281170, 1) & not.o(temp0_51)
zmm1 = (
    __shufps_xmmps_memps_immb(*((rax_6 << 3) + 0x144281080), *((rdx_6 << 2) + 0x144281080), 0x88)
    & zmm2) | (__cmpps_xmmps_memps_immb(data_144281130 & zmm5, data_144281190, 0) &
    __shufps_xmmps_memps_immb(*((rax_6 << 3) + 0x1442810c0), *((rdx_6 << 2) + 0x1442810c0), 0x88))
    | (zmm5 & _mm_cmpeq_ps(data_1442811a0, zmm5, 3))
return arg1 | _mm_mul_ps(zmm1, zmm1)
