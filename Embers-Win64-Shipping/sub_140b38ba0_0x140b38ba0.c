// 函数: sub_140b38ba0
// 地址: 0x140b38ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t* var_28 = __security_cookie ^ &var_c8
int64_t* result

if (*(arg2 + 0x30) == 0 || *(arg2 + 0x18) != 0)
    result.b = 0
else if (*(arg1 + 0xb8) == 0)
    int64_t* var_98_1 = arg3
    void** const var_a8 = &data_142e6c838
    void* var_a0_1 = arg1 + 0x268
    void var_90
    sub_140b148b0(&var_90, arg2 + 0x20, &var_a8)
    char var_78
    char var_30
    int64_t* var_88
    void var_70
    
    if (var_30 == 0 || var_78 != 0)
        if (arg4 == 0)
            goto label_140b38d16
        
        sub_14065da90(arg4, &var_90)
    label_140b38d16:
        
        if (var_30 != 0)
            char var_30_2 = 0
            sub_140b0bbf0(&var_70)
        
        if (var_78 == 0)
            result.b = 0
        else
            char var_78_2 = 0
            
            if (var_88 != 0)
                var_88[1].d -= 1
                
                if (var_88[1].d == 1)
                    (**var_88)(var_88)
                    int32_t rbx_3 = *(var_88 + 0xc)
                    *(var_88 + 0xc) -= 1
                    
                    if (rbx_3 == 1)
                        (*(*var_88 + 8))(var_88, zx.q(rbx_3))
            
            result.b = 0
    else
        char* rax_3 = sub_140b2b560(&var_70)
        char result_1
        
        if (rax_3 == 0)
            result = sub_140b2b510(&var_70)
            
            if (result == 0)
                goto label_140b38d16
            
            result_1 = sub_140b38b60(result, arg3)
            goto label_140b38c9e
        
        result_1 = *rax_3
    label_140b38c9e:
        
        if (var_30 != 0)
            char var_30_1 = 0
            sub_140b0bbf0(&var_70)
        
        if (var_78 != 0)
            char var_78_1 = 0
            
            if (var_88 != 0)
                var_88[1].d -= 1
                
                if (var_88[1].d == 1)
                    (**var_88)(var_88)
                    int32_t rbx_2 = *(var_88 + 0xc)
                    *(var_88 + 0xc) -= 1
                    
                    if (rbx_2 == 1)
                        (*(*var_88 + 8))(var_88, zx.q(rbx_2))
        
        result = zx.q(result_1)
else if (*(arg1 + 0x98) s> 1)
    result = (**arg3)(arg3, arg1 + 0x90, zx.q(*(arg1 + 0xb0)))
    
    if (*(arg1 + 0xb1) != 0)
        result.b = result.b == 0
else
    result.b = 1

__security_check_cookie(var_28 ^ &var_c8)
return result
