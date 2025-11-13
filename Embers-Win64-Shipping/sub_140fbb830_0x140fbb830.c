// 函数: sub_140fbb830
// 地址: 0x140fbb830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 1
sub_140596d10(arg1, arg2)

while (true)
    int32_t rbx_1 = 0
    int64_t rdi_2
    
    if (data_143e2b7c8 s> 0)
        int64_t rdi_1 = 0
        int64_t* r14_2
        
        while (true)
            r14_2 = data_143e2b7c0 + rdi_1
            int64_t* rax_1 = *r14_2
            int16_t* rdx
            
            if (arg1[1].d == 0)
                rdx = &data_142d40450
            else
                rdx = *arg1
            
            int16_t* const rcx
            
            if (rax_1[1].d == 0)
                rcx = &data_142d40450
            else
                rcx = *rax_1
            
            if (sub_140a54510(rcx, rdx) == 0)
                break
            
            rbx_1 += 1
            rdi_1 += 0x10
            
            if (rbx_1 s>= data_143e2b7c8)
                return arg1
        
        int64_t* rbx_2 = r14_2[1]
        rdi_2 = *r14_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (data_143e2b7c8 s<= 0 || rdi_2 == 0)
        return arg1
    
    int64_t var_48
    sub_140a2e390(&var_48, u" %d", zx.q(r15))
    int32_t rbx_3 = arg2[1].d
    int32_t var_40
    int32_t rdi_3 = var_40
    int64_t rbx_4
    int32_t rbp_1
    
    if (rbx_3 s> 1)
        int32_t rdi_4
        
        if (rdi_3 == 0)
            rdi_4 = 0
        else
            rdi_4 = rdi_3 - 1
        
        int32_t rax_6
        
        if (rbx_3 == 0)
            rax_6 = rbx_3 + 1
        
        if (rbx_3 != 0 || rdi_4 == 0)
            rax_6 = 0
        
        int64_t rbp_2 = *arg2
        int32_t rcx_4 = rax_6 + rdi_4
        int64_t var_58 = 0
        int32_t var_4c
        
        if (rbx_3 != 0 || rcx_4 != 0)
            sub_1405a4c70(&var_58, rbx_3 + rcx_4, 0)
            memcpy(var_58, rbp_2, rbx_3 * 2)
        else
            var_4c = 0
        
        sub_140a20ba0(&var_58, var_48, rdi_4)
        rbx_4 = var_58
        rdi_3 = rbx_3
        rbp_1 = var_4c
        var_58 = 0
        int32_t var_50_1
        var_50_1.q = 0
    else
        rbx_4 = var_48
        int32_t var_3c
        rbp_1 = var_3c
        var_48 = 0
        var_40.q = 0
    
    void var_38
    
    if (arg1 != &var_38)
        int64_t rcx_8 = *arg1
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *arg1 = rbx_4
        arg1[1].d = rdi_3
        *(arg1 + 0xc) = rbp_1
    else if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
    
    int64_t rcx_10 = var_48
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    r15 += 1
