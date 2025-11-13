// 函数: sub_14154bd00
// 地址: 0x14154bd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
void* const rsi = arg3
void* const rdi = arg4
void* result = nullptr

if (*(arg3 + 8) != 3)
    rsi = nullptr

if (*(arg4 + 8) != 1)
    rdi = nullptr

if (rsi != 0 && rdi != 0)
    float var_158[0x4]
    float (* rax_3)[0x4]
    int128_t zmm13_1
    int128_t zmm14_1
    rax_3, zmm13_1, zmm14_1 = sub_140ad7d70(arg5, &var_158, arg6)
    float zmm4_1[0x4] = *(rsi + 0x10)
    float zmm5_1[0x4] = *(rsi + 0x14)
    float zmm6_1[0x4] = *(rsi + 0x18)
    float zmm11_1[0x4] = *rax_3
    float temp0_1[0x4] = _mm_unpacklo_ps(zmm5_1, 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xc9)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xd2)
    float temp0_6[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, zmm6_1[0].q), temp0_1[0].q), rax_3[2])
    float temp0_7[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xc9), temp0_3)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xd2), temp0_2), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_3)
    float temp0_21[0x4] = _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_2), temp0_15), 
        _mm_add_ps(_mm_mul_ps(temp0_7, temp0_13), temp0_6))
    float zmm0_1[0x4] = *(rsi + 0x28)
    zmm0_1[0] = zmm0_1[0] f* *(rsi + 0x24)
    zmm0_1[0] = zmm0_1[0] f* *(rsi + 0x1c)
    zmm0_1[0] = zmm0_1[0] f* *(rsi + 0x20)
    zmm0_1[0] = zmm0_1[0] + zmm6_1[0]
    float temp0_22[0x4] = __addps_xmmps_memps(temp0_21, rax_3[1])
    zmm0_1[0] = zmm0_1[0] + zmm4_1[0]
    zmm0_1[0] = zmm0_1[0] + zmm5_1[0]
    float temp0_26[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0_1, zmm0_1[0].q), _mm_unpacklo_ps(zmm0_1, 0)[0].q), 
        rax_3[2])
    float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xc9), temp0_3)
    float temp0_31[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xd2), temp0_2), temp0_28)
    float temp0_32[0x4] = _mm_add_ps(temp0_31, temp0_31)
    float temp0_33[0x4] = _mm_mul_ps(temp0_7, temp0_32)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
    float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xd2), temp0_2)
    float temp0_37[0x4] = _mm_mul_ps(temp0_34, temp0_3)
    float temp0_38[0x4] = _mm_add_ps(temp0_33, temp0_26)
    float temp0_41[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_36, temp0_37), temp0_38), rax_3[1])
    float zmm8_1[0x4] = arg7
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xaa)
    float temp0_43[0x4] = _mm_max_ss(temp0_41[0], temp0_22[0])
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x55)
    float temp0_45[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
    float temp0_46[0x4] = _mm_min_ss(temp0_41[0], temp0_22[0])
    float temp0_47[0x4] = _mm_max_ss(temp0_42[0], temp0_45[0])
    float temp0_48[0x4] = _mm_min_ss(temp0_42[0], temp0_45[0])
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
    int64_t rcx_1 = 0
    float temp0_50[0x4] = _mm_min_ss(temp0_44[0], temp0_49[0])
    float temp0_51[0x4] = _mm_max_ss(temp0_44[0], temp0_49[0])
    float var_2d8_1 = temp0_47[0]
    float var_300_1 = temp0_48[0]
    zmm8_1[0] = zmm8_1[0] f+ *(rsi + 0x2c)
    int64_t var_2c8 = (_mm_unpacklo_ps(temp0_46, temp0_50[0].q)).q
    int64_t var_2bc = (_mm_unpacklo_ps(temp0_43, temp0_51[0].q)).q
    temp0_46[0] = temp0_46[0] - zmm8_1[0]
    zmm0_1 = var_2c8:4.d
    temp0_43[0] = temp0_43[0] + zmm8_1[0]
    zmm0_1[0] = zmm0_1[0] - zmm8_1[0]
    float zmm1_1[0x4] = var_300_1
    zmm1_1[0] = zmm1_1[0] - zmm8_1[0]
    var_2c8.d = temp0_46[0]
    var_2c8:4.d = zmm0_1[0]
    zmm0_1 = var_2bc:4.d
    float var_2c0_2 = zmm1_1[0]
    zmm0_1[0] = zmm0_1[0] + zmm8_1[0]
    zmm1_1 = var_2d8_1
    zmm1_1[0] = zmm1_1[0] + zmm8_1[0]
    var_2bc.d = temp0_43[0]
    var_2bc:4.d = zmm0_1[0]
    float var_2b4_2 = zmm1_1[0]
    
    while (true)
        result = rdi + 0x10 - &var_2c8 + (rcx_1 << 2)
        
        if ((*(&var_2c8 + (rcx_1 << 2)))[0] f> *(&var_2bc + result))
            break
        
        if ((*(&var_2bc + (rcx_1 << 2)))[0] f< *(rdi + (rcx_1 << 2) + 0x10))
            break
        
        rcx_1 += 1
        
        if (rcx_1 s>= 3)
            int64_t var_308 = arg1
            float (* rax_6)[0x4] = sub_141746340(&var_308)
            var_2c8.o = *sub_141749180(&var_308)
            zmm0_1 = (*rax_6)[1]
            float temp0_54[0x4] = _mm_unpacklo_ps(*rax_6, (*rax_6)[2][0].q)
            float temp0_55[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
            float zmm2_1[0x4] = data_14399f66c
            var_2bc:4.o = _mm_unpacklo_ps(temp0_54, temp0_55[0].q)
            float var_2a8_1[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
                _mm_unpacklo_ps(zmm2_1, 0)[0].q)
            float var_128[0x3][0x4]
            float (* rax_8)[0x4]
            int512_t zmm9_2
            int512_t zmm10_2
            int512_t zmm11_2
            rax_8, zmm9_2, zmm10_2, zmm11_2 = sub_140ad7d70(arg5, &var_128, &var_2c8)
            zmm9_2.o = *rax_8
            zmm10_2.o = rax_8[1]
            zmm11_2.o = rax_8[2]
            var_308 = arg2
            int128_t* rax_10 = sub_141746340(&var_308)
            var_158 = *sub_141749180(&var_308)
            float zmm0_2[0x4] = *(rax_10 + 4)
            float temp0_60[0x4] = _mm_unpacklo_ps(*rax_10, *(rax_10 + 8))
            float temp0_61[0x4] = _mm_unpacklo_ps(zmm0_2, 0)
            float zmm2_2[0x4] = data_14399f66c
            float var_148_1[0x4] = _mm_unpacklo_ps(temp0_60, temp0_61[0].q)
            float var_138_1[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
                _mm_unpacklo_ps(zmm2_2, 0)[0].q)
            float var_f8[0x3][0x4]
            float (* rax_12)[0x4]
            int32_t zmm8_2
            int128_t zmm9_3
            int128_t zmm10_3
            int128_t zmm11_3
            rax_12, zmm8_2, zmm9_3, zmm10_3, zmm11_3 = sub_140ad7d70(arg6, &var_f8, &var_158)
            float zmm12_1[0x4] = *rax_12
            int128_t zmm13_2 = rax_12[1]
            int128_t zmm14_2 = rax_12[2]
            bool rax_13 = data_1439b8d50
            int512_t zmm13_3
            int512_t zmm14_3
            int128_t var_298
            float zmm0_3[0x4]
            
            if (rax_13 == 0)
            label_14154c383:
                int64_t var_238_2 = arg1
                int64_t var_230_2 = arg2
                int32_t var_2c0_4 = *(rdi + 0x18)
                float var_208_2[0x4] = data_142fc5a80
                int32_t var_2b4_4 = *(rdi + 0x24)
                var_2c8 = *(rdi + 0x10)
                zmm0_3 = zx.o(*(rdi + 0x1c))
                int128_t* var_320_2 = &var_298
                int64_t var_228_2 = 0
                int32_t var_220_2 = 0
                char var_218_2 = 1
                int64_t var_214_2 = 0
                int32_t var_20c_2 = 0
                int64_t var_1f8_2 = 0
                int32_t var_1f0_2 = 0
                int32_t var_1d8_2 = 0x80000001
                int64_t var_1d0_2 = 0
                int32_t var_1c8_2 = 1
                var_298 = zmm9_3
                int128_t var_288_2 = zmm10_3
                int128_t var_278_2 = zmm11_3
                float var_268_2[0x4] = zmm12_1
                int128_t var_258_2 = zmm13_2
                int128_t var_248_2 = zmm14_2
                void* var_1e8_2 = arg3
                void* var_1e0_2 = arg4
                int32_t var_1ec_2 = 9
                var_2bc = zmm0_3.q
                int128_t zmm8_4
                zmm8_4, zmm13_3, zmm14_3 = sub_1416fb9e0(rsi, arg5, &var_2c8, arg6, zmm8_2)
                result = sub_1417599c0(arg9, zmm8_4, &var_298)
            else
                float zmm7_2 = data_143ef74d4
                
                if (not(zmm7_2 <= 9.99999975e-05f))
                    float zmm5_2[0x4] = *arg5
                    zmm0_3 = *(rsi + 0x24)
                    float zmm6_2[0x4] = *(rsi + 0x1c)
                    float temp0_66[0x4] = _mm_unpacklo_ps(*(rsi + 0x20), 0)
                    float temp0_67[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                    float temp0_69[0x4] =
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_2, zmm0_3[0].q), temp0_66[0].q)
                    float temp0_70[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                    float temp0_72[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xc9), temp0_67)
                    float temp0_74[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xd2), temp0_70)
                    float temp0_75[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                    float temp0_76[0x4] = _mm_sub_ps(temp0_74, temp0_72)
                    float temp0_77[0x4] = _mm_add_ps(temp0_76, temp0_76)
                    float temp0_78[0x4] = _mm_mul_ps(temp0_75, temp0_77)
                    float temp0_80[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0xc9), temp0_67)
                    float temp0_82[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0xd2), temp0_70)
                    float temp0_83[0x4] = _mm_add_ps(temp0_78, temp0_69)
                    float zmm4_2[0x4] = *arg8
                    float temp0_85[0x4] = _mm_add_ps(_mm_sub_ps(temp0_82, temp0_80), temp0_83)
                    float temp0_87[0x4] =
                        _mm_unpacklo_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0x55), 0)
                    float temp0_90[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(temp0_85, _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)[0].q), 
                        temp0_87[0].q)
                    float temp0_91[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xd2)
                    float temp0_92[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
                    float temp0_94[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0xc9), temp0_91)
                    float temp0_96[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0xd2), temp0_92)
                    float temp0_97[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xff)
                    float temp0_98[0x4] = _mm_sub_ps(temp0_96, temp0_94)
                    float temp0_99[0x4] = _mm_add_ps(temp0_98, temp0_98)
                    float temp0_100[0x4] = _mm_mul_ps(temp0_97, temp0_99)
                    float temp0_102[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0xc9), temp0_91)
                    float temp0_103[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0xd2)
                    float temp0_104[0x4] = _mm_add_ps(temp0_100, temp0_90)
                    float temp0_107[0x4] = _mm_add_ps(
                        _mm_sub_ps(_mm_mul_ps(temp0_103, temp0_92), temp0_102), temp0_104)
                    rax_13 = __andps_xmmxud_memxud(_mm_shuffle_ps(temp0_107, temp0_107, 0xaa), 
                        data_142d3f770)[0] > zmm7_2
                
                if (rax_13 == 0)
                    goto label_14154c383
                
                int64_t var_238_1 = arg1
                int64_t var_230_1 = arg2
                float var_208_1[0x4] = data_142fc5a80
                int32_t var_2c0_3 = *(rdi + 0x18)
                int32_t rax_17 = *(rdi + 0x24)
                int128_t var_1b8
                __builtin_memset(&var_1b8, 0, 0x18)
                int32_t var_2b4_3 = rax_17
                int128_t* var_318_1 = &var_298
                float (* var_320_1)[0x4] = arg8
                var_2c8 = *(rdi + 0x10)
                zmm0_3 = zx.o(*(rdi + 0x1c))
                int64_t var_1d0_1 = 0
                int64_t var_170_1 = 0
                int32_t var_168_1 = 0
                int64_t var_228_1 = 0
                int32_t var_220_1 = 0
                char var_218_1 = 1
                int64_t var_214_1 = 0
                int32_t var_20c_1 = 0
                int64_t var_1f8_1 = 0
                int32_t var_1f0_1 = 0
                int32_t var_1d8_1 = 0x80000001
                int32_t var_1c8_1 = 3
                var_298 = zmm9_3
                int128_t var_288_1 = zmm10_3
                int128_t var_278_1 = zmm11_3
                float var_268_1[0x4] = zmm12_1
                int128_t var_258_1 = zmm13_2
                int128_t var_248_1 = zmm14_2
                void* var_1e8_1 = arg3
                void* var_1e0_1 = arg4
                int32_t var_1ec_1 = 9
                int64_t var_1c0_1 = -1
                int32_t var_164_1 = 4
                var_2bc = zmm0_3.q
                float zmm8_3
                zmm8_3, zmm13_3, zmm14_3 = sub_1416fbbe0(rsi, arg5, &var_2c8, arg6, zmm8_2)
                result = sub_141759920(arg9, zmm8_3, &var_298)
                
                if (var_170_1 != 0)
                    result = sub_140a74f90(var_170_1)
            zmm13_3.o = zmm13_1
            zmm14_3.o = zmm14_1
            break

__security_check_cookie(rax_1 ^ &var_348)
return result
