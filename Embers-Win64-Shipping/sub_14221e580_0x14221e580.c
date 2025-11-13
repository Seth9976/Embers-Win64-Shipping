// 函数: sub_14221e580
// 地址: 0x14221e580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[0x23].d s> 0)
    int64_t r12_1 = 0
    int32_t rcx = 0
    void* rdx_1 = nullptr
    int32_t arg_10 = 0
    int32_t rsi_1 = 0
    void* arg_20 = nullptr
    int32_t r13_1 = 0
    int32_t rbp_1 = 0
    int64_t var_58 = 0
    int32_t r8_1 = 0
    int32_t var_4c_1 = 0
    void** result_1 = nullptr
    int32_t var_5c_1 = 0
    int32_t rax_10
    
    do
        uint32_t r15_1 = zx.d(*(rdx_1 + arg1[0x1f]))
        int64_t rdi_2 = sx.q(*(arg1 + 0x114) * r15_1) + arg1[0x1e]
        int32_t* r14_2 = sx.q(arg1[6].d) + rdi_2
        int32_t rax_4 = *r14_2 & 0xf0000000
        
        if (rax_4 == 0x40000000 || rax_4 == 0x10000000)
            int32_t rcx_1 = rbp_1 + 1
            int32_t arg_8 = rcx_1
            
            if (rcx_1 s> r8_1)
                sub_1405a4cf0(&result_1)
                arg_8 = rcx_1
            
            *(result_1 + (sx.q(rbp_1) << 2)) = r15_1
            
            while (true)
                int64_t rbp_2 = sx.q(rsi_1)
                rsi_1 = (rbp_2 + 1).d
                
                if (rsi_1 s> r13_1)
                    sub_1405a4cf0(&var_58)
                    r13_1 = var_4c_1
                    r12_1 = var_58
                
                *(r12_1 + (rbp_2 << 2)) = r15_1
                (*(*arg1 + 0x240))(arg1, rdi_2, r14_2, zx.q(r15_1), rcx_1 - 1)
                r15_1 = *r14_2 & 0x3fff
                
                if (r15_1 == 0x3fff)
                    break
                
                rdi_2 = sx.q(*(arg1 + 0x114) * r15_1) + arg1[0x1e]
                r14_2 = sx.q(arg1[6].d) + rdi_2
            
            rbp_1 = arg_8
            rcx = arg_10
            rdx_1 = arg_20
            r8_1 = var_5c_1
        
        rax_10 = arg1[0x23].d
        rcx += 1
        rdx_1 += 2
        arg_10 = rcx
        arg_20 = rdx_1
    while (rcx s< rax_10)
    
    if (rsi_1 != rax_10)
        (*(*arg1 + 0x248))(arg1)
    
    result = result_1
    
    if (result != 0)
        result = sub_140a74f90(result)
    
    if (r12_1 != 0)
        return sub_140a74f90(r12_1)

return result
