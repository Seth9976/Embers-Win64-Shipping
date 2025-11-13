// 函数: sub_14184da90
// 地址: 0x14184da90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rax_3 = (*(*arg1 + 0x160))()
uint64_t result

if (arg3 s< rax_3)
    result = zx.q(arg3 s>= rax_3)
else
    sub_140a464c0()
    int16_t* const rbp_1 = &data_142d40450
    int16_t* const rdx
    
    if (arg2[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *arg2
    
    int64_t* rax_5 = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx, 0)
    uint64_t rdi
    rdi.b = rax_5 != 0
    
    if (rax_5 != 0)
        if (arg3 s< 0xe)
            int16_t* var_e8 = nullptr
            int32_t var_e0_1 = 0
            (*(*arg1 + 0x158))(arg1, &var_e8)
            
            if (var_e0_1 != 0)
                rbp_1 = var_e8
            
            void var_d8
            sub_140685ed0(&var_d8, rbp_1)
            int64_t var_50
            int32_t var_48
            (*(*rax_5 + 0x150))(rax_5, var_50, sx.q(var_48))
            int64_t var_58
            
            if (var_58 != 0)
                sub_140a74f90(var_58)
            
            int16_t* rcx_6 = var_e8
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
        else
            rdi = zx.q(sub_14184e0e0(rax_5, arg1, arg3, arg4))
        
        if ((*(*rax_5 + 0x1b8))(rax_5) == 0 || rdi.b == 0)
            rdi.b = 0
        else
            rdi.b = 1
    
    if (rax_5 != 0)
        (**rax_5)(rax_5, 1)
    
    result = zx.q(rdi.b)

__security_check_cookie(rax_1 ^ &var_108)
return result
