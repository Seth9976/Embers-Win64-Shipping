// 函数: sub_141dd7840
// 地址: 0x141dd7840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
int32_t i_3 = 0
int128_t zmm7 = arg2[3]
int128_t zmm9 = arg2[4]
uint32_t zmm10[0x4] = arg2[5]
int128_t zmm11
zmm11.d = zmm7.d f+ *arg2
zmm7.d = zmm7.d f- *arg2
int128_t zmm12
zmm12.d = zmm9.d f+ arg2[1]
zmm9.d = zmm9.d f- arg2[1]
zmm10[0] = zmm10[0] f+ arg2[2]
zmm10[0] = zmm10[0] f- arg2[2]
int32_t rdx = 0
zmm11.d = zmm11.d f* 0.5f
int32_t i = 0
void* var_c8 = nullptr
zmm12.d = zmm12.d f* 0.5f
int32_t var_bc = 0
zmm10[0] = zmm10[0] f* 0.5f
zmm7.d = zmm7.d f* 0.5f
zmm9.d = zmm9.d f* 0.5f
zmm10[0] = zmm10[0] f* 0.5f

do
    float zmm5[0x4] = *arg3
    float zmm0[0x4] = zx.o(0)
    float zmm3[0x4] = zx.o(0)
    int64_t i_4 = sx.q(i_3)
    float zmm2[0x4] = zx.o(0)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    int32_t rax_1 = -1
    
    if ((i.b & 4) != 0)
        rax_1 = 1
    
    i_3 = (i_4 + 1).d
    zmm3[0] = float.s(rax_1)
    int32_t rax_2 = -1
    
    if ((i.b & 2) != 0)
        rax_2 = 1
    
    zmm2[0] = float.s(rax_2)
    zmm3[0] = zmm3[0] f* zmm7.d
    zmm2[0] = zmm2[0] f* zmm9.d
    zmm3[0] = zmm3[0] f+ zmm11.d
    zmm0[0] = float.s((((zx.q(i) & 1) << 1) + -ffffffffffffffff).d)
    zmm2[0] = zmm2[0] f+ zmm12.d
    zmm0[0] = zmm0[0] f* zmm10[0]
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
    zmm0[0] = zmm0[0] f+ zmm10[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_7[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_2[0].q), arg3[2])
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_3)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_1), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_4, temp0_13)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
    float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_1)
    float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_3)
    float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_7)
    float temp0_22[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_17, temp0_18), temp0_19), arg3[1])
    float var_e8_1 = temp0_22[0]
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
    float var_e0_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    float var_e4_1 = temp0_23[0]
    
    if (i_3 s> rdx)
        sub_140638a00(&var_c8)
        rdx = var_bc
        rdi = var_c8
    
    int64_t rcx_1 = i_4 * 3
    i += 1
    *(rdi + (rcx_1 << 2)) = var_e8_1.q
    *(rdi + (rcx_1 << 2) + 8) = var_e0_1
while (i s< 8)

var_c8.o = *arg3
int32_t var_d8
sub_140adf5d0(&var_c8, &var_d8)
uint32_t zmm0_2[0x4]
float zmm6[0x4]
uint32_t zmm7_1[0x4]
zmm0_2, zmm6, zmm7_1 = sub_140a454f0(_mm_and_ps(var_d8, 0x7fffffff), 0x42b40000)
int32_t var_d4
uint32_t zmm0_3[0x4]
float zmm6_1[0x4]
uint32_t zmm7_2[0x4]
int512_t zmm9_1
zmm0_3, zmm6_1, zmm7_2, zmm9_1 = sub_140a454f0(_mm_and_ps(var_d4, zmm7_1), zmm6)
zmm9_1.o = zmm0_3
int32_t var_d0
float zmm0_4[0x4]
int512_t zmm6_2
int32_t zmm8
int32_t zmm9_2
zmm0_4, zmm6_2, zmm8, zmm9_2 = sub_140a454f0(_mm_and_ps(var_d0, zmm7_2), zmm6_1)
uint32_t result

