// 函数: sub_141e75650
// 地址: 0x141e75650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t* result = __security_cookie ^ &var_98
int64_t* result_1 = result
void** rbx = arg1

if (data_143f39be1 == 0)
    int64_t* rcx_10 = *arg1
    *rbx = nullptr
    
    if (rcx_10 != 0)
        rcx_10[9].d -= 1
        
        if (rcx_10[9].d == 1)
            result = sub_140a2f6e0(rcx_10)
else
    void var_58
    int64_t* rax_2 = sub_140a22cb0(&var_58, sub_141e7c800(&data_143a2d4e8), 2)
    *(*rax_2 + 0x10) = 1
    void* rcx_2 = *rax_2
    int32_t r8_1 = rax_2[2].d
    int64_t* rdx_2 = rax_2[1]
    int64_t* rsi_1 = *(rcx_2 + 0x18)
    int64_t* var_60 = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[9].d += 1
    
    sub_1408c3b70(rcx_2, rdx_2, r8_1, 1)
    
    if (rbx != &var_60)
        int64_t* rcx_3 = *rbx
        *rbx = rsi_1
        
        if (rcx_3 != 0)
            rcx_3[9].d -= 1
            
            if (rcx_3[9].d == 1)
                sub_140a2f6e0(rcx_3)
    else if (rsi_1 != 0)
        rsi_1[9].d -= 1
        
        if (rsi_1[9].d == 1)
            sub_140a2f6e0(var_60)
    
    int64_t* rcx_5 = rbx[1]
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x20))(rcx_5, 0xffffffff, 0)
        sub_140a4fc50(rbx[1])
        rbx[1] = 0
    
    rcx_5.b = 1
    void*** rax_6 = sub_140a491d0(rcx_5.b)
    rbx[1] = rax_6
    int64_t* rax_7 = sub_140a242a0()
    void* rcx_6 = *rbx
    void** var_20_1 = nullptr
    int32_t var_14_1 = 4
    int32_t i_2 = 1
    void* var_40 = rcx_6
    
    if (rcx_6 != 0)
        *(rcx_6 + 0x48) += 1
    
    result = (*(*rax_7 + 0x50))(rax_7, rax_6, &var_40, 2, 1)
    void** rcx_8 = var_20_1
    void** rbx_1 = &var_40
    int32_t i_1 = i_2
    
    if (rcx_8 != 0)
        rbx_1 = rcx_8
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rcx_9 = *rbx_1
            
            if (rcx_9 != 0)
                result = zx.q(rcx_9[9].d)
                rcx_9[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_9)
            
            rbx_1 = &rbx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_8 = var_20_1
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)
    
    if (data_143f39be1 != 0)
        result = sub_141e7b230(&data_143a2d4e8)

__security_check_cookie(result_1 ^ &var_98)
return result
