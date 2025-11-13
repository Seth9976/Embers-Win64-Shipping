// 函数: sub_141782210
// 地址: 0x141782210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t result = *(arg1 + 0x40)

if (*(result + 0xc) != 0)
    void* i_1 = *(arg1 + 0x58)
    void* i = arg1 + 0x50
    
    if (i_1 != 0)
        i = i_1
    
    result = sx.q(*(arg1 + 0x60))
    
    for (void* rsi_1 = i + (result << 3); i != rsi_1; i += 8)
        float zmm0[0x4] = *(arg1 + 0x30)
        void* rcx = *i
        float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x18), *(arg1 + 0x20))
        float var_48[0x4] = zmm0
        float temp0_2[0x4] = _mm_unpacklo_ps(*(arg1 + 0x1c), zx.o(0)[0].q)
        float zmm2[0x4] = data_14399f66c
        float var_38_1[0x4] = _mm_unpacklo_ps(temp0_1, temp0_2[0].q)
        float var_28_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
            _mm_unpacklo_ps(zmm2, 0)[0].q)
        result = sub_14175b310(rcx, &var_48)

__security_check_cookie(rax_1 ^ &var_68)
return result
