// 函数: sub_1406da470
// 地址: 0x1406da470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t result = sub_140664c50(arg1 + 0x28, &arg_18)
*arg4 = result.d

if (arg5 != 0)
    int32_t rbx_1 = *(arg1 + 0x10)
    int64_t result_9
    int32_t rax_1 = sub_1406d9ce0(arg1 + 8, sub_140b63b70(&arg_18, &result_9))
    int64_t result_14 = result_9
    arg5.d = rax_1
    
    if (result_14 != 0)
        sub_140a74f90(result_14)
        rax_1 = arg5.d
    
    int32_t r12_1 = 1
    
    if (*(arg1 + 0x10) != rbx_1)
        int64_t rbx_2 = sx.q(*(arg1 + 0x20))
        int32_t rax_3 = (rbx_2 + 1).d
        *(arg1 + 0x20) = rax_3
        
        if (rax_3 s> *(arg1 + 0x24))
            sub_1405a4cf0(arg1 + 0x18)
        
        *(*(arg1 + 0x18) + (rbx_2 << 2)) = 1
    else
        int64_t rcx_3 = sx.q(rax_1)
        int64_t rax_2 = *(arg1 + 0x18)
        *(rax_2 + (rcx_3 << 2)) += 1
    
    int64_t result_7 = 0
    int64_t result_3 = 0
    int64_t var_80_1 = 0
    sub_1405947f0(&result_3, 3)
    int32_t r13_1 = var_80_1:4.d
    int32_t rdi_1 = var_80_1.d + 3
    var_80_1.d = rdi_1
    
    if (rdi_1 s> r13_1)
        sub_140594770(&result_3)
        r13_1 = var_80_1:4.d
        rdi_1 = var_80_1.d
    
    int64_t result_2 = result_3
    int64_t result_1 = result_2
    sub_1405a7220(result_2, 3, "] ", 3, 0x3f)
    int64_t result_6 = 0
    int64_t var_60_1 = 0
    sub_1405947f0(&result_6, 2)
    int32_t r15_1 = var_60_1.d + 2
    var_60_1.d = r15_1
    
    if (r15_1 s> 0)
        sub_140594770(&result_6)
        r15_1 = var_60_1.d
    
    int64_t result_10 = result_6
    int64_t result_13 = result_10
    sub_1405a7220(result_10, 2, U"[", 2, 0x3f)
    int32_t rdx_6 = *(*(arg1 + 0x18) + (sx.q(arg5.d) << 2))
    int64_t result_12 = 0
    int64_t var_70_1 = 0
    sub_140a20c40(&result_12, rdx_6)
    int32_t rax_6
    int32_t r8
    int64_t result_11
    
    if (r15_1 s> 1)
        int32_t rsi_2 = var_70_1.d
        int32_t rsi_3
        
        if (rsi_2 == 0)
            rsi_3 = 0
        else
            rsi_3 = rsi_2 - 1
        
        if (r15_1 != 0 || rsi_3 == 0)
            r12_1 = 0
        
        int64_t result_8 = result_6
        int32_t rdx_8 = r15_1 + r12_1 + rsi_3
        int32_t rax_8 = var_60_1:4.d
        result_13 = 0
        
        if (rdx_8 s> rax_8)
            sub_1405947f0(&result_8, rdx_8)
        
        sub_140a20ba0(&result_8, result_12, rsi_3)
        rax_6 = r15_1
        r8 = rax_8
        result_11 = result_8
        int32_t var_50_1
        var_50_1.q = 0
        result_8 = 0
    else
        result_11 = result_12
        rax_6 = var_70_1.d
        r8 = var_70_1:4.d
        result_12 = 0
        int64_t var_70_2 = 0
    
    int64_t result_5
    
    if (rax_6 s> 1)
        int32_t rdi_2
        
        if (rdi_1 == 0)
            rdi_2 = 0
        else
            rdi_2 = rdi_1 - 1
        
        int32_t rcx_15
        
        if (rax_6 == 0)
            rcx_15 = rax_6 + 1
        
        if (rax_6 != 0 || rdi_2 == 0)
            rcx_15 = 0
        
        result_6 = result_11
        int32_t rdx_11 = rcx_15 + rax_6 + rdi_2
        var_60_1.d = rax_6
        var_60_1:4.d = r8
        result_11 = 0
        
        if (rdx_11 s> r8)
            sub_1405947f0(&result_6, rdx_11)
        
        sub_140a20ba0(&result_6, result_3, rdi_2)
        result_5 = result_6
        rdi_1 = var_60_1.d
        r13_1 = var_60_1:4.d
        result_6 = 0
        int64_t var_60_2 = 0
    else
        result_5 = result_3
        result_1 = 0
    
    int32_t rdi_3
    int32_t r15_3
    
    if (rdi_1 s> 1)
        int32_t rax_9 = arg2[1].d
        int32_t r15_4 = rax_9 - 1
        
        if (rax_9 == 0)
            r15_4 = 0
        
        int32_t rax_10
        
        if (rdi_1 == 0)
            rax_10 = rdi_1 + 1
        
        if (rdi_1 != 0 || r15_4 == 0)
            rax_10 = 0
        
        result_3 = result_5
        int32_t rdx_16 = rax_10 + r15_4 + rdi_1
        var_80_1.d = rdi_1
        var_80_1:4.d = r13_1
        result_5 = 0
        
        if (rdx_16 s> r13_1)
            sub_1405947f0(&result_3, rdx_16)
        
        sub_140a20ba0(&result_3, *arg2, r15_4)
        int64_t result_4 = result_3
        rdi_3 = var_80_1.d
        r15_3 = var_80_1:4.d
        result_3 = 0
        int64_t var_80_2 = 0
        result_7 = result_4
    else
        rdi_3 = arg2[1].d
        int64_t r15_2 = *arg2
        result_9 = 0
        
        if (rdi_3 != 0)
            sub_1405a4c70(&result_9, rdi_3, 0)
            result_7 = result_9
            memcpy(result_7, r15_2, rdi_3 * 2)
            int32_t var_3c
            r15_3 = var_3c
        else
            r15_3 = 0
    
    if (arg2 != &result_9)
        int64_t rcx_22 = *arg2
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        *arg2 = result_7
        arg2[1].d = rdi_3
        *(arg2 + 0xc) = r15_3
    else if (result_7 != 0)
        sub_140a74f90(result_7)
    
    if (result_5 != 0)
        sub_140a74f90(result_5)
    
    if (result_11 != 0)
        sub_140a74f90(result_11)
    
    int64_t result_15 = result_12
    
    if (result_15 != 0)
        sub_140a74f90(result_15)
    
    if (result_13 != 0)
        sub_140a74f90(result_13)
    
    result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)

return result
