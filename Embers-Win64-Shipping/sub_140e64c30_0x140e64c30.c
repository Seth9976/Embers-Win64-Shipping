// 函数: sub_140e64c30
// 地址: 0x140e64c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rbx = *arg2
int64_t result

if (rbx != 0)
    int32_t var_a8
    sub_140e109c0(arg1 + 0x68, &var_a8, arg2)
    int64_t rax_4 = sx.q(var_a8)
    int64_t rax_7
    
    if (rax_4.d == 0xffffffff)
        rax_7 = 0
    else
        rax_7 = rax_4 * 0x60 + *(arg1 + 0x68)
    
    int64_t result_1 = rax_7 + 0x10
    
    if (rax_7 == 0)
        result_1 = 0
    
    if (result_1 == 0)
        int64_t* rax_8 = arg2[1]
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x2c)
        int32_t var_5c_1 = 0x80
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        int64_t var_a0 = rbx
        
        if (rax_8 != 0)
            rax_8[1].d += 1
        
        result_1 = sub_140e64e10(arg1, &var_a0, 1, 1, &var_88)
        
        if (rax_8 != 0)
            rax_8[1].d -= 1
            
            if (rax_8[1].d == 1)
                int64_t rdx_2 = *rax_8
                (*rdx_2)(rax_8, rdx_2)
                int32_t temp5_1 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rax_8 + 8))(rax_8, 1)
        
        int32_t var_40_2 = 0
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
        
        sub_140a720d0(&var_88, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_9 = var_88
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    
    int64_t* rbx_3 = arg2[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    result = result_1
else
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = 0

__security_check_cookie(rax_1 ^ &var_d8)
return result
