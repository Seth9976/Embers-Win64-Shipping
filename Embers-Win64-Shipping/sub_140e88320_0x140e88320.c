// 函数: sub_140e88320
// 地址: 0x140e88320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t result = __security_cookie ^ &var_1b8
int64_t result_1 = result

if (*arg2 != 0)
    void var_188
    sub_140d947e0(&var_188)
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t var_198 = *arg2
    int64_t* var_190_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    char rax_2 = sub_140da1990(&arg1[0x30], &var_198, &var_188, data_1439ae51c, arg4)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rdx_1 = *rbx_1
            (*rdx_1)(rbx_1, rdx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rax_2 != 0)
        (*(*arg1 + 0x148))(arg1, &var_188, zx.q(arg3))
    
    void var_38
    sub_140596d80(&var_38)
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp3_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    void var_180
    result = sub_140d94d20(&var_180)

__security_check_cookie(result_1 ^ &var_1b8)
return result
