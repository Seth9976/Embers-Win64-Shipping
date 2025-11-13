// 函数: sub_1419ed0f0
// 地址: 0x1419ed0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* result = *(arg1 + 0x4f8)

if (result != 0)
    int64_t* rcx = *(result + 0x30)
    
    if (rcx != 0)
        int128_t zmm1 = *(arg1 + 0x1d0)
        float zmm3[0x4] = *(arg1 + 0x424)
        float zmm5[0x4] = *(arg1 + 0x1e0)
        int128_t var_48 = *(arg1 + 0x1c0)
        int128_t var_38_1 = zmm1
        float var_28_1[0x4] = _mm_mul_ps(zmm5, 
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, 0x3f800000), _mm_unpacklo_ps(zmm3, 0)[0].q))
        void var_58
        int64_t rax_3 = (*(*rcx + 0x58))(0x3f800000, &var_58)
        int128_t* r8_1 = &var_48
        int64_t r9_1 = *arg2
        int64_t rdx_2 = *(*(arg1 + 0x4f8) + 0x30)
        
        if ((*rax_3 & 2) == 0)
            (*(r9_1 + 0x10))(arg2, rdx_2, r8_1, r9_1)
        else
            (*(r9_1 + 8))(arg2, rdx_2, r8_1, r9_1)

result.b = 0
__security_check_cookie(rax_1 ^ &var_78)
return result
