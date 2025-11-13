// 函数: sub_142aaa5f0
// 地址: 0x142aaa5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rsi = arg3
int16_t* result

if (*arg6 s> 0)
    result = nullptr
else if (arg3 u> 2)
    *arg6 = 1
    result = nullptr
else
    int32_t var_158 = 0
    char var_f8[0x80]
    sub_142a4d590(arg2, &var_f8, 0x9d, &var_158)
    int32_t rax_3 = var_158
    
    if (rax_3 s> 0 || rax_3 == 0xffffff84)
        *arg6 = 1
        result = nullptr
    else
        char var_154
        sub_142a8d6e0(arg1, &var_154, 3)
        char var_151_1 = 0
        sub_142a861f0(&var_154)
        var_158 = 0
        char** rax_4 = sub_142a641c0("icudt64l-curr", &var_f8, &var_158)
        int32_t rax_9
        int16_t* result_1
        
        if (rsi != 2)
        label_142aaa7e2:
            sub_142a625a0(rax_4, "Currencies", rax_4, &var_158)
            sub_142a62230(rax_4, &var_154, rax_4, &var_158)
            result_1 = sub_142a63b20(rax_4, rsi, arg5, &var_158)
            rax_9 = var_158
        else
            int32_t var_130_1 = 0x28
            int16_t var_12c
            void* var_138 = &var_12c:1
            var_12c = 0
            int32_t var_100_1 = 0
            void var_150
            uint128_t zmm1_1 = *sub_142a85330(&var_150, "Currencies%narrow")
            sub_142a8cbd0(&var_138, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, &var_158)
            zmm1_1 = *sub_142a85330(&var_150, &data_14363dfe8)
            sub_142a8cbd0(&var_138, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, &var_158)
            zmm1_1 = *sub_142a85330(&var_150, &var_154)
            sub_142a8cbd0(&var_138, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, &var_158)
            result_1 = sub_142a63c50(rax_4, var_138, arg5, &var_158)
            rax_9 = var_158
            
            if (rax_9 == rsi)
                rax_9 = 0
                *arg6 = 0xffffff80
                var_158 = 0
                rsi = 0
            
            if (var_12c.b != 0)
                sub_142a7dcd0(var_138)
                rax_9 = var_158
            
            if (result_1 == 0)
                goto label_142aaa7e2
        
        if (rax_9 s<= 0)
            if (rax_9 == 0xffffff81)
                *arg6 = rax_9
            else if (rax_9 == 0xffffff80 && *arg6 != 0xffffff81)
                *arg6 = rax_9
        
        *arg4 = 0
        
        if (rax_9 s> 0)
            *arg5 = std::_WChar_traits<wchar_t>::length(arg1)
            result_1 = arg1
            *arg6 = 0xffffff81
        
        if (rax_4 != 0)
            sub_142a5f860(rax_4)
        
        result = result_1

__security_check_cookie(rax_1 ^ &var_178)
return result
