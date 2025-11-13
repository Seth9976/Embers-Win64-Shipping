// 函数: sub_1420c22e0
// 地址: 0x1420c22e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2[1].d s> 1)
    int32_t i = 0
    
    while (i s>= 0)
        if (i s>= arg2[1].d)
            break
        
        int64_t rax_1 = *arg2
        int64_t r14_1 = 0
        int32_t rdi_1 = 0
        int64_t var_38 = 0
        int32_t rbp_1 = 0
        int64_t var_30_1 = 0
        int16_t rdx = *(rax_1 + (sx.q(i) << 1))
        int16_t arg_8 = rdx
        
        if (rdx != 0)
            sub_1405947f0(&var_38, 2)
            rbp_1 = var_30_1:4.d
            rdi_1 = var_30_1.d + 2
            var_30_1.d = rdi_1
            
            if (rdi_1 s> rbp_1)
                sub_140594770(&var_38)
                rbp_1 = var_30_1:4.d
                rdi_1 = var_30_1.d
            
            r14_1 = var_38
            UnDecorator::getReferenceType(r14_1, &arg_8, 2)
            *(r14_1 + (sx.q(rdi_1) << 1) - 2) = 0
        
        int64_t r15_1 = sx.q(arg1[1].d)
        int32_t rax_3 = (r15_1 + 1).d
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_1405a4f90(arg1)
        
        var_38 = 0
        int64_t* rax_6 = (r15_1 << 4) + *arg1
        int64_t var_30_2 = 0
        i += 1
        *rax_6 = r14_1
        rax_6[1].d = rdi_1
        *(rax_6 + 0xc) = rbp_1
    
    int64_t rdi_2 = sx.q(arg1[1].d)
    int64_t rcx_5 = *((rdi_2 << 4) - 0x10 + *arg1)
    int32_t rax_8 = rdi_2.d
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
        rax_8 = arg1[1].d
    
    int32_t rcx_7 = rax_8 - (rdi_2 - 1).d
    
    if (rcx_7 != 1)
        int64_t rax_9 = *arg1
        memmove((rdi_2 << 4) - 0x10 + rax_9, (rdi_2 << 4) + rax_9, (rcx_7 - 1) << 4)
        rax_8 = arg1[1].d
    
    arg1[1].d = rax_8 - 1
    sub_140638bc0(arg1)

return arg1
