// 函数: sub_14153b0f0
// 地址: 0x14153b0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t rbx = *arg1
float (* rsi)[0x4] = arg1[4]
int64_t r14 = arg1[5]
int128_t* rdx = arg1[1]
void* var_148 = arg3
int128_t* r8 = arg1[2]
float (* var_140)[0x4] = arg4
float (* r9)[0x4] = arg1[3]
int128_t* var_138 = r8
float (* var_130)[0x4] = r9
float (* var_128)[0x4] = rsi
int64_t var_120 = r14
uint64_t rax_2 = zx.q(*(rbx + 8))
int64_t var_1a8_11

if (rax_2.d u> 0x88)
label_14153b93c:
    var_1a8_11 = r14
    sub_1415df8d0(arg2, arg3, arg4, rbx, rdx, r8, (*r9)[0], (*rsi)[0])
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
            goto label_14153b93c
        case 1
            int64_t var_1a8_1 = r14
            sub_1415dfc50(arg2, arg3, arg4, rbx, rdx, r8, (*r9)[0], (*rsi)[0])
        case 3
            int64_t var_1a8_2 = r14
            sub_1415dffd0(arg2, arg3, arg4, rbx, rdx, r8, (*r9)[0], (*rsi)[0])
        case 4
            float zmm6[0x4] = rdx[2]
            float zmm14[0x4] = *(rbx + 0x40)
            float zmm7[0x4]
            float zmm13[0x4]
            float zmm3[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm6), data_143ef7530, 1)) == 0)
                float zmm4[0x4] = *rdx
                float zmm2[0x4] = *(rbx + 0x20)
                zmm3 = *(rbx + 0x30)
                float temp0_133[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_133)
                float temp0_136[0x4] = _mm_mul_ps(zmm3, zmm6)
                float temp0_137[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143ef72e0)
                float temp0_139[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                zmm13 = _mm_mul_ps(zmm6, zmm14)
                float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, zmm2))
                float temp0_144[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                float temp0_147[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143ef72d0)
                float temp0_149[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xd2)
                float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143ef72c0)
                float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
                float temp0_152[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                float temp0_153[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                float temp0_154[0x4] = _mm_mul_ps(temp0_149, temp0_153)
                zmm6 = _mm_add_ps(temp0_151, temp0_150)
                float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_152))
                float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
                float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
                float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
                float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
                float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
                float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
                zmm7 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_136)), 
                    rdx[1])
            else
                float zmm1[0x4] = *rdx
                float temp0_4[0x4] = _mm_add_ps(zmm1, zmm1)
                float zmm9[0x4] = rdx[1]
                float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                float zmm11[0x4] = data_143ef72f0
                float temp0_7[0x4] = _mm_mul_ps(temp0_4, zmm1)
                float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_5)
                float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x1a)
                float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), temp0_10)
                float temp0_15[0x4] = _mm_add_ps(temp0_11, _mm_shuffle_ps(temp0_7, temp0_7, 1))
                _mm_mul_ps(zmm6, zmm14)
                float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_9)
                float temp0_18[0x4] = _mm_sub_ps(temp0_9, temp0_13)
                zmm3 = *(rbx + 0x20)
                float temp0_19[0x4] = _mm_sub_ps(zmm11, temp0_15)
                float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm6)
                float temp0_21[0x4] = _mm_mul_ps(temp0_6, temp0_18)
                float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm6)
                float temp0_23[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                zmm1 = __andps_xmmxud_memxud(temp0_22, data_143ef7300)
                float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
                float temp0_27[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_25, 0x82)
                float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
                float temp0_30[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_28, 0x88)
                float temp0_32[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
                float temp0_33[0x4] = _mm_add_ps(zmm3, zmm3)
                zmm11[0].q = zmm9 u>> 0x40
                float temp0_34[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                float temp0_35[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x29)
                float temp0_37[0x4] = _mm_mul_ps(temp0_33, zmm3)
                float temp0_38[0x4] = _mm_mul_ps(temp0_23, temp0_36)
                float temp0_39[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x12)
                float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_39)
                float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                    _mm_shuffle_ps(temp0_37, temp0_37, 1))
                float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_38)
                float temp0_46[0x4] = _mm_sub_ps(temp0_38, temp0_41)
                float temp0_47[0x4] = _mm_sub_ps(zmm11, temp0_44)
                float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm14)
                float temp0_49[0x4] = _mm_mul_ps(temp0_35, temp0_46)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm14), data_143ef7300)
                float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
                    _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
                float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
                float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
                float temp0_58[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0x10), temp0_55, 0x88)
                float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_30)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
                float zmm5[0x4] = *(rbx + 0x30)
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0xe8)
                float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
                zmm11[0].q = zmm5 u>> 0x40
                float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
                float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
                float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
                float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_27))
                float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
                float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
                float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
                float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
                float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
                float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
                float var_188[0x4] = temp0_75
                float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
                float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
                float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
                float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
                float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
                float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
                float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
                float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_32)
                float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
                float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
                float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
                float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
                float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
                int96_t var_178_1 = temp0_88[0].12
                float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
                float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
                float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
                float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
                float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
                float temp0_101[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
                float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
                int96_t var_168_1 = temp0_99[0].12
                int96_t var_158_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
                int128_t zmm11_1
                float zmm15_1[0x4]
                zmm11_1, zmm13, zmm15_1 = sub_1407740e0(&var_188, 0x322bcc77)
                zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13, 2), data_143ef7520 ^ zmm11_1)
                    ^ data_143ef7520
                float zmm2_1[0x4] = var_188[0]
                float zmm1_1 = var_188[1]
                uint32_t zmm0_1[0x4] = var_188[2]
                zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                zmm1_1 = zmm1_1 * zmm15_1[0]
                zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
                var_188[0] = zmm2_1[0]
                float temp0_107[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                var_188[1] = zmm1_1
                zmm1_1 = var_178_1:4.d * temp0_107[0]
                var_188[2] = zmm0_1[0]
                zmm0_1 = var_178_1:8.d
                zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
                float zmm3_1 = var_178_1.d * temp0_107[0]
                zmm2_1 = var_168_1.d
                var_178_1:4.d = zmm1_1
                var_178_1:8.d = zmm0_1[0]
                zmm0_1 = var_168_1:8.d
                float temp0_108[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                zmm1_1 = var_168_1:4.d * temp0_108[0]
                zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
                zmm2_1[0] = zmm2_1[0] * temp0_108[0]
                var_168_1:4.d = zmm1_1
                var_168_1:8.d = zmm0_1[0]
                var_178_1.d = zmm3_1
                var_168_1.d = zmm2_1[0]
                uint32_t var_118[0x4]
                sub_14077e4a0(&var_118, &var_188)
                uint32_t zmm5_1[0x4] = var_118
                zmm6 = data_143ef72b0
                uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                uint32_t zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                zmm1_2 = _mm_rsqrt_ps(zmm4_1)
                uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_1, zmm6)
                float temp0_120[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), 
                        zmm1_2), 
                    zmm1_2)
                float temp0_123[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), zmm3_2))
                uint32_t zmm0_2[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
                float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
                float temp0_128[0x4] = _mm_unpacklo_ps(var_158_1:4.d, 0)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_1) ^ data_143ef72a0, zmm0_2)
                    ^ data_143ef72a0
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), 
                    temp0_128[0].q)
            int64_t rdx_12 = *(rbx + 0x10)
            float var_108[0x4] = zmm6
            float var_f8_1[0x4] = zmm7
            float var_e8_1[0x4] = zmm13
            sub_141544230(arg2, rdx_12, &var_108, &var_148)
        case 8
            int64_t var_1a8_3 = r14
            sub_1415e1150(arg2, arg3, arg4, rbx, rdx, r8, (*r9)[0], (*rsi)[0])
        case 0x40
            var_1a8_11 = r14
            sub_1415df8d0(arg2, arg3, arg4, *(rbx + 0x10), rdx, r8, (*r9)[0], (*rsi)[0])
        case 0x41
            int64_t var_1a8_8 = r14
            sub_1415dfc50(arg2, arg3, arg4, *(rbx + 0x10), rdx, r8, (*r9)[0], (*rsi)[0])
        case 0x43
            int64_t var_1a8_9 = r14
            sub_1415dffd0(arg2, arg3, arg4, *(rbx + 0x10), rdx, r8, (*r9)[0], (*rsi)[0])
        case 0x48
            int64_t var_1a8_10 = r14
            sub_1415e1150(arg2, arg3, arg4, *(rbx + 0x10), rdx, r8, (*r9)[0], (*rsi)[0])
        case 0x80
            int64_t var_1a8_4 = r14
            sub_1415e0a50(arg2, arg3, arg4, rbx, rdx, r8, (*r9)[0], (*rsi)[0])
        case 0x81
            int64_t var_1a8_5 = r14
            sub_1415e0350(arg2, arg3, arg4, rbx, rdx, r8, (*r9)[0], (*rsi)[0])
        case 0x83
            int64_t var_1a8_6 = r14
            sub_1415e06d0(arg2, arg3, arg4, rbx, rdx, r8, (*r9)[0], (*rsi)[0])
        case 0x88
            int64_t var_1a8_7 = r14
            sub_1415e0dd0(arg2, arg3, arg4, rbx, rdx, r8, (*r9)[0], (*rsi)[0])
__security_check_cookie(rax_1 ^ &var_1e8)
return arg2
