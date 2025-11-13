// 函数: sub_1414b9130
// 地址: 0x1414b9130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = data_14395f4d0
int64_t rax = *arg3
float zmm6[0x4]

if (*(arg1 + 0x22) u> 0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x20))
    
    if ((*(*r12 + 8))(r12) == 0)
        void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_3 = &rcx_3[5]
        
        if (rax_3 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_3[5]
        
        *(arg2 + 0x30) = rax_3
        void** rax_4 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_4 = rcx_3
        *(arg2 + 8) = &rcx_3[1]
        rcx_3[1] = 0
        *rcx_3 = &data_142da77c8
        rcx_3[2] = rax
        rcx_3[3].d = r13_1
        rcx_3[4] = r12

if (*(arg1 + 0x24) != 0xffff)
    zmm6 = sub_14077caf0(arg2, arg3, arg1 + 0x24, *(arg4 + 0x5078))

float var_38[0x4] = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
float var_198[0x4]
float zmm0[0x4]
float zmm2[0x4]

if (*(arg1 + 0x2a) u> 0)
    zmm6 = *(arg4 + 0x484)
    *(arg4 + 0x490)
    *(arg4 + 0x4a4)
    *(arg4 + 0x4b4)
    *(arg4 + 0x4a0)
    *(arg4 + 0x4b0)
    *(arg4 + 0x498)
    float var_148_1[0x4] = *(arg4 + 0x480)
    *(arg4 + 0x4a8)
    float var_138_1[0x4] = *(arg4 + 0x488)
    zmm0 = *(arg4 + 0x48c)
    *(arg4 + 0x4b8)
    *(arg4 + 0x49c)
    *(arg4 + 0x494)
    int32_t var_108[0x10]
    int32_t* rax_7
    float zmm6_1[0x4]
    int32_t zmm10_1
    int32_t zmm11_1
    int32_t zmm12_1
    int32_t zmm13_1
    int32_t zmm14_1
    int32_t zmm15_1
    rax_7, zmm6_1, zmm7, zmm8, zmm9, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
        sub_1414c53c0(arg4 + 0x280, &var_108)
    zmm2 = *rax_7
    float zmm4_1[0x4] = *(rax_7 + 0x10)
    float zmm5_1[0x4] = *(rax_7 + 0x20)
    float var_118_1[0x4] = *(rax_7 + 0x30)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    temp0_1[0] = zmm6_1[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_3[0] = zmm7[0]
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
    temp0_5[0] = zmm8[0]
    float temp0_6[0x4] = _mm_shuffle_ps(var_148_1, var_148_1, 0xe1)
    temp0_6[0] = zmm9[0]
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
    float temp0_8[0x4] = _mm_mul_ps(temp0_2, temp0_7)
    float temp0_9[0x4] = _mm_shuffle_ps(var_138_1, var_138_1, 0xe1)
    temp0_9[0] = zmm12_1
    float var_188_1[0x4] = temp0_7
    float temp0_10[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
    temp0_10[0] = zmm15_1
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
    temp0_11[0] = zmm10_1
    float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    temp0_12[0] = zmm13_1
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
    temp0_15[0] = zmm11_1
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
    temp0_16[0] = zmm14_1
    float temp0_18[0x4] = _mm_mul_ps(temp0_13, temp0_17)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
    float temp0_20[0x4] = _mm_mul_ps(temp0_4, temp0_19)
    float temp0_21[0x4] = _mm_add_ps(temp0_8, temp0_18)
    var_198 = temp0_17
    temp0_14[0] = (*(arg4 + 0x4ac))[0]
    float var_178_1[0x4] = temp0_19
    float zmm0_1[0x4] = *(arg4 + 0x4bc)
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
    temp0_22[0] = zmm0_1[0]
    float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float temp0_24[0x4] = _mm_add_ps(temp0_21, temp0_20)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x39)
    float temp0_26[0x4] = _mm_mul_ps(temp0_23, temp0_25)
    float temp0_27[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    float temp0_28[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    float temp0_29[0x4] = _mm_mul_ps(temp0_27, temp0_7)
    float temp0_30[0x4] = _mm_add_ps(temp0_24, temp0_26)
    float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_19)
    float var_168_1[0x4] = temp0_25
    float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), temp0_17)
    var_198 = temp0_30
    float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_17)
    float temp0_36[0x4] = _mm_add_ps(temp0_33, temp0_29)
    float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), temp0_25)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), temp0_7)
    float temp0_41[0x4] = _mm_add_ps(temp0_36, temp0_31)
    float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), temp0_19)
    float temp0_44[0x4] = _mm_add_ps(temp0_35, temp0_40)
    float temp0_45[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_46[0x4] = _mm_add_ps(temp0_41, temp0_38)
    float temp0_47[0x4] = _mm_mul_ps(temp0_45, temp0_25)
    float var_188_2[0x4] = temp0_46
    float var_178_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_44, temp0_43), temp0_47)
    float temp0_50[0x4] = _mm_shuffle_ps(var_118_1, var_118_1, 0)
    float temp0_51[0x4] = _mm_shuffle_ps(var_118_1, var_118_1, 0x55)
    float temp0_52[0x4] = _mm_mul_ps(temp0_50, temp0_17)
    float temp0_53[0x4] = _mm_shuffle_ps(var_118_1, var_118_1, 0xaa)
    float temp0_54[0x4] = _mm_mul_ps(temp0_51, temp0_7)
    float temp0_55[0x4] = _mm_mul_ps(temp0_53, temp0_19)
    float temp0_56[0x4] = _mm_shuffle_ps(var_118_1, var_118_1, 0xff)
    float temp0_57[0x4] = _mm_add_ps(temp0_52, temp0_54)
    float temp0_58[0x4] = _mm_mul_ps(temp0_56, temp0_25)
    float var_168_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_57, temp0_55), temp0_58)
    sub_14077c730(arg2, arg3, arg1 + 0x26, &var_198, 0)

