// 函数: sub_140b19c30
// 地址: 0x140b19c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
sub_140b18970(&var_28, arg2)
int32_t rax = sub_140a23cf0(&var_28, &data_142d404c4, 0, 1, 0xffffffff)
*arg1 = 0
arg1[1] = 0

if (rax != 0xffffffff)
    int32_t rcx_4 = (zx.d(arg3) ^ 1) + rax
    int32_t var_20
    int32_t rdi_1 = var_20 - 1
    
    if (var_20 == 0)
        rdi_1 = 0
    
    int32_t rdx
    
    if (rcx_4 s>= 0)
        rdx = rdi_1
        
        if (rcx_4 s< rdi_1)
            rdx = rcx_4
    else
        rdx = 0
    
    int64_t r10_1 = sx.q(rdx)
    
    if (sx.q(rcx_4) + 0x7fffffff s< r10_1)
        rdi_1 = rdx
    else if (sx.q(rcx_4) + 0x7fffffff s< sx.q(rdi_1))
        rdi_1 = rcx_4 + 0x7fffffff
    
    int64_t var_38 = 0
    int16_t* const rax_2 = &data_142d40450
    int64_t var_30_1 = 0
    
    if (var_20 != 0)
        rax_2 = var_28
    
    int64_t rsi_1 = 0
    int32_t rdi_2 = rdi_1 - rdx
    int32_t rbp_1 = 0
    int32_t r14_1 = 0
    void* r15_1 = &rax_2[r10_1]
    
    if (r15_1 != 0 && *r15_1 != 0 && rdi_2 s> 0)
        if (rdi_2 + 1 s> 0)
            sub_1405947f0(&var_38, rdi_2 + 1)
            r14_1 = var_30_1:4.d
            rbp_1 = var_30_1.d
            rsi_1 = var_38
        
        rbp_1 = rbp_1 + 1 + rdi_2
        var_30_1.d = rbp_1
        
        if (rbp_1 s> r14_1)
            sub_140594770(&var_38)
            r14_1 = var_30_1:4.d
            rbp_1 = var_30_1.d
            rsi_1 = var_38
        
        UnDecorator::getReferenceType(rsi_1, r15_1, rdi_2 * 2)
        *(rsi_1 + (sx.q(rbp_1) << 1) - 2) = 0
    
    if (arg1 != &var_38)
        int64_t rcx_8 = *arg1
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *arg1 = rsi_1
        arg1[1].d = rbp_1
        *(arg1 + 0xc) = r14_1
    else if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

int16_t* rcx_10 = var_28

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return arg1
