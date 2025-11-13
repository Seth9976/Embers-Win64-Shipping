// 函数: sub_1425cf960
// 地址: 0x1425cf960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t r15 = sx.q(arg2[1].d)
int64_t* r14 = arg2
arg5[1].d = 0

if (r15.d s> *(arg5 + 0xc))
    sub_140638cc0(arg5, r15.d)

arg6[1].d = 0

if (r15.d s> *(arg6 + 0xc))
    sub_140638cc0(arg6, r15.d)

int64_t rsi = sx.q(arg5[1].d)
int32_t rax = (rsi + r15).d
arg5[1].d = rax

if (rax s> *(arg5 + 0xc))
    sub_140638a00(arg5)

int64_t count = r15 * 0xc
memset(*arg5 + rsi * 0xc, 0, count)
int64_t rsi_1 = sx.q(arg6[1].d)
int32_t rax_2 = (rsi_1 + r15).d
arg6[1].d = rax_2

if (rax_2 s> *(arg6 + 0xc))
    sub_140638a00(arg6)

float result = memset(*arg6 + rsi_1 * 0xc, 0, count)

if (r15.d != 0)
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    float zmm8[0x4]
    float var_78_1[0x4] = zmm8
    float zmm11[0x4] = data_142e6da00
    float temp0_1[0x4] = _mm_rcp_ps(zmm11)
    float temp0_3[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm11, data_143f70830), data_143f70820, 2)
    float temp0_4[0x4] = _mm_mul_ps(temp0_1, temp0_1)
    float temp0_5[0x4] = _mm_add_ps(temp0_1, temp0_1)
    float temp0_7[0x4] = _mm_sub_ps(temp0_5, _mm_mul_ps(zmm11, temp0_4))
    float temp0_8[0x4] = _mm_mul_ps(temp0_7, temp0_7)
    float temp0_11[0x4] = _mm_sub_ps(_mm_add_ps(temp0_7, temp0_7), _mm_mul_ps(temp0_8, zmm11))
    
    do
        int64_t rdi_1 = r14[0x12]
        int64_t rsi_2 = *r14
        int64_t r14_1 = r14[2]
        int64_t r10_1 = *arg5
        int64_t r9 = *arg6
        int64_t i_1 = sx.q(i)
        int32_t* r11_1 = i_1 * 0x4c
        int64_t r8_2 = i_1 * 3
        int32_t rax_5 = *(r11_1 + rdi_1) - 1
        float zmm2[0x4]
        float zmm4_1[0x4]
        
        if (rax_5 u<= 7)
            float zmm1[0x4]
            
            switch (rax_5)
                case 1
                    goto label_1425d0535
                case 2
                    goto label_1425d0391
                case 3
                    goto label_1425d01ed
                case 4
                    goto label_1425d0049
                case 5
                    goto label_1425cfea2
                case 6
                    goto label_1425cfcf8
                case 7
                    zmm4_1 = *(r11_1 + rdi_1 + 0x38)
                    zmm1 = *(rsi_2 + (r8_2 << 2) + 4)
                    zmm2 = *(rsi_2 + (r8_2 << 2) + 8)
                    uint64_t rcx_10 = zx.q(*(r11_1 + rdi_1 + 0x12))
                    int32_t var_23c_1 = 0x3f800000
                    float var_248[0x4]
                    var_248[0] = (*(rsi_2 + (r8_2 << 2)))[0]
                    int32_t var_22c_1 = 0
                    int64_t rax_8 = *arg1
                    float temp0_12[0x4] = _mm_shuffle_ps(var_248, var_248, 0xe1)
                    temp0_12[0] = zmm1[0]
                    int64_t var_258_1 = 0
                    float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
                    int64_t rdx_4 = sx.q(*(rax_8 + (rcx_10 << 2)))
                    temp0_13[0] = zmm2[0]
                    float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
                    var_248 = temp0_14
                    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
                    float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xff)
                    float temp0_17[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
                    float temp0_18[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0)
                    float (* rdx_6)[0x4] = (rdx_4 << 6) + arg4
                    int32_t var_250_1 = 0
                    int64_t var_258_2 = 0
                    int32_t var_250_2 = 0
                    float temp0_19[0x4] = __mulps_xmmps_memps(temp0_15, rdx_6[2])
                    float temp0_20[0x4] = __mulps_xmmps_memps(temp0_16, rdx_6[3])
                    float temp0_21[0x4] = __mulps_xmmps_memps(temp0_17, rdx_6[1])
                    float temp0_22[0x4] = __mulps_xmmps_memps(temp0_18, *rdx_6)
                    float temp0_25[0x4] =
                        _mm_add_ps(_mm_add_ps(temp0_19, temp0_20), _mm_add_ps(temp0_21, temp0_22))
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                    temp0_25[0] = temp0_25[0] * zmm4_1[0]
                    temp0_27[0] = temp0_27[0] * zmm4_1[0]
                    temp0_25[0] = temp0_25[0] f+ *(r10_1 + (r8_2 << 2))
                    temp0_26[0] = temp0_26[0] * zmm4_1[0]
                    temp0_27[0] = temp0_27[0] f+ *(r10_1 + (r8_2 << 2) + 8)
                    temp0_26[0] = temp0_26[0] f+ *(r10_1 + (r8_2 << 2) + 4)
                    *(r10_1 + (r8_2 << 2)) = temp0_25[0]
                    *(r10_1 + (r8_2 << 2) + 8) = temp0_27[0]
                    *(r10_1 + (r8_2 << 2) + 4) = temp0_26[0]
                    zmm1 = *(r14_1 + (r8_2 << 2) + 4)
                    float var_238[0x4]
                    var_238[0] = (*(r14_1 + (r8_2 << 2)))[0]
                    zmm2 = *(r14_1 + (r8_2 << 2) + 8)
                    float temp0_28[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
                    temp0_28[0] = zmm1[0]
                    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc6)
                    temp0_29[0] = zmm2[0]
                    float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc9)
                    var_238 = temp0_30
                    float temp0_32[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_30, temp0_30, 0x55), rdx_6[1])
                    float temp0_34[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_30, temp0_30, 0), *rdx_6)
                    float temp0_36[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_30, temp0_30, 0xaa), rdx_6[2])
                    float temp0_41[0x4] = _mm_add_ps(_mm_add_ps(temp0_32, temp0_34), 
                        _mm_add_ps(temp0_36, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_30, temp0_30, 0xff), 
                                rdx_6[3])))
                    temp0_41[0] = temp0_41[0] * zmm4_1[0]
                    temp0_41[0] = temp0_41[0] f+ *(r9 + (r8_2 << 2))
                    *(r9 + (r8_2 << 2)) = temp0_41[0]
                    float temp0_42[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x55)
                    float temp0_43[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xaa)
                    temp0_43[0] = temp0_43[0] * zmm4_1[0]
                    temp0_42[0] = temp0_42[0] * zmm4_1[0]
                    temp0_43[0] = temp0_43[0] f+ *(r9 + (r8_2 << 2) + 8)
                    temp0_42[0] = temp0_42[0] f+ *(r9 + (r8_2 << 2) + 4)
                    *(r9 + (r8_2 << 2) + 8) = temp0_43[0]
                    *(r9 + (r8_2 << 2) + 4) = temp0_42[0]
                label_1425cfcf8:
                    zmm4_1 = *(r11_1 + rdi_1 + 0x34)
                    zmm1 = *(rsi_2 + (r8_2 << 2) + 4)
                    zmm2 = *(rsi_2 + (r8_2 << 2) + 8)
                    uint64_t rcx_11 = zx.q(*(r11_1 + rdi_1 + 0x10))
                    int32_t var_21c_1 = 0x3f800000
                    float var_228[0x4]
                    var_228[0] = (*(rsi_2 + (r8_2 << 2)))[0]
                    int32_t var_20c_1 = 0
                    int64_t rax_10 = *arg1
                    float temp0_44[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
                    temp0_44[0] = zmm1[0]
                    int64_t var_258_3 = 0
                    float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xc6)
                    int64_t rdx_7 = sx.q(*(rax_10 + (rcx_11 << 2)))
                    temp0_45[0] = zmm2[0]
                    float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc9)
                    var_228 = temp0_46
                    float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xff)
                    float temp0_48[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xaa)
                    float temp0_49[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0x55)
                    float temp0_50[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0)
                    float (* rdx_9)[0x4] = (rdx_7 << 6) + arg4
                    int32_t var_250_3 = 0
                    int64_t var_258_4 = 0
                    int32_t var_250_4 = 0
                    float temp0_51[0x4] = __mulps_xmmps_memps(temp0_47, rdx_9[3])
                    float temp0_52[0x4] = __mulps_xmmps_memps(temp0_48, rdx_9[2])
                    float temp0_53[0x4] = __mulps_xmmps_memps(temp0_49, rdx_9[1])
                    float temp0_54[0x4] = __mulps_xmmps_memps(temp0_50, *rdx_9)
                    float temp0_57[0x4] =
                        _mm_add_ps(_mm_add_ps(temp0_51, temp0_52), _mm_add_ps(temp0_53, temp0_54))
                    float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)
                    float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa)
                    temp0_57[0] = temp0_57[0] * zmm4_1[0]
                    temp0_59[0] = temp0_59[0] * zmm4_1[0]
                    temp0_57[0] = temp0_57[0] f+ *(r10_1 + (r8_2 << 2))
                    temp0_58[0] = temp0_58[0] * zmm4_1[0]
                    temp0_59[0] = temp0_59[0] f+ *(r10_1 + (r8_2 << 2) + 8)
                    temp0_58[0] = temp0_58[0] f+ *(r10_1 + (r8_2 << 2) + 4)
                    *(r10_1 + (r8_2 << 2)) = temp0_57[0]
                    *(r10_1 + (r8_2 << 2) + 8) = temp0_59[0]
                    *(r10_1 + (r8_2 << 2) + 4) = temp0_58[0]
                    zmm1 = *(r14_1 + (r8_2 << 2) + 4)
                    float var_218[0x4]
                    var_218[0] = (*(r14_1 + (r8_2 << 2)))[0]
                    zmm2 = *(r14_1 + (r8_2 << 2) + 8)
                    float temp0_60[0x4] = _mm_shuffle_ps(var_218, var_218, 0xe1)
                    temp0_60[0] = zmm1[0]
                    float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc6)
                    temp0_61[0] = zmm2[0]
                    float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xc9)
                    var_218 = temp0_62
                    float temp0_64[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), rdx_9[2])
                    float temp0_66[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_62, temp0_62, 0xff), rdx_9[3])
                    float temp0_68[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), rdx_9[1])
                    float temp0_73[0x4] = _mm_add_ps(_mm_add_ps(temp0_64, temp0_66), 
                        _mm_add_ps(temp0_68, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_62, temp0_62, 0), *rdx_9)))
                    temp0_73[0] = temp0_73[0] * zmm4_1[0]
                    temp0_73[0] = temp0_73[0] f+ *(r9 + (r8_2 << 2))
                    *(r9 + (r8_2 << 2)) = temp0_73[0]
                    float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0x55)
                    float temp0_75[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xaa)
                    temp0_75[0] = temp0_75[0] * zmm4_1[0]
                    temp0_74[0] = temp0_74[0] * zmm4_1[0]
                    temp0_75[0] = temp0_75[0] f+ *(r9 + (r8_2 << 2) + 8)
                    temp0_74[0] = temp0_74[0] f+ *(r9 + (r8_2 << 2) + 4)
                    *(r9 + (r8_2 << 2) + 8) = temp0_75[0]
                    *(r9 + (r8_2 << 2) + 4) = temp0_74[0]
                label_1425cfea2:
                    zmm4_1 = *(r11_1 + rdi_1 + 0x30)
                    zmm1 = *(rsi_2 + (r8_2 << 2) + 4)
                    zmm2 = *(rsi_2 + (r8_2 << 2) + 8)
                    uint64_t rcx_12 = zx.q(*(r11_1 + rdi_1 + 0xe))
                    int32_t var_1fc_1 = 0x3f800000
                    float var_208[0x4]
                    var_208[0] = (*(rsi_2 + (r8_2 << 2)))[0]
                    int32_t var_1ec_1 = 0
                    int64_t rax_12 = *arg1
                    float temp0_76[0x4] = _mm_shuffle_ps(var_208, var_208, 0xe1)
                    temp0_76[0] = zmm1[0]
                    int64_t var_258_5 = 0
                    float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc6)
                    int64_t rdx_10 = sx.q(*(rax_12 + (rcx_12 << 2)))
                    temp0_77[0] = zmm2[0]
                    float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc9)
                    var_208 = temp0_78
                    float temp0_79[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xff)
                    float temp0_80[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xaa)
                    float temp0_81[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x55)
                    float temp0_82[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0)
                    float (* rdx_12)[0x4] = (rdx_10 << 6) + arg4
                    int32_t var_250_5 = 0
                    int64_t var_258_6 = 0
                    int32_t var_250_6 = 0
                    float temp0_83[0x4] = __mulps_xmmps_memps(temp0_79, rdx_12[3])
                    float temp0_84[0x4] = __mulps_xmmps_memps(temp0_80, rdx_12[2])
                    float temp0_85[0x4] = __mulps_xmmps_memps(temp0_81, rdx_12[1])
                    float temp0_86[0x4] = __mulps_xmmps_memps(temp0_82, *rdx_12)
                    float temp0_89[0x4] =
                        _mm_add_ps(_mm_add_ps(temp0_83, temp0_84), _mm_add_ps(temp0_85, temp0_86))
                    float temp0_90[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0x55)
                    float temp0_91[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0xaa)
                    temp0_89[0] = temp0_89[0] * zmm4_1[0]
                    temp0_91[0] = temp0_91[0] * zmm4_1[0]
                    temp0_89[0] = temp0_89[0] f+ *(r10_1 + (r8_2 << 2))
                    temp0_90[0] = temp0_90[0] * zmm4_1[0]
                    temp0_91[0] = temp0_91[0] f+ *(r10_1 + (r8_2 << 2) + 8)
                    temp0_90[0] = temp0_90[0] f+ *(r10_1 + (r8_2 << 2) + 4)
                    *(r10_1 + (r8_2 << 2)) = temp0_89[0]
                    *(r10_1 + (r8_2 << 2) + 8) = temp0_91[0]
                    *(r10_1 + (r8_2 << 2) + 4) = temp0_90[0]
                    zmm1 = *(r14_1 + (r8_2 << 2) + 4)
                    float var_1f8[0x4]
                    var_1f8[0] = (*(r14_1 + (r8_2 << 2)))[0]
                    zmm2 = *(r14_1 + (r8_2 << 2) + 8)
                    float temp0_92[0x4] = _mm_shuffle_ps(var_1f8, var_1f8, 0xe1)
                    temp0_92[0] = zmm1[0]
                    float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0xc6)
                    temp0_93[0] = zmm2[0]
                    float temp0_94[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0xc9)
                    var_1f8 = temp0_94
                    float temp0_96[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_94, temp0_94, 0xaa), rdx_12[2])
                    float temp0_98[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_94, temp0_94, 0xff), rdx_12[3])
                    float temp0_100[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_94, temp0_94, 0x55), rdx_12[1])
                    float temp0_105[0x4] = _mm_add_ps(_mm_add_ps(temp0_96, temp0_98), 
                        _mm_add_ps(temp0_100, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_94, temp0_94, 0), *rdx_12)))
                    temp0_105[0] = temp0_105[0] * zmm4_1[0]
                    temp0_105[0] = temp0_105[0] f+ *(r9 + (r8_2 << 2))
                    *(r9 + (r8_2 << 2)) = temp0_105[0]
                    float temp0_106[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0x55)
                    float temp0_107[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0xaa)
                    temp0_107[0] = temp0_107[0] * zmm4_1[0]
                    temp0_106[0] = temp0_106[0] * zmm4_1[0]
                    temp0_107[0] = temp0_107[0] f+ *(r9 + (r8_2 << 2) + 8)
                    temp0_106[0] = temp0_106[0] f+ *(r9 + (r8_2 << 2) + 4)
                    *(r9 + (r8_2 << 2) + 8) = temp0_107[0]
                    *(r9 + (r8_2 << 2) + 4) = temp0_106[0]
                label_1425d0049:
                    zmm4_1 = *(r11_1 + rdi_1 + 0x2c)
                    zmm1 = *(rsi_2 + (r8_2 << 2) + 4)
                    zmm2 = *(rsi_2 + (r8_2 << 2) + 8)
                    uint64_t rcx_13 = zx.q(*(r11_1 + rdi_1 + 0xc))
                    int32_t var_1dc_1 = 0x3f800000
                    float var_1e8[0x4]
                    var_1e8[0] = (*(rsi_2 + (r8_2 << 2)))[0]
                    int32_t var_1cc_1 = 0
                    int64_t rax_14 = *arg1
                    float temp0_108[0x4] = _mm_shuffle_ps(var_1e8, var_1e8, 0xe1)
                    temp0_108[0] = zmm1[0]
                    int64_t var_258_7 = 0
                    float temp0_109[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xc6)
                    int64_t rdx_13 = sx.q(*(rax_14 + (rcx_13 << 2)))
                    temp0_109[0] = zmm2[0]
                    float temp0_110[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xc9)
                    var_1e8 = temp0_110
                    float temp0_111[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0xff)
                    float temp0_112[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0xaa)
                    float temp0_113[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0x55)
                    float temp0_114[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0)
                    float (* rdx_15)[0x4] = (rdx_13 << 6) + arg4
                    int32_t var_250_7 = 0
                    int64_t var_258_8 = 0
                    int32_t var_250_8 = 0
                    float temp0_115[0x4] = __mulps_xmmps_memps(temp0_111, rdx_15[3])
                    float temp0_116[0x4] = __mulps_xmmps_memps(temp0_112, rdx_15[2])
                    float temp0_117[0x4] = __mulps_xmmps_memps(temp0_113, rdx_15[1])
                    float temp0_118[0x4] = __mulps_xmmps_memps(temp0_114, *rdx_15)
                    float temp0_121[0x4] = _mm_add_ps(_mm_add_ps(temp0_115, temp0_116), 
                        _mm_add_ps(temp0_117, temp0_118))
                    float temp0_122[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0x55)
                    float temp0_123[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0xaa)
                    temp0_121[0] = temp0_121[0] * zmm4_1[0]
                    temp0_123[0] = temp0_123[0] * zmm4_1[0]
                    temp0_121[0] = temp0_121[0] f+ *(r10_1 + (r8_2 << 2))
                    temp0_122[0] = temp0_122[0] * zmm4_1[0]
                    temp0_123[0] = temp0_123[0] f+ *(r10_1 + (r8_2 << 2) + 8)
                    temp0_122[0] = temp0_122[0] f+ *(r10_1 + (r8_2 << 2) + 4)
                    *(r10_1 + (r8_2 << 2)) = temp0_121[0]
                    *(r10_1 + (r8_2 << 2) + 8) = temp0_123[0]
                    *(r10_1 + (r8_2 << 2) + 4) = temp0_122[0]
                    zmm1 = *(r14_1 + (r8_2 << 2) + 4)
                    float var_1d8[0x4]
                    var_1d8[0] = (*(r14_1 + (r8_2 << 2)))[0]
                    zmm2 = *(r14_1 + (r8_2 << 2) + 8)
                    float temp0_124[0x4] = _mm_shuffle_ps(var_1d8, var_1d8, 0xe1)
                    temp0_124[0] = zmm1[0]
                    float temp0_125[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0xc6)
                    temp0_125[0] = zmm2[0]
                    float temp0_126[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0xc9)
                    var_1d8 = temp0_126
                    float temp0_128[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_126, temp0_126, 0xff), rdx_15[3])
                    float temp0_130[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_126, temp0_126, 0xaa), rdx_15[2])
                    float temp0_132[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_126, temp0_126, 0x55), rdx_15[1])
                    float temp0_137[0x4] = _mm_add_ps(_mm_add_ps(temp0_128, temp0_130), 
                        _mm_add_ps(temp0_132, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_126, temp0_126, 0), *rdx_15)))
                    temp0_137[0] = temp0_137[0] * zmm4_1[0]
                    temp0_137[0] = temp0_137[0] f+ *(r9 + (r8_2 << 2))
                    *(r9 + (r8_2 << 2)) = temp0_137[0]
                    float temp0_138[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0x55)
                    float temp0_139[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xaa)
                    temp0_139[0] = temp0_139[0] * zmm4_1[0]
                    temp0_138[0] = temp0_138[0] * zmm4_1[0]
                    temp0_139[0] = temp0_139[0] f+ *(r9 + (r8_2 << 2) + 8)
                    temp0_138[0] = temp0_138[0] f+ *(r9 + (r8_2 << 2) + 4)
                    *(r9 + (r8_2 << 2) + 8) = temp0_139[0]
                    *(r9 + (r8_2 << 2) + 4) = temp0_138[0]
                label_1425d01ed:
                    zmm4_1 = *(r11_1 + rdi_1 + 0x28)
                    zmm1 = *(rsi_2 + (r8_2 << 2) + 4)
                    zmm2 = *(rsi_2 + (r8_2 << 2) + 8)
                    uint64_t rcx_14 = zx.q(*(r11_1 + rdi_1 + 0xa))
                    int32_t var_1bc_1 = 0x3f800000
                    float var_1c8[0x4]
                    var_1c8[0] = (*(rsi_2 + (r8_2 << 2)))[0]
                    int32_t var_1ac_1 = 0
                    int64_t rax_16 = *arg1
                    float temp0_140[0x4] = _mm_shuffle_ps(var_1c8, var_1c8, 0xe1)
                    temp0_140[0] = zmm1[0]
                    int64_t var_258_9 = 0
                    float temp0_141[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xc6)
                    int64_t rdx_16 = sx.q(*(rax_16 + (rcx_14 << 2)))
                    temp0_141[0] = zmm2[0]
                    float temp0_142[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xc9)
                    var_1c8 = temp0_142
                    float temp0_143[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xff)
                    float temp0_144[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xaa)
                    float temp0_145[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0x55)
                    float temp0_146[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0)
                    float (* rdx_18)[0x4] = (rdx_16 << 6) + arg4
                    int32_t var_250_9 = 0
                    int64_t var_258_10 = 0
                    int32_t var_250_10 = 0
                    float temp0_147[0x4] = __mulps_xmmps_memps(temp0_143, rdx_18[3])
                    float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, rdx_18[2])
                    float temp0_149[0x4] = __mulps_xmmps_memps(temp0_145, rdx_18[1])
                    float temp0_150[0x4] = __mulps_xmmps_memps(temp0_146, *rdx_18)
                    float temp0_153[0x4] = _mm_add_ps(_mm_add_ps(temp0_147, temp0_148), 
                        _mm_add_ps(temp0_149, temp0_150))
                    float temp0_154[0x4] = _mm_shuffle_ps(temp0_153, temp0_153, 0x55)
                    float temp0_155[0x4] = _mm_shuffle_ps(temp0_153, temp0_153, 0xaa)
                    temp0_153[0] = temp0_153[0] * zmm4_1[0]
                    temp0_155[0] = temp0_155[0] * zmm4_1[0]
                    temp0_153[0] = temp0_153[0] f+ *(r10_1 + (r8_2 << 2))
                    temp0_154[0] = temp0_154[0] * zmm4_1[0]
                    temp0_155[0] = temp0_155[0] f+ *(r10_1 + (r8_2 << 2) + 8)
                    temp0_154[0] = temp0_154[0] f+ *(r10_1 + (r8_2 << 2) + 4)
                    *(r10_1 + (r8_2 << 2)) = temp0_153[0]
                    *(r10_1 + (r8_2 << 2) + 8) = temp0_155[0]
                    *(r10_1 + (r8_2 << 2) + 4) = temp0_154[0]
                    zmm1 = *(r14_1 + (r8_2 << 2) + 4)
                    float var_1b8[0x4]
                    var_1b8[0] = (*(r14_1 + (r8_2 << 2)))[0]
                    zmm2 = *(r14_1 + (r8_2 << 2) + 8)
                    float temp0_156[0x4] = _mm_shuffle_ps(var_1b8, var_1b8, 0xe1)
                    temp0_156[0] = zmm1[0]
                    float temp0_157[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xc6)
                    temp0_157[0] = zmm2[0]
                    float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xc9)
                    var_1b8 = temp0_158
                    float temp0_160[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_158, temp0_158, 0xff), rdx_18[3])
                    float temp0_162[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_158, temp0_158, 0xaa), rdx_18[2])
                    float temp0_164[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_158, temp0_158, 0x55), rdx_18[1])
                    float temp0_169[0x4] = _mm_add_ps(_mm_add_ps(temp0_160, temp0_162), 
                        _mm_add_ps(temp0_164, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_158, temp0_158, 0), *rdx_18)))
                    temp0_169[0] = temp0_169[0] * zmm4_1[0]
                    temp0_169[0] = temp0_169[0] f+ *(r9 + (r8_2 << 2))
                    *(r9 + (r8_2 << 2)) = temp0_169[0]
                    float temp0_170[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0x55)
                    float temp0_171[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0xaa)
                    temp0_171[0] = temp0_171[0] * zmm4_1[0]
                    temp0_170[0] = temp0_170[0] * zmm4_1[0]
                    temp0_171[0] = temp0_171[0] f+ *(r9 + (r8_2 << 2) + 8)
                    temp0_170[0] = temp0_170[0] f+ *(r9 + (r8_2 << 2) + 4)
                    *(r9 + (r8_2 << 2) + 8) = temp0_171[0]
                    *(r9 + (r8_2 << 2) + 4) = temp0_170[0]
                label_1425d0391:
                    zmm4_1 = *(r11_1 + rdi_1 + 0x24)
                    zmm1 = *(rsi_2 + (r8_2 << 2) + 4)
                    zmm2 = *(rsi_2 + (r8_2 << 2) + 8)
                    uint64_t rcx_15 = zx.q(*(r11_1 + rdi_1 + 8))
                    int32_t var_19c_1 = 0x3f800000
                    float var_1a8[0x4]
                    var_1a8[0] = (*(rsi_2 + (r8_2 << 2)))[0]
                    int32_t var_18c_1 = 0
                    int64_t rax_18 = *arg1
                    float temp0_172[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0xe1)
                    temp0_172[0] = zmm1[0]
                    int64_t var_258_11 = 0
                    float temp0_173[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0xc6)
                    int64_t rdx_19 = sx.q(*(rax_18 + (rcx_15 << 2)))
                    temp0_173[0] = zmm2[0]
                    float temp0_174[0x4] = _mm_shuffle_ps(temp0_173, temp0_173, 0xc9)
                    var_1a8 = temp0_174
                    float temp0_175[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0xaa)
                    float temp0_176[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0xff)
                    float temp0_177[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0x55)
                    float temp0_178[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0)
                    float (* rdx_21)[0x4] = (rdx_19 << 6) + arg4
                    int32_t var_250_11 = 0
                    int64_t var_258_12 = 0
                    int32_t var_250_12 = 0
                    float temp0_179[0x4] = __mulps_xmmps_memps(temp0_175, rdx_21[2])
                    float temp0_180[0x4] = __mulps_xmmps_memps(temp0_176, rdx_21[3])
                    float temp0_181[0x4] = __mulps_xmmps_memps(temp0_177, rdx_21[1])
                    float temp0_182[0x4] = __mulps_xmmps_memps(temp0_178, *rdx_21)
                    float temp0_185[0x4] = _mm_add_ps(_mm_add_ps(temp0_179, temp0_180), 
                        _mm_add_ps(temp0_181, temp0_182))
                    float temp0_186[0x4] = _mm_shuffle_ps(temp0_185, temp0_185, 0x55)
                    float temp0_187[0x4] = _mm_shuffle_ps(temp0_185, temp0_185, 0xaa)
                    temp0_185[0] = temp0_185[0] * zmm4_1[0]
                    temp0_187[0] = temp0_187[0] * zmm4_1[0]
                    temp0_185[0] = temp0_185[0] f+ *(r10_1 + (r8_2 << 2))
                    temp0_186[0] = temp0_186[0] * zmm4_1[0]
                    temp0_187[0] = temp0_187[0] f+ *(r10_1 + (r8_2 << 2) + 8)
                    temp0_186[0] = temp0_186[0] f+ *(r10_1 + (r8_2 << 2) + 4)
                    *(r10_1 + (r8_2 << 2)) = temp0_185[0]
                    *(r10_1 + (r8_2 << 2) + 8) = temp0_187[0]
                    *(r10_1 + (r8_2 << 2) + 4) = temp0_186[0]
                    zmm1 = *(r14_1 + (r8_2 << 2) + 4)
                    float var_198[0x4]
                    var_198[0] = (*(r14_1 + (r8_2 << 2)))[0]
                    zmm2 = *(r14_1 + (r8_2 << 2) + 8)
                    float temp0_188[0x4] = _mm_shuffle_ps(var_198, var_198, 0xe1)
                    temp0_188[0] = zmm1[0]
                    float temp0_189[0x4] = _mm_shuffle_ps(temp0_188, temp0_188, 0xc6)
                    temp0_189[0] = zmm2[0]
                    float temp0_190[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xc9)
                    var_198 = temp0_190
                    float temp0_192[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_190, temp0_190, 0xff), rdx_21[3])
                    float temp0_194[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_190, temp0_190, 0xaa), rdx_21[2])
                    float temp0_196[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_190, temp0_190, 0x55), rdx_21[1])
                    float temp0_201[0x4] = _mm_add_ps(_mm_add_ps(temp0_192, temp0_194), 
                        _mm_add_ps(temp0_196, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_190, temp0_190, 0), *rdx_21)))
                    temp0_201[0] = temp0_201[0] * zmm4_1[0]
                    temp0_201[0] = temp0_201[0] f+ *(r9 + (r8_2 << 2))
                    *(r9 + (r8_2 << 2)) = temp0_201[0]
                    float temp0_202[0x4] = _mm_shuffle_ps(temp0_201, temp0_201, 0x55)
                    float temp0_203[0x4] = _mm_shuffle_ps(temp0_201, temp0_201, 0xaa)
                    temp0_203[0] = temp0_203[0] * zmm4_1[0]
                    temp0_202[0] = temp0_202[0] * zmm4_1[0]
                    temp0_203[0] = temp0_203[0] f+ *(r9 + (r8_2 << 2) + 8)
                    temp0_202[0] = temp0_202[0] f+ *(r9 + (r8_2 << 2) + 4)
                    *(r9 + (r8_2 << 2) + 8) = temp0_203[0]
                    *(r9 + (r8_2 << 2) + 4) = temp0_202[0]
                label_1425d0535:
                    zmm4_1 = *(r11_1 + rdi_1 + 0x20)
                    zmm1 = *(rsi_2 + (r8_2 << 2) + 4)
                    zmm2 = *(rsi_2 + (r8_2 << 2) + 8)
                    uint64_t rcx_16 = zx.q(*(r11_1 + rdi_1 + 6))
                    int32_t var_17c_1 = 0x3f800000
                    float var_188[0x4]
                    var_188[0] = (*(rsi_2 + (r8_2 << 2)))[0]
                    int32_t var_16c_1 = 0
                    int64_t rax_20 = *arg1
                    float temp0_204[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
                    temp0_204[0] = zmm1[0]
                    int64_t var_258_13 = 0
                    float temp0_205[0x4] = _mm_shuffle_ps(temp0_204, temp0_204, 0xc6)
                    int64_t rdx_22 = sx.q(*(rax_20 + (rcx_16 << 2)))
                    temp0_205[0] = zmm2[0]
                    float temp0_206[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0xc9)
                    var_188 = temp0_206
                    float temp0_207[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0xaa)
                    float temp0_208[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0xff)
                    float temp0_209[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0x55)
                    float temp0_210[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0)
                    float (* rdx_24)[0x4] = (rdx_22 << 6) + arg4
                    int32_t var_250_13 = 0
                    int64_t var_258_14 = 0
                    int32_t var_250_14 = 0
                    float temp0_211[0x4] = __mulps_xmmps_memps(temp0_207, rdx_24[2])
                    float temp0_212[0x4] = __mulps_xmmps_memps(temp0_208, rdx_24[3])
                    float temp0_213[0x4] = __mulps_xmmps_memps(temp0_209, rdx_24[1])
                    float temp0_214[0x4] = __mulps_xmmps_memps(temp0_210, *rdx_24)
                    float temp0_217[0x4] = _mm_add_ps(_mm_add_ps(temp0_211, temp0_212), 
                        _mm_add_ps(temp0_213, temp0_214))
                    float temp0_218[0x4] = _mm_shuffle_ps(temp0_217, temp0_217, 0x55)
                    float temp0_219[0x4] = _mm_shuffle_ps(temp0_217, temp0_217, 0xaa)
                    temp0_217[0] = temp0_217[0] * zmm4_1[0]
                    temp0_219[0] = temp0_219[0] * zmm4_1[0]
                    temp0_217[0] = temp0_217[0] f+ *(r10_1 + (r8_2 << 2))
                    temp0_218[0] = temp0_218[0] * zmm4_1[0]
                    temp0_219[0] = temp0_219[0] f+ *(r10_1 + (r8_2 << 2) + 8)
                    temp0_218[0] = temp0_218[0] f+ *(r10_1 + (r8_2 << 2) + 4)
                    *(r10_1 + (r8_2 << 2)) = temp0_217[0]
                    *(r10_1 + (r8_2 << 2) + 8) = temp0_219[0]
                    *(r10_1 + (r8_2 << 2) + 4) = temp0_218[0]
                    zmm1 = *(r14_1 + (r8_2 << 2) + 4)
                    float var_178[0x4]
                    var_178[0] = (*(r14_1 + (r8_2 << 2)))[0]
                    zmm2 = *(r14_1 + (r8_2 << 2) + 8)
                    float temp0_220[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
                    temp0_220[0] = zmm1[0]
                    float temp0_221[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0xc6)
                    temp0_221[0] = zmm2[0]
                    float temp0_222[0x4] = _mm_shuffle_ps(temp0_221, temp0_221, 0xc9)
                    var_178 = temp0_222
                    float temp0_224[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_222, temp0_222, 0xff), rdx_24[3])
                    float temp0_226[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_222, temp0_222, 0xaa), rdx_24[2])
                    float temp0_228[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_222, temp0_222, 0x55), rdx_24[1])
                    float temp0_233[0x4] = _mm_add_ps(_mm_add_ps(temp0_224, temp0_226), 
                        _mm_add_ps(temp0_228, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_222, temp0_222, 0), *rdx_24)))
                    temp0_233[0] = temp0_233[0] * zmm4_1[0]
                    temp0_233[0] = temp0_233[0] f+ *(r9 + (r8_2 << 2))
                    *(r9 + (r8_2 << 2)) = temp0_233[0]
                    float temp0_234[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0x55)
                    float temp0_235[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0xaa)
                    temp0_235[0] = temp0_235[0] * zmm4_1[0]
                    temp0_234[0] = temp0_234[0] * zmm4_1[0]
                    temp0_235[0] = temp0_235[0] f+ *(r9 + (r8_2 << 2) + 8)
                    temp0_234[0] = temp0_234[0] f+ *(r9 + (r8_2 << 2) + 4)
                    *(r9 + (r8_2 << 2) + 8) = temp0_235[0]
                    *(r9 + (r8_2 << 2) + 4) = temp0_234[0]
            
            zmm4_1 = *(r11_1 + rdi_1 + 0x1c)
            zmm1 = *(rsi_2 + (r8_2 << 2) + 4)
            zmm2 = *(rsi_2 + (r8_2 << 2) + 8)
            uint64_t rcx_17 = zx.q(*(r11_1 + rdi_1 + 4))
            int32_t var_15c_1 = 0x3f800000
            float var_168[0x4]
            var_168[0] = (*(rsi_2 + (r8_2 << 2)))[0]
            int32_t var_14c_1 = 0
            int64_t rax_22 = *arg1
            float temp0_236[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
            temp0_236[0] = zmm1[0]
            int64_t var_258_15 = 0
            float temp0_237[0x4] = _mm_shuffle_ps(temp0_236, temp0_236, 0xc6)
            int64_t rdx_25 = sx.q(*(rax_22 + (rcx_17 << 2)))
            temp0_237[0] = zmm2[0]
            float temp0_238[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0xc9)
            var_168 = temp0_238
            float temp0_239[0x4] = _mm_shuffle_ps(temp0_238, temp0_238, 0x55)
            float temp0_240[0x4] = _mm_shuffle_ps(temp0_238, temp0_238, 0)
            float temp0_241[0x4] = _mm_shuffle_ps(temp0_238, temp0_238, 0xaa)
            float temp0_242[0x4] = _mm_shuffle_ps(temp0_238, temp0_238, 0xff)
            float (* rdx_27)[0x4] = (rdx_25 << 6) + arg4
            int32_t var_250_15 = 0
            int64_t var_258_16 = 0
            int32_t var_250_16 = 0
            float temp0_243[0x4] = __mulps_xmmps_memps(temp0_239, rdx_27[1])
            float temp0_244[0x4] = __mulps_xmmps_memps(temp0_240, *rdx_27)
            float temp0_245[0x4] = __mulps_xmmps_memps(temp0_241, rdx_27[2])
            float temp0_246[0x4] = __mulps_xmmps_memps(temp0_242, rdx_27[3])
            float temp0_249[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_243, temp0_244), _mm_add_ps(temp0_245, temp0_246))
            float temp0_250[0x4] = _mm_shuffle_ps(temp0_249, temp0_249, 0x55)
            float temp0_251[0x4] = _mm_shuffle_ps(temp0_249, temp0_249, 0xaa)
            temp0_249[0] = temp0_249[0] * zmm4_1[0]
            temp0_251[0] = temp0_251[0] * zmm4_1[0]
            temp0_249[0] = temp0_249[0] f+ *(r10_1 + (r8_2 << 2))
            temp0_250[0] = temp0_250[0] * zmm4_1[0]
            temp0_251[0] = temp0_251[0] f+ *(r10_1 + (r8_2 << 2) + 8)
            temp0_250[0] = temp0_250[0] f+ *(r10_1 + (r8_2 << 2) + 4)
            *(r10_1 + (r8_2 << 2)) = temp0_249[0]
            *(r10_1 + (r8_2 << 2) + 8) = temp0_251[0]
            *(r10_1 + (r8_2 << 2) + 4) = temp0_250[0]
            zmm1 = *(r14_1 + (r8_2 << 2) + 4)
            float var_158[0x4]
            var_158[0] = (*(r14_1 + (r8_2 << 2)))[0]
            zmm2 = *(r14_1 + (r8_2 << 2) + 8)
            float temp0_252[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
            temp0_252[0] = zmm1[0]
            float temp0_253[0x4] = _mm_shuffle_ps(temp0_252, temp0_252, 0xc6)
            temp0_253[0] = zmm2[0]
            float temp0_254[0x4] = _mm_shuffle_ps(temp0_253, temp0_253, 0xc9)
            var_158 = temp0_254
            float temp0_256[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_254, temp0_254, 0xaa), rdx_27[2])
            float temp0_258[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_254, temp0_254, 0xff), rdx_27[3])
            float temp0_260[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_254, temp0_254, 0x55), rdx_27[1])
            float temp0_265[0x4] = _mm_add_ps(_mm_add_ps(temp0_256, temp0_258), 
                _mm_add_ps(temp0_260, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_254, temp0_254, 0), *rdx_27)))
            temp0_265[0] = temp0_265[0] * zmm4_1[0]
            temp0_265[0] = temp0_265[0] f+ *(r9 + (r8_2 << 2))
            *(r9 + (r8_2 << 2)) = temp0_265[0]
            float temp0_266[0x4] = _mm_shuffle_ps(temp0_265, temp0_265, 0x55)
            float temp0_267[0x4] = _mm_shuffle_ps(temp0_265, temp0_265, 0xaa)
            temp0_267[0] = temp0_267[0] * zmm4_1[0]
            temp0_266[0] = temp0_266[0] * zmm4_1[0]
            temp0_267[0] = temp0_267[0] f+ *(r9 + (r8_2 << 2) + 8)
            temp0_266[0] = temp0_266[0] f+ *(r9 + (r8_2 << 2) + 4)
            *(r9 + (r8_2 << 2) + 8) = temp0_267[0]
            *(r9 + (r8_2 << 2) + 4) = temp0_266[0]
        
        zmm2 = *(r10_1 + (r8_2 << 2) + 4)
        float temp0_268[0x4] =
            _mm_unpacklo_ps(*(r10_1 + (r8_2 << 2)), (*(r10_1 + (r8_2 << 2) + 8))[0].q)
        zmm8 = *arg3
        float temp0_269[0x4] = _mm_unpacklo_ps(zmm2, 0)
        float temp0_270[0x4] = __mulps_xmmps_memps(zmm8, data_143f70840)
        float temp0_272[0x4] =
            __subps_xmmps_memps(_mm_unpacklo_ps(temp0_268, temp0_269[0].q), arg3[1])
        float temp0_273[0x4] = _mm_shuffle_ps(temp0_270, temp0_270, 0xd2)
        float temp0_274[0x4] = _mm_shuffle_ps(temp0_270, temp0_270, 0xc9)
        zmm7 = __andps_xmmxud_memxud(temp0_272, data_143f707d0)
        float temp0_276[0x4] = _mm_shuffle_ps(temp0_270, temp0_270, 0xff)
        float temp0_278[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc9), temp0_273)
        float temp0_281[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd2), temp0_274), temp0_278)
        float temp0_282[0x4] = _mm_mul_ps(zmm11, temp0_4)
        float temp0_283[0x4] = _mm_add_ps(temp0_281, temp0_281)
        float temp0_284[0x4] = _mm_sub_ps(temp0_5, temp0_282)
        float temp0_285[0x4] = _mm_mul_ps(temp0_276, temp0_283)
        float temp0_286[0x4] = _mm_shuffle_ps(temp0_283, temp0_283, 0xd2)
        float temp0_287[0x4] = _mm_mul_ps(temp0_284, temp0_284)
        float temp0_288[0x4] = _mm_add_ps(temp0_284, temp0_284)
        float temp0_289[0x4] = _mm_mul_ps(temp0_286, temp0_274)
        float temp0_290[0x4] = _mm_add_ps(temp0_285, zmm7)
        float temp0_292[0x4] = _mm_sub_ps(temp0_288, _mm_mul_ps(temp0_287, zmm11))
        float temp0_295[0x4] =
            _mm_sub_ps(temp0_289, _mm_mul_ps(_mm_shuffle_ps(temp0_283, temp0_283, 0xc9), temp0_273))
        float zmm0_1[0x4] = _mm_and_ps(zx.o(0) ^ temp0_292, temp0_3) ^ temp0_292
        float temp0_298[0x4] = _mm_mul_ps(_mm_add_ps(temp0_295, temp0_290), zmm0_1)
        float temp0_299[0x4] = _mm_shuffle_ps(temp0_298, temp0_298, 0xaa)
        float temp0_300[0x4] = _mm_shuffle_ps(temp0_298, temp0_298, 0x55)
        float var_140_1 = temp0_299[0]
        *(r10_1 + (r8_2 << 2)) = (_mm_unpacklo_ps(temp0_298, temp0_300[0].q)).q
        *(r10_1 + (r8_2 << 2) + 8) = var_140_1
        float temp0_302[0x4] = __mulps_xmmps_memps(zmm8, data_143f70840)
        zmm0_1 = *(r9 + (r8_2 << 2) + 8)
        float zmm5_1[0x4] = *(r9 + (r8_2 << 2))
        float temp0_303[0x4] = _mm_unpacklo_ps(*(r9 + (r8_2 << 2) + 4), 0)
        float temp0_305[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, zmm0_1[0].q), temp0_303[0].q)
        float temp0_306[0x4] = _mm_shuffle_ps(temp0_302, temp0_302, 0xc9)
        float temp0_307[0x4] = _mm_shuffle_ps(temp0_305, temp0_305, 0xc9)
        float temp0_309[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_305, temp0_305, 0xd2), temp0_306)
        float temp0_310[0x4] = _mm_shuffle_ps(temp0_302, temp0_302, 0xd2)
        float temp0_312[0x4] = _mm_sub_ps(temp0_309, _mm_mul_ps(temp0_307, temp0_310))
        float temp0_313[0x4] = _mm_add_ps(temp0_312, temp0_312)
        float temp0_315[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_313, temp0_313, 0xc9), temp0_310)
        float temp0_316[0x4] = _mm_shuffle_ps(temp0_313, temp0_313, 0xd2)
        float temp0_318[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_302, temp0_302, 0xff), temp0_313)
        float temp0_319[0x4] = _mm_mul_ps(temp0_316, temp0_306)
        float temp0_320[0x4] = _mm_add_ps(temp0_318, temp0_305)
        float temp0_321[0x4] = _mm_sub_ps(temp0_319, temp0_315)
        zmm0_1 = _mm_and_ps(
            __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm11, data_143f70830), data_143f70820, 
                2), 
            zx.o(0) ^ temp0_11) ^ temp0_11
        float temp0_326[0x4] = _mm_mul_ps(_mm_add_ps(temp0_321, temp0_320), zmm0_1)
        result = _mm_shuffle_ps(temp0_326, temp0_326, 0xaa)[0]
        *(r9 + (r8_2 << 2)) =
            (_mm_unpacklo_ps(temp0_326, _mm_shuffle_ps(temp0_326, temp0_326, 0x55)[0].q)).q
        *(r9 + (r8_2 << 2) + 8) = result
        zmm6 = *(r9 + (r8_2 << 2) + 4)
        zmm7 = *(r9 + (r8_2 << 2))
        zmm8 = *(r9 + (r8_2 << 2) + 8)
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm6[0] = zmm6[0] + zmm7[0]
        zmm6[0] = zmm6[0] + zmm8[0]
        
        if (not(zmm6[0] <= 9.99999994e-09f))
            zmm4_1 = zx.o(0)
            zmm4_1[0] = 0x3f000000
            float temp0_330[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
            zmm6[0] = zmm6[0] * 0.5f
            temp0_330[0] = temp0_330[0] * temp0_330[0]
            zmm6[0] = zmm6[0] * temp0_330[0]
            zmm4_1[0] = zmm4_1[0] - zmm6[0]
            temp0_330[0] = temp0_330[0] * zmm4_1[0]
            temp0_330[0] = temp0_330[0] + temp0_330[0]
            temp0_330[0] = temp0_330[0] * temp0_330[0]
            zmm6[0] = zmm6[0] * temp0_330[0]
            zmm4_1[0] = 0.5f - zmm6[0]
            temp0_330[0] = temp0_330[0] * zmm4_1[0]
            temp0_330[0] = temp0_330[0] + temp0_330[0]
            temp0_330[0] = temp0_330[0] * zmm7[0]
            temp0_330[0] = temp0_330[0] * zmm6[0]
            temp0_330[0] = temp0_330[0] * zmm8[0]
            *(r9 + (r8_2 << 2)) = (_mm_unpacklo_ps(temp0_330, temp0_330[0].q)).q
            result = temp0_330[0]
            *(r9 + (r8_2 << 2) + 8) = result
        
        r14 = arg2
        i += 1
    while (i u< r15.d)

return result
