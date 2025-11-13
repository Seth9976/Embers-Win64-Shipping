// 函数: sub_140e80850
// 地址: 0x140e80850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
char var_1d8
void* var_1d0

if (sub_140db3500(arg4) == 0)
    void var_1b0
    sub_140d947e0(&var_1b0)
    var_1d0 = *arg3
    int64_t* rax_13 = arg3[1]
    
    if (rax_13 != 0)
        rax_13[1].d += 1
    
    if (sub_140e649d0(arg1, &var_1d0, &var_1b0, data_1439ae51c, arg5) == 0)
        *arg2 = nullptr
        arg2[1] = 0
    else
        char var_1d7_3 = 0
        
        if (arg11[1] != 0)
            var_1d8 = *arg11
            char var_1d7_4 = 1
        
        void** rax_20 = sub_140e7f930(arg1 + 0x1d0, &var_1d0, &var_1b0, arg6, arg7, arg8, arg9, 
            arg10, &var_1d8, arg12, 0)
        *arg2 = *rax_20
        void* rcx_10 = rax_20[1]
        arg2[1] = rcx_10
        
        if (rcx_10 != 0)
            *(rcx_10 + 8) += 1
        
        if (rax_13 != 0)
            rax_13[1].d -= 1
            
            if (rax_13[1].d == 1)
                (**rax_13)(rax_13)
                int32_t temp5_1 = *(rax_13 + 0xc)
                *(rax_13 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rax_13 + 8))(rax_13, 1)
    
    void var_60
    sub_140596d80(&var_60)
    int64_t* var_68
    
    if (var_68 != 0)
        var_68[1].d -= 1
        
        if (var_68[1].d == 1)
            (**var_68)(var_68)
            int32_t temp3_1 = *(var_68 + 0xc)
            *(var_68 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_68 + 8))(var_68, 1)
    
    void var_1a8
    sub_140d94d20(&var_1a8)
else
    char var_1d7_1 = 0
    
    if (arg11[1] != 0)
        var_1d8 = *arg11
        char var_1d7_2 = 1
    
    void** rax_10 = sub_140e7f930(arg1 + 0x1d0, &var_1d0, arg4, arg6, arg7, arg8, arg9, arg10, 
        &var_1d8, arg12, 0)
    *arg2 = *rax_10
    void* rcx_3 = rax_10[1]
    arg2[1] = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    int64_t* var_1c8
    
    if (var_1c8 != 0)
        var_1c8[1].d -= 1
        
        if (var_1c8[1].d == 1)
            (**var_1c8)(var_1c8)
            int32_t temp2_1 = *(var_1c8 + 0xc)
            *(var_1c8 + 0xc) -= 1
            
            if (temp2_1 == 1)
                int64_t r8_1 = *var_1c8
                (*(r8_1 + 8))(var_1c8, 1, r8_1)

if (arg11[1] != 0)
    arg11[1] = 0

__security_check_cookie(rax_1 ^ &var_238)
return arg2
