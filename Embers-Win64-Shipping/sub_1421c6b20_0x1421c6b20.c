// 函数: sub_1421c6b20
// 地址: 0x1421c6b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = 0
void* rbx_1 = zx.q(arg3) + arg5
float var_68[0x4]
int64_t* rax
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
uint128_t zmm9_1
rax, zmm6, zmm7, zmm8, zmm9_1 =
    sub_141fe56b0(arg1 + 0x38, &var_68, *(arg2 + 0x12c), arg4, (*(arg2 + 0x18)).d, nullptr)
*rbx_1 = *rax
*(rbx_1 + 8) = rax[1].d
uint128_t zmm0
uint128_t zmm2_1

if ((*(arg1 + 0x80) & 1) != 0)
    void* rax_2 = *(arg2 + 0x18)
    
    if (rax_2 != 0)
        zmm2_1 = *(rax_2 + 0x1e0)
        zmm0.d = zmm2_1.d f* *rbx_1
        float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
        temp0_1[0] = temp0_1[0] f* *(rbx_1 + 4)
        zmm2_1.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d f* *(rbx_1 + 8)
        *rbx_1 = zmm0.d
        *(rbx_1 + 4) = temp0_1[0]
        *(rbx_1 + 8) = zmm2_1.d

void* rcx_1 = *(arg2 + 0x28)
uint64_t result

if ((*(arg1 + 0x30) & 1) == 0 || (*(*(rcx_1 + 0x30) + 0x59) & 1) == 0)
    result = *(rcx_1 + 0x30)
    float zmm3_1[0x4]
    
    if ((*(result + 0x59) & 1) != 0)
        zmm2_1 = *(rbx_1 + 4)
        zmm3_1 = *(rbx_1 + 8)
        int32_t var_5c_1 = 0
        float zmm4_1[0x4] = var_68
        zmm4_1[0] = (*rbx_1)[0]
        int64_t var_58_1 = 0
        float temp0_39[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
        temp0_39[0] = zmm2_1.d
        int32_t var_50_1 = 0
        float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc6)
        temp0_40[0] = zmm3_1[0]
        float temp0_41[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xc9)
        var_68 = temp0_41
        zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_41, temp0_41, 0xff), *(arg2 + 0x90))
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_41, temp0_41, 0xaa), *(arg2 + 0x80))
        float temp0_47[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_41, temp0_41, 0x55), *(arg2 + 0x70))
        zmm2_1 = _mm_add_ps(_mm_add_ps(zmm2_1, zmm0), 
            _mm_add_ps(temp0_47, 
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_41, temp0_41, 0), *(arg2 + 0x60))))
        var_68[2] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
        result = zx.q(var_68[2])
        *rbx_1 = (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
        *(rbx_1 + 8) = result.d
    
    float zmm1[0x4] = *(rbx_1 + 4)
    zmm0.d = zmm9_1.d f* *rbx_1
    zmm2_1 = *(rbx_1 + 8)
    zmm1[0] = zmm1[0] f* zmm9_1.d
    zmm0.d = zmm0.d f+ *(arg5 + 0x30)
    zmm2_1.d = zmm2_1.d f* zmm9_1.d
    zmm1[0] = zmm1[0] f+ *(arg5 + 0x34)
    zmm2_1.d = zmm2_1.d f+ *(arg5 + 0x38)
    *(arg5 + 0x30) = zmm0.d
    *(arg5 + 0x34) = zmm1[0]
    *(arg5 + 0x38) = zmm2_1.d
    zmm1 = *(rbx_1 + 4)
    zmm3_1 = *(rbx_1 + 8)
    zmm0.d = zmm9_1.d f* *rbx_1
    zmm1[0] = zmm1[0] f* zmm9_1.d
    zmm0.d = zmm0.d f+ *(arg5 + 0x20)
    zmm3_1[0] = zmm3_1[0] f* zmm9_1.d
    zmm1[0] = zmm1[0] f+ *(arg5 + 0x24)
    zmm3_1[0] = zmm3_1[0] f+ *(arg5 + 0x28)
    *(arg5 + 0x20) = zmm0.d
    *(arg5 + 0x24) = zmm1[0]
    *(arg5 + 0x28) = zmm3_1[0]
else
    result = *(arg2 + 0x18)
    zmm0 = *(rbx_1 + 8)
    zmm2_1 = _mm_unpacklo_ps(*(rbx_1 + 4), 0)
    uint32_t zmm5_1[0x4] = *(result + 0x1e0)
    float var_18_1[0x4] = zmm6
    float var_28_1[0x4] = zmm7
    float temp0_4[0x4] = __mulps_xmmps_memps(*(result + 0x1c0), data_143f4eb20)
    float temp0_5[0x4] = _mm_rcp_ps(zmm5_1)
    float var_38_1[0x4] = zmm8
    float temp0_7[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*rbx_1, zmm0.q), zmm2_1.q)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
    zmm0 = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
    zmm0 = _mm_mul_ps(zmm0, temp0_10)
    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_8)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
    zmm2_1 = _mm_sub_ps(zmm2_1, zmm0)
    zmm0 = _mm_mul_ps(temp0_5, temp0_5)
    float temp0_17[0x4] = _mm_add_ps(temp0_5, temp0_5)
    zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
    zmm0 = _mm_mul_ps(zmm0, zmm5_1)
    float temp0_20[0x4] = _mm_mul_ps(temp0_14, zmm2_1)
    float temp0_21[0x4] = _mm_sub_ps(temp0_17, zmm0)
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2), temp0_8)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_7)
    zmm0 = _mm_mul_ps(temp0_21, temp0_21)
    float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
    zmm0 = _mm_mul_ps(zmm0, zmm5_1)
    zmm5_1 =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5_1, data_143f4dee0), data_143f4eb10, 2)
    float temp0_30[0x4] = _mm_sub_ps(temp0_26, zmm0)
    float temp0_33[0x4] =
        _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), temp0_10))
    zmm5_1 = _mm_and_ps(zmm5_1, temp0_30 ^ zx.o(0)) ^ temp0_30
    float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm5_1)
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)
    temp0_38[0] = temp0_38[0] f* zmm9_1.d
    zmm2_1.d = temp0_36.d f* zmm9_1.d
    temp0_37[0] = temp0_37[0] f* zmm9_1.d
    zmm0.d = zmm2_1.d f+ *(arg5 + 0x30)
    temp0_37[0] = temp0_37[0] f+ *(arg5 + 0x34)
    *(arg5 + 0x30) = zmm0.d
    zmm0.d = temp0_38.d f+ *(arg5 + 0x38)
    *(arg5 + 0x34) = temp0_37[0]
    *(arg5 + 0x38) = zmm0.d
    temp0_38[0] = temp0_38[0] f+ *(arg5 + 0x28)
    zmm2_1.d = zmm2_1.d f+ *(arg5 + 0x20)
    temp0_37[0] = temp0_37[0] f+ *(arg5 + 0x24)
    *(arg5 + 0x28) = temp0_38[0]
    *(arg5 + 0x20) = zmm2_1.d
    *(arg5 + 0x24) = temp0_37[0]

return result
