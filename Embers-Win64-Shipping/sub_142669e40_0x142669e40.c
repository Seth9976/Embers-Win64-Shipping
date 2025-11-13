// 函数: sub_142669e40
// 地址: 0x142669e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg3
int32_t i = 0
int128_t* result = arg2

if (arg3[1].d s> 0)
    int128_t* rbx_1 = r15 + 0x38
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    
    do
        zmm9 = *result
        float zmm5[0x4] = result[2]
        zmm6 = result[1]
        float temp0_4[0x4] = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*(rbx_1 - 8), (*rbx_1)[0].q), 
                _mm_unpacklo_ps(*(rbx_1 - 4), zx.o(0)[0].q)[0].q), 
            zmm5)
        float temp0_5[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
        float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
        float temp0_12[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_6), temp0_9)
        float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
        float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
        float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_5)
        float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_4)
        float temp0_19[0x4] = _mm_mul_ps(temp0_15, temp0_6)
        float zmm4[0x4] = *(rbx_1 + 4)
        float temp0_22[0x4] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_19, temp0_17), temp0_18), zmm6)
        float var_90_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
        float zmm2[0x4] = *(rbx_1 + 8)
        int64_t var_e8_1 = (_mm_unpacklo_ps(temp0_22, temp0_24[0].q)).q
        float temp0_29[0x4] = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, (*(rbx_1 + 0xc))[0].q), 
                _mm_unpacklo_ps(zmm2, 0)[0].q), 
            zmm5)
        float var_e0_1 = var_90_1
        float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xc9), temp0_5)
        float temp0_34[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xd2), temp0_6), temp0_31)
        float temp0_35[0x4] = _mm_add_ps(temp0_34, temp0_34)
        float temp0_36[0x4] = _mm_mul_ps(temp0_7, temp0_35)
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xd2)
        float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xc9), temp0_5)
        float temp0_40[0x4] = _mm_mul_ps(temp0_37, temp0_6)
        float temp0_41[0x4] = _mm_add_ps(temp0_36, temp0_29)
        float temp0_44[0x4] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_40, temp0_39), temp0_41), zmm6)
        float var_84_1 = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)[0]
        float temp0_47[0x4] =
            _mm_unpacklo_ps(temp0_44, _mm_shuffle_ps(temp0_44, temp0_44, 0x55)[0].q)
        float temp0_48[0x4] = _mm_unpacklo_ps(*(rbx_1 + 0x14), 0)
        float temp0_51[0x4] = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(rbx_1[1].d, (*(rbx_1 + 0x18))[0].q), temp0_48[0].q), 
            zmm5)
        float var_d4_1 = var_84_1
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xc9)
        float temp0_53[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xd2)
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_5)
        float temp0_56[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_53, temp0_6), temp0_54)
        float temp0_57[0x4] = _mm_add_ps(temp0_56, temp0_56)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc9)
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xd2)
        float temp0_60[0x4] = _mm_mul_ps(temp0_58, temp0_5)
        float temp0_61[0x4] = _mm_mul_ps(temp0_57, temp0_7)
        float temp0_62[0x4] = _mm_mul_ps(temp0_59, temp0_6)
        float temp0_63[0x4] = _mm_add_ps(temp0_61, temp0_51)
        float zmm3[0x4] = *(rbx_1 + 0x1c)
        float temp0_66[0x4] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_62, temp0_60), temp0_63), zmm6)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xaa)
        float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
        float var_78_1 = temp0_67[0]
        zmm2 = rbx_1[2].d
        float temp0_69[0x4] = _mm_unpacklo_ps(temp0_66, temp0_68[0].q)
        float temp0_70[0x4] = _mm_unpacklo_ps(zmm2, 0)
        int64_t var_d0_1 = temp0_69.q
        float temp0_73[0x4] = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*(rbx_1 + 0x24))[0].q), temp0_70[0].q), zmm5)
        float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xc9), temp0_5)
        float temp0_78[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xd2), temp0_6), temp0_75)
        float temp0_79[0x4] = _mm_add_ps(temp0_78, temp0_78)
        float temp0_80[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0xc9)
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0xd2)
        float temp0_82[0x4] = _mm_mul_ps(temp0_80, temp0_5)
        float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_6)
        float temp0_84[0x4] = _mm_mul_ps(temp0_79, temp0_7)
        float temp0_88[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_83, temp0_82), _mm_add_ps(temp0_84, temp0_73)), zmm6)
        float var_6c_1 = _mm_shuffle_ps(temp0_88, temp0_88, 0xaa)[0]
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0x55)
        float var_bc_1 = var_6c_1
        uint32_t rax_4 = zx.d(*(rbx_1 - 0x1c))
        int64_t var_c4_1 = (_mm_unpacklo_ps(temp0_88, temp0_90[0].q)).q
        void* rax_5 = sub_141dc5740(r15)
        int32_t* rax_7
        
        if (rax_5 == 0)
            rax_7 = &data_14399f634
        else
            void* rax_6 = *(rax_5 + 0x118)
            
            if (rax_6 == 0)
                int64_t rdx = *rax_5
                (*(rdx + 0x390))(rax_5, rdx)
                rax_6 = *(rax_5 + 0x118)
            
            rax_7 = rax_6 + 0x38
        
        float var_b0_1 = (*(rbx_1 - 0x2c))[0]
        int32_t var_b4_1 = *rax_7
        
        if ((*(rbx_1 - 0x1b) & 1) == 0)
            int32_t var_ac_2 = 0xbf800000
        else
            float var_ac_1 = (*(rbx_1 - 0x28))[0]
        
        int64_t rsi_2 = sx.q(*(arg1 + 0x178))
        int32_t r12_1 = *(rbx_1 - 0x24)
        int32_t rax_9 = (rsi_2 + 1).d
        *(arg1 + 0x178) = rax_9
        
        if (rax_9 s> *(arg1 + 0x17c))
            sub_1426675a0(arg1 + 0x170)
        
        int64_t rax_10 = *(arg1 + 0x170)
        i += 1
        r15 += 0x60
        rbx_1 = &rbx_1[6]
        float (* rcx_3)[0x4] = rsi_2 * 0x44
        *(rcx_3 + rax_10) = var_e8_1.o
        *(rcx_3 + rax_10 + 0x10) = temp0_47.q:4.o
        *(rcx_3 + rax_10 + 0x20) = var_78_1.o
        *(rcx_3 + rax_10 + 0x30) = rax_4.o
        *(rcx_3 + rax_10 + 0x40) = r12_1
        result = arg2
    while (i s< arg3[1].d)

return result
