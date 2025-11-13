// 函数: sub_140e111c0
// 地址: 0x140e111c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int128_t* result

if (*(arg1 + 0x28) == 0)
    result = arg1
else
    int64_t* rcx = arg1[2].q
    
    if (rcx == 0)
        result = arg1
    else if ((*(*rcx + 0x28))(rcx) == 0)
        result = arg1
    else
        int64_t* rcx_1
        
        if (*(arg1 + 0x28) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[2].q
        
        int128_t var_38
        (*(*rcx_1 + 0x48))(rcx_1, &var_38)
        
        if (&var_38 == arg1)
            result = arg1
        else
            if (*(arg1 + 0x18) != 0)
                *(arg1 + 0x18) = 0
            
            result = arg1
            char var_20
            
            if (var_20 != 0)
                *arg1 = var_38
                int64_t var_28
                arg1[1].q = var_28
                *(arg1 + 0x18) = 1
                __security_check_cookie(rax_1 ^ &var_58)
                return result

__security_check_cookie(rax_1 ^ &var_58)
return result
