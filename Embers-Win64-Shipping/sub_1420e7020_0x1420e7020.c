// 函数: sub_1420e7020
// 地址: 0x1420e7020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0xd8) s<= 1)
    sub_140b63b70(arg2, arg1)
    return arg1

uint64_t var_88
sub_140baac10(&var_88, arg2)
int32_t r12 = 1
uint64_t rbx_1 = 0
int32_t var_80
int32_t var_7c
uint64_t var_78
uint64_t var_68

if (sub_140a32a50(&var_88, arg3 + 0xd0, 1) == 0)
    int32_t rdi_1 = *(arg3 + 0xd8)
    int32_t arg_18
    int32_t rax_1
    int32_t rdi_2
    uint64_t r14_1
    uint64_t r15_1
    
    if (rdi_1 s> 1)
        int32_t r14_3
        
        if (var_80 == 0)
            r14_3 = 0
        else
            r14_3 = var_80 - 1
        
        int32_t rax_2
        
        if (rdi_1 == 0)
            rax_2 = 1
        
        if (rdi_1 != 0 || r14_3 == 0)
            rax_2 = 0
        
        int64_t r15_2 = *(arg3 + 0xd0)
        int32_t rcx_4 = rax_2 + r14_3
        var_78 = 0
        int32_t var_6c
        
        if (rdi_1 != 0 || rcx_4 != 0)
            sub_1405a4c70(&var_78, rdi_1 + rcx_4, 0)
            memcpy(var_78, r15_2, rdi_1 * 2)
        else
            var_6c = 0
        
        sub_140a20ba0(&var_78, var_88, r14_3)
        rax_1 = var_6c
        r15_1 = var_78
        rdi_2 = rdi_1
        int32_t var_70_1
        var_70_1.q = 0
        var_78 = 0
        r14_1 = var_88
        arg_18 = rax_1
    else
        rdi_2 = var_80
        r14_1 = var_88
        var_68 = 0
        
        if (rdi_2 != 0)
            sub_1405a4c70(&var_68, rdi_2, 0)
            r15_1 = var_68
            memcpy(r15_1, r14_1, rdi_2 * 2)
            int32_t var_5c
            rax_1 = var_5c
            r14_1 = var_88
            arg_18 = rax_1
        else
            rax_1 = 0
            arg_18 = 0
            r15_1 = 0
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
        rax_1 = arg_18
    
    var_88 = r15_1
    var_80 = rdi_2
    var_7c = rax_1

if (sub_140bacea0(*arg2) == 0)
    int64_t var_48
    int64_t var_38
    int64_t* rax_5 = sub_140baa480(&var_48, sub_140b63b70(arg2, &var_38))
    uint64_t rcx_12 = *rax_5
    int32_t rdx_8 = rax_5[1].d
    int32_t rdx_9 = neg.d(rdx_8)
    *rax_5 = 0
    int32_t r8_5 = rax_5[1].d
    var_78 = rcx_12
    int32_t rcx_13 = *(rax_5 + 0xc)
    int32_t rdx_12 = sbb.d(rdx_9, rdx_9, rdx_8 != 0) + 2 + r8_5
    rax_5[1] = 0
    
    if (rdx_12 s> rcx_13)
        sub_1405947f0(&var_78, rdx_12)
    
    sub_140a20ba0(&var_78, &data_142d5a024, 1)
    uint64_t r15_3 = var_78
    var_78 = 0
    int32_t var_70_2
    var_70_2.q = 0
    int32_t rdi_3
    int32_t r12_1
    uint64_t r14_4
    
    if (r8_5 s> 1)
        int32_t rdi_5
        
        if (var_80 == 0)
            rdi_5 = 0
        else
            rdi_5 = var_80 - 1
        
        if (r8_5 != 0 || rdi_5 == 0)
            r12 = 0
        
        var_68 = r15_3
        int32_t rdx_16 = r8_5 + r12 + rdi_5
        r15_3 = 0
        
        if (rdx_16 s> rcx_13)
            sub_1405947f0(&var_68, rdx_16)
        
        sub_140a20ba0(&var_68, var_88, rdi_5)
        uint64_t rax_7 = var_68
        rdi_3 = r8_5
        r12_1 = rcx_13
        var_68 = 0
        int32_t var_60_2
        var_60_2.q = 0
        rbx_1 = rax_7
        r14_4 = var_88
    else
        rdi_3 = var_80
        r14_4 = var_88
        uint64_t var_58 = 0
        
        if (rdi_3 != 0)
            sub_1405a4c70(&var_58, rdi_3, 0)
            rbx_1 = var_58
            memcpy(rbx_1, r14_4, rdi_3 * 2)
            int32_t var_4c
            r12_1 = var_4c
            r14_4 = var_88
        else
            r12_1 = 0
    
    if (r14_4 != 0)
        sub_140a74f90(r14_4)
    
    var_88 = rbx_1
    var_80 = rdi_3
    var_7c = r12_1
    
    if (r15_3 != 0)
        sub_140a74f90(r15_3)
    
    int64_t rcx_23 = var_48
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    int64_t rcx_24 = var_38
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)

*arg1 = var_88
arg1[1].d = var_80
*(arg1 + 0xc) = var_7c
return arg1
