// 函数: sub_142ae10c0
// 地址: 0x142ae10c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_178
int64_t result = __security_cookie ^ &var_178
int64_t result_1 = result

if (*arg3 s<= 0)
    struct icu_64::UObject::icu_64::Locale::VTable* var_108
    sub_142a456d0(&var_108, arg2)
    sub_142a45ec0(&var_108, arg3)
    
    if (*arg3 s<= 0)
        char var_ee
        char* rsi_1 = &var_ee
        
        if (var_ee == 0)
            rsi_1 = &data_14363e3a8
        
        int16_t var_13c
        void* var_148 = &var_13c:1
        int32_t var_140_1 = 0x28
        var_13c = 0
        int32_t i = 0
        int32_t var_110_1 = 0
        int64_t r8 = -1
        char var_100[0x12]
        
        do
            r8 += 1
        while (var_100[r8] != 0)
        
        sub_142a8cbd0(&var_148, &var_100, r8.d, arg3)
        sub_142a8cb30(&var_148, 0x5f, arg3)
        int64_t r8_2 = -1
        
        do
            r8_2 += 1
        while (rsi_1[r8_2] != 0)
        
        sub_142a8cbd0(&var_148, rsi_1, r8_2.d, arg3)
        int32_t* rax_1 = sub_142a86c30(data_144016838, var_148)
        int32_t* r8_3 = rax_1
        int32_t* rax_2
        
        if (rax_1 == 0)
            rax_2 = sub_142a86c30(data_144016838, rsi_1)
            r8_3 = rax_2
        
        if (rax_1 != 0 || rax_2 != 0)
            int32_t rcx_7 = *r8_3
            int16_t rax_3
            
            if (rcx_7 == 0)
                rax_3 = 0x68
            else if (rcx_7 == 1)
                rax_3 = 0x48
            else if (rcx_7 == 2)
                rax_3 = 0x4b
            else if (rcx_7 == 3)
                rax_3 = 0x6b
            else
                rax_3 = 0x48
            
            *(arg1 + 0x11d8) = rax_3
            void* rcx_10 = arg1 + 0x11dc
            
            do
                int32_t rax_4 = *(r8_3 - arg1 + rcx_10 - 0x11d8)
                *rcx_10 = rax_4
                
                if (rax_4 == 0xffffffff)
                    break
                
                i += 1
                rcx_10 += 4
            while (i s< 7)
        else
            *(arg1 + 0x11d8) = 0x48
            *(arg1 + 0x11dc) = 1
            *(arg1 + 0x11e0) = 0xffffffff
        
        if (var_13c.b != 0)
            sub_142a7dcd0(var_148)
    
    result = sub_142a45a20(&var_108)

__security_check_cookie(result_1 ^ &var_178)
return result
