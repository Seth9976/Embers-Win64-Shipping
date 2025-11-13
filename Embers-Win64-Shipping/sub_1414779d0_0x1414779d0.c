// 函数: sub_1414779d0
// 地址: 0x1414779d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm14
int128_t var_a8 = zmm14
float zmm15[0x4]
float var_b8[0x4] = zmm15
int64_t result = sub_1414767a0(*arg1, arg2, arg3)
int64_t* rdx
int64_t* rbx_1
void* r14_1

if (result.b != 0)
    rdx = arg1[1]
    int64_t* rax = *rdx
    rbx_1 = *rax
    r14_1 = &rbx_1[sx.q(rax[1].d)]

if (result.b == 0 || rbx_1 == r14_1)
label_141477c2c:
    result.b = 0
else
    int32_t* rcx_1 = rdx[2]
    zmm15 = *rdx[3]
    float zmm1_1[0x4] = zmm15
    int64_t zmm2_1 = zmm15[0].q
    zmm1_1[0] = zmm1_1[0] f* *rcx_1
    zmm2_1.d = zmm2_1.d f* rcx_1[1]
    zmm15[0] = zmm15[0] f* rcx_1[2]
    float arg_8 = zmm1_1[0]
    int32_t var_128_1 = zmm2_1.d
    
    while (true)
        float zmm4_1[0x4] = *(arg3 + 8)
        float zmm6_1[0x4] = *arg2
        int32_t* rdx_2 = *(*rbx_1 + 8) + 0xc0
        char var_c8_1 = 1
        float zmm0_1[0x4] = rdx_2[6]
        float zmm7_1 = rdx_2[1]
        int64_t zmm3_1
        zmm3_1.d = (*(arg3 + 4)).d f+ zmm0_1[0]
        int128_t zmm9_1 = *rdx_2
        zmm4_1[0] = zmm4_1[0] + zmm0_1[0]
        float zmm8_1 = rdx_2[2]
        float zmm11_1 = zmm7_1 f+ zmm2_1.d
        zmm14.d = zmm9_1.d f+ zmm1_1[0]
        zmm1_1 = *arg2
        zmm2_1.d = (*arg3).d f+ zmm0_1[0]
        zmm4_1[0] = zmm4_1[0] f+ *(arg2 + 8)
        float zmm12_1 = zmm8_1 + zmm15[0]
        float var_104_1 = zmm11_1
        float var_108 = zmm14.d
        int64_t zmm5_1
        zmm5_1.d = zmm3_1.d f+ *(arg2 + 4)
        zmm6_1[0] = zmm6_1[0] f+ zmm2_1.d
        float var_e4_1 = zmm4_1[0]
        zmm1_1[0] = zmm1_1[0] f- zmm2_1.d
        zmm0_1 = *(arg2 + 8)
        zmm14.d = zmm14.d f- zmm9_1.d
        zmm2_1 = *(arg2 + 4)
        zmm0_1[0] = zmm0_1[0] - zmm4_1[0]
        zmm2_1.d = zmm2_1.d f- zmm3_1.d
        float var_100_1 = zmm12_1
        zmm11_1 = zmm11_1 - zmm7_1
        zmm12_1 = zmm12_1 - zmm8_1
        float var_f0_1 = zmm0_1[0]
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm6_1, zmm5_1)
        float temp0_2[0x4] = _mm_unpacklo_ps(zmm1_1, zmm2_1)
        float var_d8_1 = var_f0_1
        int64_t var_d4_1 = temp0_1.q
        int32_t var_118 = zmm14.d
        float var_114_1 = zmm11_1
        float var_110_1 = zmm12_1
        int64_t var_e0 = temp0_2.q
        float var_cc_1 = var_e4_1
        float var_124
        
        if (zmm14.d f== 0f)
            var_124 = 3.39999995e+38f
        else
            zmm0_1 = 0x3f800000
            zmm0_1[0] = 1f f/ zmm14.d
            var_124 = zmm0_1[0]
        
        if (zmm11_1 == 0f)
            int32_t var_120_2 = 0x7f7fc99e
        else
            zmm0_1 = 0x3f800000
            zmm0_1[0] = 1f / zmm11_1
            float var_120_1 = zmm0_1[0]
        
        if (zmm12_1 == 0f)
            int32_t var_11c_2 = 0x7f7fc99e
        else
            zmm0_1 = 0x3f800000
            zmm0_1[0] = 1f / zmm12_1
            float var_11c_1 = zmm0_1[0]
        
        if (sub_1409cb460(&var_e0, rdx_2, &var_108, &var_118, &var_124).b != 0)
            result.b = 1
            break
        
        zmm1_1 = arg_8
        rbx_1 = &rbx_1[1]
        zmm2_1 = var_128_1
        
        if (rbx_1 == r14_1)
            goto label_141477c2c

return result
