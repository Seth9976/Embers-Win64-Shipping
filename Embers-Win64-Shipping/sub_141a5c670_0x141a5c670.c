// 函数: sub_141a5c670
// 地址: 0x141a5c670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = *(arg1 + 8) | 8
*(arg1 + 8) = rdx_1
int32_t rcx = *(*(arg1 + 0x20) + 8)

if ((rcx.b & 0x30) != 0)
    *(arg1 + 8) = (rcx & 0x69) | rdx_1

sub_141a5c830(arg1)
uint8_t result = (*(arg1 + 8) u>> 4).b

if ((result & 1) == 0 && *(arg1 + 0xd0) == 0)
    void*** rax_2 = j_sub_140a82f30(0x48)
    void*** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = rax_2
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rbx_1 = &data_142d4caa0
        rbx_1[2] = 0
        rbx_1[3] = 0
        rbx_1[7] = 0
        rbx_1[8].d = 0
        *(rbx_1 + 0x44) = 1
    
    if (rbx_1 == -0x10)
    label_141a5c78d:
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
    else
        void* rax_3
        
        if (rbx_1[2] != 0)
            rax_3 = rbx_1[3]
        
        if (rbx_1[2] != 0 && rax_3 != 0 && *(rax_3 + 8) s> 0)
            goto label_141a5c78d
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        rbx_1[2] = &rbx_1[2]
        int64_t* rcx_4 = rbx_1[3]
        
        if (rbx_1 != rcx_4)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_4 = rbx_1[3]
            
            if (rcx_4 != 0)
                int32_t temp7_1 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rcx_4 + 8))(rcx_4, 1)
            
            rbx_1[3] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
            
            goto label_141a5c78d
    
    void var_18
    result = &var_18
    void** rax_8
    void*** rcx_8
    
    if (arg1 + 0xd0 != &var_18)
        *(arg1 + 0xd0) = &rbx_1[2]
        void*** rdi_2 = *(arg1 + 0xd8)
        
        if (rbx_1 == rdi_2)
            goto label_141a5c7d0
        
        *(arg1 + 0xd8) = rbx_1
        
        if (rdi_2 == 0)
            goto label_141a5c7f7
        
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d != 1)
            goto label_141a5c7f7
        
        result = (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 != 1)
            goto label_141a5c7f7
        
        rax_8 = *rdi_2
        rcx_8 = rdi_2
        goto label_141a5c7f4
    
label_141a5c7d0:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d != 1)
            goto label_141a5c7f7
        
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 != 1)
            goto label_141a5c7f7
        
        rax_8 = *rbx_1
        rcx_8 = rbx_1
    label_141a5c7f4:
        result = rax_8[1](rcx_8, 1)
    label_141a5c7f7:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp8_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    return (*rbx_1)[1](rbx_1, 1)

return result
