// 函数: sub_141535140
// 地址: 0x141535140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t rbx = *arg1
int128_t* rdx = arg1[1]
void* var_f8 = arg3
int128_t* var_f0 = arg4
uint64_t rax_2 = zx.q(*(rbx + 8))
int32_t var_158
int64_t r9_7

if (rax_2.d u> 0x88)
label_14153597e:
    r9_7 = rbx
label_14153598e:
    int32_t* var_160_11 = &var_158
    float (* var_168_11)[0x4] = rdx
    var_158 = 0x3f800000
    int64_t var_154_11 = 0
    sub_1415ca6f0(arg2, arg3, arg4, r9_7, var_168_11, var_160_11)
else
    switch (rax_2)
        case 0, 2, 5, 6, 7, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
                0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 
                0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 
                0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 
                0x42, 0x44, 0x45, 0x46, 0x47, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 
                0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 
                0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 
                0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 
                0x7c, 0x7d, 0x7e, 0x7f, 0x82, 0x84, 0x85, 0x86, 0x87
            goto label_14153597e
        case 1
            float (* var_160_1)[0x4] = &var_158
            float (* var_168_1)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_1 = 0
            sub_1415c9a10(arg2, arg3, arg4, rbx, var_168_1, var_160_1)
        case 3
            float (* var_160_2)[0x4] = &var_158
            float (* var_168_2)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_2 = 0
            sub_1415c9ca0(arg2, arg3, arg4, rbx, var_168_2, var_160_2)
        case 4
            float zmm8[0x4] = rdx[2]
            float zmm14[0x4] = *(rbx + 0x40)
            float zmm6[0x4]
            float zmm7[0x4]
            float zmm13[0x4]
            float zmm3[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143ef7530, 1)) == 0)
                float zmm4[0x4] = *rdx
                float zmm2[0x4] = *(rbx + 0x20)
                zmm3 = *(rbx + 0x30)
                float temp0_133[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_133)
                float temp0_136[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                float temp0_137[0x4] = _mm_mul_ps(zmm3, zmm8)
                float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143ef72e0)
                float temp0_139[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                zmm13 = _mm_mul_ps(zmm14, zmm8)
                float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, zmm2))
                float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                float temp0_147[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143ef72d0)
                float temp0_149[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
                float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143ef72c0)
                float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
                float temp0_152[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                float temp0_153[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                float temp0_154[0x4] = _mm_mul_ps(temp0_149, temp0_153)
                zmm6 = _mm_add_ps(temp0_151, temp0_150)
                float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_152))
                float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
                float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
                float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
                float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
                float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
                float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
                zmm7 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
                    rdx[1])
            else
                zmm3 = *rdx
                float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                float temp0_5[0x4] = _mm_add_ps(zmm3, zmm3)
                float zmm9[0x4] = rdx[1]
                float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                float zmm11[0x4] = data_143ef72f0
                float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm3)
                float temp0_9[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_5, temp0_5, 0x29))
                float temp0_10[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x12)
                float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x1a)
                float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_10)
                float temp0_15[0x4] = _mm_add_ps(temp0_11, _mm_shuffle_ps(temp0_7, temp0_7, 1))
                _mm_mul_ps(zmm8, zmm14)
                float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_9)
                float temp0_18[0x4] = _mm_sub_ps(temp0_9, temp0_13)
                float temp0_19[0x4] = _mm_sub_ps(zmm11, temp0_15)
                float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm8)
                float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm8)
                float temp0_22[0x4] = _mm_mul_ps(temp0_4, temp0_18)
                float zmm1[0x4] = __andps_xmmxud_memxud(temp0_21, data_143ef7300)
                float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), 
                    _mm_shuffle_ps(temp0_22, zmm1, 0x32), 0x82)
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
                float temp0_29[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0x10), temp0_27, 0x88)
                float temp0_31[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_22, 0x12), zmm1, 0xe8)
                zmm1 = *(rbx + 0x20)
                zmm11[0].q = zmm9 u>> 0x40
                float temp0_32[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_33[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                float temp0_34[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                float temp0_35[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_36[0x4] = _mm_mul_ps(temp0_32, zmm1)
                float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x29), temp0_35)
                float temp0_39[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x12), temp0_39)
                float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x1a), 
                    _mm_shuffle_ps(temp0_36, temp0_36, 1))
                float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_38)
                float temp0_46[0x4] = _mm_sub_ps(temp0_38, temp0_41)
                float temp0_47[0x4] = _mm_sub_ps(zmm11, temp0_44)
                float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm14)
                float temp0_49[0x4] = _mm_mul_ps(temp0_34, temp0_46)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm14), data_143ef7300)
                float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
                    _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
                float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
                float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
                float temp0_58[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0x10), temp0_55, 0x88)
                float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_29)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
                float zmm5[0x4] = *(rbx + 0x30)
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0xe8)
                float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_31)
                zmm11[0].q = zmm5 u>> 0x40
                float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
                float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
                float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_33)
                float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_26))
                float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_26)
                float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
                float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_31)
                float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
                float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_29)
                float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
                float var_138[0x4] = temp0_75
                float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
                float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
                float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_29)
                float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_33)
                float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
                float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
                float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_26)
                float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_31)
                float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
                float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
                float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
                float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_33)
                float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
                int96_t var_128_1 = temp0_88[0].12
                float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
                float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_29)
                float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_31)
                float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_26)
                float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
                float temp0_101[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_33)
                float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
                int96_t var_118_1 = temp0_99[0].12
                int96_t var_108_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
                int128_t zmm11_1
                float zmm15_1[0x4]
                zmm11_1, zmm13, zmm15_1 = sub_1407740e0(&var_138, 0x322bcc77)
                zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13, 2), data_143ef7520 ^ zmm11_1)
                    ^ data_143ef7520
                float zmm2_1[0x4] = var_138[0]
                float zmm1_1 = var_138[1]
                uint32_t zmm0_1[0x4] = var_138[2]
                zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                zmm1_1 = zmm1_1 * zmm15_1[0]
                zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
                var_138[0] = zmm2_1[0]
                float temp0_107[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                var_138[1] = zmm1_1
                zmm1_1 = var_128_1:4.d * temp0_107[0]
                var_138[2] = zmm0_1[0]
                zmm0_1 = var_128_1:8.d
                zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
                float zmm3_1 = var_128_1.d * temp0_107[0]
                zmm2_1 = var_118_1.d
                var_128_1:4.d = zmm1_1
                var_128_1:8.d = zmm0_1[0]
                zmm0_1 = var_118_1:8.d
                float temp0_108[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                zmm1_1 = var_118_1:4.d * temp0_108[0]
                zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
                zmm2_1[0] = zmm2_1[0] * temp0_108[0]
                var_118_1:4.d = zmm1_1
                var_118_1:8.d = zmm0_1[0]
                var_128_1.d = zmm3_1
                var_118_1.d = zmm2_1[0]
                sub_14077e4a0(&var_158, &var_138)
                float zmm5_1[0x4] = var_158.o
                zmm6 = data_143ef72b0
                float temp0_109[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                float temp0_111[0x4] =
                    _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
                float temp0_113[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
                float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
                float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6)
                float temp0_120[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                        temp0_114), 
                    temp0_114)
                float temp0_123[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
                float temp0_125[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
                float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
                float temp0_128[0x4] = _mm_unpacklo_ps(var_108_1:4.d, 0)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_1) ^ data_143ef72a0, temp0_125)
                    ^ data_143ef72a0
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_108_1.d, var_108_1:8.d[0].q), 
                    temp0_128[0].q)
            int64_t rdx_12 = *(rbx + 0x10)
            float var_e8[0x4] = zmm6
            float var_d8_1[0x4] = zmm7
            float var_c8_1[0x4] = zmm13
            sub_141544aa0(arg2, rdx_12, &var_e8, &var_f8)
        case 8
            float (* var_160_3)[0x4] = &var_158
            float (* var_168_3)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_3 = 0
            sub_1415ca980(arg2, arg3, arg4, rbx, var_168_3, var_160_3)
        case 0x40
            r9_7 = *(rbx + 0x10)
            goto label_14153598e
        case 0x41
            void* r9_8 = *(rbx + 0x10)
            float (* var_160_8)[0x4] = &var_158
            float (* var_168_8)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_8 = 0
            sub_1415c9a10(arg2, arg3, arg4, r9_8, var_168_8, var_160_8)
        case 0x43
            void* r9_9 = *(rbx + 0x10)
            float (* var_160_9)[0x4] = &var_158
            float (* var_168_9)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_9 = 0
            sub_1415c9ca0(arg2, arg3, arg4, r9_9, var_168_9, var_160_9)
        case 0x48
            void* r9_10 = *(rbx + 0x10)
            float (* var_160_10)[0x4] = &var_158
            float (* var_168_10)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_10 = 0
            sub_1415ca980(arg2, arg3, arg4, r9_10, var_168_10, var_160_10)
        case 0x80
            int128_t* var_160_4 = &var_158
            float (* var_168_4)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_4 = 0
            sub_1415ca1c0(arg2, arg3, arg4, rbx, var_168_4, var_160_4)
        case 0x81
            float (* var_160_5)[0x4] = &var_158
            float (* var_168_5)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_5 = 0
            sub_1415c9780(arg2, arg3, arg4, rbx, var_168_5, var_160_5)
        case 0x83
            float (* var_160_6)[0x4] = &var_158
            float (* var_168_6)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_6 = 0
            sub_1415c9f30(arg2, arg3, arg4, rbx, var_168_6, var_160_6)
        case 0x88
            int128_t* var_160_7 = &var_158
            float (* var_168_7)[0x4] = rdx
            var_158 = 0x3f800000
            int64_t var_154_7 = 0
            sub_1415ca450(arg2, arg3, arg4, rbx, var_168_7, var_160_7)
__security_check_cookie(rax_1 ^ &var_188)
return arg2
