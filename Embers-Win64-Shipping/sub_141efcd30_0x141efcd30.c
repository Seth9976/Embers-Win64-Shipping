// 函数: sub_141efcd30
// 地址: 0x141efcd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
char* result = __security_cookie ^ &var_88
char* result_1 = result

if (not(arg2.d f< 9.99999997e-07f))
    int64_t* rbx_1 = *(*(arg1 + 0x148) + 0x280)
    int64_t rax_2 = *rbx_1
    *(rbx_1 + 0x71c) |= 0x10
    result = (*(rax_2 + 0x918))(rbx_1)
    
    if (result.b != 0)
        char rax_3
        int64_t r8_1
        rax_3, r8_1 = sub_141ea5ff0(*(arg1 + 0x148))
        int64_t rdx_1 = *rbx_1
        r8_1.b = 1
        (*(rdx_1 + 0x8e8))(rbx_1, rdx_1, r8_1)
        result = sub_141ea5ff0(*(arg1 + 0x148))
        
        if (result.b != 0 || rax_3 != 0)
            char var_68
            result = sub_141f37670(rbx_1, &var_68)
            
            if (var_68 != 0)
                float zmm0_1[0x4] = sub_141ea16b0(*(arg1 + 0x148))
                bool cond:0_1 = var_68 == 0
                float var_48[0x4]
                float var_48_1[0x4] = _mm_mul_ps(var_48, 
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0_1, zmm0_1[0].q), 
                        _mm_unpacklo_ps(zmm0_1, 0)[0].q))
                void var_58
                
                if (not(cond:0_1))
                    result = sub_141de06c0(arg1 + 0x5a0, &var_58)
    
    *(rbx_1 + 0x71c) &= 0xef

__security_check_cookie(result_1 ^ &var_88)
return result
