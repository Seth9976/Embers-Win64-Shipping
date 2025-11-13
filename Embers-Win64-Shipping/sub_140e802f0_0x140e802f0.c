// 函数: sub_140e802f0
// 地址: 0x140e802f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void*** var_1b8

if (sub_140db3500(arg4) == 0)
    void var_1a8
    sub_140d947e0(&var_1a8)
    var_1b8 = *arg3
    int64_t* rax_8 = arg3[1]
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    if (sub_140e649d0(arg1, &var_1b8, &var_1a8, data_1439ae51c, arg5) == 0)
        *arg2 = nullptr
        arg2[1] = 0
    else
        char var_1c8_2 = arg11
        void**** rax_13 =
            sub_140e80120(arg1 + 0x1d0, &var_1b8, &var_1a8, arg6, arg7, arg8, arg9, arg10)
        *arg2 = *rax_13
        void* rcx_10 = rax_13[1]
        arg2[1] = rcx_10
        
        if (rcx_10 != 0)
            *(rcx_10 + 8) += 1
        
        if (rax_8 != 0)
            rax_8[1].d -= 1
            
            if (rax_8[1].d == 1)
                (**rax_8)(rax_8)
                int32_t temp5_1 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rax_8 + 8))(rax_8, 1)
    
    void var_58
    sub_140596d80(&var_58)
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t temp4_1 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_60 + 8))(var_60, 1)
    
    void var_1a0
    sub_140d94d20(&var_1a0)
else
    char var_1c8_1 = arg11
    void**** rax_6 = sub_140e80120(arg1 + 0x1d0, &var_1b8, arg4, arg6, arg7, arg8, arg9, arg10)
    *arg2 = *rax_6
    void* rcx_3 = rax_6[1]
    arg2[1] = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    int64_t* var_1b0
    
    if (var_1b0 != 0)
        var_1b0[1].d -= 1
        
        if (var_1b0[1].d == 1)
            int64_t rdx_1 = *var_1b0
            (*rdx_1)(var_1b0, rdx_1)
            int32_t temp1_1 = *(var_1b0 + 0xc)
            *(var_1b0 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_1 = *var_1b0
                (*(r8_1 + 8))(var_1b0, 1, r8_1)
__security_check_cookie(rax_1 ^ &var_208)
return arg2
