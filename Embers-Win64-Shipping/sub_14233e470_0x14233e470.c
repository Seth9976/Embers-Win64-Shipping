// 函数: sub_14233e470
// 地址: 0x14233e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1d1) != 0)
    *arg2 = 1
    __builtin_memset(&arg2[8], 0, 0x34)
    return arg2

int32_t r15 = 1

if (*(arg1 - 0x98) != 0)
    void* r14_1 = arg1 - 0xc8
    void arg_8
    int32_t* rax_3 = (*(*r14_1 + 0x18))(r14_1, &arg_8)
    
    if (*rax_3 != data_143dbb180.d || rax_3[1] != data_143dbb180:4.d)
        int32_t rax_7 = (*(*r14_1 + 0xc0))(r14_1)
        int32_t rax_9 = (*(*r14_1 + 0xc8))(r14_1)
        int64_t* rcx_4 = *(arg1 - 0x98)
        
        if (arg1 == 0xd0)
            r14_1 = nullptr
        
        r15 = (*(*rcx_4 + 0xb0))(rcx_4, r14_1, zx.q(rax_7), zx.q(rax_9))

void* rcx_5 = data_143f5b298

if (rcx_5 == 0)
label_14233e6a4:
    *arg2 = 1
    __builtin_memset(&arg2[8], 0, 0x30)
    *(arg2 + 0x38) = r15
else
    void* rcx_6 = *(rcx_5 + 0x788)
    
    if (rcx_6 == 0 || r15 == 0)
        goto label_14233e6a4
    
    int64_t* rbx_2 = *(rcx_6 + 0xd0)
    int64_t* r14_2 = rbx_2
    
    if (rbx_2 != 0)
        int32_t rax_12 = rbx_2[1].d
        
        if (rax_12 != 0)
            rbx_2[1].d = rax_12 + 1
            rax_12.b = 1
        
        if (rax_12.b == 0)
            rbx_2 = nullptr
            r14_2 = nullptr
    
    if (r14_2 == 0)
        goto label_14233e67d
    
    int64_t* rcx_7 = *(rcx_6 + 0xc8)
    
    if (rcx_7 == 0)
        goto label_14233e67d
    
    char var_68
    (*(*rcx_7 + 0x90))(rcx_7, &var_68, arg3, arg4)
    char rax_14 = var_68
    char* rcx_8 = &var_68
    
    if (rax_14 == 0)
        sub_140ddf250(rcx_8)
    label_14233e67d:
        
        if (rbx_2 == 0)
            goto label_14233e6a4
        
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        goto label_14233e6a4
    
    *arg2 = rax_14
    int64_t var_60
    *(arg2 + 8) = var_60
    int64_t var_58
    *(arg2 + 0x10) = var_58
    int64_t var_50
    *(arg2 + 0x18) = var_50
    int64_t var_48
    *(arg2 + 0x20) = var_48
    int64_t var_40
    *(arg2 + 0x28) = var_40
    int64_t var_38
    *(arg2 + 0x30) = var_38
    int32_t var_30
    *(arg2 + 0x38) = var_30
    int64_t var_60_1
    __builtin_memset(&var_60_1, 0, 0x30)
    sub_140ddf250(rcx_8)
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            (**r14_2)(r14_2)
            int32_t temp3_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*r14_2 + 8))(r14_2, 1)

return arg2
