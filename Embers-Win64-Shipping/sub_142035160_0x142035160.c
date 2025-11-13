// 函数: sub_142035160
// 地址: 0x142035160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x150))()

if (result != 0)
    double zmm0
    zmm0.d = (*(arg1 + 0x24c)).d f- *(result + 0x520)
    uint64_t rax_1 = zx.q(arg1[0x4d].d)
    double zmm1[0x2] = _mm_cvtps_pd(zmm0)
    zmm1[0] = zmm1[0] f+ arg1[0x4c]
    arg1[0x4c] = zmm1.q
    int32_t result_1 = (int.q(float.d(rax_1) + 1.0)).d
    arg1[0x4d].d = result_1
    
    if (result_1 u> 0xfa)
        zmm0 = float.d(zx.q(result_1))
        result_1 = 1
        arg1[0x4d].d = 1
        zmm1[0] = zmm1[0] / zmm0
        arg1[0x4c] = zmm1.q
    
    float zmm2[0x2] = arg1[0x4a].d
    result = zx.q(result_1)
    zmm1[0] = zmm1[0] / float.d(result)
    
    if (not(zmm2[0] == 0f))
        zmm0 = _mm_cvtps_pd(zmm2)
        zmm1[0] = zmm1[0] - zmm0
        zmm1[0] = zmm1[0] * 0.5
        zmm1[0] = zmm1[0] + zmm0
    
    arg1[0x4a].d = _mm_cvtpd_ps(zmm1).d

return result
