// 函数: sub_140b1a780
// 地址: 0x140b1a780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[1].d
int64_t rcx = *arg2
int32_t rax = r8 - 1

if (r8 == 0)
    rax = 0

void* r8_1 = rcx + (sx.q(rax) << 1)
int32_t r8_2

if (r8_1 == rcx)
label_140b1a7ca:
    r8_2 = -1
else
    while (true)
        int16_t rax_2 = *(r8_1 - 2)
        r8_1 -= 2
        
        if (rax_2 == 0x2f || rax_2 == 0x5c)
            r8_2 = ((r8_1 - rcx) s>> 1).d
            break
        
        if (r8_1 == rcx)
            goto label_140b1a7ca
        
        continue

*arg1 = 0
arg1[1] = 0

if (r8_2 != 0xffffffff)
    int32_t rax_3 = arg2[1].d
    int16_t* r15_1
    
    if (rax_3 == 0)
        r15_1 = &data_142d40450
    else
        r15_1 = *arg2
    
    int32_t rsi_1 = rax_3 - 1
    
    if (rax_3 == 0)
        rsi_1 = 0
    
    if (r8_2 s< 0)
        rsi_1 = 0
    else if (r8_2 s< rsi_1)
        rsi_1 = r8_2
    
    int64_t var_28 = 0
    int64_t rdi_1 = 0
    int64_t var_20_1 = 0
    int32_t rbp_1 = 0
    int32_t r14_1 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && rsi_1 s> 0)
        if (rsi_1 + 1 s> 0)
            sub_1405947f0(&var_28, rsi_1 + 1)
            r14_1 = var_20_1:4.d
            rbp_1 = var_20_1.d
            rdi_1 = var_28
        
        rbp_1 = rbp_1 + 1 + rsi_1
        var_20_1.d = rbp_1
        
        if (rbp_1 s> r14_1)
            sub_140594770(&var_28)
            r14_1 = var_20_1:4.d
            rbp_1 = var_20_1.d
            rdi_1 = var_28
        
        UnDecorator::getReferenceType(rdi_1, r15_1, rsi_1 * 2)
        *(rdi_1 + (sx.q(rbp_1) << 1) - 2) = 0
    
    if (arg1 != &var_28)
        int64_t rcx_4 = *arg1
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        *arg1 = rdi_1
        arg1[1].d = rbp_1
        *(arg1 + 0xc) = r14_1
    else if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

return arg1
