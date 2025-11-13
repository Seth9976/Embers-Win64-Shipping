// 函数: sub_1417ff7a0
// 地址: 0x1417ff7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x14] == 0)
    return 

int64_t var_68
__builtin_memset(&var_68, 0, 0x20)
int64_t var_5c

while (true)
    void* r14_1 = arg1[0x14]
    void* rsi_1 = **(r14_1 + 0x88)
    
    if (rsi_1 == 0)
        break
    
    if (&var_68 != rsi_1 + 8)
        int64_t rcx = var_68
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        var_68 = *(rsi_1 + 8)
        *(rsi_1 + 8) = 0
        int32_t var_60_1 = *(rsi_1 + 0x10)
        var_5c.d = *(rsi_1 + 0x14)
        *(rsi_1 + 0x10) = 0
    
    int64_t var_54_1
    
    if (&var_5c:4 != rsi_1 + 0x18)
        int64_t rcx_1 = var_5c
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        var_5c = *(rsi_1 + 0x18)
        *(rsi_1 + 0x18) = 0
        var_54_1:4.d = *(rsi_1 + 0x20)
        int32_t var_4c_1 = *(rsi_1 + 0x24)
        *(rsi_1 + 0x20) = 0
    
    void* rdi_2 = *(r14_1 + 0x88)
    int64_t var_3c = 0
    *(r14_1 + 0x88) = rsi_1
    void var_48
    
    if (rsi_1 + 8 != &var_48)
        int64_t rcx_2 = *(rsi_1 + 8)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int32_t rax_7 = var_3c.d
        *(rsi_1 + 8) = 0
        *(rsi_1 + 0x10) = 0
        *(rsi_1 + 0x14) = rax_7
    
    if (rsi_1 + 0x18 != &var_3c:4)
        int64_t rcx_3 = *(rsi_1 + 0x18)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *(rsi_1 + 0x18) = 0
        *(rsi_1 + 0x20) = 0
    
    if (rdi_2 != 0)
        int64_t rcx_4 = *(rdi_2 + 0x18)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rdi_2 + 8)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        j_sub_140a74f90(rdi_2)
    
    void* rbx_3 = arg1[0x14]
    int64_t var_88 = 0
    int64_t var_80_1 = 0
    int32_t arg_8
    sub_14062d6e0(rbx_3 + 0x28, &arg_8, &var_68)
    int64_t rax_8 = sx.q(arg_8)
    void* const rcx_8
    
    if (rax_8.d == 0xffffffff)
        rcx_8 = nullptr
    else
        rcx_8 = *(rbx_3 + 0x28) + rax_8 * 0x28
    
    int64_t* rbx_4 = rcx_8 + 0x10
    
    if (rcx_8 == 0)
        rbx_4 = nullptr
    
    if (rbx_4 != 0 && rbx_4[1].d s> 1)
        if (&var_88 != rbx_4)
            int64_t rcx_9 = var_88
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            var_88 = *rbx_4
            *rbx_4 = 0
            var_80_1.d = rbx_4[1].d
            var_80_1:4.d = *(rbx_4 + 0xc)
            rbx_4[1] = 0
        
        int32_t rax_13 = var_80_1.d
        int32_t rcx_10 = rax_13 - 1
        
        if (rax_13 == 0)
            rcx_10 = 0
        
        int32_t rax_14 = var_54_1:4.d
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0
        else
            rax_15 = rax_14 - 1
        
        int32_t rdx_5 = rcx_10 + 3 + rax_15
        
        if (rdx_5 s> var_80_1:4.d)
            sub_1405947f0(&var_88, rdx_5)
        
        sub_140a20ba0(&var_88, &data_142d8adc4, 2)
    
    int32_t rax_16 = var_54_1:4.d
    int32_t r8_2 = rax_16 - 1
    
    if (rax_16 == 0)
        r8_2 = 0
    
    sub_140a20ba0(&var_88, var_5c, r8_2)
    sub_140917df0(arg1[0x14] + 0x28, &var_68, &var_88)
    int64_t* rbx_5 = arg1[2]
    int64_t rsi_2 = 0
    
    if (rbx_5 != 0)
        int32_t rax_17 = rbx_5[1].d
        
        if (rax_17 == 0)
            rbx_5 = nullptr
        else
            rbx_5[1].d = rax_17 + 1
            
            if (rbx_5 != 0)
                rsi_2 = arg1[1]
                rbx_5[1].d = rax_17 + 1
                
                if (rax_17 == 0xffffffff)
                    (**rbx_5)(rbx_5)
                    int32_t temp1_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
                
                rbx_5[1].d += 1
    
    int64_t* rax_22 = (*(*arg1 + 0xa8))(arg1)
    void* rdi_4
    
    if (rax_22[1].d == 0)
    label_1417ffabf:
        
        if (rbx_5 != 0)
            rdi_4 = &rbx_5[1]
        label_1417ffac8:
            int32_t temp0_1 = *rdi_4
            *rdi_4 -= 1
            
            if (temp0_1 == 1)
                (**rbx_5)(rbx_5)
                int32_t temp3_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
            
            int32_t temp2_1 = *rdi_4
            *rdi_4 -= 1
            
            if (temp2_1 == 1)
                (**rbx_5)(rbx_5)
                int32_t temp4_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    else
        int64_t* rcx_19 = *rax_22
        
        if (rcx_19 == 0)
            goto label_1417ffabf
        
        int64_t rdx_8 = *rcx_19
        
        if ((*(rdx_8 + 0x28))(rcx_19, rdx_8) == 0)
            goto label_1417ffabf
        
        int64_t* rcx_20
        
        if (rax_22[1].d == 0)
            rcx_20 = nullptr
        else
            rcx_20 = *rax_22
        
        int64_t var_78 = rsi_2
        rdi_4 = &rbx_5[1]
        int64_t* var_70_1 = rbx_5
        
        if (rbx_5 != 0)
            *rdi_4 += 1
        
        (*(*rcx_20 + 0x50))(rcx_20, &var_78, &var_68, &var_5c:4)
        
        if (rbx_5 != 0)
            goto label_1417ffac8
    int64_t rcx_25 = var_88
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

int64_t rcx_26 = var_5c

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = var_68

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)
