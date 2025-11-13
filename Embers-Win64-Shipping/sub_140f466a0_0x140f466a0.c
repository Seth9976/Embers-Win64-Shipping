// 函数: sub_140f466a0
// 地址: 0x140f466a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t* result

if (arg1[6] == 0)
    result = arg1
else
    int64_t* rcx = *(arg1 + 0x10)
    
    if (rcx == 0)
        result = arg1
    else if ((*(*rcx + 0x28))(rcx) == 0)
        result = arg1
    else
        int64_t* rcx_1
        
        if (arg1[6] == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x10)
        
        int32_t var_18
        (*(*rcx_1 + 0x48))(rcx_1, &var_18)
        
        if (&var_18 == arg1)
            result = arg1
        else
            if (arg1[1].b != 0)
                arg1[1].b = 0
            
            result = arg1
            char var_14
            
            if (var_14 != 0)
                *arg1 = var_18
                arg1[1].b = 1
                __security_check_cookie(rax_1 ^ &var_38)
                return result

__security_check_cookie(rax_1 ^ &var_38)
return result
