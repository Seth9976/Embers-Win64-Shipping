// 函数: sub_140efc890
// 地址: 0x140efc890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148

if (*(arg1 + 0x538) == 0)
label_140efc9ce:
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rcx = *(arg1 + 0x530)
    
    if (rcx == 0)
        goto label_140efc9ce
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140efc9ce
    
    int64_t rbx_1 = 0
    int64_t* rcx_1
    
    if (*(arg1 + 0x538) == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x530)
    
    void var_d8
    (*(*rcx_1 + 0x48))(rcx_1, &var_d8)
    void* const rcx_2 = *(arg1 + 0x10)
    int32_t var_118 = 0
    int64_t var_110
    __builtin_memset(&var_110, 0, 0x14)
    int64_t var_f8_1 = 0
    int64_t var_f0_1 = 0
    
    if (rcx_2 != 0)
        int32_t rax_5 = *(rcx_2 + 8)
        
        if (rax_5 != 0)
            *(rcx_2 + 8) = rax_5 + 1
            rax_5.b = 1
        
        if (rax_5.b == 0)
            rcx_2 = nullptr
        
        if (rcx_2 != 0)
            rbx_1 = *(arg1 + 8)
    
    void* rax_6 = data_143e20d08
    int64_t var_e8 = rbx_1
    void* const var_e0_1 = rcx_2
    int64_t* rbx_2 = *(rax_6 + 0xb0)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int32_t var_100
    sub_140e1f360(*(rax_6 + 0xa8), &var_e8, 1, &var_100, arg3, &var_118)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_2 = *rbx_2
                (*(r8_2 + 8))(rbx_2, 1, r8_2)
    
    sub_140e51550(arg2, &var_d8)
    sub_140597700(&var_d8)

__security_check_cookie(rax_1 ^ &var_148)
return arg2
