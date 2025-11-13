// 函数: sub_142acfa40
// 地址: 0x142acfa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
void* result

if (*arg2 s> 0)
    result = nullptr
else
    int32_t rax_4
    
    if ((*(arg1 + 8) & 1) == 0)
        int16_t rax_2 = *(arg1 + 8)
        
        if (rax_2 s< 0)
            rax_4 = *(arg1 + 0xc)
        else
            rax_4 = sx.d(rax_2) s>> 5
    
    if ((*(arg1 + 8) & 1) != 0 || rax_4 s> 0x80)
        *arg2 = 1
        result = nullptr
    else
        char rax_6
        
        if (data_144016610 != 2)
            rax_6 = sub_142a85f00(&data_144016610)
        
        if (data_144016610 == 2 || rax_6 == 0)
            int32_t rax_8 = data_144016614
            
            if (rax_8 s> 0)
                *arg2 = rax_8
        else
            sub_142ad0b80(arg2)
            data_144016614 = *arg2
            sub_142a85e80(&data_144016610)
        
        if (*arg2 s> 0)
            result = nullptr
        else
            int32_t var_1f8[0x4]
            var_1f8[0] = 0
            void var_158
            sub_142a49a60(arg1, &var_158, 0x81, &var_1f8)
            
            if (sub_142a8d900(&var_158, 0xffffffff) != 0)
                sub_142acf850()
                sub_142a860a0(&data_1440165b0)
                void* result_1 = sub_142a86c30(data_144016608, &var_158)
                sub_142acf850()
                sub_142a860d0(&data_1440165b0)
                
                if (result_1 == 0)
                    int32_t var_200_1 = 0
                    int64_t r12
                    r12.b = 0
                    char var_1e8[0x90]
                    sub_142a49990(arg1, 0, 0x7fffffff, &var_1e8, 0x81)
                    char (* rax_11)[0x90] = &var_1e8
                    
                    if (var_1e8[0] != 0)
                        while (true)
                            char rcx_5 = (*rax_11)[1]
                            rax_11 = &(*rax_11)[1]
                            
                            if (rcx_5 != 0x2f)
                                if (rcx_5 == 0)
                                    break
                            else
                                *rax_11 = 0x3a
                    
                    char** rax_12 = sub_142a64160(nullptr, "keyTypeData", &var_1f8)
                    char** rax_13 = sub_142a625a0(rax_12, "typeMap", nullptr, &var_1f8)
                    sub_142a625a0(rax_13, "timezone", rax_13, &var_1f8)
                    sub_142a625a0(rax_13, &var_1e8, rax_13, &var_1f8)
                    
                    if (var_1f8[0] s> 0)
                    label_142acfc55:
                        var_1f8[0] = 0
                        sub_142a625a0(rax_12, "typeAlias", rax_13, &var_1f8)
                        sub_142a625a0(rax_13, "timezone", rax_13, &var_1f8)
                        void* result_3 = sub_142a63dd0(rax_13, &var_1e8, nullptr, &var_1f8)
                        
                        if (var_1f8[0] s<= 0)
                            result_1 = result_3
                        
                        if (var_1f8[0] s> 0 || result_3 == 0)
                            void* result_4 = sub_142a64e70(arg1)
                            
                            if (result_4 != 0)
                                int64_t rbx_1 = sx.q(std::_WChar_traits<wchar_t>::length(result_4))
                                sub_142a8d6e0(result_4, &var_1e8, rbx_1.d)
                                
                                if (rbx_1 u>= 0x81)
                                    __report_rangecheckfailure()
                                    noreturn
                                
                                var_1e8[rbx_1] = 0
                                char (* rax_15)[0x90] = &var_1e8
                                
                                if (var_1e8[0] != 0)
                                    while (true)
                                        char rcx_16 = (*rax_15)[1]
                                        rax_15 = &(*rax_15)[1]
                                        
                                        if (rcx_16 != 0x2f)
                                            if (rcx_16 == 0)
                                                break
                                        else
                                            *rax_15 = 0x3a
                                
                                var_1f8[0] = 0
                                result_1 = sub_142a63dd0(rax_13, &var_1e8, nullptr, &var_1f8)
                                
                                if (var_1f8[0] s> 0)
                                    result_1 = result_4
                                    r12.b = 1
                            else
                                *arg2 = 1
                    else
                        void* result_2 = sub_142a65150(arg1)
                        result_1 = result_2
                        r12.b = 1
                        
                        if (result_2 == 0)
                            goto label_142acfc55
                    
                    sub_142a5f860(rax_13)
                    sub_142a5f860(rax_12)
                    
                    if (*arg2 s<= 0)
                        sub_142acf850()
                        sub_142a860a0(&data_1440165b0)
                        
                        if (sub_142a86c30(data_144016608, &var_158) == 0)
                            void* rax_18 = sub_142a65150(arg1)
                            
                            if (rax_18 != 0)
                                sub_142a86f50(data_144016608, rax_18, result_1, arg2)
                        
                        if (*arg2 s<= 0 && r12.b != 0
                                && sub_142a86c30(data_144016608, result_1) == 0)
                            sub_142a86f50(data_144016608, result_1, result_1, arg2)
                        
                        sub_142acf850()
                        sub_142a860d0(&data_1440165b0)
                    
                    result = result_1
                else
                    result = result_1
            else
                *arg2 = 1
                result = nullptr

__security_check_cookie(rax_1 ^ &var_228)
return result
