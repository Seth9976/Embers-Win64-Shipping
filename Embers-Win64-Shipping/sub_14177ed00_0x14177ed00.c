// 函数: sub_14177ed00
// 地址: 0x14177ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_14152dda0(arg2, arg1 + 0x18, arg3)
sub_1409ac860(arg2, arg1 + 0x30, arg3)
sub_14152f8a0(arg2, arg1 + 0x50, sub_14175ef70(arg2, arg1 + 0x40, arg3))
int64_t* rcx_4 = arg2[1]
char* r8 = *rcx_4

if (&r8[1] u> rcx_4[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0xc8, 1)
else
    *(arg1 + 0xc8) = *r8
    int64_t* rax_4 = arg2[1]
    *rax_4 += 1

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
uint64_t result = sub_140b4e7c0(arg2, &data_1439a9538)

if (result.d s< 0x10)
    result = *(arg1 + 0x40)
    
    if (*(result + 0xc) != 0)
        void* i_1 = *(arg1 + 0x58)
        void* i = arg1 + 0x50
        
        if (i_1 != 0)
            i = i_1
        
        result = sx.q(*(arg1 + 0x60))
        
        for (void* rsi_1 = i + (result << 3); i != rsi_1; i += 8)
            float zmm0_1[0x4] = *(arg1 + 0x30)
            void* rcx_8 = *i
            float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x18), *(arg1 + 0x20))
            float var_68[0x4] = zmm0_1
            float temp0_2[0x4] = _mm_unpacklo_ps(*(arg1 + 0x1c), zx.o(0)[0].q)
            float zmm2_1[0x4] = data_14399f66c
            float var_58_1[0x4] = _mm_unpacklo_ps(temp0_1, temp0_2[0].q)
            float var_48_1[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
                _mm_unpacklo_ps(zmm2_1, 0)[0].q)
            result = sub_14175b310(rcx_8, &var_68)

if ((arg2[5].b & 1) != 0)
    result = sub_14177ab20(arg1)

__security_check_cookie(rax_1 ^ &var_88)
return result
