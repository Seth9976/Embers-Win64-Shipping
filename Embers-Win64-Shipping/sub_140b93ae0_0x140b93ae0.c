// 函数: sub_140b93ae0
// 地址: 0x140b93ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r9 = *arg2
int16_t* r8 = r9
void* rcx = &r9[sx.q(arg2[1].d)]
int32_t r8_2

if (r9 != rcx)
    while (*r8 != 0x3a)
        r8 = &r8[1]
        
        if (r8 == rcx)
            goto label_140b93b25
    
    r8_2 = ((r8 - r9) s>> 1).d

int32_t rcx_2
int32_t rdi_1
int64_t r8_3
int32_t r9_1

if (r9 != rcx && r8_2 != 0xffffffff)
    *arg1 = 0
    arg1[1] = 0
    r9_1 = arg2[1].d
    rdi_1 = r9_1 - 1
    
    if (r9_1 == 0)
        rdi_1 = 0
    
    if (r8_2 + 1 s>= 0)
        r8_3 = sx.q(r8_2 + 1)
        rcx_2 = rdi_1
        
        if (r8_2 + 1 s< rdi_1)
            rcx_2 = r8_2 + 1
    else
        rcx_2 = 0
        r8_3 = sx.q(r8_2 + 1)
    
    goto label_140b93be6

label_140b93b25:
int16_t* rax_1 = r9
int32_t rax_5

if (r9 != rcx)
    while (*rax_1 != 0x2e)
        rax_1 = &rax_1[1]
        
        if (rax_1 == rcx)
            goto label_140b93b42
    
    rax_5 = ((rax_1 - r9) s>> 1).d

if (r9 == rcx || rax_5 == 0xffffffff)
label_140b93b42:
    sub_140596d10(arg1, arg2)
else
    *arg1 = 0
    arg1[1] = 0
    r9_1 = arg2[1].d
    rdi_1 = r9_1 - 1
    
    if (r9_1 == 0)
        rdi_1 = 0
    
    if (rax_5 + 1 s>= 0)
        rcx_2 = rdi_1
        
        if (rax_5 + 1 s< rdi_1)
            rcx_2 = rax_5 + 1
    else
        rcx_2 = 0
    
    r8_3 = sx.q(rax_5 + 1)
label_140b93be6:
    int64_t r10_1 = sx.q(rcx_2)
    
    if (r8_3 + 0x7fffffff s< r10_1)
        rdi_1 = rcx_2
    else if (r8_3 + 0x7fffffff s< sx.q(rdi_1))
        rdi_1 = (r8_3 + 0x7fffffff).d
    
    int16_t* const rax_7
    
    if (r9_1 == 0)
        rax_7 = &data_142d40450
    else
        rax_7 = *arg2
    
    int32_t rdi_2 = rdi_1 - rcx_2
    int64_t var_30_1 = 0
    int16_t* r13_1 = &rax_7[r10_1]
    int64_t var_38 = 0
    int32_t r12_1 = 0
    int32_t r14_1 = 0
    int64_t rsi_1 = 0
    
    if (r13_1 != 0 && *r13_1 != 0 && rdi_2 s> 0)
        if (rdi_2 + 1 s> 0)
            sub_1405947f0(&var_38, rdi_2 + 1)
            r12_1 = var_30_1:4.d
            rsi_1 = var_38
            r14_1 = var_30_1.d
        
        r14_1 = r14_1 + 1 + rdi_2
        var_30_1.d = r14_1
        
        if (r14_1 s> r12_1)
            sub_140594770(&var_38)
            r12_1 = var_30_1:4.d
            rsi_1 = var_38
            r14_1 = var_30_1.d
        
        UnDecorator::getReferenceType(rsi_1, r13_1, rdi_2 * 2)
        *(rsi_1 + (sx.q(r14_1) << 1) - 2) = 0
    
    if (arg1 != &var_38)
        int64_t rcx_6 = *arg1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *arg1 = rsi_1
        *(arg1 + 0xc) = r12_1
        arg1[1].d = r14_1
    else if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

return arg1
