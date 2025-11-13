// 函数: sub_142a61e60
// 地址: 0x142a61e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
char** result = __security_cookie ^ &var_158
char** result_1 = result
char** result_2 = arg1

if (*arg4 s<= 0)
    if (arg2 != 0)
        char* var_118
        memset(&var_118, 0, 0xc8)
        int64_t var_64_1 = 0
        
        if (*arg2 != 0)
            result = sub_142a62230(result_2, arg2, &var_118, arg4)
            result_2 = result
        
        void* i_2
        int64_t var_108
        int64_t var_f8
        void var_b0
        
        if (*arg2 == 0 || *arg4 s<= 0)
            int64_t var_130_1 = 0
            struct icu_64::ResourceValue::icu_64::ResourceDataValue::VTable* var_138 =
                &icu_64::ResourceDataValue::`vftable'{for `icu_64::ResourceValue'}
            int32_t var_128_1 = 0xffffffff
            sub_142a602e0(result_2, &var_138, arg3, arg4)
            void* i = i_2
            
            if (i != 0)
                sub_142a615c0()
                sub_142a860a0(&data_144015690)
                
                for (; i != 0; i = *(i + 0x10))
                    *(i + 0x6c) -= 1
                
                sub_142a615c0()
                sub_142a860d0(&data_144015690)
            
            if (var_108 != 0)
                sub_142a7dcd0(var_108)
            
            if (var_f8 != 0 && var_f8 != &var_b0)
                sub_142a7dcd0(var_f8)
            
            int64_t var_f8_2 = 0
            int32_t var_70_2 = 0
            
            if (var_64_1.d == 0x12c9b17 && var_64_1:4.d == 0x12bb38b)
                sub_142a7dcd0(&var_118)
            
            result = sub_142ac29a0(&var_138)
        else
            void* i_1 = i_2
            
            if (i_1 != 0)
                sub_142a615c0()
                sub_142a860a0(&data_144015690)
                
                for (; i_1 != 0; i_1 = *(i_1 + 0x10))
                    *(i_1 + 0x6c) -= 1
                
                sub_142a615c0()
                result = sub_142a860d0(&data_144015690)
            
            if (var_108 != 0)
                result = sub_142a7dcd0(var_108)
            
            if (var_f8 != 0)
                result = &var_b0
                
                if (var_f8 != &var_b0)
                    result = sub_142a7dcd0(var_f8)
            
            int64_t var_f8_1 = 0
            int32_t var_70_1 = 0
            
            if (var_64_1.d == 0x12c9b17 && var_64_1:4.d == 0x12bb38b)
                result = sub_142a7dcd0(&var_118)
    else
        *arg4 = 1

__security_check_cookie(result_1 ^ &var_158)
return result
