// 函数: sub_140937030
// 地址: 0x140937030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
void*** rbx_2
void** const rdi_4
void*** r14_2
int64_t arg_10

if (arg3 == 0)
    void*** rax_6 = j_sub_140a82f30(0x40)
    void*** rdi_2 = rax_6
    
    if (rax_6 == 0)
        rdi_2 = nullptr
    else
        void*** rax_7 = j_sub_140a82f30(0xa8)
        void*** r14_3 = rax_7
        
        if (rax_7 == 0)
            r14_3 = nullptr
        else
            arg_10 = 0
            memset(rax_7, 0, 0x90)
            sub_140b4c2a0(r14_3)
            r14_3[0x12] = 0
            *r14_3 = &data_142d6ad48
            r14_3[0x13] = &rdi_2[5]
            r14_3[0x14] = 0
            sub_140b552b0(r14_3, 1)
            (*r14_3)[0x1b](r14_3, 0)
        
        rdi_2[1] = r14_3
        __builtin_memset(&rdi_2[2], 0, 0x18)
        *rdi_2 = &data_142d84f30
        rdi_2[5] = 0
        rdi_2[6] = 0
        rdi_2[7] = arg2
    
    void*** rax_9 = j_sub_140a82f30(0x18)
    
    if (rax_9 == 0)
        rax_9 = nullptr
    else
        rax_9[1].d = 1
        *rax_9 = &data_142d83c20
        *(rax_9 + 0xc) = 1
        rax_9[2] = rdi_2
    
    rbx_2 = rax_9
    r14_2 = rdi_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        
        if (rax_9 != 0)
            rax_9[1].d -= 1
            
            if (rax_9[1].d == 1)
                (**rax_9)(rax_9)
                int32_t temp2_1 = *(rax_9 + 0xc)
                *(rax_9 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rax_9)[1](rax_9, 1)
        
        rbx_2[1].d += 1
    
    rdi_4 = &data_142e1f6a0
else
    void*** rax = j_sub_140a82f30(0x40)
    void*** rdi = rax
    
    if (rax == 0)
        rdi = nullptr
    else
        void*** rax_1 = j_sub_140a82f30(0xa8)
        void*** r14_1 = rax_1
        
        if (rax_1 == 0)
            r14_1 = nullptr
        else
            arg_10 = 0
            memset(rax_1, 0, 0x90)
            sub_140b4c2a0(r14_1)
            r14_1[0x12] = 0
            *r14_1 = &data_142d6ad48
            r14_1[0x13] = &rdi[5]
            r14_1[0x14] = 0
            sub_140b552b0(r14_1, 1)
            (*r14_1)[0x1b](r14_1, 0)
        
        rdi[1] = r14_1
        __builtin_memset(&rdi[2], 0, 0x18)
        *rdi = &data_142d84f30
        rdi[5] = 0
        rdi[6] = 0
        rdi[7] = arg2
    
    void*** rax_3 = j_sub_140a82f30(0x18)
    
    if (rax_3 == 0)
        rax_3 = nullptr
    else
        rax_3[1].d = 1
        *rax_3 = &data_142d83c20
        *(rax_3 + 0xc) = 1
        rax_3[2] = rdi
    
    rbx_2 = rax_3
    r14_2 = rdi
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        
        if (rax_3 != 0)
            rax_3[1].d -= 1
            
            if (rax_3[1].d == 1)
                (**rax_3)(rax_3)
                int32_t temp3_1 = *(rax_3 + 0xc)
                *(rax_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rax_3)[1](rax_3, 1)
        
        rbx_2[1].d += 1
    
    rdi_4 = &data_142e1f5b0
void*** var_40 = r14_2
void** const var_48 = rdi_4

if (rbx_2 != 0)
    int32_t rax_12 = rbx_2[1].d
    rbx_2[1].d = rax_12
    
    if (rax_12 == 0)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*rbx_2)[1](rbx_2, 1)

(*(*arg1 + 0x38))(arg1, &var_48, 0)
(*r14_2)[1](r14_2)
var_48 = rdi_4

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rbx_2)[1](rbx_2, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp8_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rbx_2)[1](rbx_2, 1)

return arg2
