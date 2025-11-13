// 函数: sub_140631b10
// 地址: 0x140631b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = *arg1
uint32_t arg_10 = zmm0[0]
bool cond:0 = _mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f
uint32_t zmm13[0x4] = *(arg1 + 8)

if (not(cond:0))
    if (_mm_and_ps(*(arg1 + 4), 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_140631bbb
    
    if (_mm_and_ps(zmm13, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_140631bbb
    
    uint32_t zmm4[0x4] = *(arg1 + 0x14)
    bool cond:1_1 = _mm_and_ps(arg1[1].d, 0x7fffffff)[0] f> 9.99999994e-09f
    uint32_t zmm3[0x4] = *(arg1 + 0x18)
    
    if (cond:1_1)
        goto label_140631bbb
    
    if (_mm_and_ps(zmm4, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_140631bbb
    
    if (_mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_140631bbb
    
    zmm4 = *(arg1 + 0x24)
    bool cond:2_1 = _mm_and_ps(arg1[2].d, 0x7fffffff)[0] f> 9.99999994e-09f
    zmm3 = *(arg1 + 0x28)
    
    if (cond:2_1)
        goto label_140631bbb
    
    if (_mm_and_ps(zmm4, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_140631bbb
    
    if (_mm_and_ps(zmm3, 0x7fffffff)[0] f<= 9.99999994e-09f)
        goto label_140631bcf
    
    goto label_140631bbb

label_140631bbb:
uint32_t zmm6_1[0x4]
uint32_t zmm7_1[0x4]
uint32_t zmm8_1[0x4]
uint32_t zmm9_1[0x4]
uint32_t zmm10_1[0x4]
uint32_t zmm11_1[0x4]
uint32_t zmm12_1[0x4]
uint32_t zmm13_1[0x4]
uint32_t zmm14_1[0x4]
uint32_t zmm15_1[0x4]
zmm0, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
    sub_14062b8d0(arg1)
uint32_t zmm1[0x4]

if (zmm0[0] f!= 0f)
    uint32_t zmm2_1[0x4] = *(arg1 + 0x28)
    uint32_t zmm3_1[0x4] = zmm13_1
    zmm1 = *(arg1 + 0x38)
    uint32_t zmm5_1[0x4] = zmm13_1
    uint32_t var_18_1[0x4] = zmm6_1
    uint32_t zmm4_1[0x4] = zmm13_1
    zmm13_1 = *(arg1 + 0x14)
    zmm6_1 = zmm2_1
    uint32_t var_28_1[0x4] = zmm7_1
    uint32_t var_38_1[0x4] = zmm8_1
    uint32_t var_48_1[0x4] = zmm9_1
    zmm9_1 = *(arg1 + 0x3c)
    uint32_t var_58_1[0x4] = zmm10_1
    zmm10_1 = *(arg1 + 0x2c)
    uint32_t var_68_1[0x4] = zmm11_1
    zmm11_1 = *(arg1 + 0x1c)
    zmm10_1[0] = zmm10_1[0] f* zmm1[0]
    uint32_t var_78_1[0x4] = zmm12_1
    zmm12_1 = *(arg1 + 0x18)
    zmm7_1 = zmm12_1
    uint32_t var_98_1[0x4] = zmm14_1
    zmm14_1 = *(arg1 + 0xc)
    zmm8_1 = zmm12_1
    uint32_t var_a8_1[0x4] = zmm15_1
    zmm6_1[0] = zmm6_1[0] f* zmm9_1[0]
    zmm7_1[0] = zmm7_1[0] f* zmm9_1[0]
    zmm6_1[0] = zmm6_1[0] f- zmm10_1[0]
    zmm8_1[0] = zmm8_1[0] f* zmm10_1[0]
    zmm3_1[0] = zmm3_1[0] f* zmm9_1[0]
    zmm11_1[0] = zmm11_1[0] f* zmm1[0]
    zmm13_1[0] = zmm13_1[0] f* zmm6_1[0]
    zmm7_1[0] = zmm7_1[0] f- zmm11_1[0]
    zmm5_1[0] = zmm5_1[0] f* zmm10_1[0]
    zmm4_1[0] = zmm4_1[0] f* zmm11_1[0]
    zmm11_1[0] = zmm11_1[0] f* zmm2_1[0]
    zmm8_1[0] = zmm8_1[0] f- zmm11_1[0]
    zmm14_1[0] = zmm14_1[0] f* zmm1[0]
    zmm3_1[0] = zmm3_1[0] f- zmm14_1[0]
    zmm14_1[0] = zmm14_1[0] f* zmm2_1[0]
    zmm2_1 = *(arg1 + 0x34)
    zmm5_1[0] = zmm5_1[0] f- zmm14_1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm8_1[0]
    zmm14_1[0] = zmm14_1[0] f* zmm12_1[0]
    zmm12_1 = *(arg1 + 0x24)
    zmm4_1[0] = zmm4_1[0] f- zmm14_1[0]
    zmm12_1[0] = zmm12_1[0] f* zmm7_1[0]
    zmm13_1[0] = zmm13_1[0] f- zmm12_1[0]
    zmm12_1[0] = zmm12_1[0] f* zmm3_1[0]
    zmm13_1[0] = zmm13_1[0] f+ zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm5_1[0]
    uint32_t var_bc_1 = zmm13_1[0]
    zmm15_1 = *(arg1 + 4)
    zmm15_1[0] = zmm15_1[0] f* zmm6_1[0]
    zmm15_1[0] = zmm15_1[0] f- zmm12_1[0]
    zmm13_1[0] = zmm13_1[0] f* zmm3_1[0]
    zmm15_1[0] = zmm15_1[0] f+ zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm4_1[0]
    uint32_t arg_20 = zmm15_1[0]
    zmm15_1 = *(arg1 + 4)
    zmm15_1[0] = zmm15_1[0] f* zmm7_1[0]
    zmm15_1[0] = zmm15_1[0] f- zmm13_1[0]
    zmm13_1[0] = zmm13_1[0] f* zmm5_1[0]
    zmm15_1[0] = zmm15_1[0] f+ zmm2_1[0]
    uint32_t var_c8_1 = zmm15_1[0]
    zmm15_1 = *(arg1 + 4)
    zmm15_1[0] = zmm15_1[0] f* zmm8_1[0]
    zmm15_1[0] = zmm15_1[0] f- zmm13_1[0]
    zmm13_1 = arg1[3].d
    zmm2_1 = arg_10
    zmm2_1[0] = zmm2_1[0] f* var_bc_1
    zmm0 = arg1[1].d
    zmm0[0] = zmm0[0] f* arg_20
    zmm12_1[0] = zmm12_1[0] f* zmm4_1[0]
    zmm2_1[0] = zmm2_1[0] f- zmm0[0]
    zmm15_1[0] = zmm15_1[0] f+ zmm12_1[0]
    zmm1 = arg1[2].d
    zmm1[0] = zmm1[0] f* var_c8_1
    zmm13_1[0] = zmm13_1[0] f* zmm15_1[0]
    zmm2_1[0] = zmm2_1[0] f+ zmm1[0]
    uint32_t var_c4_1 = zmm15_1[0]
    zmm15_1 = 0x3f800000
    zmm13_1[0] = zmm13_1[0] f* zmm8_1[0]
    zmm2_1[0] = zmm2_1[0] f- zmm13_1[0]
    zmm0 = arg_20
    zmm15_1[0] = 1f f/ zmm2_1[0]
    zmm2_1 = arg1[1].d
    zmm0[0] = zmm0[0] f* zmm15_1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm6_1[0]
    uint32_t arg_18 = zmm15_1[0]
    arg_20 = (zmm0 ^ 0x80000000)[0]
    zmm0 = var_c8_1
    zmm0[0] = zmm0[0] f* zmm15_1[0]
    uint32_t var_c8_2 = zmm0[0]
    zmm0 = var_c4_1
    zmm0[0] = zmm0[0] f* zmm15_1[0]
    uint32_t var_c4_2 = (zmm0 ^ 0x80000000)[0]
    zmm0 = arg1[2].d
    zmm0[0] = zmm0[0] f* zmm7_1[0]
    zmm2_1[0] = zmm2_1[0] f- zmm0[0]
    zmm2_1[0] = zmm2_1[0] f+ zmm13_1[0]
    zmm13_1[0] = zmm13_1[0] f* zmm5_1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm15_1[0]
    uint32_t var_b8_1 = (zmm2_1 ^ 0x80000000)[0]
    zmm2_1 = arg_10
    zmm2_1[0] = zmm2_1[0] f* zmm6_1[0]
    zmm6_1 = arg1[2].d
    zmm6_1[0] = zmm6_1[0] f* zmm3_1[0]
    zmm2_1[0] = zmm2_1[0] f- zmm6_1[0]
    zmm2_1[0] = zmm2_1[0] f+ zmm13_1[0]
    zmm1 = zmm13_1
    zmm13_1 = arg_10
    zmm1[0] = zmm1[0] f* zmm4_1[0]
    zmm13_1[0] = zmm13_1[0] f* zmm8_1[0]
    zmm8_1 = arg_18
    zmm2_1[0] = zmm2_1[0] f* zmm15_1[0]
    zmm15_1 = arg_10
    zmm15_1[0] = zmm15_1[0] f* zmm7_1[0]
    uint32_t var_b4_1 = zmm2_1[0]
    zmm2_1 = arg1[1].d
    zmm2_1[0] = zmm2_1[0] f* zmm3_1[0]
    zmm3_1 = *(arg1 + 0x34)
    zmm15_1[0] = zmm15_1[0] f- zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm5_1[0]
    zmm15_1[0] = zmm15_1[0] f+ zmm1[0]
    zmm13_1[0] = zmm13_1[0] f- zmm2_1[0]
    zmm6_1[0] = zmm6_1[0] f* zmm4_1[0]
    zmm3_1[0] = zmm3_1[0] f* zmm10_1[0]
    zmm15_1[0] = zmm15_1[0] f* arg_18
    zmm13_1[0] = zmm13_1[0] f+ zmm6_1[0]
    zmm1 = *(arg1 + 0x24)
    zmm4_1 = zmm1
    zmm4_1[0] = zmm4_1[0] f* zmm9_1[0]
    zmm13_1[0] = zmm13_1[0] f* zmm8_1[0]
    uint32_t var_b0_1 = (zmm15_1 ^ 0x80000000)[0]
    zmm6_1 = *(arg1 + 0x14)
    zmm4_1[0] = zmm4_1[0] f- zmm3_1[0]
    zmm7_1 = arg1[3].d
    zmm6_1[0] = zmm6_1[0] f* zmm10_1[0]
    zmm3_1[0] = zmm3_1[0] f* zmm11_1[0]
    zmm6_1[0] = zmm6_1[0] f* zmm9_1[0]
    zmm12_1 = zmm4_1
    zmm12_1[0] = zmm12_1[0] f* zmm2_1[0]
    zmm6_1[0] = zmm6_1[0] f- zmm3_1[0]
    zmm1[0] = zmm1[0] f* zmm11_1[0]
    zmm6_1[0] = zmm6_1[0] f- zmm1[0]
    zmm6_1[0] = zmm6_1[0] f* arg1[2].d
    zmm12_1[0] = zmm12_1[0] f- zmm6_1[0]
    zmm6_1[0] = zmm6_1[0] f* zmm7_1[0]
    zmm0 = zmm3_1
    zmm0[0] = zmm0[0] f* zmm14_1[0]
    zmm12_1[0] = zmm12_1[0] f+ zmm6_1[0]
    zmm1 = *(arg1 + 4)
    zmm3_1 = zmm1
    zmm1[0] = zmm1[0] f* zmm9_1[0]
    zmm9_1 = arg_10
    zmm3_1[0] = zmm3_1[0] f* zmm10_1[0]
    zmm1[0] = zmm1[0] f- zmm0[0]
    zmm9_1[0] = zmm9_1[0] f* zmm4_1[0]
    zmm0 = *(arg1 + 0x24)
    zmm0[0] = zmm0[0] f* zmm14_1[0]
    zmm9_1[0] = zmm9_1[0] f* zmm6_1[0]
    zmm3_1[0] = zmm3_1[0] f- zmm0[0]
    zmm9_1[0] = zmm9_1[0] f* zmm6_1[0]
    zmm5_1 = arg1[1].d
    zmm1[0] = zmm1[0] f* arg1[2].d
    zmm1[0] = zmm1[0] f* zmm5_1[0]
    zmm9_1[0] = zmm9_1[0] f- zmm1[0]
    zmm3_1[0] = zmm3_1[0] f* zmm7_1[0]
    zmm0 = *(arg1 + 0x14)
    zmm9_1[0] = zmm9_1[0] f- zmm1[0]
    zmm0[0] = zmm0[0] f* zmm14_1[0]
    zmm9_1[0] = zmm9_1[0] f+ zmm3_1[0]
    zmm1 = *(arg1 + 4)
    zmm1[0] = zmm1[0] f* *(arg1 + 0x1c)
    zmm3_1[0] = zmm3_1[0] f* zmm5_1[0]
    zmm1[0] = zmm1[0] f- zmm0[0]
    zmm9_1[0] = zmm9_1[0] f* zmm8_1[0]
    zmm9_1[0] = zmm9_1[0] f- zmm3_1[0]
    zmm12_1[0] = zmm12_1[0] f* zmm8_1[0]
    zmm3_1 = *(arg1 + 0x34)
    zmm11_1 = zmm9_1 ^ data_142d3f780
    zmm0 = zmm1
    zmm1[0] = zmm1[0] f* arg1[2].d
    zmm0[0] = zmm0[0] f* zmm7_1[0]
    zmm7_1 = *(arg1 + 0x14)
    zmm9_1[0] = zmm9_1[0] f+ zmm1[0]
    zmm1 = *(arg1 + 0x24)
    zmm7_1[0] = zmm7_1[0] f* *(arg1 + 0x38)
    zmm9_1[0] = zmm9_1[0] f+ zmm0[0]
    zmm7_1[0] = zmm7_1[0] f* *(arg1 + 0x28)
    zmm3_1[0] = zmm3_1[0] f* *(arg1 + 0x28)
    zmm4_1 = zmm1
    zmm4_1[0] = zmm4_1[0] f* *(arg1 + 0x38)
    zmm9_1[0] = zmm9_1[0] f* zmm8_1[0]
    zmm4_1[0] = zmm4_1[0] f- zmm3_1[0]
    zmm9_1[0] = zmm9_1[0] f* zmm8_1[0]
    zmm3_1[0] = zmm3_1[0] f* *(arg1 + 0x18)
    zmm7_1[0] = zmm7_1[0] f- zmm3_1[0]
    zmm1[0] = zmm1[0] f* *(arg1 + 0x18)
    zmm15_1 = *(arg1 + 8)
    zmm7_1[0] = zmm7_1[0] f- zmm1[0]
    zmm15_1[0] = zmm15_1[0] f* *(arg1 + 0x14)
    zmm4_1[0] = zmm4_1[0] f* zmm5_1[0]
    zmm7_1[0] = zmm7_1[0] f* arg1[2].d
    zmm7_1[0] = zmm7_1[0] f* arg1[3].d
    zmm5_1 = *(arg1 + 8)
    zmm4_1[0] = zmm4_1[0] f- zmm7_1[0]
    zmm5_1[0] = zmm5_1[0] f* zmm3_1[0]
    zmm4_1[0] = zmm4_1[0] f+ zmm7_1[0]
    zmm1 = *(arg1 + 4)
    zmm2_1 = zmm1
    zmm3_1 = zmm1
    zmm2_1[0] = zmm2_1[0] f* *(arg1 + 0x38)
    zmm3_1[0] = zmm3_1[0] f* *(arg1 + 0x28)
    zmm4_1[0] = zmm4_1[0] f* arg_18
    zmm2_1[0] = zmm2_1[0] f- zmm5_1[0]
    zmm0 = zmm5_1
    zmm5_1 = arg_10
    zmm0[0] = zmm0[0] f* *(arg1 + 0x24)
    zmm5_1[0] = zmm5_1[0] f* zmm4_1[0]
    zmm8_1 = zmm4_1 ^ 0x80000000
    zmm4_1 = arg_10
    zmm3_1[0] = zmm3_1[0] f- zmm0[0]
    zmm4_1[0] = zmm4_1[0] f* zmm7_1[0]
    zmm2_1[0] = zmm2_1[0] f* arg1[2].d
    zmm2_1[0] = zmm2_1[0] f* arg1[1].d
    zmm3_1[0] = zmm3_1[0] f* arg1[3].d
    zmm5_1[0] = zmm5_1[0] f- zmm2_1[0]
    zmm3_1[0] = zmm3_1[0] f* arg1[1].d
    zmm5_1[0] = zmm5_1[0] f+ zmm3_1[0]
    zmm1 = *(arg1 + 4)
    zmm1[0] = zmm1[0] f* *(arg1 + 0x18)
    zmm4_1[0] = zmm4_1[0] f- zmm3_1[0]
    zmm5_1[0] = zmm5_1[0] f* arg_18
    zmm1[0] = zmm1[0] f- zmm15_1[0]
    uint32_t var_c0_1 = zmm1[0]
    zmm0 = var_c0_1
    zmm0[0] = zmm0[0] f* arg1[3].d
    zmm1 = arg_10
    zmm3_1 = var_c0_1
    zmm3_1[0] = zmm3_1[0] f* arg1[2].d
    zmm1[0] = zmm1[0] f* zmm7_1[0]
    zmm4_1[0] = zmm4_1[0] f+ zmm3_1[0]
    zmm1[0] = zmm1[0] f- zmm2_1[0]
    zmm2_1 = var_bc_1
    zmm1[0] = zmm1[0] f+ zmm0[0]
    zmm0 = arg_18
    zmm2_1[0] = zmm2_1[0] f* zmm0[0]
    zmm4_1[0] = zmm4_1[0] f* zmm0[0]
    *arg2 = zmm2_1[0]
    zmm1[0] = zmm1[0] f* zmm0[0]
    (*arg2)[1] = arg_20[0]
    (*arg2)[2] = var_c8_2[0]
    (*arg2)[3] = var_c4_2[0]
    arg2[1][0] = var_b8_1[0]
    (*arg2)[5] = var_b4_1[0]
    (*arg2)[6] = var_b0_1[0]
    (*arg2)[7] = zmm13_1[0]
    arg2[2][0] = zmm12_1[0]
    (*arg2)[9] = zmm11_1[0]
    (*arg2)[0xa] = zmm9_1[0]
    (*arg2)[0xb] = (zmm9_1 ^ 0x80000000)[0]
    arg2[3][0] = zmm8_1[0]
    (*arg2)[0xd] = zmm5_1[0]
    (*arg2)[0xe] = (zmm1 ^ 0x80000000)[0]
    (*arg2)[0xf] = zmm4_1[0]
else
label_140631bcf:
    zmm1 = data_14399f6f0
    *arg2 = data_14399f6e0
    zmm0 = data_14399f700
    arg2[1] = zmm1
    zmm1 = data_14399f710
    arg2[2] = zmm0
    arg2[3] = zmm1
return arg2
