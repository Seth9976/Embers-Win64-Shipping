// 函数: sub_141a701c0
// 地址: 0x141a701c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141a70370(arg1, arg2, arg3)
int64_t* rsi = rax

if ((rax[5].b & 2) != 0)
    void* rbx_1 = *(arg2 + 0x20)
    uint64_t rbp_1 = 0
    int32_t rdi_1 = 0
    void* r13_1 = rbx_1 + sx.q(*(arg2 + 0x28)) * 0xc
    uint64_t var_48 = 0
    int64_t var_40_1 = 0
    int32_t r14_1 = 0
    
    if (rbx_1 != r13_1)
        do
            int64_t rsi_1 = sx.q(*(rbx_1 + 4))
            
            if (rsi_1.d s<= 0)
                *rbx_1 = 0xffffffff
            else
                int32_t rax_1 = *rbx_1
                *rbx_1 = rdi_1
                int64_t rcx_1 = *(arg2 + 0x30)
                int64_t r15_1 = sx.q(rdi_1)
                rdi_1 = (r15_1 + rsi_1).d
                var_40_1.d = rdi_1
                
                if (rdi_1 s> r14_1)
                    sub_1405c4e40(&var_48)
                    r14_1 = var_40_1:4.d
                    rdi_1 = var_40_1.d
                    rbp_1 = var_48
                
                memcpy((r15_1 << 5) + rbp_1, (sx.q(rax_1) << 5) + rcx_1, (rsi_1 << 5).d)
            
            *(rbx_1 + 8) = *(rbx_1 + 4)
            rbx_1 += 0xc
        while (rbx_1 != r13_1)
        
        if (r14_1 != rdi_1)
            sub_1405a51b0(&var_48, rdi_1)
            r14_1 = var_40_1:4.d
            rdi_1 = var_40_1.d
            rbp_1 = var_48
        
        rsi = rax
    
    if (&arg2[0x30] != &var_48)
        int64_t rcx_7 = *(arg2 + 0x30)
        
        if (rcx_7 != 0)
            arg3 = sub_140a74f90(rcx_7)
        
        *(arg2 + 0x30) = rbp_1
        *(arg2 + 0x38) = rdi_1
        *(arg2 + 0x3c) = r14_1
    else if (rbp_1 != 0)
        arg3 = sub_140a74f90(rbp_1)

(*(*rsi + 0x1d8))(rsi, &data_1439a9488)
return sub_141a70680(sub_1408dc760(rsi, &arg2[0x20], arg3), &arg2[0x30], arg3) __tailcall
