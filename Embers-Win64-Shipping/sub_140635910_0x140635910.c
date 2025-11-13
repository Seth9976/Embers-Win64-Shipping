// 函数: sub_140635910
// 地址: 0x140635910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t var_28 = __security_cookie ^ &var_98
int64_t result

if (arg1 == 0)
    result.b = 0
else
    void* rax_1 = sub_1424890f0()
    void* r9_1 = *(arg1 + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s> *(r9_1 + 0x38))
        result.b = 0
    else if (*(*(r9_1 + 0x30) + (result << 3)) != rax_1 + 0x30)
        result.b = 0
    else
        void* rcx_1 = *(arg1 + 0x280)
        
        if (rcx_1 == 0)
            result.b = 0
        else
            uint128_t var_58[0x3]
            float zmm1_1[0x4] = sub_141f3cf60(rcx_1, &var_58)[1]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
            *arg2 = (_mm_unpacklo_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)[0].q)).q
            float var_70_1 = temp0_1[0]
            arg2[1].d = var_70_1
            uint128_t var_68 = *sub_141f3cf60(*(arg1 + 0x280), &var_58)
            int64_t var_78
            sub_140adf5d0(&var_68, &var_78)
            *arg3 = var_78
            arg3[1].d = var_70_1
            result.b = 1

__security_check_cookie(var_28 ^ &var_98)
return result
