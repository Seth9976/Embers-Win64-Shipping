// 函数: sub_1414a27e0
// 地址: 0x1414a27e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1413aab70(&data_143ec4c60, *(arg3 + 0x1548), 0, arg4)
float zmm2[0x4] = data_142d4cc00
float zmm3[0x4] = data_142d4cc20
float zmm5[0x4] = data_142d4cc30
float zmm10[0x4] = *(arg1 + 0xb0)
float zmm9[0x4] = *(arg1 + 0xa0)
float zmm12[0x4] = *(arg1 + 0xc0)
float zmm13[0x4] = *(arg1 + 0xd0)
float zmm6[0x4] = *(arg1 + 0x54)
zmm6[0] = zmm6[0] f- *(arg3 + 0x600)
float zmm7[0x4] = *(arg1 + 0x58)
zmm7[0] = zmm7[0] f- *(arg3 + 0x604)
float zmm11[0x4] = *(arg1 + 0x5c)
zmm11[0] = zmm11[0] f- *(arg3 + 0x608)
float zmm15[0x4] = 0x3f800000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_3[0x4] = _mm_mul_ps(temp0_1, zmm10)
int32_t var_12c = 0x3f800000
float temp0_4[0x4] = _mm_mul_ps(temp0_2, zmm12)
float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm9)
float temp0_8[0x4] = _mm_mul_ps(temp0, zmm9)
float temp0_9[0x4] = _mm_mul_ps(temp0_6, zmm9)
float temp0_10[0x4] = _mm_add_ps(temp0_7, temp0_3)
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm13)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), zmm10)
float temp0_15[0x4] = _mm_add_ps(temp0_10, temp0_4)
float temp0_16[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_18[0x4] = _mm_add_ps(temp0_8, temp0_14)
float temp0_19[0x4] = _mm_mul_ps(temp0_17, zmm13)
float temp0_20[0x4] = _mm_mul_ps(temp0_16, zmm12)
float temp0_21[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
float temp0_22[0x4] = _mm_add_ps(temp0_15, temp0_12)
float temp0_23[0x4] = _mm_mul_ps(temp0_21, zmm10)
float temp0_24[0x4] = _mm_add_ps(temp0_18, temp0_20)
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm12)
float temp0_27[0x4] = _mm_add_ps(temp0_9, temp0_23)
float temp0_28[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_29[0x4] = _mm_add_ps(temp0_24, temp0_19)
float temp0_30[0x4] = _mm_mul_ps(temp0_28, zmm13)
float var_138[0x4]
var_138[0] = zmm6[0]
float temp0_31[0x4] = _mm_add_ps(temp0_27, temp0_26)
float temp0_32[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
temp0_32[0] = zmm7[0]
float temp0_33[0x4] = _mm_add_ps(temp0_31, temp0_30)
*(arg4 + 0x1e0) = temp0_22
*(arg4 + 0x1f0) = temp0_29
*(arg4 + 0x200) = temp0_33
float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
temp0_34[0] = zmm11[0]
float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
float temp0_38[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
float temp0_39[0x4] = _mm_mul_ps(temp0_36, zmm9)
float temp0_40[0x4] = _mm_mul_ps(temp0_37, zmm10)
float temp0_41[0x4] = _mm_mul_ps(temp0_38, zmm12)
float temp0_42[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xff)
float temp0_43[0x4] = _mm_add_ps(temp0_39, temp0_40)
float temp0_44[0x4] = _mm_mul_ps(temp0_42, zmm13)
*(arg4 + 0x210) = _mm_add_ps(_mm_add_ps(temp0_43, temp0_41), temp0_44)
*(arg4 + 0x220) = *(arg1 + 0x60)
*(arg4 + 0x230) = *(arg1 + 0x70)
*(arg4 + 0x240) = *(arg1 + 0x80)
*(arg4 + 0x250) = *(arg1 + 0x90)

if ((*(arg1 + 0x570) & 0x20) == 0)
    zmm3 = *(arg1 + 0x160)
else
    zmm3 = 0x3f800000

zmm2 = *(arg1 + 0x8f4)
float zmm0[0x4] = *(arg1 + 0x8f8)
float zmm1[0x4] = *(arg1 + 0x8fc)
float temp0_47[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
temp0_47[0] = zmm0[0]
float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xc6)
temp0_48[0] = zmm1[0]
float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0x27)
temp0_49[0] = zmm3[0]
float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0x39)
*(arg4 + 0x260) = temp0_50
int32_t rax = *(arg1 + 0x570)
float var_178[0x4] = temp0_50

if (((rax.b & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rax.b & 0x10) == 0) && (rax & 0x810) != 0x810)
    zmm15 = zx.o(0)

arg4[0x4e].d = zmm15[0]

if ((*(arg1 + 0x570) & 0x20) != 0)
    zmm11 = data_142d4cc20
    float (* i)[0x4] = nullptr
    zmm12 = data_142d4cc30
    zmm10 = data_142d4cc00
    zmm3 = *(arg3 + 0x608) ^ 0x80000000
    zmm1 = *(arg3 + 0x600) ^ 0x80000000
    zmm2 = *(arg3 + 0x604) ^ 0x80000000
    int32_t var_12c_1 = 0x3f800000
    float temp0_51[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
    temp0_35[0] = zmm1[0]
    float temp0_52[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xe1)
    float temp0_53[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
    temp0_52[0] = zmm2[0]
    float temp0_54[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
    float temp0_55[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
    float temp0_56[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
    float temp0_57[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xc6)
    temp0_58[0] = zmm3[0]
    float temp0_59[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xc9)
    float temp0_61[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)
    float temp0_65[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
    float temp0_66[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
    float temp0_67[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
    float temp0_68[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
    float temp0_69[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
    
    do
        int64_t rax_2 = *(arg1 + 0x578)
        float zmm4[0x4] = *(i + rax_2 + 0x10)
        float zmm8[0x4] = *(i + rax_2)
        zmm5 = *(i + rax_2 + 0x20)
        zmm6 = *(i + rax_2 + 0x30)
        float temp0_70[0x4] = __mulps_xmmps_memps(zmm8, temp0_53)
        float temp0_71[0x4] = __mulps_xmmps_memps(zmm8, temp0_56)
        float temp0_72[0x4] = __mulps_xmmps_memps(zmm8, temp0_63)
        float temp0_73[0x4] = _mm_mul_ps(zmm4, temp0_59)
        float temp0_74[0x4] = _mm_mul_ps(zmm5, temp0_65)
        float temp0_76[0x4] = _mm_add_ps(_mm_mul_ps(zmm8, temp0_61), temp0_73)
        float temp0_77[0x4] = _mm_mul_ps(zmm6, temp0_66)
        float temp0_78[0x4] = _mm_add_ps(temp0_76, temp0_74)
        float temp0_79[0x4] = __mulps_xmmps_memps(zmm5, temp0_54)
        float temp0_80[0x4] = _mm_add_ps(temp0_78, temp0_77)
        float temp0_81[0x4] = __mulps_xmmps_memps(zmm4, temp0_51)
        *(arg4 + i + 0x280) = temp0_80
        float temp0_82[0x4] = _mm_add_ps(temp0_70, temp0_81)
        float temp0_83[0x4] = _mm_mul_ps(zmm6, temp0_67)
        float temp0_84[0x4] = _mm_add_ps(temp0_82, temp0_79)
        float temp0_85[0x4] = __mulps_xmmps_memps(zmm5, temp0_57)
        float temp0_86[0x4] = __mulps_xmmps_memps(zmm5, temp0_64)
        float temp0_87[0x4] = _mm_add_ps(temp0_84, temp0_83)
        float temp0_88[0x4] = __mulps_xmmps_memps(zmm4, temp0_55)
        float temp0_89[0x4] = __mulps_xmmps_memps(zmm4, temp0_62)
        *(arg4 + i + 0x290) = temp0_87
        float temp0_90[0x4] = _mm_add_ps(temp0_71, temp0_88)
        float temp0_91[0x4] = _mm_mul_ps(zmm6, temp0_68)
        float temp0_92[0x4] = _mm_add_ps(temp0_72, temp0_89)
        float temp0_93[0x4] = _mm_mul_ps(zmm6, temp0_69)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_85)
        float temp0_95[0x4] = _mm_add_ps(temp0_92, temp0_86)
        float temp0_96[0x4] = _mm_add_ps(temp0_94, temp0_91)
        float temp0_97[0x4] = _mm_add_ps(temp0_95, temp0_93)
        *(arg4 + i + 0x2a0) = temp0_96
        *(arg4 + i + 0x2b0) = temp0_97
        int64_t rax_3 = *(arg1 + 0x588)
        *(arg4 + i + 0x400) = *(i + rax_3)
        *(arg4 + i + 0x410) = *(i + rax_3 + 0x10)
        *(arg4 + i + 0x420) = *(i + rax_3 + 0x20)
        *(arg4 + i + 0x430) = *(i + rax_3 + 0x30)
        i = &i[4]
    while (i s< 0x180)

arg4[0xb0] = *(data_143f10f68 + 0x50)
arg4[0xb1] = *(data_143f10f68 + 0x50)
arg4[0xb2] = *(data_143f10f68 + 0x50)
void* result = data_143f10f68
arg4[0xb3] = *(result + 0x50)

if ((*(arg1 + 0x570) & 0x80) != 0)
    void* rcx_5 = *(arg3 + 8)
    
    if (rcx_5 != 0)
        void* rax_7 = sub_1412278d0(rcx_5, *(arg3 + 0x1548), 0)
        
        if (rax_7 != 0)
            float (* rcx_6)[0x4] = *(rax_7 + 0xa8)
            *(arg4 + 0x120) = *rcx_6
            *(arg4 + 0x130) = rcx_6[1]
            *(arg4 + 0x140) = rcx_6[2]
            *(arg4 + 0x150) = rcx_6[3]
            *(arg4 + 0x160) = rcx_6[4]
            *(arg4 + 0x170) = rcx_6[5]
            *(arg4 + 0x180) = rcx_6[6]
            arg4[0x32].d = rcx_6[7][0]
            *(arg4 + 0x194) = (*rcx_6)[0x1d]
            arg4[0x33].d = (*rcx_6)[0x1e]
            arg4[0x34].d = rcx_6[8][0]
            *(arg4 + 0x1a4) = (*rcx_6)[0x21]
            arg4[0x35].d = (*rcx_6)[0x22]
            *(arg4 + 0x1ac) = (*rcx_6)[0x23]
            arg4[0x36].d = rcx_6[9][0]
            *(arg4 + 0x1b4) = (*rcx_6)[0x25]
            arg4[0x37].d = (*rcx_6)[0x26]
            *(arg4 + 0x1bc) = (*rcx_6)[0x27]
            arg4[0x38].d = rcx_6[0xa][0]
            *(arg4 + 0x1c4) = (*rcx_6)[0x29]
            arg4[0x39].d = (*rcx_6)[0x2a]
            *(arg4 + 0x1cc) = (*rcx_6)[0x2b]
            arg4[0x3a].d = rcx_6[0xb][0]
            *(arg4 + 0x1d4) = (*rcx_6)[0x2d]
            arg4[0x3b].d = (*rcx_6)[0x2e]
            *(arg4 + 0x1dc) = (*rcx_6)[0x2f]
        
        arg4[0xb0] = *(*(arg5 + 0x130) + 8)
        arg4[0xb1] = *(*(arg5 + 0x128) + 0x18)
        arg4[0xb2] = *(*(arg5 + 0x88) + 8)
        result = *(arg5 + 0x80)
        arg4[0xb3] = *(result + 0x18)

return result
