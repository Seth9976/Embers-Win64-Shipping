// 函数: sub_142a4ba50
// 地址: 0x142a4ba50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char const* const result = data_144015488
int32_t var_88[0x4]
var_88[0] = 0

if (result == 0)
    if (GetLocaleInfoEx(nullptr, 0x5c, &data_1440154a0, 0x55) s> 0)
        char var_78[0x54]
        memset(&var_78, 0, 0x55)
        int32_t r8_1 = 0
        
        for (int64_t i = 0; i s< 0x55; i += 1)
            void* rdx_1 = &var_78[i]
            
            if (*(&data_1440154a0 + (i << 1)) != 0x5f)
                *rdx_1 = *(&data_1440154a0 + (i << 1))
            else
                *rdx_1 = 0x2d
            
            if (*rdx_1 == 0)
                break
            
            r8_1 += 1
        
        char var_24
        char rax_4 = var_24
        
        if (r8_1 s>= 0x55)
            rax_4 = 0
        
        char var_24_1 = rax_4
        char* rax_5 = sub_142a7dd00(0x41)
        
        if (rax_5 != 0)
            int32_t rax_6 = sub_142a4cc30(&var_78, rax_5, 0x40, &var_88)
            
            if (var_88[0] s> 0)
                sub_142a7dcd0(rax_5)
            else
                data_144015488 = rax_5
                data_144015490 = 1
                *(sx.q(rax_6) + rax_5) = 0
                sub_142a7db20(0x13, sub_142a4b610)
    
    char* result_1 = data_144015488
    result = "en_US"
    
    if (result_1 != 0)
        result = result_1
    
    data_144015488 = result

__security_check_cookie(rax_1 ^ &var_a8)
return result
