// 函数: sub_142ae1db0
// 地址: 0x142ae1db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
arg3[7].d = 0
**arg3 = 0
int32_t result = sub_142a8cbd0(arg3, "gregorian", 0xffffffff, arg4)

if (*arg4 s<= 0)
    void var_138
    result = sub_142a62710(&var_138, 0x102, nullptr, "calendar", "calendar", *(arg2 + 0x28), 
        nullptr, 0, arg4)
    
    if (*arg4 s<= 0)
        char var_37_1 = 0
        void var_198
        result = sub_142a4d040(&var_138, "calendar", &var_198, 0x60, arg4)
        
        if (*arg4 s<= 0)
            if (result s>= 0x60)
                *arg4 = 0
            else
                arg3[7].d = 0
                **arg3 = 0
                result = sub_142a8cbd0(arg3, &var_198, 0xffffffff, arg4)
                
                if (*arg4 s<= 0)
                    *arg4 = 0

__security_check_cookie(rax_1 ^ &var_1e8)
return result