if ((zmm0_2[0] f< 1f || not(zmm0_2[0] f<= 89f)) && (zmm9_2 f< 1f || not(zmm9_2 f<= 89f))
        && (zmm0_4[0] < 1f || zmm0_4[0] > 89f))
    zmm0_4 = zx.o(data_143dbb1f8.q)
    int32_t rax_7 = data_143dbb200
    int64_t zmm1_4 = zmm0_4[0].q
    var_bc.q = zmm0_4.q
    int32_t var_c0_2 = rax_7
    int32_t var_b4_1 = rax_7
    zmm0_4 = var_c8.o
    zmm0_4[0].q = zmm1_4
    *(arg1 + 0x1c) = zmm0_4
    int64_t var_b8
    *(arg1 + 0x2c) = var_b8
    *(arg1 + 0x34) = 0.d
    
    if (i_3 s> 0)
        float (* rcx_4)[0x4] = rdi + 8
        uint64_t i_2 = zx.q(i_3)
        uint64_t i_1
        
        do
            if (*(arg1 + 0x34) == 0)
                *(arg1 + 0x28) = *(rcx_4 - 8)
                float rax_9 = *rcx_4
                *(arg1 + 0x30) = rax_9
                *(arg1 + 0x1c) = *(arg1 + 0x28)
                *(arg1 + 0x24) = rax_9
                *(arg1 + 0x34) = 1
            else
                float temp0_28[0x4] = __minss_xmmss_memss((*rcx_4)[-2][0], *(arg1 + 0x1c))
                zmm1_4 = *(arg1 + 0x24)
                *(arg1 + 0x1c) = temp0_28[0]
                *(arg1 + 0x20) = __minss_xmmss_memss((*(arg1 + 0x20))[0], (*rcx_4)[-1])[0]
                *(arg1 + 0x24) = __minss_xmmss_memss(zmm1_4.d, *rcx_4).d
                float temp0_31[0x4] = __maxss_xmmss_memss((*rcx_4)[-2][0], *(arg1 + 0x28))
                zmm1_4 = *(arg1 + 0x2c)
                *(arg1 + 0x28) = temp0_31[0]
                int64_t temp0_32 = __maxss_xmmss_memss(zmm1_4.d, (*rcx_4)[-1])
                zmm0_4 = *(arg1 + 0x30)
                *(arg1 + 0x2c) = temp0_32.d
                *(arg1 + 0x30) = __maxss_xmmss_memss(zmm0_4[0], *rcx_4)[0]
            
            rcx_4 = &(*rcx_4)[3]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int32_t rax_10 = *(arg1 + 0x40)
    
    if (rax_10 s< 2)
        bool cond:4_1 = *(arg1 + 0x44) s>= 2
        *(arg1 + 0x40) = 2
        
        if (not(cond:4_1))
            sub_140638a00(arg1 + 0x38)
    else if (rax_10 s> 2 && rax_10 != 2)
        *(arg1 + 0x40) = 0 + 2
        sub_140775970(arg1 + 0x38)
    
    float zmm2_1[0x4] = *(arg1 + 0x28)
    zmm2_1[0] = zmm2_1[0] f+ *(arg1 + 0x1c)
    zmm0_4 = *(arg1 + 0x30)
    zmm0_4[0] = zmm0_4[0] f+ *(arg1 + 0x24)
    zmm1_4.d = (*(arg1 + 0x2c)).d f+ *(arg1 + 0x20)
    int64_t* rcx_8 = *(arg1 + 0x38)
    zmm2_1[0] = zmm2_1[0] f* zmm8
    zmm0_4[0] = zmm0_4[0] f* zmm8
    zmm1_4.d = zmm1_4.d f* zmm8
    float var_e0_2 = zmm0_4[0]
    *rcx_8 = (_mm_unpacklo_ps(zmm2_1, zmm1_4)).q
    rcx_8[1].d = var_e0_2
    zmm0_4 = *(arg1 + 0x30)
    zmm0_4[0] = zmm0_4[0] f- *(arg1 + 0x24)
    zmm2_1 = *(arg1 + 0x28)
    zmm2_1[0] = zmm2_1[0] f- *(arg1 + 0x1c)
    zmm1_4.d = (*(arg1 + 0x2c)).d f- *(arg1 + 0x20)
    void* rdx_5 = *(arg1 + 0x38)
    zmm0_4[0] = zmm0_4[0] f* zmm8
    zmm2_1[0] = zmm2_1[0] f* zmm8
    result = zmm0_4[0]
    zmm1_4.d = zmm1_4.d f* zmm8
    *(rdx_5 + 0xc) = (_mm_unpacklo_ps(zmm2_1, zmm1_4)).q
    *(rdx_5 + 0x14) = result
    *(arg1 + 0x48) = 2
else
    result, zmm6_2 = sub_141dd7d10(arg1, rdi, 0, i_3, 0, &data_143dbb0c0)

if (rdi != 0)
    result = sub_140a74f90(rdi)

zmm6_2.o = arg4
return result
