// 函数: sub_1426b3350
// 地址: 0x1426b3350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x10)
uint8_t rdx_1 = (*(rax + 0xcc) u>> 0x12).b
int64_t arg_10 = *(rax + 0x18)
int64_t* rcx_1 = &arg_10
int32_t rax_8
int32_t rcx_2

if ((rdx_1 & 1) == 0)
    int64_t var_28
    sub_140b63b70(rcx_1, &var_28)
    int32_t rax_9 = sub_140a23cf0(&var_28, &data_142d99650, 0, 0, 0xffffffff)
    int32_t var_20
    rcx_2 = var_20
    
    if (rax_9 != 0xffffffff)
        int32_t rdx_5 = 0x7fffffff
        
        if (sx.q(rax_9 + 1) + 0x7fffffff s<= 0x7fffffff)
            rdx_5 = rax_9 - -0x80000000
        
        int32_t rbx_3 = 0
        int32_t rax_12 = rcx_2 - 1
        
        if (rcx_2 == 0)
            rax_12 = 0
        
        int32_t r10_2
        
        if (rdx_5 s>= 0)
            r10_2 = rax_12
            
            if (rdx_5 s< rax_12)
                r10_2 = rdx_5
        else
            r10_2 = 0
        
        int32_t rax_13 = rax_12 - r10_2
        int32_t rdi_1 = rcx_2 - 1
        
        if (rcx_2 == 0)
            rdi_1 = 0
        
        int32_t rdi_2 = rdi_1 - r10_2
        
        if (rax_13 s>= 0)
            if (rax_13 s< rdi_2)
                rdi_2 = rax_13
            
            if (rdi_2 != 0)
                int32_t rax_15 = rcx_2 - rdi_2
                
                if (rax_15 != r10_2)
                    int64_t r9_2 = var_28
                    memmove(r9_2 + (sx.q(r10_2) << 1), r9_2 + (sx.q(rdi_2 + r10_2) << 1), 
                        (rax_15 - r10_2) * 2)
                    rcx_2 = var_20
                
                rcx_2 -= rdi_2
                var_20 = rcx_2
        
        if (rcx_2 != 0)
            rbx_3 = rcx_2 - 1
        
        if (rax_9 + 1 s>= 0)
            if (rax_9 + 1 s< rbx_3)
                rbx_3 = rax_9 + 1
            
            if (rbx_3 != 0)
                if (rcx_2 != rbx_3)
                    int64_t rcx_8 = var_28
                    memmove(rcx_8, rcx_8 + (sx.q(rbx_3) << 1), (rcx_2 - rbx_3) * 2)
                    rcx_2 = var_20
                
                rcx_2 -= rbx_3
    
    *arg1 = var_28
    int32_t var_1c
    rax_8 = var_1c
else
    int64_t var_18
    sub_140b63b70(rcx_1, &var_18)
    int32_t var_10
    rcx_2 = var_10
    int32_t rbx_1 = 0
    int32_t r10_1 = rcx_2 - 1
    
    if (rcx_2 == 0)
        r10_1 = 0
    
    if (r10_1 - 2 s< 0)
        r10_1 = 0
    else if (r10_1 - 2 s< r10_1)
        r10_1 -= 2
    
    if (rcx_2 != 0)
        rbx_1 = rcx_2 - 1
    
    int32_t rbx_2 = rbx_1 - r10_1
    
    if (rbx_2 s> 2)
        rbx_2 = 2
    
    if (rbx_2 != 0)
        int32_t rax_3 = rcx_2 - rbx_2
        
        if (rax_3 != r10_1)
            int64_t r9_1 = var_18
            memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rbx_2 + r10_1) << 1), 
                (rax_3 - r10_1) * 2)
            rcx_2 = var_10
        
        rcx_2 -= rbx_2
    
    *arg1 = var_18
    int32_t var_c
    rax_8 = var_c

*(arg1 + 0xc) = rax_8
arg1[1].d = rcx_2
return arg1
