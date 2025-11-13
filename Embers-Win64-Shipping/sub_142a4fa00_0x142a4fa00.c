// 函数: sub_142a4fa00
// 地址: 0x142a4fa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rsi = arg1
char* result_1 = nullptr
char* result

if (*arg4 s> 0)
    result = result_1
else
    int32_t var_b4 = 0
    int32_t var_b8 = 0
    char** rax_2 = sub_142a64160(nullptr, "likelySubtags", &var_b8)
    char** var_a8_1 = rax_2
    int32_t rax_3 = var_b8
    
    if (rax_3 s> 0)
        *arg4 = rax_3
    label_142a4fbd6:
        
        if (rax_2 == 0)
            result = result_1
        else
            sub_142a5f860(rax_2)
            result = result_1
    else
        int16_t var_7c
        void* var_88 = &var_7c:1
        int32_t var_80_1 = 0x28
        var_7c = 0
        int32_t var_50_1 = 0
        
        if (rsi == 0)
            goto label_142a4fb49
        
        char rax_4 = *rsi
        
        if (rax_4 == 0)
            rsi = &data_143613c2c
        label_142a4fb49:
            void* rax_7 = sub_142a63dd0(rax_2, rsi, &var_b4, &var_b8)
            int32_t rcx_7 = var_b8
            
            if (rcx_7 s<= 0)
                int32_t r8_4 = var_b4
                
                if (r8_4 s< arg3)
                    uint32_t rax_8 = sub_142a8d6e0(rax_7, arg2, r8_4 + 1)
                    
                    if (var_b4 s>= 3 && sub_142a86320(arg2, &data_143613c2c, 3, rax_8) == 0)
                        int32_t rax_10 = var_b4
                        
                        if (rax_10 == 3 || arg2[3] == 0x5f)
                            memmove(arg2, &arg2[3], rax_10 - 2)
                    
                    result_1 = arg2
                else
                    *arg4 = 5
            else if (rcx_7 != 2)
                *arg4 = rcx_7
            
            if (var_7c.b != 0)
                sub_142a7dcd0(var_88)
            
            goto label_142a4fbd6
        
        if (rax_4 != 0x5f)
            goto label_142a4fb49
        
        void var_a0
        uint128_t zmm1_1 = *sub_142a85330(&var_a0, &data_143613c2c)
        sub_142a8cbd0(&var_88, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg4)
        zmm1_1 = *sub_142a85330(&var_a0, rsi)
        sub_142a8cbd0(&var_88, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg4)
        
        if (*arg4 s<= 0)
            rsi = var_88
            goto label_142a4fb49
        
        if (var_7c.b != 0)
            sub_142a7dcd0(var_88)
        
        if (rax_2 != 0)
            sub_142a5f860(rax_2)
        
        result = nullptr

__security_check_cookie(rax_1 ^ &var_d8)
return result
