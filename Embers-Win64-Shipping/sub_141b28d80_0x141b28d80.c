// 函数: sub_141b28d80
// 地址: 0x141b28d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0xd8) s<= 1)
    sub_140b63b70(arg2, arg1)
    return arg1

int64_t var_58
int64_t* rax_1 = sub_140baac10(&var_58, arg2)
int32_t rdi = *(arg3 + 0xd8)
int64_t rbx = 0
int64_t var_68
int32_t rdi_1
int32_t r12
int64_t r14

if (rdi s> 1)
    int32_t rax_2 = rax_1[1].d
    int32_t r14_1 = rax_2 - 1
    
    if (rax_2 == 0)
        r14_1 = 0
    
    int32_t rax_3
    
    if (rdi == 0)
        rax_3 = rdi + 1
    
    if (rdi != 0 || r14_1 == 0)
        rax_3 = 0
    
    int64_t r12_1 = *(arg3 + 0xd0)
    int32_t rcx_1 = r14_1 + rax_3
    var_68 = 0
    int32_t var_5c
    
    if (rdi != 0 || rcx_1 != 0)
        sub_1405a4c70(&var_68, rdi + rcx_1, 0)
        memcpy(var_68, r12_1, rdi * 2)
    else
        var_5c = 0
    
    sub_140a20ba0(&var_68, *rax_1, r14_1)
    r14 = var_68
    rdi_1 = rdi
    r12 = var_5c
else
    r14 = *rax_1
    *rax_1 = 0
    rdi_1 = rax_1[1].d
    r12 = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t rcx_5 = var_58

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (sub_140bacea0(*arg2) == 0)
    int64_t var_48
    int64_t var_38
    int64_t* rax_6 = sub_140baa480(&var_48, sub_140b63b70(arg2, &var_38))
    int64_t rcx_9 = *rax_6
    int32_t rdx_5 = rax_6[1].d
    int32_t rdx_6 = neg.d(rdx_5)
    *rax_6 = 0
    int32_t r8_3 = rax_6[1].d
    int64_t var_78 = rcx_9
    int32_t rcx_10 = *(rax_6 + 0xc)
    int32_t rdx_9 = sbb.d(rdx_6, rdx_6, rdx_5 != 0) + 2 + r8_3
    rax_6[1] = 0
    
    if (rdx_9 s> rcx_10)
        sub_1405947f0(&var_78, rdx_9)
    
    int32_t r12_2 = 1
    sub_140a20ba0(&var_78, &data_142d5a024, 1)
    int64_t r13_1 = var_78
    var_78 = 0
    int32_t var_70_1
    var_70_1.q = 0
    
    if (r8_3 s> 1)
        int32_t rsi_2 = rdi_1 - 1
        
        if (rdi_1 == 0)
            rsi_2 = 0
        
        if (r8_3 != 0 || rsi_2 == 0)
            r12_2 = 0
        
        var_68 = r13_1
        int32_t rdx_13 = rsi_2 + r8_3 + r12_2
        r13_1 = 0
        
        if (rdx_13 s> rcx_10)
            sub_1405947f0(&var_68, rdx_13)
        
        sub_140a20ba0(&var_68, r14, rsi_2)
        int64_t rax_8 = var_68
        rdi_1 = r8_3
        r12 = rcx_10
        var_68 = 0
        rbx = rax_8
        int32_t var_60_2
        var_60_2.q = 0
    else
        var_58 = 0
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_58, rdi_1, 0)
            rbx = var_58
            memcpy(rbx, r14, rdi_1 * 2)
            int32_t var_4c
            r12 = var_4c
        else
            r12 = 0
    
    if (r14 != 0)
        sub_140a74f90(r14)
    
    r14 = rbx
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    int64_t rcx_20 = var_48
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    int64_t rcx_21 = var_38
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)

*arg1 = r14
arg1[1].d = rdi_1
*(arg1 + 0xc) = r12
return arg1
