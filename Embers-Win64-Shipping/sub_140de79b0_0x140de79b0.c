// 函数: sub_140de79b0
// 地址: 0x140de79b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t* result
int64_t* rbx_3

if (*(arg1 + 0x28) s<= 0)
label_140de7a50:
    void*** rax_6 = sub_140dd37c0(arg2)
    sub_140dbbdd0(&rax_6[2])
    int64_t rdi_1 = sx.q(*(arg1 + 0x18))
    int32_t rax_7 = (rdi_1 + 1).d
    *(arg1 + 0x18) = rax_7
    
    if (rax_7 s> *(arg1 + 0x1c))
        sub_1405a4f90(arg1 + 0x10)
    
    void** rcx_7 = (rdi_1 << 4) + *(arg1 + 0x10)
    *rcx_7 = &rax_6[2]
    rcx_7[1] = rax_6
    void*** rbx_2 = rax_6
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = rax_6
    
    result = &rax_6[2]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
    
    rbx_3 = arg2[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            int64_t rdx_2 = *rbx_3
            (*rdx_2)(rbx_3, rdx_2)
        label_140de7b05:
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                int64_t r8_2 = *rbx_3
                (*(r8_2 + 8))(rbx_3, 1, r8_2)
else
    int64_t* r14_1 = nullptr
    int64_t* rbx_1
    
    while (true)
        int64_t rax_1 = *(arg1 + 0x20)
        rbx_1 = *(r14_1 + rax_1 + 8)
        result = *(r14_1 + rax_1)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        void* rax_2
        
        if (*result != 0)
            rax_2 = result[1]
        
        int64_t rax_3
        
        if (*result == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
            rax_3 = 0
        else
            rax_3 = result[2]
        
        if (rax_3 == *arg2)
            break
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi += 1
        r14_1 = &r14_1[2]
        
        if (rsi s>= *(arg1 + 0x28))
            goto label_140de7a50
    
    int64_t r14_2 = sx.q(*(arg1 + 0x18))
    int32_t rax_13 = (r14_2 + 1).d
    *(arg1 + 0x18) = rax_13
    
    if (rax_13 s> *(arg1 + 0x1c))
        sub_1405a4f90(arg1 + 0x10)
    
    int64_t** rax_16 = (r14_2 << 4) + *(arg1 + 0x10)
    *rax_16 = result
    rax_16[1] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140911e80(arg1 + 0x20, rsi, 1, 1)
    sub_140dbbdd0(result)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp8_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rbx_3 = arg2[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            goto label_140de7b05
return result