if (*(arg1 + 0x30) u> 0)
    float zmm4[0x4] = *(arg4 + 0x4a50)
    zmm0 = *(arg4 + 0x49b0)
    zmm8 = *(arg4 + 0x4990)
    zmm7 = *(arg4 + 0x49a0)
    zmm9 = *(arg4 + 0x49c0)
    zmm0[0] = zmm0[0] f- *(arg4 + 0x4d30)
    float zmm3[0x4] = zmm0[1]
    zmm3[0] = zmm3[0] f- *(arg4 + 0x4d34)
    float temp0_61[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
    float temp0_62[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    zmm0[0] = zmm0[0]
    float temp0_63[0x4] = _mm_mul_ps(temp0_62, zmm7)
    zmm2 = *(arg4 + 0x4a60)
    float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm8)
    float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm9)
    float temp0_68[0x4] = _mm_add_ps(temp0_63, temp0_65)
    float temp0_69[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
    temp0_69[0] = zmm3[0]
    float temp0_70[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm7)
    float temp0_73[0x4] = _mm_mul_ps(temp0_70, zmm8)
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xe1)
    float temp0_75[0x4] = _mm_mul_ps(temp0_61, temp0_74)
    float temp0_76[0x4] = _mm_add_ps(temp0_72, temp0_73)
    float var_178_4[0x4] = temp0_74
    float temp0_77[0x4] = _mm_add_ps(temp0_68, temp0_75)
    float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), temp0_74)
    float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
    float temp0_82[0x4] = _mm_add_ps(temp0_77, temp0_67)
    float temp0_83[0x4] = _mm_add_ps(temp0_76, temp0_79)
    var_198 = temp0_82
    float temp0_84[0x4] = _mm_add_ps(temp0_83, temp0_81)
    zmm2 = *(arg4 + 0x4a70)
    float temp0_85[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_86[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_87[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float var_188_3[0x4] = temp0_84
    float temp0_88[0x4] = _mm_mul_ps(temp0_86, zmm8)
    float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_74)
    float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
    float temp0_95[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_85, zmm7), temp0_88), temp0_89), temp0_91)
    zmm2 = *(arg4 + 0x4a80)
    float temp0_96[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_97[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_98[0x4] = _mm_mul_ps(temp0_96, zmm7)
    float temp0_99[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_100[0x4] = _mm_mul_ps(temp0_97, zmm8)
    float temp0_101[0x4] = _mm_mul_ps(temp0_99, temp0_74)
    float temp0_102[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float temp0_103[0x4] = _mm_add_ps(temp0_98, temp0_100)
    float temp0_104[0x4] = _mm_mul_ps(temp0_102, zmm9)
    float var_178_5[0x4] = temp0_95
    float var_168_3[0x4] = _mm_add_ps(_mm_add_ps(temp0_103, temp0_101), temp0_104)
    sub_14077c730(arg2, arg3, arg1 + 0x2c, &var_198, 0)

void* arg_28
void* r14 = arg_28

if (*(arg1 + 0x36) u> 0)
    void* r9_3 = r14 + 0x10
    void* rax_8 = *(r9_3 + 0x100)
    
    if (rax_8 != 0)
        r9_3 = rax_8
    
    sub_14077c9b0(arg2, arg3, arg1 + 0x32, r9_3, *(r14 + 0x120), 0)

if (*r14 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *"fff?"

arg_28.d = zmm0[0]
sub_140741e30(arg2, arg3, arg1 + 0x38, &arg_28, 0)
int32_t rcx_13 = data_1439b7080
int32_t rax_10

if (rcx_13 s>= 1)
    rax_10 = 0x10
    
    if (rcx_13 s< 0x10)
        rax_10 = rcx_13
else
    rax_10 = 1

arg_28.d = rax_10
return sub_140741e30(arg2, arg3, arg1 + 0x3e, &arg_28, 0)
