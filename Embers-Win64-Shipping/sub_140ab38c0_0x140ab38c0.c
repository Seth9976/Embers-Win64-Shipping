// 函数: sub_140ab38c0
// 地址: 0x140ab38c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = arg2
arg1[3] = arg3

if (&arg1[4] != arg4)
    int64_t rcx = arg1[4]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    arg1[4] = *arg4
    *arg4 = 0
    arg1[5].d = arg4[1].d
    *(arg1 + 0x2c) = *(arg4 + 0xc)
    arg4[1] = 0

int32_t r8 = sub_140a84cd0(&arg1[3], &arg1[4])
int32_t result

if (arg5 != 0)
    if (arg5 != 2)
        arg1[6].b = 0
        return sub_140aa4650(arg1)
    
    char rax_7
    int32_t r8_1
    rax_7, r8_1 = sub_140a80c80()
    
    if (rax_7 == 0)
        arg1[6].b = 0
        return sub_140aa4650(arg1)
    
    int64_t* rcx_6 = data_143db7a40
    
    if (rcx_6 != 0)
        char rax_9
        rax_9, r8_1 = (*(*rcx_6 + 8))(rcx_6)
        
        if (rax_9 == 0)
            arg1[6].b = 0
            return sub_140aa4650(arg1)
    
    arg1[6].b = 2
    int64_t* rcx_7 = data_143db7a40
    
    if (rcx_7 != 0)
        r8_1 = (*(*rcx_7 + 0x18))(rcx_7, &arg1[3])
    
    void var_18
    result = sub_140ac1340(arg1, &var_18, r8_1)
    int64_t* var_10
    
    if (var_10 != 0)
        result = var_10[1].d
        var_10[1].d -= 1
        
        if (result == 1)
            result = (**var_10)(var_10)
            int32_t rdi_2 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (rdi_2 == 1)
                return (*(*var_10 + 8))(var_10, zx.q(rdi_2))
else
    arg1[6].b = 2
    void var_28
    result = sub_140ac1340(arg1, &var_28, r8)
    int64_t* var_20
    
    if (var_20 != 0)
        result = var_20[1].d
        var_20[1].d -= 1
        
        if (result == 1)
            result = (**var_20)(var_20)
            int32_t rdi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
