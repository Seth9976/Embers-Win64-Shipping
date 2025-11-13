// 函数: sub_140d89f90
// 地址: 0x140d89f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x28) != 0)
    int64_t* rcx = *(arg1 - 0x20)
    
    if ((*(*rcx + 0x10))(rcx) != 0)
        int64_t* rcx_1 = *(arg1 - 0x20)
        int32_t var_28
        (*(*rcx_1 + 0x20))(rcx_1, &var_28)
        float zmm2[0x2] = var_28
        int32_t var_24
        float zmm3[0x2] = var_24
        float zmm0[0x2] = _mm_cvtps_pd(zmm2)
        float zmm1[0x2] = _mm_cvtps_pd(zmm3)
        *arg2 = zmm0
        int32_t var_20
        zmm0 = var_20
        zmm0[0] = zmm0[0] - zmm2[0]
        arg2[1] = zmm1
        int32_t var_1c
        zmm1 = var_1c
        zmm1[0] = zmm1[0] - zmm3[0]
        arg2[2] = _mm_cvtps_pd(zmm0)
        arg2[3] = _mm_cvtps_pd(zmm1)
        return 0

return 0x80040201
