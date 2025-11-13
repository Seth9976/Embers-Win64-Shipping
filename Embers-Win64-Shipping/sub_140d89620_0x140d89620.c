// 函数: sub_140d89620
// 地址: 0x140d89620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)
int64_t* rax_1 = (*(*rcx + 0xb0))(rcx)
int64_t r8 = *rax_1
int64_t* rax_2 = (*r8)(rax_1, arg3, r8)
int64_t rdx = sx.q(*(arg1 + 0x30))
int64_t rax_3 = sx.q(*(arg1 + 0x34))
*arg2 = 0
arg2[1] = 0

if (rax_3.d s>= 0)
    int32_t r8_1 = rax_2[1].d
    int32_t rbx_1 = r8_1 - 1
    
    if (r8_1 == 0)
        rbx_1 = 0
    
    int32_t rcx_2
    
    if (rdx.d s>= 0)
        rcx_2 = rbx_1
        
        if (rdx.d s< rbx_1)
            rcx_2 = rdx.d
    else
        rcx_2 = 0
    
    int64_t r10_1 = sx.q(rcx_2)
    int64_t rdx_1 = rdx + rax_3
    
    if (rdx_1 s< r10_1)
        rbx_1 = rcx_2
    else if (rdx_1 s< sx.q(rbx_1))
        rbx_1 = rdx_1.d
    
    int16_t* const rax_5
    
    if (r8_1 == 0)
        rax_5 = &data_142d40450
    else
        rax_5 = *rax_2
    
    int16_t* r15_1 = &rax_5[r10_1]
    int64_t var_28 = 0
    int32_t rbx_2 = rbx_1 - rcx_2
    int64_t var_20_1 = 0
    int64_t rsi_1 = 0
    int32_t rbp_1 = 0
    int32_t r14_1 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && rbx_2 s> 0)
        if (rbx_2 + 1 s> 0)
            sub_1405947f0(&var_28, rbx_2 + 1)
            r14_1 = var_20_1:4.d
            rbp_1 = var_20_1.d
            rsi_1 = var_28
        
        rbp_1 = rbp_1 + 1 + rbx_2
        var_20_1.d = rbp_1
        
        if (rbp_1 s> r14_1)
            sub_140594770(&var_28)
            r14_1 = var_20_1:4.d
            rbp_1 = var_20_1.d
            rsi_1 = var_28
        
        UnDecorator::getReferenceType(rsi_1, r15_1, rbx_2 * 2)
        *(rsi_1 + (sx.q(rbp_1) << 1) - 2) = 0
    
    if (arg2 != &var_28)
        int64_t rcx_6 = *arg2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *arg2 = rsi_1
        arg2[1].d = rbp_1
        *(arg2 + 0xc) = r14_1
    else if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

return arg2
