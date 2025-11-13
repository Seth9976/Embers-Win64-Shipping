// 函数: sub_140f05080
// 地址: 0x140f05080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x50) == 0)
label_140f05234:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
else
    int64_t* rdi_1 = *(arg1 - 0x48)
    
    if (rdi_1 == 0)
        goto label_140f05234
    
    int32_t rax_1 = rdi_1[1].d
    
    if (rax_1 s<= 0)
        goto label_140f05234
    
    void* r8_1 = nullptr
    
    if (rdi_1 == 0)
        goto label_140f050d7
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rax_1 += 1
        rdi_1[1].d = rax_1
    label_140f050d7:
        
        if (rdi_1 != 0)
            r8_1 = *(arg1 - 0x50)
        
        if (rdi_1 != 0)
            rdi_1[1].d = rax_1 + 1
    
    int32_t zmm0 = sub_140f488d0(r8_1, arg3)
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    int32_t arg_8 = zmm0
    int64_t arg_18 = 0
    void** const var_c8
    memset(&var_c8, 0, 0x90)
    sub_140b4c2a0(&var_c8)
    int64_t var_38_1 = 0
    var_c8 = &data_142d6ad48
    int64_t* var_30_1 = &arg2[2]
    int64_t var_28_1 = 0
    sub_140b552b0(&var_c8, 1)
    int64_t rdx_2
    rdx_2.b = 1
    var_c8[0x1b](&var_c8, rdx_2)
    int64_t* var_c0
    int32_t* rdx_3 = *var_c0
    
    if (&rdx_3[1] u> var_c0[1])
        int32_t* rdx_4 = &arg_8
        void** const* rcx_6 = &var_c8
        char var_9f
        
        if ((var_9f & 0x20) != 0)
            sub_140b54070(rcx_6, rdx_4, arg4)
        else
            var_c8[0x2a](rcx_6, rdx_4, 4)
    else
        arg_8 = *rdx_3
        *var_c0 += 4
    
    *arg2 = 0xa
    sub_140b4cb40(&var_c8)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

return arg2
