// 函数: sub_142028000
// 地址: 0x142028000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result

if (arg2 == 0)
    result = 0
else
    void* rax_2 = sub_142452380()
    
    if (rax_2 == 0)
        result = 0
    else
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            result = 0
        else
            int64_t rax_5 = sub_1423de540(data_143f5b298, arg1, 1)
            
            if (rax_5 == 0)
                result = 0
            else
                int32_t var_78 = 5
                char var_20_1 = 0
                void* var_70
                sub_1405ab0f0(&var_70, rax_5, arg2)
                char var_20_2 = 1
                sub_1406277a0(&var_78)
                char var_54
                int64_t var_68
                int64_t var_40
                int64_t var_28
                
                if (var_54 != 0)
                    if (var_20_2 != 0)
                        char var_20_4 = 0
                        sub_142441560(var_70, var_28)
                        
                        if (var_40 != 0)
                            sub_140a74f90(var_40)
                        
                        if (var_68 != 0)
                            sub_140a74f90(var_68)
                    
                    result = 0
                else
                    if (var_20_2 != 0)
                        char var_20_3 = 0
                        sub_142441560(var_70, var_28)
                        
                        if (var_40 != 0)
                            sub_140a74f90(var_40)
                        
                        if (var_68 != 0)
                            sub_140a74f90(var_68)
                    
                    int64_t result_1
                    result = result_1

__security_check_cookie(rax_1 ^ &var_98)
return result
