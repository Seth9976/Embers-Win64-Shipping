// 函数: sub_14062ac40
// 地址: 0x14062ac40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x2] = *(arg1 + 4)
float zmm2[0x2] = *arg1
float zmm1[0x2] = arg1[1].d
float zmm0[0x2] = _mm_cvtps_pd(*(arg1 + 0xc))
_mm_cvtps_pd(zmm3)
zmm2 = _mm_cvtps_pd(zmm2)
float var_20[0x2] = zmm0
float var_28[0x2] = _mm_cvtps_pd(zmm1)
int64_t var_18
sub_140a2e390(&var_18, u"(R=%f,G=%f,B=%f,A=%f)", zmm2)

if (arg2 == &var_18)
    int64_t rcx_2 = var_18
    
    if (rcx_2 == 0)
        return &var_18
    
    return sub_140a74f90(rcx_2)

int64_t rcx_1 = *arg2

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg2 = var_18
int32_t var_10
arg2[1].d = var_10
int32_t result
*(arg2 + 0xc) = result
return result
