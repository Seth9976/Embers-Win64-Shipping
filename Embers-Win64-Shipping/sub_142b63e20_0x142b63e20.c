// 函数: sub_142b63e20
// 地址: 0x142b63e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
uint64_t result = __security_cookie ^ &var_138
uint64_t result_1 = result
int64_t* r15 = arg2
char* _Str1_1 = arg3

if (*arg5 s<= 0)
    int32_t rsi_1 = 0
    int32_t var_10c_1 = 0
    result = sub_142ac2da0(r15, 0, &_Str1_1, arg4)
    
    while (result.b != 0)
        char* _Str1 = _Str1_1
        uint64_t rdx
        
        if (*arg5 s> 0)
            rdx = 0xffffffff
        else if (strncmp(_Str1, "set", 3) != 0)
        label_142b63ef1:
            *arg5 = 3
            rdx = 0xffffffff
        else
            char i = _Str1[3]
            void* rdi_1 = &_Str1[3]
            rdx = 0
            
            if (i == 0)
                goto label_142b63ef1
            
            do
                if (sx.d(i) - 0x30 u> 9)
                    goto label_142b63ef1
                
                rdi_1 += 1
                rdx = zx.q(sx.d(i) - 0x30 + ((rdx * 5).d << 1))
                i = *rdi_1
            while (i != 0)
            
            if (rdx.d == 0)
                goto label_142b63ef1
        
        *(arg1 + 0x6c) = rdx.d
        void var_c0
        result = (*(*arg4 + 0x50))(arg4, &var_c0, arg5)
        
        if (*arg5 s> 0)
            break
        
        int32_t var_110_1 = 0
        
        if (sub_142ac2da0(&var_c0, 0, &_Str1_1, arg4) != 0)
            char i_1
            
            do
                result = sub_142b63600(_Str1_1)
                *(arg1 + 0x70) = result.d
                
                if (result.d == 0xffffffff)
                label_142b6416b:
                    *arg5 = 3
                    goto label_142b64190
                
                void var_e8
                result = (*(*arg4 + 0x50))(arg4, &var_e8, arg5)
                
                if (*arg5 s> 0)
                    goto label_142b64190
                
                int32_t r12_1 = 0
                
                if (sub_142ac2da0(&var_e8, 0, &_Str1_1, arg4) != 0)
                    char j
                    
                    do
                        int32_t rax_8 = (*(*arg4 + 0x10))(arg4)
                        char* _Str1_2 = _Str1_1
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                        
                        if (rax_8 != 0)
                            *(arg1 + 0x74) = sub_142b63540(_Str1_2)
                            void var_100
                            result = (*(*arg4 + 0x48))(arg4, &var_100, arg5)
                            
                            if (*arg5 s> 0)
                                goto label_142b64190
                            
                            int32_t rdi_3 = 0
                            int32_t var_f0
                            
                            if (var_f0 s> 0)
                                do
                                    sub_142ac33b0(&var_100, rdi_3, arg4)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_17 = sub_142a9c7e0(arg4, &var_98)
                                    int32_t rsi_2 = *(arg1 + 0x74)
                                    
                                    if (*arg5 s<= 0)
                                        if (rsi_2 != 0xffffffff)
                                            int32_t rax_18 = sub_142b63c90(rax_17, arg5)
                                            
                                            if (*arg5 s<= 0)
                                                int64_t rcx_18 = sx.q(rax_18) << 2
                                                *(rcx_18 + arg1 + 8) |= 1 << (rsi_2 u% 0x20)
                                        else
                                            *arg5 = 3
                                    
                                    result = sub_142a47ff0(&var_98)
                                    
                                    if (*arg5 s> 0)
                                        goto label_142b64190
                                    
                                    rdi_3 += 1
                                while (rdi_3 s< var_f0)
                        else
                            int32_t rax_9 = sub_142b63540(_Str1_2)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10 =
                                sub_142a9c7e0(arg4, &var_98)
                            
                            if (*arg5 s<= 0)
                                if (rax_9 != 0xffffffff)
                                    int32_t rax_11 = sub_142b63c90(rax_10, arg5)
                                    
                                    if (*arg5 s<= 0)
                                        int64_t rcx_12 = sx.q(rax_11) << 2
                                        *(rcx_12 + arg1 + 8) |= 1 << (rax_9 u% 0x20)
                                else
                                    *arg5 = 3
                            
                            result = sub_142a47ff0(&var_98)
                            
                            if (*arg5 s> 0)
                                goto label_142b64190
                        r12_1 += 1
                        j = sub_142ac2da0(&var_e8, r12_1, &_Str1_1, arg4)
                    while (j != 0)
                
                sub_142b645c0(arg1, arg5)
                __builtin_memset(arg1 + 8, 0, 0x64)
                int32_t rdi_6 = var_110_1 + 1
                var_110_1 = rdi_6
                i_1 = sub_142ac2da0(&var_c0, rdi_6, &_Str1_1, arg4)
            while (i_1 != 0)
            rsi_1 = var_10c_1
            r15 = arg2
        
        int64_t i_2 = 0
        result = *(data_144016e58 + 8) + 4 + sx.q(*(arg1 + 0x6c)) * 0x64
        
        do
            if (*result == 0xffffffff)
                goto label_142b6416b
            
            i_2 += 1
            result += 4
        while (i_2 s< 0x18)
        
        rsi_1 += 1
        var_10c_1 = rsi_1
        result = sub_142ac2da0(r15, rsi_1, &_Str1_1, arg4)

label_142b64190:
__security_check_cookie(result_1 ^ &var_138)
return result
