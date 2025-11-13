// 函数: sub_141a9a4a0
// 地址: 0x141a9a4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
uint64_t result = __security_cookie ^ &var_78
uint64_t result_1 = result

if (*(arg1 + 0x10e) != 0 && *(arg1 + 0x10c) != 0)
    void* r8_1 = arg2[3]
    int32_t rdx = *(arg1 + 0xd0)
    int128_t* rsi_3 = (sx.q(rdx * 2) s>> 1) * 0x30 + *(*(r8_1 + 0x48) + 0x30)
    int32_t r8_2
    
    if (rdx s>= 0)
        r8_2 = *(arg1 + 0xd4)
    else
        int32_t rcx_2 = rdx * 2
        
        if ((rcx_2 & 0xfffffffe) == 0xfffffffe)
            r8_2 = -1
        else
            r8_2 = *(*(r8_1 + 0x80) + (sx.q(rcx_2) s>> 1 << 2))
    
    float var_58[0x3][0x4]
    sub_141abb9e0(&arg2[1], &var_58, r8_2)
    int32_t zmm0_1 = sub_141ab2d00(arg1, &var_58, rsi_3)
    result.b = *(arg1 + 0x10c) - 1
    
    if (result.b u<= 1)
        result = sub_141e43480(*(*arg2 + 0xb0), &data_143f398c8, arg1 + 0xf4)
        
        if (result.w != 0xffff)
            result = sub_141acd170(&arg2[0xa], result.w, zmm0_1)

__security_check_cookie(result_1 ^ &var_78)
return result
