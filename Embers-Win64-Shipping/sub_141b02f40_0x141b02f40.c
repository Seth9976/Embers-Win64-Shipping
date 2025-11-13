// 函数: sub_141b02f40
// 地址: 0x141b02f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* result = sub_141a655a0(arg2)

if (result != 0 && (*(arg4 + 0x320) & 1) != 0)
    void* rdi_1 = arg4 + 0x2e0
    
    if ((*(arg4 + 0x320) & 2) == 0)
        rdi_1 = *rdi_1
    
    int64_t var_78_1 = 0
    float var_68[0x4]
    sub_140ade170(&(*arg3)[3], &var_68)
    float zmm2_1[0x4] = (*arg3)[1]
    float zmm3_1[0x4] = *arg3
    float var_58[0x4] = var_68
    float temp0_1[0x4] = _mm_unpacklo_ps(zmm3_1, (*arg3)[2][0].q)
    float zmm0_1[0x4] = arg3[2][0]
    float var_48_1[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    float var_38_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps((*arg3)[6], zmm0_1[0].q), 
        _mm_unpacklo_ps((*arg3)[7], 0)[0].q)
    result = (*(*rdi_1 + 8))(rdi_1, result, &var_58, var_78_1, var_78_1)

__security_check_cookie(rax_1 ^ &var_98)
return result
