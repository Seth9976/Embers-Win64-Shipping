// 函数: sub_140dbdb40
// 地址: 0x140dbdb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d962e0(arg1 + 0x18, arg3)
int32_t r10 = arg2[1].d
int32_t r8 = r10 - 1

if (r10 == 0)
    r8 = -1

if (r10 == 0)
    r8 = 0

if (arg4 s<= r8)
    r8 = arg4

int32_t rbx_1 = r10 - 1

if (r10 == 0)
    rbx_1 = -1

if (r10 == 0)
    rbx_1 = 0

int32_t rcx_1 = rbx_1

if (arg5 s<= rbx_1)
    rcx_1 = arg5

int32_t result = rcx_1 - r8

if (rcx_1 s<= r8)
    result = 0

if (result s> 0)
    int32_t rcx_2
    
    if (r8 s>= 0)
        rcx_2 = rbx_1
        
        if (r8 s< rbx_1)
            rcx_2 = r8
    else
        rcx_2 = 0
    
    int64_t rdx_2 = sx.q(result) + sx.q(r8)
    int64_t r9 = sx.q(rcx_2)
    
    if (rdx_2 s< r9)
        rbx_1 = rcx_2
    else if (rdx_2 s< sx.q(rbx_1))
        rbx_1 = rdx_2.d
    
    int16_t* const rax_3
    
    if (r10 == 0)
        rax_3 = &data_142d40450
    else
        rax_3 = *arg2
    
    int16_t* r14_1 = &rax_3[r9]
    int64_t var_28 = 0
    int32_t rbx_2 = rbx_1 - rcx_2
    int64_t var_20_1 = 0
    int64_t rsi_1 = 0
    int32_t rdi_1 = 0
    int32_t rbp_1 = 0
    
    if (r14_1 != 0 && *r14_1 != 0 && rbx_2 s> 0)
        if (rbx_2 + 1 s> 0)
            sub_1405947f0(&var_28, rbx_2 + 1)
            rbp_1 = var_20_1:4.d
            rdi_1 = var_20_1.d
            rsi_1 = var_28
        
        rdi_1 += rbx_2 + 1
        var_20_1.d = rdi_1
        
        if (rdi_1 s> rbp_1)
            sub_140594770(&var_28)
            rbp_1 = var_20_1:4.d
            rdi_1 = var_20_1.d
            rsi_1 = var_28
        
        UnDecorator::getReferenceType(rsi_1, r14_1, rbx_2 * 2)
        *(rsi_1 + (sx.q(rdi_1) << 1) - 2) = 0
    
    result = &var_28
    
    if (arg1 + 0x68 != &var_28)
        int64_t rcx_6 = *(arg1 + 0x68)
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        *(arg1 + 0x68) = rsi_1
        *(arg1 + 0x70) = rdi_1
        *(arg1 + 0x74) = rbp_1
    else if (rsi_1 != 0)
        return sub_140a74f90(rsi_1)

return result
