// 函数: sub_140baf760
// 地址: 0x140baf760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r9 = *arg2
int16_t* rax = r9
void* rcx = &r9[sx.q(arg2[1].d)]
int32_t rax_1

if (r9 == rcx)
label_140baf78f:
    rax_1 = -1
else
    while (*rax != 0x2e)
        rax = &rax[1]
        
        if (rax == rcx)
            goto label_140baf78f
    
    rax_1 = ((rax - r9) s>> 1).d

if (rax_1 == 0xffffffff)
    sub_140596d10(arg1, arg2)
    return arg1

*arg1 = 0
arg1[1] = 0

if (rax_1 s>= 0)
    int32_t r9_1 = arg2[1].d
    int32_t rdi_1 = r9_1 - 1
    int64_t r10_1 = sx.q(rax_1)
    
    if (r9_1 == 0)
        rdi_1 = 0
    
    int32_t r8_1 = rdi_1
    
    if (rdi_1 s> 0)
        r8_1 = 0
    
    int64_t r11_1 = sx.q(r8_1)
    
    if (r10_1 s< r11_1)
        rdi_1 = r8_1
    else if (r10_1 s< sx.q(rdi_1))
        rdi_1 = rax_1
    
    int16_t* const rax_3
    
    if (r9_1 == 0)
        rax_3 = &data_142d40450
    else
        rax_3 = *arg2
    
    int16_t* r15_1 = &rax_3[r11_1]
    int64_t var_28 = 0
    int32_t rdi_2 = rdi_1 - r8_1
    int64_t var_20_1 = 0
    int64_t rsi_1 = 0
    int32_t rbp_1 = 0
    int32_t r14_1 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && rdi_2 s> 0)
        if (rdi_2 + 1 s> 0)
            sub_1405947f0(&var_28, rdi_2 + 1)
            r14_1 = var_20_1:4.d
            rbp_1 = var_20_1.d
            rsi_1 = var_28
        
        rbp_1 = rbp_1 + 1 + rdi_2
        var_20_1.d = rbp_1
        
        if (rbp_1 s> r14_1)
            sub_140594770(&var_28)
            r14_1 = var_20_1:4.d
            rbp_1 = var_20_1.d
            rsi_1 = var_28
        
        UnDecorator::getReferenceType(rsi_1, r15_1, rdi_2 * 2)
        *(rsi_1 + (sx.q(rbp_1) << 1) - 2) = 0
    
    if (arg1 != &var_28)
        int64_t rcx_5 = *arg1
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        *arg1 = rsi_1
        arg1[1].d = rbp_1
        *(arg1 + 0xc) = r14_1
    else if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

return arg1
