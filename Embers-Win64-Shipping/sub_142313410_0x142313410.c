// 函数: sub_142313410
// 地址: 0x142313410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
float zmm6[0x4] = data_14399f6e0
float zmm7[0x4] = data_14399f6f0
float zmm8[0x4] = data_14399f700
float zmm9[0x4] = data_14399f710
bool rax = sub_140b5b8a0(arg3.d, 0)
int32_t r14 = arg_18:4.d
int32_t rcx
rcx.b = rax == 0
rcx.b |= r14 != 0

if (rcx.b == 0)
label_142313984:
    *arg2 = zmm6
    arg2[1] = zmm7
    arg2[2] = zmm8
    arg2[3] = zmm9
else
    int32_t rax_1 = sub_14078ee20(arg1 + 0x188, &arg_18)
    float zmm0[0x4]
    float zmm1[0x4]
    
    if (rax_1 == 0xffffffff)
        int32_t rcx_4
        rcx_4.b = r14 == 0
        
        if ((rcx_4.b & sub_140b5b8a0(arg3.d, 0)) == 0)
            sub_14230f130(arg1 + 0xe8, &arg_18, arg3)
            int64_t rax_4 = sx.q(arg_18.d)
            void* const rax_7
            
            if (rax_4.d == 0xffffffff)
                rax_7 = nullptr
            else
                rax_7 = rax_4 * 0x60 + *(arg1 + 0xe8)
            
            void* rdx_2 = rax_7 + 0x10
            
            if (rax_7 == 0)
                rdx_2 = nullptr
            
            if (rdx_2 != 0)
                void* rbx_1 = *(rdx_2 + 0x30)
                
                if (rbx_1 != 0)
                    int32_t rax_8 = sub_14078ee20(arg1 + 0x188, rbx_1 + 0x30)
                    
                    if (rax_8 != 0xffffffff)
                        float zmm4[0x4] = data_143f57840
                        float temp0_4[0x4] = __mulps_xmmps_memps(
                            _mm_unpacklo_ps(
                                _mm_unpacklo_ps(*(rbx_1 + 0x44), (*(rbx_1 + 0x4c))[0].q), 
                                _mm_unpacklo_ps(*(rbx_1 + 0x48), 0)[0].q), 
                            data_143f578a0)
                        float temp0_9[0x4] = _mm_sub_ps(temp0_4, 
                            __mulps_xmmps_memps(
                                _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(temp0_4, 
                                    data_143f57890))), 
                                data_143f57880))
                        zmm1 = data_142dc1870
                        zmm0 = __andps_xmmxud_memxud(temp0_9, data_143f57850)
                        float zmm2[0x4] = __orps_xmmxud_memxud(
                            __andps_xmmxud_memxud(temp0_9, data_143f57870), data_143f57860)
                        float temp0_13[0x4] = _mm_cmpeq_ps(zmm4, zmm0, 1)
                        zmm0 = data_142dc1850
                        float temp0_14[0x4] = _mm_sub_ps(zmm2, temp0_9)
                        float temp0_15[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        float temp0_16[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
                        zmm2 = _mm_and_ps(temp0_14 ^ temp0_9, temp0_13) ^ temp0_9
                        float temp0_18[0x4] = _mm_mul_ps(zmm2, zmm2)
                        float temp0_20[0x4] = _mm_add_ps(_mm_mul_ps(temp0_15, temp0_18), temp0_16)
                        float temp0_21[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                        float temp0_23[0x4] = _mm_add_ps(_mm_mul_ps(temp0_20, temp0_18), temp0_21)
                        float temp0_24[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                        float temp0_26[0x4] = _mm_add_ps(_mm_mul_ps(temp0_23, temp0_18), temp0_24)
                        float temp0_27[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        float temp0_28[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
                        float temp0_30[0x4] = _mm_add_ps(_mm_mul_ps(temp0_26, temp0_18), temp0_27)
                        zmm0 = data_142dc1860
                        float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x55), temp0_18)
                        float temp0_33[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
                        float temp0_34[0x4] = _mm_mul_ps(temp0_30, temp0_18)
                        float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_33)
                        float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_28)
                        zmm1 = data_142dc1880
                        float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                        float temp0_38[0x4] = _mm_mul_ps(temp0_35, temp0_18)
                        float temp0_39[0x4] = _mm_mul_ps(temp0_36, zmm2)
                        float temp0_40[0x4] = _mm_add_ps(temp0_38, temp0_37)
                        float temp0_41[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                        float temp0_43[0x4] = _mm_add_ps(_mm_mul_ps(temp0_40, temp0_18), temp0_41)
                        float temp0_44[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        float temp0_45[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
                        float temp0_49[0x4] = _mm_add_ps(
                            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_43, temp0_18), temp0_44), 
                                temp0_18), 
                            temp0_45)
                        zmm1 =
                            _mm_and_ps(data_143f57830 ^ data_143f57810, temp0_13) ^ data_143f57810
                        int64_t rax_9 = *(arg1 + 0x360)
                        float temp0_51[0x4] = _mm_mul_ps(temp0_49, zmm1)
                        int64_t rcx_8 = sx.q(rax_8) << 6
                        float temp0_52[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
                        float temp0_53[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
                        int32_t var_ec_1 = 0
                        float zmm15[0x4] = *(rcx_8 + rax_9)
                        float zmm13[0x4] = *(rcx_8 + rax_9 + 0x10)
                        temp0_53[0] = temp0_53[0] * temp0_39[0]
                        int32_t var_dc_1 = 0
                        temp0_51[0] = temp0_51[0] * temp0_52[0]
                        int32_t var_cc_1 = 0
                        float temp0_54[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x55)
                        float temp0_55[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xaa)
                        temp0_54[0] = temp0_54[0] * temp0_51[0]
                        temp0_54[0] = temp0_54[0] * temp0_53[0]
                        temp0_55[0] = temp0_55[0] * temp0_52[0]
                        temp0_55[0] = temp0_55[0] * temp0_39[0]
                        temp0_54[0] = temp0_54[0] - temp0_55[0]
                        temp0_55[0] = temp0_55[0] * temp0_54[0]
                        temp0_51[0] = temp0_51[0] * temp0_53[0]
                        temp0_53[0] = temp0_53[0] * temp0_52[0]
                        zmm7 = temp0_51 ^ data_142d3f780
                        temp0_52[0] = temp0_52[0] * temp0_53[0]
                        temp0_52[0] = temp0_52[0] * temp0_55[0]
                        temp0_55[0] = temp0_55[0] + temp0_52[0]
                        temp0_55[0] = temp0_55[0] * temp0_51[0]
                        temp0_54[0] = temp0_54[0] * temp0_55[0]
                        float var_f8[0x4]
                        var_f8[0] = temp0_54[0]
                        temp0_54[0] = temp0_54[0] * temp0_53[0]
                        float zmm5[0x4] = *(rcx_8 + rax_9 + 0x20)
                        temp0_53[0] = temp0_53[0] + temp0_54[0]
                        zmm0 = *(rbx_1 + 0x38)
                        float zmm3[0x4] = *(rbx_1 + 0x3c)
                        temp0_54[0] = temp0_54[0] - temp0_52[0]
                        zmm4 = *(rbx_1 + 0x40)
                        float temp0_56[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xe1)
                        float zmm11[0x4] = temp0_53 ^ data_142d3f780
                        temp0_56[0] = temp0_51[0]
                        float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xc6)
                        temp0_57[0] = temp0_39[0]
                        float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc9)
                        float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
                        float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0)
                        float temp0_61[0x4] = _mm_mul_ps(temp0_59, zmm13)
                        float temp0_62[0x4] = _mm_mul_ps(temp0_60, zmm15)
                        float temp0_64[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), zmm5)
                        float temp0_65[0x4] = _mm_add_ps(temp0_61, temp0_62)
                        float temp0_66[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
                        float temp0_67[0x4] = _mm_add_ps(temp0_65, temp0_64)
                        zmm6 = *(rcx_8 + rax_9 + 0x30)
                        float temp0_69[0x4] = _mm_add_ps(temp0_67, _mm_mul_ps(temp0_66, zmm6))
                        float var_e8[0x4]
                        var_e8[0] = temp0_54[0]
                        float temp0_70[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xe1)
                        temp0_70[0] = temp0_55[0]
                        float temp0_71[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xc6)
                        temp0_71[0] = zmm7[0]
                        float temp0_72[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xc9)
                        float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0)
                        float temp0_74[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)
                        float temp0_75[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
                        float temp0_77[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xff), zmm6)
                        float temp0_78[0x4] = _mm_mul_ps(temp0_73, zmm15)
                        float temp0_79[0x4] = _mm_mul_ps(temp0_74, zmm5)
                        zmm7 = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_75, zmm13), temp0_78), 
                                temp0_79), 
                            temp0_77)
                        float var_d8[0x4]
                        var_d8[0] = zmm11[0]
                        float temp0_84[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
                        temp0_84[0] = temp0_54[0]
                        float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xc6)
                        temp0_85[0] = temp0_55[0]
                        float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xc9)
                        float temp0_87[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0x55)
                        float temp0_88[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0)
                        float temp0_89[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xaa)
                        float temp0_91[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xff), zmm6)
                        float temp0_92[0x4] = _mm_mul_ps(temp0_88, zmm15)
                        float temp0_93[0x4] = _mm_mul_ps(temp0_87, zmm13)
                        float temp0_94[0x4] = _mm_mul_ps(temp0_89, zmm5)
                        zmm8 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_93, temp0_92), temp0_94), 
                            temp0_91)
                        float temp0_98[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                        temp0_98[0] = zmm3[0]
                        float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xc6)
                        temp0_99[0] = zmm4[0]
                        float temp0_100[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0x27)
                        temp0_100[0] = 0x3f800000
                        float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0x39)
                        float temp0_103[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0x55), zmm13)
                        float temp0_104[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0)
                        float temp0_105[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xaa)
                        float temp0_106[0x4] = _mm_mul_ps(temp0_104, zmm15)
                        float temp0_107[0x4] = _mm_mul_ps(temp0_105, zmm5)
                        float temp0_108[0x4] = _mm_add_ps(temp0_103, temp0_106)
                        float temp0_110[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xff), zmm6)
                        zmm6 = temp0_69
                        zmm9 = _mm_add_ps(_mm_add_ps(temp0_108, temp0_107), temp0_110)
        
        goto label_142313984
    
    int64_t rax_2 = *(arg1 + 0x360)
    int64_t rcx_3 = sx.q(rax_1) << 6
    zmm1 = *(rcx_3 + rax_2 + 0x10)
    *arg2 = *(rcx_3 + rax_2)
    zmm0 = *(rcx_3 + rax_2 + 0x20)
    arg2[1] = zmm1
    zmm1 = *(rcx_3 + rax_2 + 0x30)
    arg2[2] = zmm0
    arg2[3] = zmm1

return arg2
