// 函数: sub_141ed72b0
// 地址: 0x141ed72b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10 = arg2[0]
uint64_t result = zx.q(*(arg1 + 0x38a))
float zmm10[0x4] = arg4
float zmm11[0x4]
float var_68[0x4] = zmm11
float zmm12[0x4]
float var_78[0x4] = zmm12
float zmm13[0x4]
float var_88[0x4] = zmm13
float zmm14[0x4] = arg3

if ((result.b & 2) != 0)
    zmm12 = *(arg1 + 0x3a4)
    zmm11 = arg1[0x74].d
    zmm13 = arg1[0x75].d
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    zmm11[0] = zmm11[0] + zmm12[0]
    zmm11[0] = zmm11[0] + zmm13[0]

if ((result.b & 2) == 0 || zmm11[0] < 9.99999975e-05f)
    result.b = 0
else
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm11[0])
    float zmm0[0x4] = 0x3f800000
    zmm0[0] = 1f / temp0_1[0]
    zmm11[0] = zmm11[0] * zmm0[0]
    zmm12[0] = zmm12[0] * zmm0[0]
    zmm13[0] = zmm13[0] * zmm0[0]
    
    if ((result.b & 4) == 0)
        zmm10 = _mm_min_ss(temp0_1[0], zmm10[0])
    
    int64_t rax = *arg1
    float zmm6[0x4] = arg1[0x19].d
    float var_c0_1 = data_143dbb1f8[0]
    float var_bc_1 = data_143dbb1fc[0]
    float var_b8_1 = data_143dbb200[0]
    zmm0 = *(arg1 + 0xc4)
    float var_d8_1 = (*(arg1 + 0xcc))[0]
    zmm11[0] = zmm11[0] * zmm10[0]
    zmm12[0] = zmm12[0] * zmm10[0]
    zmm13[0] = zmm13[0] * zmm10[0]
    float arg_8 = zmm0[0]
    float var_d0_1 = zmm11[0]
    float var_cc_1 = zmm12[0]
    float var_c8_1 = zmm13[0]
    float rcx
    
    if ((*(rax + 0x788))() == 0)
        rcx = var_b8_1
        *(arg1 + 0xc4) = var_d0_1.q
        zmm0 = zx.o(var_c0_1.q)
        *(arg1 + 0xcc) = var_c8_1
    else
        bool cond:0_1 = zmm14[0] >= 9.99999975e-05f
        arg4 = *(arg1 + 0xc4)
        zmm0 = arg_8
        float zmm4_1[0x4] = arg1[0x19].d
        arg3 = *(arg1 + 0xcc)
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] + zmm0[0]
        zmm0 = var_d8_1
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm6[0] = zmm6[0] + zmm0[0]
        float temp0_3[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm6[0])
        zmm6 = arg_10
        zmm6[0] = zmm6[0] f* arg5
        temp0_3[0] = temp0_3[0] * zmm11[0]
        float temp0_4[0x4] = _mm_min_ss(zmm6[0], 0x3f800000)
        int128_t zmm15
        zmm15.d = 1f / arg_10
        arg4[0] = arg4[0] - temp0_3[0]
        temp0_3[0] = temp0_3[0] * zmm12[0]
        temp0_3[0] = temp0_3[0] * zmm13[0]
        arg4[0] = arg4[0] * temp0_4[0]
        arg4[0] = arg4[0] - arg4[0]
        zmm4_1[0] = zmm4_1[0] - temp0_3[0]
        arg3[0] = arg3[0] - temp0_3[0]
        zmm4_1[0] = zmm4_1[0] * temp0_4[0]
        arg3[0] = arg3[0] * temp0_4[0]
        zmm4_1[0] = zmm4_1[0] - zmm4_1[0]
        arg3[0] = arg3[0] - arg3[0]
        *(arg1 + 0xc4) = (_mm_unpacklo_ps(arg4, zmm4_1[0].q)).q
        *(arg1 + 0xcc) = arg3[0]
        zmm11[0] = zmm11[0] f- *(arg1 + 0xc4)
        zmm12[0] = zmm12[0] f- arg1[0x19].d
        zmm13[0] = zmm13[0] f- *(arg1 + 0xcc)
        zmm11[0] = zmm11[0] f* zmm15.d
        zmm12[0] = zmm12[0] f* zmm15.d
        zmm13[0] = zmm13[0] f* zmm15.d
        
        if (cond:0_1)
            zmm11[0] = zmm11[0] * zmm11[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm13[0] = zmm13[0] * zmm13[0]
            zmm12[0] = zmm12[0] + zmm11[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm12[0] = zmm12[0] + zmm13[0]
            
            if (not(zmm12[0] <= zmm14[0]))
                zmm4_1 = 0x3f000000
                float temp0_6[0x4] = _mm_rsqrt_ss(zmm12[0], zmm12[0])
                arg3 = 0x3f000000
                zmm12[0] = zmm12[0] * 0.5f
                temp0_6[0] = temp0_6[0] * temp0_6[0]
                zmm12[0] = zmm12[0] * temp0_6[0]
                arg3[0] = 0.5f - zmm12[0]
                temp0_6[0] = temp0_6[0] * arg3[0]
                temp0_6[0] = temp0_6[0] + temp0_6[0]
                temp0_6[0] = temp0_6[0] * temp0_6[0]
                zmm12[0] = zmm12[0] * temp0_6[0]
                zmm4_1[0] = 0.5f - zmm12[0]
                temp0_6[0] = temp0_6[0] * zmm4_1[0]
                temp0_6[0] = temp0_6[0] + temp0_6[0]
                temp0_6[0] = temp0_6[0] * zmm14[0]
                zmm11[0] = zmm11[0] * temp0_6[0]
                zmm12[0] = zmm12[0] * temp0_6[0]
                zmm13[0] = zmm13[0] * temp0_6[0]
            
            rcx = zmm13[0]
            float var_cc_3 = zmm12[0]
            zmm0 = zx.o(zmm11[0].q)
        else
            rcx = data_143dbb200[0]
            float var_cc_2 = data_143dbb1fc[0]
            zmm0 = zx.o(data_143dbb1f8[0].q)
    
    *arg7 = zmm10[0]
    *arg6 = zmm0.q
    *(arg6 + 8) = rcx
    result.b = 1

return result
