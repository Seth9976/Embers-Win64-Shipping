// 函数: sub_1422386c0
// 地址: 0x1422386c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = data_143dbb0c0
int64_t* rdi = arg4
float zmm5[0x4] = data_143dbb0d0
float zmm3[0x4] = *(*(arg1 + 0x10) + 0x20)
zmm3[0] = zmm3[0] f* *arg1
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
temp0[0] = temp0[0] f* arg1[1]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
temp0_1[0] = temp0_1[0] f* arg1[2]

if (temp0[0] <= 0f)
    if (temp0_1[0] <= 0f)
        zmm2 = data_143306310
    else
        zmm2 = data_143306330
else if (not(temp0_1[0] > 0f))
    zmm2 = data_143306320

*arg4 = zmm2[0]
arg4[1] = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
arg4[2] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
zmm3[0] = zmm3[0] * temp0[0]
arg4[3] = _mm_shuffle_ps(zmm2, zmm2, 0xff)[0]
zmm3[0] = zmm3[0] * temp0_1[0]
arg4[4] = zmm5[0]
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
bool cond:0 = zmm3[0] >= 0f
arg4[5] = temp0_4[0]
arg4[6] = temp0_6[0]
float (* result)[0x4]

if (cond:0)
    result = sub_140a54cc0(arg2)
else
    result = Concurrency::details::VirtualProcessor::GetExecutingContext(arg2)

if (result == 0)
    result.b = 0
else
    *(arg3 + 0x20) = result
    float zmm1[0x4] = arg1[9]
    zmm2 = arg1[0xa]
    arg3[1] = arg1[8][0]
    arg3[3] = zmm2[0]
    arg3[2] = zmm1[0]
    result = *(arg1 + 0x10)
    float zmm7[0x4] = *(rdi + 0xc)
    float zmm8[0x4] = *rdi
    float zmm9[0x4] = *(rdi + 4)
    float zmm10[0x4] = rdi[1].d
    float zmm11[0x4] = *result
    zmm8[0] = zmm8[0] * zmm11[0]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
    zmm7[0] = zmm7[0] * temp0_7[0]
    float temp0_8[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
    zmm9[0] = zmm9[0] * temp0_8[0]
    zmm7[0] = zmm7[0] - zmm8[0]
    float temp0_9[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
    zmm10[0] = zmm10[0] * temp0_9[0]
    zmm9[0] = zmm9[0] * temp0_7[0]
    zmm7[0] = zmm7[0] - zmm9[0]
    float zmm13[0x4] = result[1]
    zmm9[0] = zmm9[0] * temp0_9[0]
    float temp0_10[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
    zmm7[0] = zmm7[0] - zmm10[0]
    zmm9[0] = zmm9[0] * zmm11[0]
    zmm7[0] = zmm7[0] * zmm11[0]
    *(rdi + 0xc) = zmm7[0]
    zmm8[0] = zmm8[0] * temp0_7[0]
    zmm8[0] = zmm8[0] + zmm7[0]
    zmm10[0] = zmm10[0] * temp0_8[0]
    zmm8[0] = zmm8[0] + zmm9[0]
    zmm10[0] = zmm10[0] * temp0_7[0]
    zmm10[0] = zmm10[0] * zmm11[0]
    zmm8[0] = zmm8[0] - zmm10[0]
    temp0_8[0] = temp0_8[0] * zmm7[0]
    temp0_8[0] = temp0_8[0] * zmm8[0]
    zmm9[0] = zmm9[0] + temp0_8[0]
    *rdi = zmm8[0]
    temp0_9[0] = temp0_9[0] * zmm7[0]
    temp0_9[0] = temp0_9[0] * zmm8[0]
    zmm10[0] = zmm10[0] + temp0_9[0]
    zmm9[0] = zmm9[0] + zmm10[0]
    zmm10[0] = zmm10[0] + temp0_8[0]
    zmm9[0] = zmm9[0] - temp0_9[0]
    float temp0_11[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
    zmm10[0] = zmm10[0] - zmm9[0]
    *(rdi + 4) = zmm9[0]
    rdi[1].d = zmm10[0]
    *(rdi + 0x14) = temp0_11[0]
    rdi[3].d = temp0_10[0]
    rdi[2].d = zmm13[0]
    zmm13[0] = zmm13[0] f* *arg1
    rdi[2].d = zmm13[0]
    float zmm0[0x4] = arg1[1]
    zmm0[0] = zmm0[0] f* *(rdi + 0x14)
    *(rdi + 0x14) = zmm0[0]
    zmm1 = arg1[2]
    zmm1[0] = zmm1[0] f* rdi[3].d
    rdi[3].d = zmm1[0]
    
    if (*arg3 != 4)
        result.b = 0
    else if ((_fpclass(_mm_cvtps_pd(arg3[1][0].q)[0].q).d & 0x207) != 0)
        result.b = 0
    else if ((_fpclass(_mm_cvtps_pd(arg3[2][0].q)[0].q).d & 0x207) != 0)
        result.b = 0
    else if ((_fpclass(_mm_cvtps_pd(arg3[3][0].q)[0].q).d & 0x207) != 0)
        result.b = 0
    else if (sub_142227e30(&arg3[4]).b == 0)
        result.b = 0
    else
        int32_t zmm1_1 = arg3[2]
        int32_t zmm2_1 = arg3[3]
        int32_t zmm3_1 = arg3[1]
        
        if (_mm_max_ss(_mm_max_ss(zmm1_1, zmm2_1), zmm3_1) f> 1000000f)
            result.b = 0
        else if (_mm_min_ss(_mm_min_ss(zmm1_1, zmm2_1), zmm3_1) f< 9.99999997e-07f)
            result.b = 0
        else
            int64_t* rcx_2 = *(arg3 + 0x20)
            
            if (rcx_2 == 0)
                result.b = 0
            else
                void var_a8
                (*(*rcx_2 + 0x68))(rcx_2, &var_a8)
                
                if (sub_142257910(rdi).b == 0)
                    result.b = 0
                else
                    result.b = 1

return result
