// 函数: sub_142669ba0
// 地址: 0x142669ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r14 = *arg3
int32_t i = 0

if (arg3[1].d s> 0)
    int128_t* rbx_1 = r14 + 0x38
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    
    do
        zmm8 = *arg2
        float temp0_4[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*(rbx_1 - 8), (*rbx_1)[0].q), 
                _mm_unpacklo_ps(*(rbx_1 - 4), zx.o(0)[0].q)[0].q), 
            arg2[2])
        float temp0_5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
        float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_6)
        float temp0_12[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_5), temp0_9)
        float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
        float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_6)
        float temp0_18[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_15, temp0_5), temp0_16)
        float temp0_20[0x4] = _mm_add_ps(_mm_mul_ps(temp0_7, temp0_13), temp0_4)
        float zmm3[0x4] = *(rbx_1 + 4)
        float temp0_22[0x4] = __addps_xmmps_memps(_mm_add_ps(temp0_18, temp0_20), arg2[1])
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
        float var_a0_1 = temp0_23[0]
        float zmm2[0x4] = *(rbx_1 + 8)
        float temp0_25[0x4] = _mm_unpacklo_ps(temp0_22, temp0_24[0].q)
        float temp0_26[0x4] = _mm_unpacklo_ps(zmm2, 0)
        float temp0_29[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*(rbx_1 + 0xc))[0].q), temp0_26[0].q), arg2[2])
        float var_88_1 = var_a0_1
        float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xc9), temp0_6)
        float temp0_34[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xd2), temp0_5), temp0_31)
        float temp0_35[0x4] = _mm_add_ps(temp0_34, temp0_34)
        float temp0_36[0x4] = _mm_mul_ps(temp0_7, temp0_35)
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc9)
        float temp0_38[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xd2)
        float temp0_39[0x4] = _mm_mul_ps(temp0_37, temp0_6)
        float temp0_40[0x4] = _mm_mul_ps(temp0_38, temp0_5)
        float temp0_41[0x4] = _mm_add_ps(temp0_36, temp0_29)
        float temp0_44[0x4] =
            __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_40, temp0_39), temp0_41), arg2[1])
        float var_94_1 = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)[0]
        int64_t var_84_1 =
            (_mm_unpacklo_ps(temp0_44, _mm_shuffle_ps(temp0_44, temp0_44, 0x55)[0].q)).q
        float var_7c_1 = var_94_1
        uint32_t var_78_1 = zx.d(*(rbx_1 - 0x1c))
        void* rax_3 = sub_141dc5740(r14)
        int32_t* rax_5
        
        if (rax_3 == 0)
            rax_5 = &data_14399f634
        else
            void* rax_4 = *(rax_3 + 0x118)
            
            if (rax_4 == 0)
                int64_t rdx = *rax_3
                (*(rdx + 0x390))(rax_3, rdx)
                rax_4 = *(rax_3 + 0x118)
            
            rax_5 = rax_4 + 0x38
        
        float var_70_1 = (*(rbx_1 - 0x2c))[0]
        int32_t var_74_1 = *rax_5
        
        if ((*(rbx_1 - 0x1b) & 1) == 0)
            int32_t var_6c_2 = 0xbf800000
        else
            float var_6c_1 = (*(rbx_1 - 0x28))[0]
        
        int64_t rsi_2 = sx.q(*(arg1 + 0x168))
        int32_t r15_1 = *(rbx_1 - 0x24)
        int32_t rax_7 = (rsi_2 + 1).d
        *(arg1 + 0x168) = rax_7
        
        if (rax_7 s> *(arg1 + 0x16c))
            sub_140ac0cd0(arg1 + 0x160)
        
        result = *(arg1 + 0x160)
        i += 1
        r14 += 0x48
        rbx_1 += 0x48
        int128_t* rcx_3 = rsi_2 * 0x2c
        *(rcx_3 + result) = temp0_25.q.o
        *(rcx_3 + result + 0x10) = var_84_1:4.o
        *(rcx_3 + result + 0x20) = var_70_1.q
        *(rcx_3 + result + 0x28) = r15_1
    while (i s< arg3[1].d)

return result
